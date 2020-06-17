# Data & Control Broadcast Example: Large Buffer

## Problem

In this example, we use a design that cannot be simpler to show the timing degradation from both data and control broadcasts. The design consists merely of a large buffer, which is first sequentially written to and then read from.
```c++
void kernel(hls::stream<data_t>& in_port, hls::stream<data_t>& out_port)
{
  static data_t super_buffer[SIZE];
#pragma HLS resource variable=super_buffer core=RAM_1P_BRAM

  for (long long i = 0; i < SIZE; i++) {
    #pragma HLS pipeline II=1
    in_port.read(super_buffer[i]);
  }
    
  for (long long i = 0; i < SIZE; i++) {
    #pragma HLS pipeline II=1
    out_port.write(super_buffer[i]);
  }
}
```

The problem arise from the ```hls::stream```, which will be compiled into a FIFO. Currently the Vivado HLS adopts the ***stall-based flow control*** mechanism such that when the upstream FIFO is empty or the downstream FIFO is full, the whole pipeline will be stalled altogether. However, this approach is not scalable for large designs, as it requires to broadcast a ```stall``` signal to every element of the pipeline.

In this seemingly trivial example, the both the data and the control signals will be broadcast to every BRAM element of the large buffer. Although logically the buffer is an individual entity, physically it consists of large number of BRAM units scattered across the chip. As a result, the data signals and the control signals (e.g. the ```stall```) will be broadcast. 

Specifically, the ```stall``` signal in the generated RTL is named ```ap_block_pp0_stage0_11001``` and ```ap_block_pp1_stage0_11001``` since we have two pipeline loops. These signals will be connected to the ```ce``` (chip enable) signal of the buffer module.

## Solution

For this example we need to address both the data and the control broadcast.

### Solving Data Broadcast
It is relatively easier to fix the data broadcast. First, we can rely on the ```HLS_REG()``` template to force pipelining between the source and the destination.

```c++
template<class T>
T HLS_REG(T in){
#pragma HLS pipeline
#pragma HLS inline off
#pragma HLS interface port=return register
    return in;
}

......

in_port.read(temp)
super_buffer[i] = HLS_REG(temp);

......

in_port.write( HLS_REG(super_buffer[i]) );
```

Another method is to use HLS pragmas to specify additional latency when defining the buffer.

```c++
#pragma HLS resource variable=super_buffer core=RAM_1P_BRAM latency=2
```

Note that both methods rely on the prerequisite that the buffer should be accessed in a pipelined environment, otherwise the throughput of the design will be affected by the additional latency.


### Solving Control Broadcast

Addressing data broadcast along still will not fix all the critical paths. The difficulty lies in solving the control broadcast. Compared to data broadcast, control broadcast is basically impossible to hack through the source code, and we need to directly operate on the generated Verilog files. Obviously this is only a make-do approach. The good news is that Xilinx is now aware of this problem and we are cooperating with them to improve the micro-architecture of their flow-control mechanism.
Before Xilinx update their tools, expert users still can fix the issue through the following approach. 

Specifically, we need to adapt the current ***stall-based flow control*** approach of Vivado HLS to the ***skid-buffer-based flow control***, which is discussed in detail in our paper. We also provide a script tool called ```auto-skid``` to automatically perform the following steps.

1. Make sure the design only use ```non-blocking read```. Although the skid-buffer approach does not require this limitation, such coding style will make it easier to hack the RTL. An example is:
```c++
for (long long i = 0; i < SIZE; ) {
  #pragma HLS pipeline II=1
  if (!in_port.empty()) {
    in_port.read(super_buffer[i]);
    i++;
  }
}
```

2. Replace all ```blocking write``` by ```non-blocking write``` and run HLS to regenerate the RTL. Don't worry about the correctness, we will fix that later by hacking the RTL.

3. There is an ```enable``` signal for every stage of the pipeline. The following example shows the enable signal (```ap_enable_reg```) for the first stage (```iter0```) of the first pipeline (```pp0```). During normal execution, this signal will be passed to the enable for the second stage of the pipeline (```ap_enable_reg_pp0_iter1```)

```Verilog
// "enable" for the first stage of pipeline-0
always @ (posedge ap_clk) begin
  if (ap_rst) begin
    ap_enable_reg_pp0_iter0 <= 1'b0;
  end else begin
    if (...)
      ap_enable_reg_pp0_iter0 <= 1'b0;
    else if (...)
      ap_enable_reg_pp0_iter0 <= 1'b1;
  end
end

// "enable" for the second stage of pipeline-0
always @ (posedge ap_clk) begin
  if (ap_rst) begin
    ap_enable_reg_pp0_iter1 <= 1'b0;
  end else begin
    if (...) begin
      if (...)
        ap_enable_reg_pp0_iter1 <= 1'b0;
      else if ((1'b1 == 1'b1)) // passed from the first stage
        ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
    end
  end
end
```

4. What we need to do is to add flow control signals such as ```full_n``` to the enable signals. Note that we don't need to worry about ```empty_n``` due to the coding style introduced in step 1.

```Verilog
// "enable" for the first stage of pipeline-0
always @ (posedge ap_clk) begin
  if (ap_rst) begin
    ap_enable_reg_pp0_iter0 <= 1'b0;
  end else begin
    if (...)
      ap_enable_reg_pp0_iter0 <= 1'b0;
    else if (...)
      ap_enable_reg_pp0_iter0 <= 1'b1 & out_port_V_full_n;
    else 
      ap_enable_reg_pp0_iter0 <= 1'b1 & out_port_V_full_n;
  end
end
```

5. Finally, we need to add the skid buffer to complete the hacking. To do so, we can change the original downstream FIFO to an ```almost_full``` FIFO, where the ```full_n``` will be asserted while there are still capacity to accomodate more incoming data. Here the overprovision capacity should be no smaller than the length of the pipeline.

Interesting readers can refer to our tool ```auto-skid``` as a sample implementation of the abovementioned process.