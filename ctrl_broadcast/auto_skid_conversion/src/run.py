#! /usr/bin/python3.6

from auto_skid import *
from user_format import *
from misc import *
import os

def run(
    work_dir,
    hls_src_dir,
    fpga_part_num,
    top_name,
    clock_period,
    vitis_config_file,
    vitis_platform):
  os.system(f'rm -rf {hls_src_dir}_auto_skid')
  os.system(f'cp -r {hls_src_dir} {hls_src_dir}_auto_skid')
  hls_src_dir = f'{hls_src_dir}_auto_skid'

  hls_src_dir = os.path.abspath(hls_src_dir)
  work_dir = os.path.abspath(work_dir)

  checkNonblockRead(hls_src_dir)
  addNonblockWrite(hls_src_dir)

  os.system(f'rm -rf {work_dir}')
  os.system(f'mkdir {work_dir}')
  os.system(f'mkdir {work_dir}/hls')
  os.system(f'mkdir {work_dir}/vitis_run')

  generateCsynthTcl(   
    work_dir, 
    hls_src_dir,
    fpga_part_num,
    top_name,
    clock_period)

  generatePackXOTcl(
      work_dir,
      top_name)

  generateVitisSh(
      work_dir,
      top_name,
      clock_period,
      vitis_config_file,
      vitis_platform)

  os.system(f'cd {work_dir}/hls && VIV_VER=2019.2 vivado_hls -f csynth.tcl')

  solution_path = f'{work_dir}/hls/{top_name}/solution/'
  formator = Format_HLS_2019_2(solution_path, top_name)
  addSkidBuffer(formator)

  # to pack the modified RTL into xo objects
  #os.system(f'cd {work_dir}/hls && VIV_VER=2019.2 vivado_hls -f pack_xo.tcl')
  
  # to run SDAccel / Vitis
  #os.system('./run_vitis.sh')

if (__name__ == '__main__'):
  hls_src_dir = '../example/hls_src'
  fpga_part_num = 'xcu250-figd2104-2L-e'
  top_name = 'top'
  clock_period = 3.33
  work_dir = f'../result/{top_name}'

  vitis_config_file = 'config.cfg'
  vitis_platform = 'xilinx_u250_xdma_201830_2'
  
  run(
    work_dir,
    hls_src_dir,
    fpga_part_num,
    top_name,
    clock_period,
    vitis_config_file,
    vitis_platform)