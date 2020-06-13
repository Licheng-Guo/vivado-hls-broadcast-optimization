#! /usr/bin/python3.6

# for each module, generate a wrapper
# for each outbound ap_fifo interface, find out in which pipeline the FIFO is accessed
# and how long that pipeline is
# skip FIFOs not accessed in a pipeline
# add an almost_full FIFO to the outbound FIFO with GRACE_PERIOD = pipeline depth
# inside the module, first replace every usage of full_n by 1
# then properly update the ppX_iter0 register

import re
import numpy
from collections import defaultdict
from pyverilog.vparser.parser import parse
from pyverilog.vparser import ast
import os

from modify_internal import *
from modify_external import *
from fifo_template import fifo_template
from user_format import Format_HLS_2019_2

#
# [output] the type of all non-FIFO modules
#
def locateModules(top_hdl_path):
  if (not os.path.isfile(top_hdl_path)):
    print(f'[locateModules] no file found for {top_hdl_path}')
    return None

  top_mod_ast, directives = parse([top_hdl_path]) 

  all_modules = []

  # traverse the rtl and apply a function
  def dfs(node, func):
    func(node)
    for c in node.children():
      dfs(c, func)
  
  def getValidModule(node):
    if (type(node) is ast.Instance and 'fifo' not in node.module and 'start_for' not in node.module):
      all_modules.append(node.module)

  dfs(top_mod_ast, getValidModule)

  return all_modules

def addFIFOTemplate(top_hdl_path):
  print(f'[addSkidBuffer] processing top file: {formator.getTopVerilog()}')

  fp = open(top_hdl_path, 'a')
  fp.write(fifo_template)

#
# top
#
def addSkidBuffer(formator):
  print('*****************************************************\n')
  print('[addSkidBuffer] the design must use non-blocking read + blocking write')
  print('[addSkidBuffer] to enable the skid-buffer conversion, first replace all blocking writes by non-blocking writes and re-run HLS')
  print('[addSkidBuffer] The conversion process will restore the correct functionality and add the flow control logic based on the design with non-blocking writes')
  print('\n*****************************************************\n\n')

  top_hdl_path = formator.getTopVerilog()
  all_modules = locateModules(top_hdl_path)

  for m in all_modules:
    if (not formator.isValidModule(m)):
      print(f'[addSkidBuffer] skip {m}.v')
      continue

    print(f'[addSkidBuffer] processing {m}.v')
    fifo_to_pp = modifyModuleExternal(m, formator)
    modifyModuleInternal(m, formator, fifo_to_pp)

  # add the almost full fifo template to the top file
  addFIFOTemplate(top_hdl_path)

if (__name__ == '__main__'):
  solution_path = '/home/einsx7/pr/application/Compression/hls_nb/deflate/solution'
  top_name = 'deflate'

  formator = Format_HLS_2019_2(solution_path, top_name)
  addSkidBuffer(formator)