############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lstm
set_top kernel 
add_files lstm_n5_16s_16b.cpp
open_solution "solution1"
set_part {xcvu9p-flgb2104-2-i} -tool vivado
#set_part {xc7z020clg484-1} -tool vivado
create_clock -period 3.33 -name default
config_compile -name_max_length 50  -pipeline_loops 0 -unsafe_math_optimizations
#source "./fanout_matrix_optimized/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -flow impl -rtl verilog -format ip_catalog
