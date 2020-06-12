#! /usr/bin/python3.6

import os
import re
import numpy
from collections import defaultdict

RTL_PORTS_IDX = 0
DIR_IDX = 1
BIT_WIDTH_IDX = 2
PROTOCOL_IDX = 3
SRC_OBJ_IDX = 4 # the 5-th column
C_TYPE_IDX = 5

def getInterfaceFromCsynthRpt(csynth_rpt : str):

  if (not os.path.isfile(csynth_rpt)):
    print(f'[getInterfaceFromCsynthRpt] no file found for {csynth_rpt.strip("_csynth.rpt")}')
    return False

  interface = []
  csynth = open(csynth_rpt, 'r')
  for line in csynth:
    if ('== Interface' not in line):
      continue
    
    # ================================================================
    # * Summary: 
    # +-------------------------+-----+-----+------------+-----------------------+--------------+
    # |        RTL Ports        | Dir | Bits|  Protocol  |     Source Object     |    C Type    |
    # +-------------------------+-----+-----+------------+-----------------------+--------------+
    for i in range(5):
      csynth.readline()

    for line in csynth:
      if ('|' not in line):
        break
      line = line.strip('\n')
      match = line.split('|')
      match_trim = [item.strip(' ') for item in match if item ]
      interface.append(match_trim)
      #print(match_trim)

    break
  
  return interface


def getOutboundApFifoPorts(interface):
  return set([ g[SRC_OBJ_IDX] for g in interface if g[PROTOCOL_IDX] == 'ap_fifo' and 'full_n' in g[RTL_PORTS_IDX]])    

#
# [input] ap_fifo_out: list of ap_fifo names corresponding to outbound FIFO
# [output] fifo_to_states: map the ap_fifo name to all the states that write to the FIFO  
#
def getApFifoStates(bind_rpt, ap_fifo_out):

  # Sample report file to parse:
  #
  # * FSMD analyzer results:
  #   - Output states:
  # 	Port: literals_V_V | {6 }
  # 	Port: len_raw_V_V | {28 }
  # 	Port: dist_raw_V_V | {28 }
  # 	Port: in_size_out | {1 }
  #  - Input state : 
  # 	Port: hash_match : data_window_V_V | {5 }
  # 	Port: hash_match : in_size | {1 }
  #   - Chain level:
  #

  bind = open(bind_rpt, 'r')
  fifo_to_states = {}
  for line in bind:
    if ('FSMD analyzer results:' in line):
      for line in bind:
        # end of useful region
        if ('- Chain level:' in line):
          break
        
        match = re.search(':[ ]*([\w\d_]+)[ ]*\|[ ]*{(.*)}', line)
        if (match):
          port_name = match.group(1)
          states = list(filter(None, match.group(2).split(' ') ))
          states_int = list(map(int, states))
          fifo_to_states[port_name] = states_int
    
      break

  return {key: value for key, value in fifo_to_states.items() if key in ap_fifo_out}

#
# [output] state -> pipeline id
# [output] pipeline id -> pipeline length
#
def getPPOfStates(sche_path):
  try:
    rpt = open(sche_path, 'r')
  except IOError:
    print(f'getPipeline: no report for {sche_path}')
    return {}

  state_to_pp = {}
  pp_length = {}
  for line in rpt:
    match = re.search('\* Pipeline : (\d)+', line)
    if (match):
      pp_num = int(match.group(1))
      for i in range(pp_num):
        pp = re.search('Pipeline-(\d+) : II = \d+, D = (\d+), States = {([ \d]+)}', rpt.readline())
        states = map(int, pp.group(3).split())
        pp_id = int(pp.group(1))
        pp_length[pp_id] = int(pp.group(2))
        local_mapping = {s : pp_id for s in states }

        state_to_pp.update(local_mapping)
      
      # end of parsing pipelines
      break
  
  return state_to_pp, pp_length

#
# [input] fifo_to_states: fifo name -> all the states that the FIFO is written to
# [input] state_to_pp: state number -> the id of the pipeline that the state belongs to
# [output] fifo name -> all the pipeline IDs that write to this FIFO
#
def getPPOfFIFO(fifo_to_states, state_to_pp):
  fifo_to_pp = defaultdict(list)
  for fifo, states in fifo_to_states.items():
    for state in states:
      fifo_to_pp[fifo].append(state_to_pp[state])
  return fifo_to_pp

#
# [output] fifo_name -> skid buffer length
#
def getSkidLen(fifo_to_pp, pp_length):
  fifo_to_skid_len = {}
  for fifo, pp_ids in fifo_to_pp.items():
    fifo_to_skid_len[fifo] = sum([pp_length[pp_id] for pp_id in pp_ids])

  return fifo_to_skid_len

