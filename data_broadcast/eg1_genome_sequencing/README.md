# Data Broadcast Example: Genome Sequencing

In this folder we provide the original HLS design of a genome sequencing accelerator and some of the generated RTLs and reports, which will showcase the current limitation of the HLS tool on data broadcast. We also show that with a few lines of modification to the source code we can significantly boost the final frequency.

The design is from the paper:
> L. Guo, J. Lau, Z. Ruan, P. Wei, and J. Cong, “Hardware Acceleration of Long Read Pairwise Overlapping in Genome Sequencing: A Race Between FPGA and GPU” in 2019 IEEE 27th International Symposium On Field-Programmable Custom Computing Machines (FCCM), April 2019.

## Problem

The data broadcast happens in the ```chain_dp_score()``` function.

```c++
for (int j = 0; j < BACK_SEARCH_COUNT; j++) {
  #pragma HLS unroll
  dist_x[j] = (active[j].x - curr.x);
  dist_y[j] = (active[j].y - curr.y);
  ......
```

Note that when the loop is unrolled, the registers holding ```curr.x``` and ```curr.y``` will be connected to every instance of the unrolled loop body. Obviously such structures will suffer from non-trivial timing penalty caused by the large fan-out, but this factor is not considered by the current HLS tools. A snippet of the generated RTL will be as follows, regardless of the unroll factor of the loop.

```Verilog
assign rhs_V_fu_638_p1 = curr_x_V_int_reg;
assign r_V_7_10_fu_2380_p2 = (lhs_V_11_fu_2376_p1 - rhs_V_fu_638_p1);
assign r_V_7_11_fu_2552_p2 = (lhs_V_12_fu_2548_p1 - rhs_V_fu_638_p1);
assign r_V_7_12_fu_2724_p2 = (lhs_V_13_fu_2720_p1 - rhs_V_fu_638_p1);
assign r_V_7_13_fu_2896_p2 = (lhs_V_14_fu_2892_p1 - rhs_V_fu_638_p1);
assign r_V_7_14_fu_3068_p2 = (lhs_V_15_fu_3064_p1 - rhs_V_fu_638_p1);
assign r_V_7_15_fu_3240_p2 = (lhs_V_16_fu_3236_p1 - rhs_V_fu_638_p1);
assign r_V_7_16_fu_3412_p2 = (lhs_V_17_fu_3408_p1 - rhs_V_fu_638_p1);
assign r_V_7_17_fu_3584_p2 = (lhs_V_18_fu_3580_p1 - rhs_V_fu_638_p1);
assign r_V_7_18_fu_3756_p2 = (lhs_V_19_fu_3752_p1 - rhs_V_fu_638_p1);
assign r_V_7_19_fu_3928_p2 = (lhs_V_20_fu_3924_p1 - rhs_V_fu_638_p1);
......
```

Meanwhile, we can see from the internal scheduling report (under the ```.autopilot/db/``` folder) that the estimated delay for this operation is invariant to the unroll factor.

## Solution

While the ultimate solution is to calibrate the delay model to incorporate the extra delay penalty caused by broadcast, it is not feasible for users to implement that. One method to hack around the problem is for users to explicitly add registers around the broadcast. More registering can facilitate the downstream physical design tools to perform retiming and replication to alleviate the problem.

Specifically, users can rely on the following template, which will be compiled to a register module (tested under Vivado HLS 2018.2).
```c++
template<class T>
T HLS_REG(T in){
#pragma HLS pipeline
#pragma HLS inline off
#pragma HLS interface port=return register
    return in;
}
```
The corresponding RTL is as follows. Complicated as it may seem, it is nothing more than a single register.
``` Verilog
module HLS_REG_ap_int_17_s (
        ap_clk,
        ap_rst,
        in_V,
        ap_return
);
input   ap_clk;
input   ap_rst;
input  [16:0] in_V;
output  [16:0] ap_return;

reg[16:0] ap_return;
wire    ap_block_state1_pp0_stage0_iter0; // constant
wire    ap_block_state2_pp0_stage0_iter1; // constant
wire    ap_block_pp0_stage0_11001; // constant

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        ap_return <= in_V; // just a register
    end
end
assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);
assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);
assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);
endmodule
```

We can apply this template where there is large broadcasts to force the HLS scheduler to insert registers to help timing.

```c++
for (int j = 0; j < BACK_SEARCH_COUNT; j++) {
  #pragma HLS unroll
  dist_x[j] = HLS_REG(active[j].x - curr.x);
  dist_y[j] = HLS_REG(active[j].y - curr.y);
  ......
```