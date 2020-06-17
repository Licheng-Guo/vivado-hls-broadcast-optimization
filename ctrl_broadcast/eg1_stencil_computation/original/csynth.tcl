
open_project jacobi2d_kernel
set_top jacobi2d_kernel
open_solution "solution"
add_files non_blocking_jacobi2d_kernel-tile8000-unroll64-4ddr-iterate8.cpp -cflags "-std=c++11"

set_part xcvu9p-flgb2104-2-i
create_clock -period 3.33 -name default
config_sdx -target xocc
csynth_design
exit
