
# Problem

In this example, we use a design that cannot be simpler to show the timing degradation from both data and control broadcasts. The design consists merely of a large buffer, which is first sequentially written to and then read from. In this seemingly trivial example, the both the data and the control signals will be broadcast to every BRAM element of the large buffer. 
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

- **Data broadcast**: Although logically the buffer is an individual entity, physically it consists of large number of BRAM units scattered across the chip. As a result, the data signals will be broadcast. 

- **Control broadcast 1**: First, the problem arise from the ```hls::stream```, which will be compiled into a FIFO. Currently the Vivado HLS adopts the ***stall-based flow control*** mechanism such that when the upstream FIFO is empty or the downstream FIFO is full, the whole pipeline will be stalled altogether. 
  
- **Control broadcast 2**: Second, the FSM signals will also be broadcast. Note that the access to the same buffer will be shared by different loops in different times. Thus the corrsponding MUX-related signals need to be broadcast. 

Specifically, the buffer module will have the following interface:
```Verilog
input clk;

// control signals
input ce0; // related to flow control signals and FSM MUX signals

// data signals
input we0;
input[AWIDTH-1:0] addr0;
input[DWIDTH-1:0] d0;
output wire[DWIDTH-1:0] q0;
```

## Solving Data Broadcast
It is relatively easier to fix the data broadcast. Specifically, we need more pipelining on the data ports.

- First, we can rely on the ```HLS_REG()``` template to force pipelining between the source and the destination.

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

- Another method is to use HLS pragmas to specify additional latency when defining the buffer.

```c++
#pragma HLS resource variable=super_buffer core=RAM_1P_BRAM latency=2
```

The above-mentioned methods will not affect the `ce` port of the buffer module.

Note that both methods rely on the prerequisite that the buffer should be accessed in a pipelined environment, otherwise the throughput of the design will be affected by the additional latency.

## Use Multi-Level Stall for Control Broadcast

In the stencil computation example, we present how to use the skid-buffer-based control to remove the broadcast of flow control signals. We could do the same thing in this example:

1. Switch the design to skid-buffer-based pipeline control
2. Address the data broadcast
3. Pipeline the `ce` signals together with the data signals.

---

However, to make things more interesting, we present another method that could also alleviates the broadcast of the control signals.

We present a generalized template wrapper to do this, as shown in Figure 8b. The key technique is to register the stall signal once before sendingit to the sub-datapath. This reduces the broadcast factor of the original source of the stall, but will make the subset stall one cyclelater. To keep the correct functionality, we need special modification to the output of the subset. At the output side, a buffer register is implemented to keep a copy of the output. When congestion happens, the inner module is stalled one cycle late, during which the outputting data will be kept by the buffer register. We refer to this technique as multi-level stall control. The following table provides a walk-through example explaining how themulti-level wrapper works and why no data will be lost. In this example we assume the sub-datapath only has one internal stage. “#i” refers to the i-th data transaction, and the sink is supposed tosee sequential numbers without repetition or skip.

`[TODO] add the figure`

| cycle | event  | en | en\_q | src | out | buf | mux\_select | sink |
|-------|--------|----|-------|-----|-----|-----|-------------|------|
| t     | normal | 1  | 1     | \#3 | \#2 | \#1 | out\(\#2\)  | \#1  |
| t\+1  | stall  | 0  | 1     | \#4 | \#3 | \#2 | out\(\#3\)  | \#2  |
| t\+2  | stall  | 0  | 0     | \#4 | \#4 | \#3 | buf\(\#3\)  | \#2  |
| t\+3  | normal | 1  | 0     | \#4 | \#4 | \#3 | buf\(\#3\)  | \#2  |
| t\+4  | normal | 1  | 1     | \#5 | \#4 | \#3 | out\(\#4\)  | \#3  |
| t\+5  | normal | 1  | 1     | \#6 | \#5 | \#4 | out\(\#4\)  | \#4  |

In this way, although the inner datapath still stalls as a whole, its stall signal is separate from the outside signal. Meanwhile, this template could be applied recursively to register the stall signal multiple times to further alleviate timing pressure. For example, this technique could also be used to pipeline the chip enable signals of BRAMs along with the data signals.

In our experiement, the wrapper to implement multi-level stall is added to `kernel_super_buffbkb.v`.