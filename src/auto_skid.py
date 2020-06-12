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

from modify_internal import *
from modify_external import *
from fifo_template import fifo_template

#
# [output] the type of all non-FIFO modules
#
def locateModules(top_hdl_path):
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
  fp = open(top_hdl_path, 'a')
  fp.write(fifo_template)

#
# top
#
def addSkidBuffer(solution_path, top_name):
  top_hdl_path = f'{solution_path}/syn/verilog/{top_name}.v'
  all_modules = locateModules(top_hdl_path)

  for m in all_modules:
    print(f'[addSkidBuffer] processing {m}')
    csynth_rpt = f'{solution_path}/syn/report/{m}_csynth.rpt'
    bind_rpt = f'{solution_path}/.autopilot/db/{m}.verbose.bind.rpt'
    rtl_path = f'{solution_path}/syn/verilog/{m}.v'

    fifo_to_pp = modifyModuleExternal(m, csynth_rpt, bind_rpt, rtl_path)

    modifyModuleInternal(m, rtl_path, fifo_to_pp)

  # add the almost full fifo template to the top file
  addFIFOTemplate(top_hdl_path)

if (__name__ == '__main__'):
  solution_path = '/home/einsx7/broadcast/auto_skid/test_rs/solution1'
  top_name = 'top'
  addSkidBuffer(solution_path, top_name)