#
# for each module, create a wrapper that hosts the skid buffers
# the wrapper will be in the same file as the module
# the wrapper will be tranparent to the outside
#
def createWrapper(rtl_path, interface, mod_type, fifo_to_skid_len):
  interface_t = numpy.transpose(interface)

  # IO definitions
  io_ports = ''
  for io in interface:
    if (io[DIR_IDX] == 'out'):
      io_ports += f'  output [{io[BIT_WIDTH_IDX]}-1 : 0] {io[RTL_PORTS_IDX]},\n'
    else:
      io_ports += f'  input [{io[BIT_WIDTH_IDX]}-1 : 0] {io[RTL_PORTS_IDX]},\n'
  io_ports = io_ports.strip(',\n') # remove the last ',\n'

  reset = ''
  for io in interface:
    if (io[RTL_PORTS_IDX] == 'ap_rst'):
      reset = 'ap_rst'
    elif (io[RTL_PORTS_IDX] == 'ap_rst_n'):
      reset = '~ap_rst_n'
  assert(reset)

  # skid buffer definitions
  skid_def = ''
  for fifo in fifo_to_skid_len.keys():
    # wires between the module and the skid buffer
    skid_def += f'  wire {fifo}_full_n_skid;\n'
    skid_def += f'  wire {fifo}_write_skid;\n'
    width = -1
    for io in interface:
      if (f'{fifo}_din' == io[RTL_PORTS_IDX]):
        width = io[BIT_WIDTH_IDX]
    skid_def += f'  wire [{width}-1 : 0] {fifo}_din_skid;\n'

    # instantiate the skid buffer
    skid_def += f'''
  fifo_almost_full #(
    .DATA_WIDTH({width}),
    .DEPTH({fifo_to_skid_len[fifo] + 2}),
    .GRACE_PERIOD(2)
  ) {fifo}_skid(
    .clk(ap_clk),
    .reset({reset}),
    .if_read_ce(1'b1),
    .if_write_ce(1'b1),
    
    .if_din({fifo}_din_skid),
    .if_full_n({fifo}_full_n_skid),
    .if_write({fifo}_write_skid),

    .if_dout({fifo}_din),
    .if_empty_n({fifo}_write),
    .if_read({fifo}_full_n)
  );\n'''

  # instantiate the module
  inst_def = ''
  inst_def += f'  {mod_type}_internal {mod_type}_internal (\n'
  for io in interface:
    if (io[SRC_OBJ_IDX] in fifo_to_skid_len.keys()):
      inst_def += f'    .{io[RTL_PORTS_IDX]}({io[RTL_PORTS_IDX]}_skid),\n'
    else:
      inst_def += f'    .{io[RTL_PORTS_IDX]}({io[RTL_PORTS_IDX]}),\n'
  inst_def = inst_def.strip(',\n') + ('\n  );')
  
  # assemble the parts together
  final = f'''
`timescale 1 ns / 1 ps 
module {mod_type} (
{io_ports}
);
{skid_def}
{inst_def}
endmodule\n'''

  orig = open(rtl_path, 'r').read()
  orig = re.sub(f'module {mod_type}', f'module {mod_type}_internal', orig)

  fp = open(rtl_path, 'w')
  fp.write(final)
  fp.write(orig)

def modifyModuleExternal(m, csynth_rpt, bind_rpt, rtl_path):

  # get the interface ports
  interface = getInterfaceFromCsynthRpt(csynth_rpt)

  # find outbound ap_fifo interfaces
  ap_fifo_out = getOutboundApFifoPorts(interface)

  # find the mapping from ap_fifo to all the states where it is written
  fifo_to_states = getApFifoStates(bind_rpt, ap_fifo_out)

  # get the mapping from each state to pipelines 
  state_to_pp, pp_length = getPPOfStates(bind_rpt)

  # get the mapping from ap_fifo to pipelines
  fifo_to_pp = getPPOfFIFO(fifo_to_states, state_to_pp)

  # get the length of the skid buffers
  fifo_to_skid_len = getSkidLen(fifo_to_pp, pp_length)

  # create the wrapper that hosts the skid buffer
  if (len(ap_fifo_out)):
    createWrapper(rtl_path, interface, m, fifo_to_skid_len)

  return fifo_to_pp


if (__name__ == '__main__'):
  solution_path = '/home/einsx7/broadcast/auto_skid/test_rs/solution1'
  m = 'module_sub'
  csynth_rpt = f'{solution_path}/syn/report/{m}_csynth.rpt'
  bind_rpt = f'{solution_path}/.autopilot/db/{m}.verbose.bind.rpt'
  rtl_path = f'{solution_path}/syn/verilog/{m}.v' 

  modifyModuleExternal(m, csynth_rpt, bind_rpt, rtl_path)