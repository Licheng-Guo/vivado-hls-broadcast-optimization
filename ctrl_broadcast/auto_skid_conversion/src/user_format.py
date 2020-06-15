import os

class Format_HLS_2019_2:
  def __init__ (
      self,
      solution_path,
      top_name):
    self.solution_path = solution_path
    self.top_name = top_name

    self.autopilot_path = f'{solution_path}/.autopilot/db/'
    self.rpt_path = f'{solution_path}/syn/report/'
    self.rtl_path = f'{solution_path}/syn/verilog/'

  # possible naming convention 1: {top_name}_{module_name}
  # possible naming convention 2: {module_name}
  # note that mod_type is parsed from the top rtl file
  def getOrigName(self, mod_type:str):
    former = mod_type[:len(self.top_name)+1]
    latter = mod_type[len(self.top_name)+1:]

    if(former == f'{self.top_name}_'):
      return latter
    elif (self.top_name not in mod_type):
      return mod_type
    else:
      print(f'[getOrigName] encounter unknown naming convention')

  def getBindRpt(self, mod_type:str):
    path = f'{self.autopilot_path}/{self.getOrigName(mod_type)}.verbose.bind.rpt'
    assert(os.path.isfile(path))
    return path
    
  def getCsynthRpt(self, mod_type:str):
    path = f'{self.rpt_path}/{self.getOrigName(mod_type)}_csynth.rpt'
    assert(os.path.isfile(path))
    return path

  def getVerilog(self, mod_type:str):
    path = f'{self.rtl_path}/{mod_type}.v'
    assert(os.path.isfile(path))
    return path

  def getTopVerilog(self):
    path1 = f'{self.rtl_path}/{self.top_name}_{self.top_name}.v'
    path2 = f'{self.rtl_path}/{self.top_name}.v'
    if (os.path.isfile(path1)):
      return path1
    elif (os.path.isfile(path2)):
      return path2
    else:
      print(f'[getTopVerilog] unknown format for top hdl file. Attempted: {self.top_name}_{self.top_name}.v and {self.top_name}.v under {self.rtl_path}')
      return None

  def isValidModule(self, mod_type:str):
    non_mod_key = ['fifo', '_axi']
    
    for key in non_mod_key:
      if (key in mod_type):
        return False
    
    return True