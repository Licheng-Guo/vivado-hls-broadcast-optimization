set i $::env(I)
open_project device.original.inlineversion.$i
set_top device_chain_kernel
add_files $::env(FILE) -cflags "-DBACK_SEARCH_COUNT=$i"
open_solution "solution"
set_part {xcvu9p-flgb2104-2-i}
create_clock -period 2.8 -name default
config_compile -name_max_length 50  -pipeline_loops 0 -unsafe_math_optimizations
csynth_design
export_design -flow impl -rtl verilog -format ip_catalog
exit
