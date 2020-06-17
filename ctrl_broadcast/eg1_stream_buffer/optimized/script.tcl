############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project fanout_bram
set_top kernel
add_files large_bram.cpp
open_solution "solution1"
set_part {xcvu9p-flgb2104-2-i} -tool vivado
create_clock -period 3.33 -name default
csynth_design
#export_design -flow impl -rtl verilog -format ip_catalog
