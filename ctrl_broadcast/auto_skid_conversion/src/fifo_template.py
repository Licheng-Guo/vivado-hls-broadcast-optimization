
fifo_template = '''

// first-word fall-through (FWFT) FIFO
// if its capacity > THRESHOLD bits, it uses block RAM, otherwise it will uses
// shift register LUT
module fifo_almost_full #(
  parameter DATA_WIDTH = 32,
  parameter ADDR_WIDTH = 5,
  parameter DEPTH      = 32,
  parameter THRESHOLD  = 18432,
  parameter GRACE_PERIOD = 2
) (
  input wire clk,
  input wire reset,

  // write
  output wire                  if_full_n,
  input  wire                  if_write_ce,
  input  wire                  if_write,
  input  wire [DATA_WIDTH-1:0] if_din,

  // read
  output wire                  if_empty_n,
  input  wire                  if_read_ce,
  input  wire                  if_read,
  output wire [DATA_WIDTH-1:0] if_dout
);

generate
  if (DATA_WIDTH * DEPTH > THRESHOLD) begin : bram
    fifo_bram_almost_full #(
      .DATA_WIDTH(DATA_WIDTH),
      .ADDR_WIDTH(ADDR_WIDTH),
      .DEPTH     (DEPTH),
      .GRACE_PERIOD(GRACE_PERIOD) /*********/
    ) unit (
      .clk  (clk),
      .reset(reset),

      .if_full_n  (if_full_n),
      .if_write_ce(if_write_ce),
      .if_write   (if_write),
      .if_din     (if_din),

      .if_empty_n(if_empty_n),
      .if_read_ce(if_read_ce),
      .if_read   (if_read),
      .if_dout   (if_dout)
    );
  end else begin : srl
    fifo_srl_almost_full #(
      .DATA_WIDTH(DATA_WIDTH),
      .ADDR_WIDTH(ADDR_WIDTH),
      .DEPTH     (DEPTH),
      .GRACE_PERIOD(GRACE_PERIOD) /*********/
    ) unit (
      .clk  (clk),
      .reset(reset),

      .if_full_n  (if_full_n),
      .if_write_ce(if_write_ce),
      .if_write   (if_write),
      .if_din     (if_din),

      .if_empty_n(if_empty_n),
      .if_read_ce(if_read_ce),
      .if_read   (if_read),
      .if_dout   (if_dout)
    );
  end
endgenerate

endmodule  // fifo

/////////////////////////////////////////////////////////////////

module fifo_srl_almost_full (
    clk,
    reset,
    if_empty_n,
    if_read_ce,
    if_read,
    if_dout,
    if_full_n,
    if_write_ce,
    if_write,
    if_din);

parameter MEM_STYLE   = "shiftreg";
parameter DATA_WIDTH  = 32'd32;
parameter ADDR_WIDTH  = 32'd4;
parameter DEPTH       = 5'd16;

/*******************************************/
parameter GRACE_PERIOD = 2;
/*******************************************/

input clk;
input reset;
output if_empty_n;
input if_read_ce;
input if_read;
output[DATA_WIDTH - 1:0] if_dout;
output if_full_n;
input if_write_ce;
input if_write;
input[DATA_WIDTH - 1:0] if_din;

wire[ADDR_WIDTH - 1:0] shiftReg_addr ;
wire[DATA_WIDTH - 1:0] shiftReg_data, shiftReg_q;
wire                     shiftReg_ce;
reg[ADDR_WIDTH:0] mOutPtr = ~{(ADDR_WIDTH+1){1'b0}};
reg internal_empty_n = 0, internal_full_n = 1;

assign if_empty_n = internal_empty_n;

/*******************************************/
// assign if_full_n = internal_full_n;
wire almost_full = mOutPtr >= DEPTH - 2 - GRACE_PERIOD && mOutPtr != ~{ADDR_WIDTH+1{1'b0}};
assign if_full_n = ~almost_full;
/*******************************************/

assign shiftReg_data = if_din;
assign if_dout = shiftReg_q;

always @ (posedge clk) begin
    if (reset == 1'b1)
    begin
        mOutPtr <= ~{ADDR_WIDTH+1{1'b0}};
        internal_empty_n <= 1'b0;
        internal_full_n <= 1'b1;
    end
    else begin
        if (((if_read & if_read_ce) == 1 & internal_empty_n == 1) && 
            ((if_write & if_write_ce) == 0 | internal_full_n == 0))
        begin
            mOutPtr <= mOutPtr - 5'd1;
            if (mOutPtr == 0)
                internal_empty_n <= 1'b0;
            internal_full_n <= 1'b1;
        end 
        else if (((if_read & if_read_ce) == 0 | internal_empty_n == 0) && 
            ((if_write & if_write_ce) == 1 & internal_full_n == 1))
        begin
            mOutPtr <= mOutPtr + 5'd1;
            internal_empty_n <= 1'b1;
            if (mOutPtr == DEPTH - 5'd2)
                internal_full_n <= 1'b0;
        end 
    end
end

assign shiftReg_addr = mOutPtr[ADDR_WIDTH] == 1'b0 ? mOutPtr[ADDR_WIDTH-1:0]:{ADDR_WIDTH{1'b0}};
assign shiftReg_ce = (if_write & if_write_ce) & internal_full_n;

fifo_srl_almost_full_internal 
#(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH),
    .DEPTH(DEPTH))
U_fifo_w32_d16_A_ram (
    .clk(clk),
    .data(shiftReg_data),
    .ce(shiftReg_ce),
    .a(shiftReg_addr),
    .q(shiftReg_q));

endmodule  

module fifo_srl_almost_full_internal (
    clk,
    data,
    ce,
    a,
    q);

parameter DATA_WIDTH = 32'd32;
parameter ADDR_WIDTH = 32'd4;
parameter DEPTH = 5'd16;

input clk;
input [DATA_WIDTH-1:0] data;
input ce;
input [ADDR_WIDTH-1:0] a;
output [DATA_WIDTH-1:0] q;

reg[DATA_WIDTH-1:0] SRL_SIG [0:DEPTH-1];
integer i;

always @ (posedge clk)
    begin
        if (ce)
        begin
            for (i=0;i<DEPTH-1;i=i+1)
                SRL_SIG[i+1] <= SRL_SIG[i];
            SRL_SIG[0] <= data;
        end
    end

assign q = SRL_SIG[a];

endmodule

///////////////////////////////////////////////////////////

// first-word fall-through (FWFT) FIFO using block RAM
// based on HLS generated code
module fifo_bram_almost_full #(
  parameter MEM_STYLE  = "block",
  parameter DATA_WIDTH = 32,
  parameter ADDR_WIDTH = 5,
  parameter DEPTH      = 32,
  parameter GRACE_PERIOD = 2
) (
  input wire clk,
  input wire reset,

  // write
  output wire                  if_full_n,
  input  wire                  if_write_ce,
  input  wire                  if_write,
  input  wire [DATA_WIDTH-1:0] if_din,

  // read
  output wire                  if_empty_n,
  input  wire                  if_read_ce,
  input  wire                  if_read,
  output wire [DATA_WIDTH-1:0] if_dout
);

(* ram_style = MEM_STYLE *)
reg  [DATA_WIDTH-1:0] mem[0:DEPTH-1];
reg  [DATA_WIDTH-1:0] q_buf;
reg  [ADDR_WIDTH-1:0] waddr;
reg  [ADDR_WIDTH-1:0] raddr;
wire [ADDR_WIDTH-1:0] wnext;
wire [ADDR_WIDTH-1:0] rnext;
wire                  push;
wire                  pop;
reg  [ADDR_WIDTH-1:0] used;
reg                   full_n;
reg                   empty_n;
reg  [DATA_WIDTH-1:0] q_tmp;
reg                   show_ahead;
reg  [DATA_WIDTH-1:0] dout_buf;
reg                   dout_valid;

localparam DepthM1 = DEPTH[ADDR_WIDTH-1:0] - 1'd1;

/**************************************/
wire almost_full = (used >= DEPTH - 1 - GRACE_PERIOD);
//assign if_full_n  = full_n;
assign if_full_n  = ~almost_full;
/**************************************/

assign if_empty_n = dout_valid;
assign if_dout    = dout_buf;
assign push       = full_n & if_write_ce & if_write;
assign pop        = empty_n & if_read_ce & (~dout_valid | if_read);
assign wnext      = !push              ? waddr              :
                    (waddr == DepthM1) ? {ADDR_WIDTH{1'b0}} : waddr + 1'd1;
assign rnext      = !pop               ? raddr              :
                    (raddr == DepthM1) ? {ADDR_WIDTH{1'b0}} : raddr + 1'd1;



// waddr
always @(posedge clk) begin
  if (reset)
    waddr <= {ADDR_WIDTH{1'b0}};
  else
    waddr <= wnext;
end

// raddr
always @(posedge clk) begin
  if (reset)
    raddr <= {ADDR_WIDTH{1'b0}};
  else
    raddr <= rnext;
end

// used
always @(posedge clk) begin
  if (reset)
    used <= {ADDR_WIDTH{1'b0}};
  else if (push && !pop)
    used <= used + 1'b1;
  else if (!push && pop)
    used <= used - 1'b1;
end

// full_n
always @(posedge clk) begin
  if (reset)
    full_n <= 1'b1;
  else if (push && !pop)
    full_n <= (used != DepthM1);
  else if (!push && pop)
    full_n <= 1'b1;
end

// empty_n
always @(posedge clk) begin
  if (reset)
    empty_n <= 1'b0;
  else if (push && !pop)
    empty_n <= 1'b1;
  else if (!push && pop)
    empty_n <= (used != {{(ADDR_WIDTH-1){1'b0}},1'b1});
end

// mem
always @(posedge clk) begin
  if (push)
    mem[waddr] <= if_din;
end

// q_buf
always @(posedge clk) begin
  q_buf <= mem[rnext];
end

// q_tmp
always @(posedge clk) begin
  if (reset)
    q_tmp <= {DATA_WIDTH{1'b0}};
  else if (push)
    q_tmp <= if_din;
end

// show_ahead
always @(posedge clk) begin
  if (reset)
    show_ahead <= 1'b0;
  else if (push && used == {{(ADDR_WIDTH-1){1'b0}},pop})
    show_ahead <= 1'b1;
  else
    show_ahead <= 1'b0;
end

// dout_buf
always @(posedge clk) begin
  if (reset)
    dout_buf <= {DATA_WIDTH{1'b0}};
  else if (pop)
    dout_buf <= show_ahead? q_tmp : q_buf;
end

// dout_valid
always @(posedge clk) begin
  if (reset)
    dout_valid <= 1'b0;
  else if (pop)
    dout_valid <= 1'b1;
  else if (if_read_ce & if_read)
    dout_valid <= 1'b0;
end

endmodule  // fifo_bram


'''