############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project mmult_32
open_solution "solution1"
set_part {xcvu9p-flgb2104-2-i} -tool vivado
create_clock -period 3.33 -name default
config_compile -name_max_length 50  -pipeline_loops 0 -unsafe_math_optimizations
#csim_design
#csynth_design
#cosim_design
export_design -flow impl -rtl verilog -format ip_catalog
exit
