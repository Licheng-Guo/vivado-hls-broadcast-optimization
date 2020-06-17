# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 35 \
    name to_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_to_V_V \
    op interface \
    ports { to_V_V_din { O 512 vector } to_V_V_full_n { I 1 bit } to_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 36 \
    name from_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_from_V \
    op interface \
    ports { m_axi_from_V_AWVALID { O 1 bit } m_axi_from_V_AWREADY { I 1 bit } m_axi_from_V_AWADDR { O 32 vector } m_axi_from_V_AWID { O 1 vector } m_axi_from_V_AWLEN { O 32 vector } m_axi_from_V_AWSIZE { O 3 vector } m_axi_from_V_AWBURST { O 2 vector } m_axi_from_V_AWLOCK { O 2 vector } m_axi_from_V_AWCACHE { O 4 vector } m_axi_from_V_AWPROT { O 3 vector } m_axi_from_V_AWQOS { O 4 vector } m_axi_from_V_AWREGION { O 4 vector } m_axi_from_V_AWUSER { O 1 vector } m_axi_from_V_WVALID { O 1 bit } m_axi_from_V_WREADY { I 1 bit } m_axi_from_V_WDATA { O 512 vector } m_axi_from_V_WSTRB { O 64 vector } m_axi_from_V_WLAST { O 1 bit } m_axi_from_V_WID { O 1 vector } m_axi_from_V_WUSER { O 1 vector } m_axi_from_V_ARVALID { O 1 bit } m_axi_from_V_ARREADY { I 1 bit } m_axi_from_V_ARADDR { O 32 vector } m_axi_from_V_ARID { O 1 vector } m_axi_from_V_ARLEN { O 32 vector } m_axi_from_V_ARSIZE { O 3 vector } m_axi_from_V_ARBURST { O 2 vector } m_axi_from_V_ARLOCK { O 2 vector } m_axi_from_V_ARCACHE { O 4 vector } m_axi_from_V_ARPROT { O 3 vector } m_axi_from_V_ARQOS { O 4 vector } m_axi_from_V_ARREGION { O 4 vector } m_axi_from_V_ARUSER { O 1 vector } m_axi_from_V_RVALID { I 1 bit } m_axi_from_V_RREADY { O 1 bit } m_axi_from_V_RDATA { I 512 vector } m_axi_from_V_RLAST { I 1 bit } m_axi_from_V_RID { I 1 vector } m_axi_from_V_RUSER { I 1 vector } m_axi_from_V_RRESP { I 2 vector } m_axi_from_V_BVALID { I 1 bit } m_axi_from_V_BREADY { O 1 bit } m_axi_from_V_BRESP { I 2 vector } m_axi_from_V_BID { I 1 vector } m_axi_from_V_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 37 \
    name from_V_offset \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_from_V_offset \
    op interface \
    ports { from_V_offset_dout { I 32 vector } from_V_offset_empty_n { I 1 bit } from_V_offset_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 38 \
    name coalesced_data_num \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_coalesced_data_num \
    op interface \
    ports { coalesced_data_num_dout { I 64 vector } coalesced_data_num_empty_n { I 1 bit } coalesced_data_num_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


