This example design consists of a giant stencil computation kernel. Changing from stall-based pipeline control to skid-buffer-based pipeline control may almost double the achievable frequency.

It is observed that this design cannot be correctly scheduled by Vivado HLS 2019.2. It works correctly on Vivado HLS 2018.2.

To see the difference from the original hls design and the modified one that fits into our recommended coding style:
```
diff original/*.cpp optimized/*.cpp
```

## Solving Control Broadcast

Compared to data broadcast, control broadcast is basically impossible to hack through the source code, and we need to directly operate on the generated Verilog files. Obviously this is only a make-do approach. The good news is that Xilinx is now aware of this problem and we are cooperating with them to improve the micro-architecture of their flow-control mechanism.
Before Xilinx update their tools, expert users still can fix the issue through the following approach. 

Specifically, we need to adapt the current ***stall-based flow control*** approach of Vivado HLS to the ***skid-buffer-based flow control***, which is discussed in detail in our paper. We also provide a script tool called ```auto-skid``` to automatically perform the following steps.

1. Make sure the design only use ```non-blocking read```. Although the skid-buffer approach does not require this limitation, such coding style will make it easier to hack the RTL. An example is:
```c++
for (long long i = 0; i < SIZE; ) {
  #pragma HLS pipeline II=1
  if (!in_port.empty()) {
    in_port.read_nb(buffer[i]);
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