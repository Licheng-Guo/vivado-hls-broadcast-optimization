set moduleName load35
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {load35}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_stream_0_0_V_V int 512 regular {fifo 1 volatile }  }
	{ var_input_0_0_V int 512 regular {axi_master 0}  }
	{ var_input_0_0_V_offset int 32 regular {fifo 0}  }
	{ coalesced_data_num int 64 regular {fifo 0}  }
	{ coalesced_data_num_out int 64 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_stream_0_0_V_V", "interface" : "fifo", "bitwidth" : 512, "direction" : "WRITEONLY"} , 
 	{ "Name" : "var_input_0_0_V", "interface" : "axi_master", "bitwidth" : 512, "direction" : "READONLY"} , 
 	{ "Name" : "var_input_0_0_V_offset", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "coalesced_data_num", "interface" : "fifo", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "coalesced_data_num_out", "interface" : "fifo", "bitwidth" : 64, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 67
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
	{ input_stream_0_0_V_V_din sc_out sc_lv 512 signal 0 } 
	{ input_stream_0_0_V_V_full_n sc_in sc_logic 1 signal 0 } 
	{ input_stream_0_0_V_V_write sc_out sc_logic 1 signal 0 } 
	{ m_axi_var_input_0_0_V_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_var_input_0_0_V_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_var_input_0_0_V_AWLEN sc_out sc_lv 32 signal 1 } 
	{ m_axi_var_input_0_0_V_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_var_input_0_0_V_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_var_input_0_0_V_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_var_input_0_0_V_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_var_input_0_0_V_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_var_input_0_0_V_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_var_input_0_0_V_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_var_input_0_0_V_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_var_input_0_0_V_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_WDATA sc_out sc_lv 512 signal 1 } 
	{ m_axi_var_input_0_0_V_WSTRB sc_out sc_lv 64 signal 1 } 
	{ m_axi_var_input_0_0_V_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_var_input_0_0_V_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_var_input_0_0_V_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_var_input_0_0_V_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_var_input_0_0_V_ARLEN sc_out sc_lv 32 signal 1 } 
	{ m_axi_var_input_0_0_V_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_var_input_0_0_V_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_var_input_0_0_V_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_var_input_0_0_V_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_var_input_0_0_V_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_var_input_0_0_V_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_var_input_0_0_V_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_var_input_0_0_V_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_var_input_0_0_V_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_RDATA sc_in sc_lv 512 signal 1 } 
	{ m_axi_var_input_0_0_V_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_var_input_0_0_V_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_var_input_0_0_V_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_var_input_0_0_V_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_var_input_0_0_V_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_var_input_0_0_V_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_var_input_0_0_V_BUSER sc_in sc_lv 1 signal 1 } 
	{ var_input_0_0_V_offset_dout sc_in sc_lv 32 signal 2 } 
	{ var_input_0_0_V_offset_empty_n sc_in sc_logic 1 signal 2 } 
	{ var_input_0_0_V_offset_read sc_out sc_logic 1 signal 2 } 
	{ coalesced_data_num_dout sc_in sc_lv 64 signal 3 } 
	{ coalesced_data_num_empty_n sc_in sc_logic 1 signal 3 } 
	{ coalesced_data_num_read sc_out sc_logic 1 signal 3 } 
	{ coalesced_data_num_out_din sc_out sc_lv 64 signal 4 } 
	{ coalesced_data_num_out_full_n sc_in sc_logic 1 signal 4 } 
	{ coalesced_data_num_out_write sc_out sc_logic 1 signal 4 } 
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
 	{ "name": "input_stream_0_0_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "input_stream_0_0_V_V", "role": "din" }} , 
 	{ "name": "input_stream_0_0_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_stream_0_0_V_V", "role": "full_n" }} , 
 	{ "name": "input_stream_0_0_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_stream_0_0_V_V", "role": "write" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWID" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_var_input_0_0_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_var_input_0_0_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_var_input_0_0_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_var_input_0_0_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_var_input_0_0_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_var_input_0_0_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_var_input_0_0_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "WID" }} , 
 	{ "name": "m_axi_var_input_0_0_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARID" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_var_input_0_0_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_var_input_0_0_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_var_input_0_0_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_var_input_0_0_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":512, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_var_input_0_0_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_var_input_0_0_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "RID" }} , 
 	{ "name": "m_axi_var_input_0_0_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_var_input_0_0_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_var_input_0_0_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_var_input_0_0_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_var_input_0_0_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_var_input_0_0_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "BID" }} , 
 	{ "name": "m_axi_var_input_0_0_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V", "role": "BUSER" }} , 
 	{ "name": "var_input_0_0_V_offset_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "var_input_0_0_V_offset", "role": "dout" }} , 
 	{ "name": "var_input_0_0_V_offset_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V_offset", "role": "empty_n" }} , 
 	{ "name": "var_input_0_0_V_offset_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "var_input_0_0_V_offset", "role": "read" }} , 
 	{ "name": "coalesced_data_num_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "coalesced_data_num", "role": "dout" }} , 
 	{ "name": "coalesced_data_num_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num", "role": "empty_n" }} , 
 	{ "name": "coalesced_data_num_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num", "role": "read" }} , 
 	{ "name": "coalesced_data_num_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "coalesced_data_num_out", "role": "din" }} , 
 	{ "name": "coalesced_data_num_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num_out", "role": "full_n" }} , 
 	{ "name": "coalesced_data_num_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "coalesced_data_num_out", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "load35",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "1",
		"Port" : [
			{"Name" : "input_stream_0_0_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "var_input_0_0_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "var_input_0_0_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "var_input_0_0_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "var_input_0_0_V_offset", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "var_input_0_0_V_offset_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "coalesced_data_num", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "coalesced_data_num_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "coalesced_data_num_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "coalesced_data_num_out_blk_n", "Type" : "RtlSignal"}]}]}]}


set ArgLastReadFirstWriteLatency {
	load35 {
		input_stream_0_0_V_V {Type O LastRead 129 FirstWrite -1}
		var_input_0_0_V {Type I LastRead 128 FirstWrite -1}
		var_input_0_0_V_offset {Type I LastRead 0 FirstWrite -1}
		coalesced_data_num {Type I LastRead 0 FirstWrite -1}
		coalesced_data_num_out {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	input_stream_0_0_V_V { ap_fifo {  { input_stream_0_0_V_V_din fifo_data 1 512 }  { input_stream_0_0_V_V_full_n fifo_status 0 1 }  { input_stream_0_0_V_V_write fifo_update 1 1 } } }
	var_input_0_0_V { m_axi {  { m_axi_var_input_0_0_V_AWVALID VALID 1 1 }  { m_axi_var_input_0_0_V_AWREADY READY 0 1 }  { m_axi_var_input_0_0_V_AWADDR ADDR 1 32 }  { m_axi_var_input_0_0_V_AWID ID 1 1 }  { m_axi_var_input_0_0_V_AWLEN LEN 1 32 }  { m_axi_var_input_0_0_V_AWSIZE SIZE 1 3 }  { m_axi_var_input_0_0_V_AWBURST BURST 1 2 }  { m_axi_var_input_0_0_V_AWLOCK LOCK 1 2 }  { m_axi_var_input_0_0_V_AWCACHE CACHE 1 4 }  { m_axi_var_input_0_0_V_AWPROT PROT 1 3 }  { m_axi_var_input_0_0_V_AWQOS QOS 1 4 }  { m_axi_var_input_0_0_V_AWREGION REGION 1 4 }  { m_axi_var_input_0_0_V_AWUSER USER 1 1 }  { m_axi_var_input_0_0_V_WVALID VALID 1 1 }  { m_axi_var_input_0_0_V_WREADY READY 0 1 }  { m_axi_var_input_0_0_V_WDATA DATA 1 512 }  { m_axi_var_input_0_0_V_WSTRB STRB 1 64 }  { m_axi_var_input_0_0_V_WLAST LAST 1 1 }  { m_axi_var_input_0_0_V_WID ID 1 1 }  { m_axi_var_input_0_0_V_WUSER USER 1 1 }  { m_axi_var_input_0_0_V_ARVALID VALID 1 1 }  { m_axi_var_input_0_0_V_ARREADY READY 0 1 }  { m_axi_var_input_0_0_V_ARADDR ADDR 1 32 }  { m_axi_var_input_0_0_V_ARID ID 1 1 }  { m_axi_var_input_0_0_V_ARLEN LEN 1 32 }  { m_axi_var_input_0_0_V_ARSIZE SIZE 1 3 }  { m_axi_var_input_0_0_V_ARBURST BURST 1 2 }  { m_axi_var_input_0_0_V_ARLOCK LOCK 1 2 }  { m_axi_var_input_0_0_V_ARCACHE CACHE 1 4 }  { m_axi_var_input_0_0_V_ARPROT PROT 1 3 }  { m_axi_var_input_0_0_V_ARQOS QOS 1 4 }  { m_axi_var_input_0_0_V_ARREGION REGION 1 4 }  { m_axi_var_input_0_0_V_ARUSER USER 1 1 }  { m_axi_var_input_0_0_V_RVALID VALID 0 1 }  { m_axi_var_input_0_0_V_RREADY READY 1 1 }  { m_axi_var_input_0_0_V_RDATA DATA 0 512 }  { m_axi_var_input_0_0_V_RLAST LAST 0 1 }  { m_axi_var_input_0_0_V_RID ID 0 1 }  { m_axi_var_input_0_0_V_RUSER USER 0 1 }  { m_axi_var_input_0_0_V_RRESP RESP 0 2 }  { m_axi_var_input_0_0_V_BVALID VALID 0 1 }  { m_axi_var_input_0_0_V_BREADY READY 1 1 }  { m_axi_var_input_0_0_V_BRESP RESP 0 2 }  { m_axi_var_input_0_0_V_BID ID 0 1 }  { m_axi_var_input_0_0_V_BUSER USER 0 1 } } }
	var_input_0_0_V_offset { ap_fifo {  { var_input_0_0_V_offset_dout fifo_data 0 32 }  { var_input_0_0_V_offset_empty_n fifo_status 0 1 }  { var_input_0_0_V_offset_read fifo_update 1 1 } } }
	coalesced_data_num { ap_fifo {  { coalesced_data_num_dout fifo_data 0 64 }  { coalesced_data_num_empty_n fifo_status 0 1 }  { coalesced_data_num_read fifo_update 1 1 } } }
	coalesced_data_num_out { ap_fifo {  { coalesced_data_num_out_din fifo_data 1 64 }  { coalesced_data_num_out_full_n fifo_status 0 1 }  { coalesced_data_num_out_write fifo_update 1 1 } } }
}
