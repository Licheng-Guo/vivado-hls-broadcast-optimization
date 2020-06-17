#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/einsx7/broadcast/vivado-hls-broadcast-optimization/ctrl_broadcast/eg2_stencil_computation/optimize/jacobi2d_kernel/solution/.autopilot/db/a.g.bc ${1+"$@"}
