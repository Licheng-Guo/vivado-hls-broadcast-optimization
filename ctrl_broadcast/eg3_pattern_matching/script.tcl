############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project pattern_matching
set_top workload
add_files kmp.h
add_files kmp.cpp
open_solution "solution1"
set_part {xc7vx690tffg1157-2} -tool vivado
create_clock -period 3.33 -name default
#source "./fanout_kmp_orig/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
#export_design -flow impl -rtl verilog -format ip_catalog
