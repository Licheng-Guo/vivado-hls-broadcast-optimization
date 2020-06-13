
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
    return f'{self.autopilot_path}/{self.getOrigName(mod_type)}.verbose.bind.rpt'
    
  def getCsynthRpt(self, mod_type:str):
    return f'{self.rpt_path}/{self.getOrigName(mod_type)}_csynth.rpt'
  
  def getVerilog(self, mod_type:str):
    return f'{self.rtl_path}/{mod_type}.v'

  def getTopVerilog(self):
    return f'{self.rtl_path}/{self.top_name}_{self.top_name}.v'

  def isValidModule(self, mod_type:str):
    non_mod_key = ['fifo', '_axi']
    
    for key in non_mod_key:
      if (key in mod_type):
        return False
    
    return True