#! /usr/bin/python3.6

import os
import re

def generateCsynthTcl(
    work_dir,
    hls_src_dir,
    fpga_part_num,
    top_name,
    clock_period):
  src_files = [f for f in os.listdir(hls_src_dir)]
  add_src_files = ''
  for f in src_files:
    add_src_files += f'add_files {hls_src_dir}/{f} -cflags "-std=c++11"\n'

  csynth_tcl = open(f'{work_dir}/hls/csynth.tcl', 'w')
  csynth_tcl.write(f'''
open_project {top_name}
set_top {top_name}
open_solution "solution"
{add_src_files}
set_part {fpga_part_num}
create_clock -period {clock_period} -name default
config_sdx -target xocc
csynth_design
exit
''')
  csynth_tcl.close()

def generatePackXOTcl(work_dir, top_name):
  pack_xo_tcl = open(f'{work_dir}/hls/pack_xo.tcl', 'w')
  pack_xo_tcl.write(f'''
open_project {top_name}
open_solution "solution"
export_design -rtl verilog -format ip_catalog -xo {top_name}.xo
exit
''')
  pack_xo_tcl.close()

def generateVitisSh(    
    work_dir,
    top_name,
    clock_period,
    vitis_config_file,
    vitis_platform):
  
  vitis_sh = open(f'{work_dir}/hls/run_vitis.sh', 'w')
  vitis_sh.write(f'''
v++ \\
  --link \\
  --output "{work_dir}/vitis/{top_name}_{vitis_platform}.xclbin" \\
  --kernel {top_name} \\
  --platform {vitis_platform} \\
  --target hw \\
  --report_level 2 \\
  --temp_dir "{work_dir}/vitis/{top_name}_{vitis_platform}.temp" \\
  --optimize 3 \\
  --connectivity.nk {top_name}:1:{top_name}_1 \\
  --max_memory_ports {top_name} \\
  --save-temps \\
  {top_name}.xo \\
  --config {vitis_config_file} \\
  --kernel_frequency {int(1000/clock_period)} 
''')

def addNonblockWrite(hls_src_dir):
  
  for f in os.listdir(hls_src_dir):
    os.system(f'sed -i "s/.write\([^_]\)/.write_nb\\1/g" {hls_src_dir}/{f}')

def checkNonblockRead(hls_src_dir):
  for f in os.listdir(hls_src_dir):
    i = 0
    fp = open(f'{hls_src_dir}/{f}', 'r')
    for line in fp:
      if (re.search('\.read[ ]*\(', line)):
        print(f'[checkNonblockRead] Found blocking read at line {i} in {hls_src_dir}/{f}')
        exit()
      i = i+1


