#! /usr/bin/python3.6

import re
import numpy
import os
from collections import defaultdict

def getBelowIODef(rtl_path):
  if (not os.path.isfile(rtl_path)):
    print(f'[getBelowIODef] no file found for {rtl_path}')
    return None, None

  print(f'[getBelowIODef] process {rtl_path}')
  fp = open(rtl_path, 'r')
  pre_io = ''
  post_io = ''

  for line_pre in fp:
    if (re.search('reg [^ ]+[ ]*;', line_pre) or re.search('reg [^ ]+[ ]*[^ ]+[ ]*;', line_pre)):
      post_io += line_pre
      for line_post in fp:
        post_io += line_post
      break
    else :
      pre_io += line_pre
  return pre_io, post_io
  
#
# add definition to the ap_enable value trackers
#
def processPre(pre_io, pp_to_fifo) -> str:
  for pp_id in pp_to_fifo.keys():
    pre_io += f'reg ap_enable_tracker_pp{pp_id};\n'
  return pre_io

def step1(orig, pp_id, fifos) -> str:
  # modify the original ap_enable <= 1
  processed = ''
  for line in orig.split('\n'):
    line = f'{line}\n' # restore the lost newline

    if (f"ap_enable_reg_pp{pp_id}_iter0 <= 1'b1" in line):
      line = line.split(';')[0]
      for fifo in fifos:
        line += f' & {fifo}_full_n'
      line += ';\n'
    
    processed += line
  
  return processed

def step2(orig, pp_id, fifos) -> str:
  processed = ''
  for line in orig.split('\n'):
    line = f'{line}\n' # restore the lost newline

    match = re.search(f"([ ]*)ap_enable_reg_pp{pp_id}_iter0 <= 1'b(\d)", line)
    if (match):
      line += f"{match.group(1)}ap_enable_tracker_pp{pp_id} <= 1'b{match.group(2)};\n"

    processed += line
  return processed

def step3(orig, pp_id, fifos) -> str:
  processed = ''
  last_line = ''
  flag1 = False
  flag2 = False

  for line in orig.split('\n'):
    line = f'{line}\n' # restore the lost newline
    last_line = line

    if ('always' in line):
      flag1 = True
    if (flag1 and f"ap_enable_reg_pp{pp_id}_iter0 <= 1'b1" in line):
      flag2 = True
      flag1 = False
    if (flag2 and 'end' in last_line and 'end' in last_line):
      flag2 = False

      match = re.search('([ ]*)end', line)
      indent = match.group(1)
      line += f'{indent}else begin\n'
      line += f'{indent}    ap_enable_reg_pp{pp_id}_iter0 <= ap_enable_tracker_pp{pp_id} '
      for fifo in fifos:
        line += f' & {fifo}_full_n'
      line += f';\n'
      line += f'{indent}end\n'

    processed += line
  return processed

def updateApEnable(modify_enable, pp_id, fifos) -> str:
  modify_enable = step1(modify_enable, pp_id, fifos)
  modify_enable = step2(modify_enable, pp_id, fifos)
  modify_enable = step3(modify_enable, pp_id, fifos)

  return modify_enable

def processPost(post_io, pp_to_fifo) -> str:  
  # first replace all related full_n by 1
  rm_full = post_io
  for fifos in pp_to_fifo.values():
    for fifo in fifos:
      print(f'[processPost] remove {fifo}_full_n')
      rm_full = re.sub(f'{fifo}_full_n', '1', rm_full)
  modify_enable = rm_full
  
  # for each pipeline and all the dependent FIFO
  for pp_id, fifos in pp_to_fifo.items():
    modify_enable = updateApEnable(modify_enable, pp_id, fifos)

  return modify_enable

def modifyModuleInternal(mod_type, formator, fifo_to_pp):
  # rely on the following format
  # 
  # 0  always @ (posedge ap_clk) begin
  # 1    if (ap_rst == 1'b1) begin
  # 2      ap_enable_reg_pp1_iter0 <= 1'b0;
  # 3    end else begin
  # 4      if (((1'b0 == ap_block_pp1_stage0_subdone) & (1'b1 == ap_condition_pp1_exit_iter0_state5) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
  # 5        ap_enable_reg_pp1_iter0 <= 1'b0;
  # 6      end else if ((1'b1 == ap_CS_fsm_state4)) begin
  # 7        ap_enable_reg_pp1_iter0 <= 1'b1;
  # 8      end
  # 9    end
  # 10 end
  #
  # Note that there is not a final "else" branch at line 9, which we need to add 
  # Thus in each branch we need a tracker to record the latest value of ap_enable_reg_ppX_iter0
  #
  rtl_path = formator.getVerilog(mod_type)

  orig_fp = open(rtl_path, 'r').readlines()

  # need the part after the input/output def
  pre_io, post_io = getBelowIODef(rtl_path)

  # invert fifo_to_pp
  pp_to_fifo = defaultdict(list)
  for fifo, pps in fifo_to_pp.items():
    for pp in pps:
      pp_to_fifo[pp].append(fifo)

  pre_io = processPre(pre_io, pp_to_fifo)
  post_io = processPost(post_io, pp_to_fifo)

  skid_fp = open(rtl_path, 'w')
  skid_fp.write(pre_io)
  skid_fp.write(post_io)
