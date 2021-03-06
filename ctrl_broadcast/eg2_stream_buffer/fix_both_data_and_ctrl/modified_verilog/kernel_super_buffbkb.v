// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

`timescale 1 ns / 1 ps
module kernel_super_buffbkb_ram (addr0, ce0, d0, we0, q0,  clk);

parameter DWIDTH = 32;
parameter AWIDTH = 15;
parameter MEM_SIZE = 20000;

input[AWIDTH-1:0] addr0;
input ce0;
input[DWIDTH-1:0] d0;
input we0;
output wire[DWIDTH-1:0] q0;
input clk;

(* ram_style = "block" *)reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];
wire [AWIDTH-1:0] addr0_t0; 
reg [AWIDTH-1:0] addr0_t1; 
wire [DWIDTH-1:0] d0_t0; 
wire we0_t0; 
reg [DWIDTH-1:0] d0_t1; 
reg we0_t1; 
reg [DWIDTH-1:0] q0_t0;
reg [DWIDTH-1:0] q0_t1;
reg [DWIDTH-1:0] q0_t2;

initial begin
    $readmemh("./kernel_super_buffbkb_ram.dat", ram);
end

// assign addr0_t0 = addr0;
// assign d0_t0 = d0;
// assign we0_t0 = we0;
//assign q0 = q0_t2; 

/////

reg [DWIDTH-1:0] q0_bypass;

reg we0_t2;
reg [DWIDTH-1:0] d0_t2; 
reg [AWIDTH-1:0] addr0_t2;

reg ce0_q;

// --------- wrapper --------------
assign addr0_t0 = addr0;
assign d0_t0 = d0;
assign we0_t0 = we0;

// output selection of the wrapper.
assign q0 = ce0_q ? q0_t2 : q0_bypass;

// delay the stall signal
always @ (posedge clk) begin
    ce0_q <= ce0;
end

// additional register in the wrapper, controlled by ce0
always @(posedge clk)  
begin
    if (ce0) 
    begin
        addr0_t1 <= addr0_t0; 
        d0_t1 <= d0_t0;
        we0_t1 <= we0_t0;
    end
end

//------------ end of wrapper ---------------

// ----------- starting the BRAM unit -------------

// original 1 cycle delay to the BRAM, but now controlled by ce0_q 
always @(posedge clk)  
begin
    if (ce0_q) 
    begin
        addr0_t2 <= addr0_t1; 
        d0_t2 <= d0_t1;
        we0_t2 <= we0_t1;
    end
end

always @(posedge clk)  
begin
    if (ce0_q) begin
        // original 2 cycle latency from BRAM, now controlled by ce0_q
        q0_t1 <= q0_t0;
        q0_t2 <= q0_t1;
        // bypass register
        q0_bypass <= q0_t2;
    end
end

// the actual BRAM unit, now controlled by ce0_q
// originally we0_t1, addr0_t1, d0_t1; now we0_t2 since the wrapper introduce one more register
always @(posedge clk)  
begin 
    if (ce0_q) // originally ce0
    begin
        if (we0_t2) 
        begin 
            ram[addr0_t2] <= d0_t2; // originally d0_t1
            q0_t0 <= d0_t2;
        end 
        else 
            q0_t0 <= ram[addr0_t2];
    end
end

// -------------- end of the BRAM unit ---------------

endmodule


`timescale 1 ns / 1 ps
module kernel_super_buffbkb(
    reset,
    clk,
    address0,
    ce0,
    we0,
    d0,
    q0);

parameter DataWidth = 32'd32;
parameter AddressRange = 32'd20000;
parameter AddressWidth = 32'd15;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
input we0;
input[DataWidth - 1:0] d0;
output[DataWidth - 1:0] q0;

kernel_super_buffbkb_ram #(
    .DWIDTH(DataWidth),
    .AWIDTH(AddressWidth),
    .MEM_SIZE(AddressRange)
)
kernel_super_buffbkb_ram_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .we0( we0 ),
    .d0( d0 ),
    .q0( q0 ));

endmodule

