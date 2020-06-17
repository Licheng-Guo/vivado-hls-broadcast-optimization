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
    id 1 \
    name coalesced_data_num \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_coalesced_data_num \
    op interface \
    ports { coalesced_data_num { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2 \
    name coalesced_data_num_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_coalesced_data_num_out \
    op interface \
    ports { coalesced_data_num_out_din { O 64 vector } coalesced_data_num_out_full_n { I 1 bit } coalesced_data_num_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3 \
    name coalesced_data_num_out1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_coalesced_data_num_out1 \
    op interface \
    ports { coalesced_data_num_out1_din { O 64 vector } coalesced_data_num_out1_full_n { I 1 bit } coalesced_data_num_out1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name coalesced_data_num_out2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_coalesced_data_num_out2 \
    op interface \
    ports { coalesced_data_num_out2_din { O 64 vector } coalesced_data_num_out2_full_n { I 1 bit } coalesced_data_num_out2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name coalesced_data_num_out3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_coalesced_data_num_out3 \
    op interface \
    ports { coalesced_data_num_out3_din { O 64 vector } coalesced_data_num_out3_full_n { I 1 bit } coalesced_data_num_out3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name var_output_0_0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_var_output_0_0_V \
    op interface \
    ports { var_output_0_0_V { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 7 \
    name var_output_0_1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_var_output_0_1_V \
    op interface \
    ports { var_output_0_1_V { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8 \
    name var_output_0_2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_var_output_0_2_V \
    op interface \
    ports { var_output_0_2_V { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name var_output_0_3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_var_output_0_3_V \
    op interface \
    ports { var_output_0_3_V { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name var_input_0_0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_var_input_0_0_V \
    op interface \
    ports { var_input_0_0_V { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
    name var_input_0_1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_var_input_0_1_V \
    op interface \
    ports { var_input_0_1_V { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 12 \
    name var_input_0_2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_var_input_0_2_V \
    op interface \
    ports { var_input_0_2_V { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 13 \
    name var_input_0_3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_var_input_0_3_V \
    op interface \
    ports { var_input_0_3_V { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name var_output_0_0_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_var_output_0_0_V_out \
    op interface \
    ports { var_output_0_0_V_out_din { O 32 vector } var_output_0_0_V_out_full_n { I 1 bit } var_output_0_0_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name var_output_0_1_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_var_output_0_1_V_out \
    op interface \
    ports { var_output_0_1_V_out_din { O 32 vector } var_output_0_1_V_out_full_n { I 1 bit } var_output_0_1_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 16 \
    name var_output_0_2_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_var_output_0_2_V_out \
    op interface \
    ports { var_output_0_2_V_out_din { O 32 vector } var_output_0_2_V_out_full_n { I 1 bit } var_output_0_2_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 17 \
    name var_output_0_3_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_var_output_0_3_V_out \
    op interface \
    ports { var_output_0_3_V_out_din { O 32 vector } var_output_0_3_V_out_full_n { I 1 bit } var_output_0_3_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name var_input_0_0_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_var_input_0_0_V_out \
    op interface \
    ports { var_input_0_0_V_out_din { O 32 vector } var_input_0_0_V_out_full_n { I 1 bit } var_input_0_0_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name var_input_0_1_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_var_input_0_1_V_out \
    op interface \
    ports { var_input_0_1_V_out_din { O 32 vector } var_input_0_1_V_out_full_n { I 1 bit } var_input_0_1_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name var_input_0_2_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_var_input_0_2_V_out \
    op interface \
    ports { var_input_0_2_V_out_din { O 32 vector } var_input_0_2_V_out_full_n { I 1 bit } var_input_0_2_V_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name var_input_0_3_V_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_var_input_0_3_V_out \
    op interface \
    ports { var_input_0_3_V_out_din { O 32 vector } var_input_0_3_V_out_full_n { I 1 bit } var_input_0_3_V_out_write { O 1 bit } } \
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
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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


