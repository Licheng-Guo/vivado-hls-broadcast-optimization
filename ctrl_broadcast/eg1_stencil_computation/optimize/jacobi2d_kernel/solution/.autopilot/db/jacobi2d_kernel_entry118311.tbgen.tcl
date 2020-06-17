set moduleName jacobi2d_kernel_entry118311
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 1
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {jacobi2d_kernel.entry118311}
set C_modelType { void 0 }
set C_modelArgList {
	{ coalesced_data_num int 64 regular  }
	{ coalesced_data_num_out int 64 regular {fifo 1}  }
	{ coalesced_data_num_out1 int 64 regular {fifo 1}  }
	{ coalesced_data_num_out2 int 64 regular {fifo 1}  }
	{ coalesced_data_num_out3 int 64 regular {fifo 1}  }
	{ var_output_0_0_V int 32 regular  }
	{ var_output_0_1_V int 32 regular  }
	{ var_output_0_2_V int 32 regular  }
	{ var_output_0_3_V int 32 regular  }
	{ var_input_0_0_V int 32 regular  }
	{ var_input_0_1_V int 32 regular  }
	{ var_input_0_2_V int 32 regular  }
	{ var_input_0_3_V int 32 regular  }
	{ var_output_0_0_V_out int 32 regular {fifo 1}  }
	{ var_output_0_1_V_out int 32 regular {fifo 1}  }
	{ var_output_0_2_V_out int 32 regular {fifo 1}  }
	{ var_output_0_3_V_out int 32 regular {fifo 1}  }
	{ var_input_0_0_V_out int 32 regular {fifo 1}  }
	{ var_input_0_1_V_out int 32 regular {fifo 1}  }
	{ var_input_0_2_V_out int 32 regular {fifo 1}  }
	{ var_input_0_3_V_out int 32 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "coalesced_data_num", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "coalesced_data_num_out", "interface" : "fifo", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "coalesced_data_num_out1", "interface" : "fifo", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "coalesced_data_num_out2", "interface" : "fifo", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "coalesced_data_num_out3", "interface" : "fifo", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "var_output_0_0_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "var_output_0_1_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "var_output_0_2_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "var_output_0_3_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "var_input_0_0_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "var_input_0_1_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "var_input_0_2_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "var_input_0_3_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "var_output_0_0_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "var_output_0_1_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "var_output_0_2_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "var_output_0_3_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "var_input_0_0_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "var_input_0_1_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "var_input_0_2_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "var_input_0_3_V_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 55
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ coalesced_data_num sc_in sc_lv 64 signal 0 } 
	{ coalesced_data_num_out_din sc_out sc_lv 64 signal 1 } 
	{ coalesced_data_num_out_full_n sc_in sc_logic 1 signal 1 } 
	{ coalesced_data_num_out_write sc_out sc_logic 1 signal 1 } 
	{ coalesced_data_num_out1_din sc_out sc_lv 64 signal 2 } 
	{ coalesced_data_num_out1_full_n sc_in sc_logic 1 signal 2 } 
	{ coalesced_data_num_out1_write sc_out sc_logic 1 signal 2 } 
	{ coalesced_data_num_out2_din sc_out sc_lv 64 signal 3 } 
	{ coalesced_data_num_out2_full_n sc_in sc_logic 1 signal 3 } 
	{ coalesced_data_num_out2_write sc_out sc_logic 1 signal 3 } 
	{ coalesced_data_num_out3_din sc_out sc_lv 64 signal 4 } 
	{ coalesced_data_num_out3_full_n sc_in sc_logic 1 signal 4 } 
	{ coalesced_data_num_out3_write sc_out sc_logic 1 signal 4 } 
	{ var_output_0_0_V sc_in sc_lv 32 signal 5 } 
	{ var_output_0_1_V sc_in sc_lv 32 signal 6 } 
	{ var_output_0_2_V sc_in sc_lv 32 signal 7 } 
	{ var_output_0_3_V sc_in sc_lv 32 signal 8 } 
	{ var_input_0_0_V sc_in sc_lv 32 signal 9 } 
	{ var_input_0_1_V sc_in sc_lv 32 signal 10 } 
	{ var_input_0_2_V sc_in sc_lv 32 signal 11 } 
	{ var_input_0_3_V sc_in sc_lv 32 signal 12 } 
	{ var_output_0_0_V_out_din sc_out sc_lv 32 signal 13 } 
	{ var_output_0_0_V_out_full_n sc_in sc_logic 1 signal 13 } 
	{ var_output_0_0_V_out_write sc_out sc_logic 1 signal 13 } 
	{ var_output_0_1_V_out_din sc_out sc_lv 32 signal 14 } 
	{ var_output_0_1_V_out_full_n sc_in sc_logic 1 signal 14 } 
	{ var_output_0_1_V_out_write sc_out sc_logic 1 signal 14 } 
	{ var_output_0_2_V_out_din sc_out sc_lv 32 signal 15 } 
	{ var_output_0_2_V_out_full_n sc_in sc_logic 1 signal 15 } 
	{ var_output_0_2_V_out_write sc_out sc_logic 1 signal 15 } 
	{ var_output_0_3_V_out_din sc_out sc_lv 32 signal 16 } 
	{ var_output_0_3_V_out_full_n sc_in sc_logic 1 signal 16 } 
	{ var_output_0_3_V_out_write sc_out sc_logic 1 signal 16 } 
	{ var_input_0_0_V_out_din sc_out sc_lv 32 signal 17 } 
	{ var_input_0_0_V_out_full_n sc_in sc_logic 1 signal 17 } 
	{ var_input_0_0_V_out_write sc_out sc_logic 1 signal 17 } 
	{ var_input_0_1_V_out_din sc_out sc_lv 32 signal 18 } 
	{ var_input_0_1_V_out_full_n sc_in sc_logic 1 signal 18 } 
	{ var_input_0_1_V_out_write sc_out sc_logic 1 signal 18 } 
	{ var_input_0_2_V_out_din sc_out sc_lv 32 signal 19 } 
	{ var_input_0_2_V_out_full_n sc_in sc_logic 1 signal 19 } 
	{ var_input_0_2_V_out_write sc_out sc_logic 1 signal 19 } 
	{ var_input_0_3_V_out_din sc_out sc_lv 32 signal 20 } 
	{ var_input_0_3_V_out_full_n sc_in sc_logic 1 signal 20 } 
	{ var_input_0_3_V_out_write sc_out sc_logic 1 signal 20 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "coalesced_data_num", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "coalesced_data_num", "role": "default" }} , 
 	{ "name": "coalesced_data_num_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "coalesced_data_num_out", "role": "din" }} , 
 	{ "name": "coalesced_data_num_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num_out", "role": "full_n" }} , 
 	{ "name": "coalesced_data_num_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num_out", "role": "write" }} , 
 	{ "name": "coalesced_data_num_out1_din", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "coalesced_data_num_out1", "role": "din" }} , 
 	{ "name": "coalesced_data_num_out1_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num_out1", "role": "full_n" }} , 
 	{ "name": "coalesced_data_num_out1_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num_out1", "role": "write" }} , 
 	{ "name": "coalesced_data_num_out2_din", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "coalesced_data_num_out2", "role": "din" }} , 
 	{ "name": "coalesced_data_num_out2_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num_out2", "role": "full_n" }} , 
 	{ "name": "coalesced_data_num_out2_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num_out2", "role": "write" }} , 
 	{ "name": "coalesced_data_num_out3_din", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "coalesced_data_num_out3", "role": "din" }} , 
 	{ "name": "coalesced_data_num_out3_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num_out3", "role": "full_n" }} , 
 	{ "name": "coalesced_data_num_out3_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num_out3", "role": "write" }} , 
 	{ "name": "var_output_0_0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_output_0_0_V", "role": "default" }} , 
 	{ "name": "var_output_0_1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_output_0_1_V", "role": "default" }} , 
 	{ "name": "var_output_0_2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_output_0_2_V", "role": "default" }} , 
 	{ "name": "var_output_0_3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_output_0_3_V", "role": "default" }} , 
 	{ "name": "var_input_0_0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "default" }} , 
 	{ "name": "var_input_0_1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_1_V", "role": "default" }} , 
 	{ "name": "var_input_0_2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_2_V", "role": "default" }} , 
 	{ "name": "var_input_0_3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_3_V", "role": "default" }} , 
 	{ "name": "var_output_0_0_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_output_0_0_V_out", "role": "din" }} , 
 	{ "name": "var_output_0_0_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_output_0_0_V_out", "role": "full_n" }} , 
 	{ "name": "var_output_0_0_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_output_0_0_V_out", "role": "write" }} , 
 	{ "name": "var_output_0_1_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_output_0_1_V_out", "role": "din" }} , 
 	{ "name": "var_output_0_1_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_output_0_1_V_out", "role": "full_n" }} , 
 	{ "name": "var_output_0_1_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_output_0_1_V_out", "role": "write" }} , 
 	{ "name": "var_output_0_2_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_output_0_2_V_out", "role": "din" }} , 
 	{ "name": "var_output_0_2_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_output_0_2_V_out", "role": "full_n" }} , 
 	{ "name": "var_output_0_2_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_output_0_2_V_out", "role": "write" }} , 
 	{ "name": "var_output_0_3_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_output_0_3_V_out", "role": "din" }} , 
 	{ "name": "var_output_0_3_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_output_0_3_V_out", "role": "full_n" }} , 
 	{ "name": "var_output_0_3_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_output_0_3_V_out", "role": "write" }} , 
 	{ "name": "var_input_0_0_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_0_V_out", "role": "din" }} , 
 	{ "name": "var_input_0_0_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V_out", "role": "full_n" }} , 
 	{ "name": "var_input_0_0_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V_out", "role": "write" }} , 
 	{ "name": "var_input_0_1_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_1_V_out", "role": "din" }} , 
 	{ "name": "var_input_0_1_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_1_V_out", "role": "full_n" }} , 
 	{ "name": "var_input_0_1_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_1_V_out", "role": "write" }} , 
 	{ "name": "var_input_0_2_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_2_V_out", "role": "din" }} , 
 	{ "name": "var_input_0_2_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_2_V_out", "role": "full_n" }} , 
 	{ "name": "var_input_0_2_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_2_V_out", "role": "write" }} , 
 	{ "name": "var_input_0_3_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_3_V_out", "role": "din" }} , 
 	{ "name": "var_input_0_3_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_3_V_out", "role": "full_n" }} , 
 	{ "name": "var_input_0_3_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_3_V_out", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "jacobi2d_kernel_entry118311",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "coalesced_data_num", "Type" : "None", "Direction" : "I"},
			{"Name" : "coalesced_data_num_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "coalesced_data_num_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "coalesced_data_num_out1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "coalesced_data_num_out1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "coalesced_data_num_out2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "coalesced_data_num_out2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "coalesced_data_num_out3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "coalesced_data_num_out3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "var_output_0_0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "var_output_0_1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "var_output_0_2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "var_output_0_3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "var_input_0_0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "var_input_0_1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "var_input_0_2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "var_input_0_3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "var_output_0_0_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "var_output_0_0_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "var_output_0_1_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "var_output_0_1_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "var_output_0_2_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "var_output_0_2_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "var_output_0_3_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "var_output_0_3_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "var_input_0_0_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "var_input_0_0_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "var_input_0_1_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "var_input_0_1_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "var_input_0_2_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "var_input_0_2_V_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "var_input_0_3_V_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "var_input_0_3_V_out_blk_n", "Type" : "RtlSignal"}]}]}]}


set ArgLastReadFirstWriteLatency {
	jacobi2d_kernel_entry118311 {
		coalesced_data_num {Type I LastRead 0 FirstWrite -1}
		coalesced_data_num_out {Type O LastRead -1 FirstWrite 0}
		coalesced_data_num_out1 {Type O LastRead -1 FirstWrite 0}
		coalesced_data_num_out2 {Type O LastRead -1 FirstWrite 0}
		coalesced_data_num_out3 {Type O LastRead -1 FirstWrite 0}
		var_output_0_0_V {Type I LastRead 0 FirstWrite -1}
		var_output_0_1_V {Type I LastRead 0 FirstWrite -1}
		var_output_0_2_V {Type I LastRead 0 FirstWrite -1}
		var_output_0_3_V {Type I LastRead 0 FirstWrite -1}
		var_input_0_0_V {Type I LastRead 0 FirstWrite -1}
		var_input_0_1_V {Type I LastRead 0 FirstWrite -1}
		var_input_0_2_V {Type I LastRead 0 FirstWrite -1}
		var_input_0_3_V {Type I LastRead 0 FirstWrite -1}
		var_output_0_0_V_out {Type O LastRead -1 FirstWrite 0}
		var_output_0_1_V_out {Type O LastRead -1 FirstWrite 0}
		var_output_0_2_V_out {Type O LastRead -1 FirstWrite 0}
		var_output_0_3_V_out {Type O LastRead -1 FirstWrite 0}
		var_input_0_0_V_out {Type O LastRead -1 FirstWrite 0}
		var_input_0_1_V_out {Type O LastRead -1 FirstWrite 0}
		var_input_0_2_V_out {Type O LastRead -1 FirstWrite 0}
		var_input_0_3_V_out {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	coalesced_data_num { ap_none {  { coalesced_data_num in_data 0 64 } } }
	coalesced_data_num_out { ap_fifo {  { coalesced_data_num_out_din fifo_data 1 64 }  { coalesced_data_num_out_full_n fifo_status 0 1 }  { coalesced_data_num_out_write fifo_update 1 1 } } }
	coalesced_data_num_out1 { ap_fifo {  { coalesced_data_num_out1_din fifo_data 1 64 }  { coalesced_data_num_out1_full_n fifo_status 0 1 }  { coalesced_data_num_out1_write fifo_update 1 1 } } }
	coalesced_data_num_out2 { ap_fifo {  { coalesced_data_num_out2_din fifo_data 1 64 }  { coalesced_data_num_out2_full_n fifo_status 0 1 }  { coalesced_data_num_out2_write fifo_update 1 1 } } }
	coalesced_data_num_out3 { ap_fifo {  { coalesced_data_num_out3_din fifo_data 1 64 }  { coalesced_data_num_out3_full_n fifo_status 0 1 }  { coalesced_data_num_out3_write fifo_update 1 1 } } }
	var_output_0_0_V { ap_none {  { var_output_0_0_V in_data 0 32 } } }
	var_output_0_1_V { ap_none {  { var_output_0_1_V in_data 0 32 } } }
	var_output_0_2_V { ap_none {  { var_output_0_2_V in_data 0 32 } } }
	var_output_0_3_V { ap_none {  { var_output_0_3_V in_data 0 32 } } }
	var_input_0_0_V { ap_none {  { var_input_0_0_V in_data 0 32 } } }
	var_input_0_1_V { ap_none {  { var_input_0_1_V in_data 0 32 } } }
	var_input_0_2_V { ap_none {  { var_input_0_2_V in_data 0 32 } } }
	var_input_0_3_V { ap_none {  { var_input_0_3_V in_data 0 32 } } }
	var_output_0_0_V_out { ap_fifo {  { var_output_0_0_V_out_din fifo_data 1 32 }  { var_output_0_0_V_out_full_n fifo_status 0 1 }  { var_output_0_0_V_out_write fifo_update 1 1 } } }
	var_output_0_1_V_out { ap_fifo {  { var_output_0_1_V_out_din fifo_data 1 32 }  { var_output_0_1_V_out_full_n fifo_status 0 1 }  { var_output_0_1_V_out_write fifo_update 1 1 } } }
	var_output_0_2_V_out { ap_fifo {  { var_output_0_2_V_out_din fifo_data 1 32 }  { var_output_0_2_V_out_full_n fifo_status 0 1 }  { var_output_0_2_V_out_write fifo_update 1 1 } } }
	var_output_0_3_V_out { ap_fifo {  { var_output_0_3_V_out_din fifo_data 1 32 }  { var_output_0_3_V_out_full_n fifo_status 0 1 }  { var_output_0_3_V_out_write fifo_update 1 1 } } }
	var_input_0_0_V_out { ap_fifo {  { var_input_0_0_V_out_din fifo_data 1 32 }  { var_input_0_0_V_out_full_n fifo_status 0 1 }  { var_input_0_0_V_out_write fifo_update 1 1 } } }
	var_input_0_1_V_out { ap_fifo {  { var_input_0_1_V_out_din fifo_data 1 32 }  { var_input_0_1_V_out_full_n fifo_status 0 1 }  { var_input_0_1_V_out_write fifo_update 1 1 } } }
	var_input_0_2_V_out { ap_fifo {  { var_input_0_2_V_out_din fifo_data 1 32 }  { var_input_0_2_V_out_full_n fifo_status 0 1 }  { var_input_0_2_V_out_write fifo_update 1 1 } } }
	var_input_0_3_V_out { ap_fifo {  { var_input_0_3_V_out_din fifo_data 1 32 }  { var_input_0_3_V_out_full_n fifo_status 0 1 }  { var_input_0_3_V_out_write fifo_update 1 1 } } }
}
