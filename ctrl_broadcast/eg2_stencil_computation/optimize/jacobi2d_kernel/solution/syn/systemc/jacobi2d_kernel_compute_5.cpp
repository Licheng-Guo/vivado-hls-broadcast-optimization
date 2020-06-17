#include "jacobi2d_kernel_compute.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_81_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_81_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_81_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_81_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_81_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_81_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_82_address0() {
    FIFO_125_t1_iter3_chan_0_82_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_82_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_82_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_82_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_82_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_82_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_82_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_82_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_82_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_83_address0() {
    FIFO_125_t1_iter3_chan_0_83_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_83_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_83_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_83_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_83_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_83_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_83_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_83_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_83_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_84_address0() {
    FIFO_125_t1_iter3_chan_0_84_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_84_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_84_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_84_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_84_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_84_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_84_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_84_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_84_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_84_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_85_address0() {
    FIFO_125_t1_iter3_chan_0_85_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_85_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_85_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_85_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_85_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_85_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_85_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_85_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_85_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_85_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_86_address0() {
    FIFO_125_t1_iter3_chan_0_86_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_86_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_86_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_86_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_86_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_86_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_86_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_86_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_86_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_86_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_87_address0() {
    FIFO_125_t1_iter3_chan_0_87_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_87_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_87_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_87_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_87_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_87_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_87_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_87_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_87_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_87_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_88_address0() {
    FIFO_125_t1_iter3_chan_0_88_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_88_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_88_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_88_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_88_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_88_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_88_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_88_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_88_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_88_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_89_address0() {
    FIFO_125_t1_iter3_chan_0_89_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_89_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_89_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_89_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_89_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_89_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_89_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_89_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_89_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_89_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_8_address0() {
    FIFO_125_t1_iter3_chan_0_8_address0 =  (sc_lv<7>) (tmp_6_i_fu_38956_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter153.read()))) {
        FIFO_125_t1_iter3_chan_0_8_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_8_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter155.read()))) {
        FIFO_125_t1_iter3_chan_0_8_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_8_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_8_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter154_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter155.read()))) {
        FIFO_125_t1_iter3_chan_0_8_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_8_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_90_address0() {
    FIFO_125_t1_iter3_chan_0_90_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_90_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_90_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_90_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_90_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_90_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_90_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_90_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_90_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_90_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_91_address0() {
    FIFO_125_t1_iter3_chan_0_91_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_91_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_91_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_91_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_91_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_91_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_91_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_91_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_91_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_91_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_92_address0() {
    FIFO_125_t1_iter3_chan_0_92_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_92_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_92_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_92_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_92_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_92_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_92_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_92_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_92_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_92_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_93_address0() {
    FIFO_125_t1_iter3_chan_0_93_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_93_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_93_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_93_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_93_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_93_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_93_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_93_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_93_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_93_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_94_address0() {
    FIFO_125_t1_iter3_chan_0_94_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_94_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_94_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_94_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_94_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_94_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_94_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_94_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_94_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_94_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_95_address0() {
    FIFO_125_t1_iter3_chan_0_95_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_95_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_95_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_95_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_95_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_95_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_95_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_95_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_95_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_95_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_96_address0() {
    FIFO_125_t1_iter3_chan_0_96_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_96_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_96_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_96_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_96_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_96_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_96_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_96_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_96_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_97_address0() {
    FIFO_125_t1_iter3_chan_0_97_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_97_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_97_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_97_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_97_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_97_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_97_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_97_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_97_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_97_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_98_address0() {
    FIFO_125_t1_iter3_chan_0_98_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_98_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_98_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_98_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_98_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_98_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_98_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_98_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_98_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_98_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_99_address0() {
    FIFO_125_t1_iter3_chan_0_99_address0 =  (sc_lv<7>) (tmp_6_i_reg_55579_pp0_iter174_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_99_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter175.read()))) {
        FIFO_125_t1_iter3_chan_0_99_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_99_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_99_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()))) {
        FIFO_125_t1_iter3_chan_0_99_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_99_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_99_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter176.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter175_reg.read()))) {
        FIFO_125_t1_iter3_chan_0_99_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_99_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_9_address0() {
    FIFO_125_t1_iter3_chan_0_9_address0 =  (sc_lv<7>) (tmp_6_i_fu_38956_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter153.read()))) {
        FIFO_125_t1_iter3_chan_0_9_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_9_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter155.read()))) {
        FIFO_125_t1_iter3_chan_0_9_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_9_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_chan_0_9_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter154_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter155.read()))) {
        FIFO_125_t1_iter3_chan_0_9_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter3_chan_0_9_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter3_ptr_fu_39041_p3() {
    FIFO_125_t1_iter3_ptr_fu_39041_p3 = (!tmp_44_i_fu_39029_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_44_i_fu_39029_p2.read()[0].to_bool())? ap_const_lv8_0: tmp_45_i_fu_39035_p2.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_0_address0() {
    FIFO_125_t1_iter4_chan_0_0_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_0_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_0_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_0_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_0_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_0_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_0_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_0_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_100_address0() {
    FIFO_125_t1_iter4_chan_0_100_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_100_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_100_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_100_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_100_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_100_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_100_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_100_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_100_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_100_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_101_address0() {
    FIFO_125_t1_iter4_chan_0_101_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_101_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_101_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_101_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_101_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_101_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_101_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_101_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_101_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_101_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_102_address0() {
    FIFO_125_t1_iter4_chan_0_102_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_102_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_102_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_102_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_102_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_102_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_102_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_102_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_102_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_102_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_103_address0() {
    FIFO_125_t1_iter4_chan_0_103_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_103_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_103_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_103_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_103_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_103_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_103_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_103_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_103_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_103_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_104_address0() {
    FIFO_125_t1_iter4_chan_0_104_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_104_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_104_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_104_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_104_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_104_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_104_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_104_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_104_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_104_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_105_address0() {
    FIFO_125_t1_iter4_chan_0_105_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_105_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_105_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_105_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_105_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_105_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_105_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_105_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_105_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_105_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_106_address0() {
    FIFO_125_t1_iter4_chan_0_106_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_106_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_106_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_106_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_106_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_106_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_106_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_106_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_106_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_106_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_107_address0() {
    FIFO_125_t1_iter4_chan_0_107_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_107_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_107_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_107_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_107_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_107_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_107_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_107_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_107_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_107_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_108_address0() {
    FIFO_125_t1_iter4_chan_0_108_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_108_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_108_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_108_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_108_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_108_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_108_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_108_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_108_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_108_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_109_address0() {
    FIFO_125_t1_iter4_chan_0_109_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_109_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_109_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_109_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_109_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_109_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_109_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_109_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_109_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_109_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_10_address0() {
    FIFO_125_t1_iter4_chan_0_10_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_10_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_10_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_10_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_10_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_10_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_10_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_10_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_110_address0() {
    FIFO_125_t1_iter4_chan_0_110_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_110_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_110_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_110_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_110_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_110_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_110_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_110_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_110_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_110_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_111_address0() {
    FIFO_125_t1_iter4_chan_0_111_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_111_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_111_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_111_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_111_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_111_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_111_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_111_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_111_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_111_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_112_address0() {
    FIFO_125_t1_iter4_chan_0_112_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_112_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_112_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_112_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_112_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_112_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_112_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_112_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_112_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_112_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_113_address0() {
    FIFO_125_t1_iter4_chan_0_113_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_113_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_113_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_113_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_113_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_113_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_113_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_113_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_113_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_113_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_114_address0() {
    FIFO_125_t1_iter4_chan_0_114_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_114_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_114_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_114_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_114_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_114_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_114_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_114_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_114_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_114_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_115_address0() {
    FIFO_125_t1_iter4_chan_0_115_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_115_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_115_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_115_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_115_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_115_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_115_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_115_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_115_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_115_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_116_address0() {
    FIFO_125_t1_iter4_chan_0_116_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_116_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_116_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_116_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_116_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_116_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_116_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_116_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_116_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_116_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_117_address0() {
    FIFO_125_t1_iter4_chan_0_117_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_117_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_117_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_117_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_117_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_117_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_117_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_117_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_117_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_117_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_118_address0() {
    FIFO_125_t1_iter4_chan_0_118_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_118_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_118_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_118_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_118_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_118_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_118_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_118_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_118_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_118_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_119_address0() {
    FIFO_125_t1_iter4_chan_0_119_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_119_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_119_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_119_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_119_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_119_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_119_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_119_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_119_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_119_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_11_address0() {
    FIFO_125_t1_iter4_chan_0_11_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_11_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_11_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_11_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_11_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_11_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_11_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_11_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_120_address0() {
    FIFO_125_t1_iter4_chan_0_120_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_120_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_120_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_120_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_120_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_120_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_120_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_120_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_120_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_120_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_121_address0() {
    FIFO_125_t1_iter4_chan_0_121_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_121_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_121_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_121_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_121_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_121_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_121_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_121_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_121_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_121_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_122_address0() {
    FIFO_125_t1_iter4_chan_0_122_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_122_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_122_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_122_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_122_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_122_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_122_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_122_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_122_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_122_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_123_address0() {
    FIFO_125_t1_iter4_chan_0_123_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_123_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_123_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_123_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_123_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_123_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_123_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_123_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_123_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_123_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_124_address0() {
    FIFO_125_t1_iter4_chan_0_124_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_124_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_124_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_124_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_124_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_124_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_124_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_124_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_124_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_124_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_125_address0() {
    FIFO_125_t1_iter4_chan_0_125_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_125_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_125_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_125_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_125_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_125_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_125_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_125_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_125_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_125_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_12_address0() {
    FIFO_125_t1_iter4_chan_0_12_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_12_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_12_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_12_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_12_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_12_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_12_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_12_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_13_address0() {
    FIFO_125_t1_iter4_chan_0_13_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_13_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_13_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_13_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_13_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_13_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_13_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_13_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_14_address0() {
    FIFO_125_t1_iter4_chan_0_14_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_14_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_14_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_14_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_14_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_14_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_14_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_14_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_15_address0() {
    FIFO_125_t1_iter4_chan_0_15_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_15_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_15_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_15_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_15_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_15_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_15_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_15_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_16_address0() {
    FIFO_125_t1_iter4_chan_0_16_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_16_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_16_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_16_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_16_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_16_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_16_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_16_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_17_address0() {
    FIFO_125_t1_iter4_chan_0_17_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_17_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_17_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_17_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_17_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_17_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_17_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_17_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_18_address0() {
    FIFO_125_t1_iter4_chan_0_18_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_18_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_18_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_18_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_18_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_18_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_18_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_18_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_19_address0() {
    FIFO_125_t1_iter4_chan_0_19_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_19_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_19_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_19_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_19_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_19_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_19_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_19_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_1_address0() {
    FIFO_125_t1_iter4_chan_0_1_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_1_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_1_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_1_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_1_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_1_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_1_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_20_address0() {
    FIFO_125_t1_iter4_chan_0_20_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_20_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_20_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_20_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_20_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_20_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_20_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_20_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_21_address0() {
    FIFO_125_t1_iter4_chan_0_21_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_21_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_21_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_21_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_21_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_21_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_21_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_21_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_22_address0() {
    FIFO_125_t1_iter4_chan_0_22_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_22_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_22_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_22_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_22_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_22_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_22_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_22_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_23_address0() {
    FIFO_125_t1_iter4_chan_0_23_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_23_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_23_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_23_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_23_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_23_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_23_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_23_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_24_address0() {
    FIFO_125_t1_iter4_chan_0_24_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_24_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_24_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_24_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_24_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_24_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_24_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_24_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_25_address0() {
    FIFO_125_t1_iter4_chan_0_25_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_25_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_25_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_25_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_25_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_25_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_25_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_25_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_26_address0() {
    FIFO_125_t1_iter4_chan_0_26_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_26_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_26_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_26_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_26_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_26_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_26_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_26_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_27_address0() {
    FIFO_125_t1_iter4_chan_0_27_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_27_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_27_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_27_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_27_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_27_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_27_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_27_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_28_address0() {
    FIFO_125_t1_iter4_chan_0_28_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_28_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_28_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_28_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_28_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_28_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_28_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_28_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_29_address0() {
    FIFO_125_t1_iter4_chan_0_29_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_29_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_29_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_29_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_29_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_29_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_29_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_29_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_2_address0() {
    FIFO_125_t1_iter4_chan_0_2_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_2_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_2_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_2_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_2_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_2_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_2_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_30_address0() {
    FIFO_125_t1_iter4_chan_0_30_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_30_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_30_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_30_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_30_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_30_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_30_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_30_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_31_address0() {
    FIFO_125_t1_iter4_chan_0_31_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_31_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_31_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_31_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_31_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_31_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_31_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_31_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_32_address0() {
    FIFO_125_t1_iter4_chan_0_32_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_32_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_32_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_32_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_32_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_32_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_32_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_32_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_33_address0() {
    FIFO_125_t1_iter4_chan_0_33_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_33_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_33_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_33_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_33_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_33_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_33_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_33_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_34_address0() {
    FIFO_125_t1_iter4_chan_0_34_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_34_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_34_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_34_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_34_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_34_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_34_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_34_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_35_address0() {
    FIFO_125_t1_iter4_chan_0_35_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_35_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_35_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_35_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_35_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_35_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_35_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_35_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_36_address0() {
    FIFO_125_t1_iter4_chan_0_36_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_36_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_36_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_36_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_36_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_36_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_36_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_36_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_37_address0() {
    FIFO_125_t1_iter4_chan_0_37_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_37_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_37_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_37_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_37_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_37_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_37_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_37_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_38_address0() {
    FIFO_125_t1_iter4_chan_0_38_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_38_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_38_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_38_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_38_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_38_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_38_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_38_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_39_address0() {
    FIFO_125_t1_iter4_chan_0_39_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_39_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_39_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_39_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_39_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_39_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_39_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_39_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_3_address0() {
    FIFO_125_t1_iter4_chan_0_3_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_3_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_3_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_3_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_3_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_3_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_3_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_3_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_40_address0() {
    FIFO_125_t1_iter4_chan_0_40_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_40_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_40_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_40_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_40_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_40_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_40_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_40_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_41_address0() {
    FIFO_125_t1_iter4_chan_0_41_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_41_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_41_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_41_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_41_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_41_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_41_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_41_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_42_address0() {
    FIFO_125_t1_iter4_chan_0_42_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_42_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_42_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_42_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_42_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_42_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_42_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_42_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_43_address0() {
    FIFO_125_t1_iter4_chan_0_43_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_43_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_43_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_43_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_43_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_43_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_43_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_43_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_44_address0() {
    FIFO_125_t1_iter4_chan_0_44_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_44_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_44_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_44_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_44_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_44_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_44_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_44_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_45_address0() {
    FIFO_125_t1_iter4_chan_0_45_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_45_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_45_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_45_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_45_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_45_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_45_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_45_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_46_address0() {
    FIFO_125_t1_iter4_chan_0_46_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_46_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_46_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_46_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_46_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_46_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_46_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_46_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_47_address0() {
    FIFO_125_t1_iter4_chan_0_47_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_47_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_47_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_47_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_47_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_47_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_47_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_47_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_48_address0() {
    FIFO_125_t1_iter4_chan_0_48_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_48_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_48_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_48_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_48_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_48_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_48_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_48_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_49_address0() {
    FIFO_125_t1_iter4_chan_0_49_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_49_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_49_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_49_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_49_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_49_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_49_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_49_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_4_address0() {
    FIFO_125_t1_iter4_chan_0_4_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_4_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_4_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_4_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_4_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_4_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_4_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_4_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_50_address0() {
    FIFO_125_t1_iter4_chan_0_50_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_50_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_50_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_50_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_50_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_50_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_50_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_50_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_51_address0() {
    FIFO_125_t1_iter4_chan_0_51_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_51_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_51_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_51_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_51_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_51_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_51_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_51_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_52_address0() {
    FIFO_125_t1_iter4_chan_0_52_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_52_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_52_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_52_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_52_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_52_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_52_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_52_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_53_address0() {
    FIFO_125_t1_iter4_chan_0_53_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_53_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_53_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_53_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_53_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_53_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_53_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_53_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_54_address0() {
    FIFO_125_t1_iter4_chan_0_54_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_54_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_54_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_54_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_54_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_54_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_54_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_54_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_55_address0() {
    FIFO_125_t1_iter4_chan_0_55_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_55_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_55_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_55_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_55_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_55_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_55_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_55_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_56_address0() {
    FIFO_125_t1_iter4_chan_0_56_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_56_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_56_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_56_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_56_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_56_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_56_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_56_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_57_address0() {
    FIFO_125_t1_iter4_chan_0_57_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_57_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_57_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_57_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_57_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_57_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_57_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_57_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_58_address0() {
    FIFO_125_t1_iter4_chan_0_58_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_58_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_58_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_58_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_58_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_58_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_58_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_58_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_59_address0() {
    FIFO_125_t1_iter4_chan_0_59_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_59_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_59_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_59_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_59_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_59_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_59_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_59_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_5_address0() {
    FIFO_125_t1_iter4_chan_0_5_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_5_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_5_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_5_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_5_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_5_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_5_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_5_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_60_address0() {
    FIFO_125_t1_iter4_chan_0_60_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_60_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_60_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_60_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_60_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_60_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_60_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_60_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_61_address0() {
    FIFO_125_t1_iter4_chan_0_61_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_61_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_61_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_61_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_61_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_61_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_61_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_61_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_62_address0() {
    FIFO_125_t1_iter4_chan_0_62_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_62_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_62_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_62_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_62_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_62_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_62_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_62_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_63_address0() {
    FIFO_125_t1_iter4_chan_0_63_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_63_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_63_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_63_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_63_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_63_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_63_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_63_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_64_address0() {
    FIFO_125_t1_iter4_chan_0_64_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_64_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_64_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_64_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_64_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_64_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_64_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_64_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_64_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_65_address0() {
    FIFO_125_t1_iter4_chan_0_65_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_65_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_65_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_65_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_65_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_65_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_65_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_65_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_65_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_66_address0() {
    FIFO_125_t1_iter4_chan_0_66_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_66_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_66_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_66_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_66_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_66_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_66_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_66_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_66_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_67_address0() {
    FIFO_125_t1_iter4_chan_0_67_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_67_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_67_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_67_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_67_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_67_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_67_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_67_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_67_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_68_address0() {
    FIFO_125_t1_iter4_chan_0_68_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_68_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_68_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_68_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_68_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_68_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_68_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_68_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_68_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_69_address0() {
    FIFO_125_t1_iter4_chan_0_69_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_69_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_69_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_69_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_69_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_69_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_69_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_69_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_69_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_6_address0() {
    FIFO_125_t1_iter4_chan_0_6_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_6_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_6_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_6_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_6_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_6_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_6_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_6_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_70_address0() {
    FIFO_125_t1_iter4_chan_0_70_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_70_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_70_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_70_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_70_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_70_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_70_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_70_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_70_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_71_address0() {
    FIFO_125_t1_iter4_chan_0_71_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_71_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_71_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_71_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_71_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_71_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_71_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_71_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_71_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_72_address0() {
    FIFO_125_t1_iter4_chan_0_72_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_72_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_72_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_72_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_72_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_72_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_72_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_72_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_72_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_73_address0() {
    FIFO_125_t1_iter4_chan_0_73_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_73_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_73_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_73_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_73_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_73_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_73_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_73_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_73_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_74_address0() {
    FIFO_125_t1_iter4_chan_0_74_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_74_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_74_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_74_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_74_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_74_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_74_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_74_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_74_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_75_address0() {
    FIFO_125_t1_iter4_chan_0_75_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_75_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_75_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_75_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_75_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_75_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_75_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_75_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_75_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_76_address0() {
    FIFO_125_t1_iter4_chan_0_76_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_76_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_76_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_76_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_76_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_76_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_76_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_76_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_76_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_77_address0() {
    FIFO_125_t1_iter4_chan_0_77_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_77_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_77_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_77_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_77_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_77_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_77_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_77_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_77_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_78_address0() {
    FIFO_125_t1_iter4_chan_0_78_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_78_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_78_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_78_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_78_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_78_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_78_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_78_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_78_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_79_address0() {
    FIFO_125_t1_iter4_chan_0_79_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_79_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_79_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_79_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_79_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_79_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_79_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_79_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_7_address0() {
    FIFO_125_t1_iter4_chan_0_7_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_7_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_7_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_7_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_7_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_7_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_7_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_7_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_80_address0() {
    FIFO_125_t1_iter4_chan_0_80_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_80_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_80_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_80_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_80_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_80_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_80_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_80_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_80_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_80_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_81_address0() {
    FIFO_125_t1_iter4_chan_0_81_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_81_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_81_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_81_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_81_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_81_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_81_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_81_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_81_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_82_address0() {
    FIFO_125_t1_iter4_chan_0_82_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_82_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_82_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_82_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_82_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_82_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_82_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_82_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_82_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_83_address0() {
    FIFO_125_t1_iter4_chan_0_83_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_83_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_83_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_83_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_83_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_83_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_83_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_83_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_83_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_84_address0() {
    FIFO_125_t1_iter4_chan_0_84_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_84_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_84_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_84_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_84_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_84_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_84_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_84_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_84_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_84_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_85_address0() {
    FIFO_125_t1_iter4_chan_0_85_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_85_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_85_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_85_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_85_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_85_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_85_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_85_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_85_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_85_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_86_address0() {
    FIFO_125_t1_iter4_chan_0_86_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_86_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_86_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_86_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_86_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_86_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_86_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_86_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_86_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_86_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_87_address0() {
    FIFO_125_t1_iter4_chan_0_87_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_87_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_87_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_87_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_87_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_87_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_87_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_87_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_87_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_87_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_88_address0() {
    FIFO_125_t1_iter4_chan_0_88_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_88_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_88_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_88_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_88_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_88_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_88_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_88_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_88_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_88_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_89_address0() {
    FIFO_125_t1_iter4_chan_0_89_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_89_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_89_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_89_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_89_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_89_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_89_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_89_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_89_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_89_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_8_address0() {
    FIFO_125_t1_iter4_chan_0_8_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_8_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_8_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_8_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_8_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_8_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_8_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_8_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_90_address0() {
    FIFO_125_t1_iter4_chan_0_90_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_90_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_90_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_90_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_90_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_90_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_90_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_90_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_90_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_90_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_91_address0() {
    FIFO_125_t1_iter4_chan_0_91_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_91_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_91_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_91_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_91_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_91_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_91_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_91_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_91_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_91_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_92_address0() {
    FIFO_125_t1_iter4_chan_0_92_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_92_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_92_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_92_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_92_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_92_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_92_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_92_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_92_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_92_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_93_address0() {
    FIFO_125_t1_iter4_chan_0_93_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_93_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_93_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_93_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_93_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_93_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_93_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_93_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_93_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_93_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_94_address0() {
    FIFO_125_t1_iter4_chan_0_94_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_94_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_94_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_94_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_94_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_94_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_94_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_94_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_94_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_94_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_95_address0() {
    FIFO_125_t1_iter4_chan_0_95_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_95_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_95_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_95_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_95_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_95_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_95_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_95_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_95_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_95_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_96_address0() {
    FIFO_125_t1_iter4_chan_0_96_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_96_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_96_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_96_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_96_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_96_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_96_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_96_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_96_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_97_address0() {
    FIFO_125_t1_iter4_chan_0_97_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_97_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_97_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_97_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_97_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_97_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_97_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_97_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_97_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_97_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_98_address0() {
    FIFO_125_t1_iter4_chan_0_98_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_98_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_98_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_98_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_98_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_98_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_98_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_98_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_98_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_98_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_99_address0() {
    FIFO_125_t1_iter4_chan_0_99_address0 =  (sc_lv<7>) (tmp_19_i_reg_58920_pp0_iter225_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_99_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter226.read()))) {
        FIFO_125_t1_iter4_chan_0_99_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_99_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_99_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()))) {
        FIFO_125_t1_iter4_chan_0_99_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_99_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_99_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter227.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter226_reg.read()))) {
        FIFO_125_t1_iter4_chan_0_99_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_99_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_9_address0() {
    FIFO_125_t1_iter4_chan_0_9_address0 =  (sc_lv<7>) (tmp_19_i_fu_39419_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter204.read()))) {
        FIFO_125_t1_iter4_chan_0_9_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_9_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_9_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_9_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_chan_0_9_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter205_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter206.read()))) {
        FIFO_125_t1_iter4_chan_0_9_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter4_chan_0_9_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter4_ptr_fu_39504_p3() {
    FIFO_125_t1_iter4_ptr_fu_39504_p3 = (!tmp_68_i_fu_39492_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_68_i_fu_39492_p2.read()[0].to_bool())? ap_const_lv8_0: tmp_69_i_fu_39498_p2.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_0_address0() {
    FIFO_125_t1_iter5_chan_0_0_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_0_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_0_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_0_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_0_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_0_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_0_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_0_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_100_address0() {
    FIFO_125_t1_iter5_chan_0_100_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_100_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_100_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_100_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_100_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_100_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_100_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_100_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_100_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_100_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_101_address0() {
    FIFO_125_t1_iter5_chan_0_101_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_101_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_101_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_101_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_101_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_101_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_101_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_101_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_101_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_101_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_102_address0() {
    FIFO_125_t1_iter5_chan_0_102_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_102_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_102_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_102_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_102_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_102_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_102_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_102_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_102_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_102_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_103_address0() {
    FIFO_125_t1_iter5_chan_0_103_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_103_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_103_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_103_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_103_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_103_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_103_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_103_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_103_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_103_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_104_address0() {
    FIFO_125_t1_iter5_chan_0_104_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_104_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_104_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_104_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_104_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_104_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_104_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_104_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_104_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_104_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_105_address0() {
    FIFO_125_t1_iter5_chan_0_105_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_105_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_105_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_105_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_105_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_105_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_105_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_105_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_105_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_105_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_106_address0() {
    FIFO_125_t1_iter5_chan_0_106_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_106_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_106_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_106_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_106_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_106_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_106_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_106_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_106_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_106_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_107_address0() {
    FIFO_125_t1_iter5_chan_0_107_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_107_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_107_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_107_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_107_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_107_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_107_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_107_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_107_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_107_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_108_address0() {
    FIFO_125_t1_iter5_chan_0_108_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_108_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_108_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_108_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_108_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_108_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_108_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_108_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_108_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_108_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_109_address0() {
    FIFO_125_t1_iter5_chan_0_109_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_109_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_109_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_109_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_109_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_109_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_109_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_109_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_109_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_109_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_10_address0() {
    FIFO_125_t1_iter5_chan_0_10_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_10_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_10_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_10_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_10_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_10_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_10_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_10_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_110_address0() {
    FIFO_125_t1_iter5_chan_0_110_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_110_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_110_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_110_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_110_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_110_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_110_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_110_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_110_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_110_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_111_address0() {
    FIFO_125_t1_iter5_chan_0_111_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_111_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_111_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_111_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_111_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_111_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_111_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_111_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_111_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_111_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_112_address0() {
    FIFO_125_t1_iter5_chan_0_112_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_112_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_112_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_112_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_112_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_112_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_112_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_112_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_112_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_112_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_113_address0() {
    FIFO_125_t1_iter5_chan_0_113_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_113_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_113_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_113_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_113_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_113_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_113_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_113_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_113_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_113_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_114_address0() {
    FIFO_125_t1_iter5_chan_0_114_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_114_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_114_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_114_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_114_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_114_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_114_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_114_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_114_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_114_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_115_address0() {
    FIFO_125_t1_iter5_chan_0_115_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_115_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_115_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_115_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_115_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_115_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_115_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_115_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_115_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_115_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_116_address0() {
    FIFO_125_t1_iter5_chan_0_116_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_116_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_116_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_116_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_116_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_116_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_116_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_116_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_116_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_116_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_117_address0() {
    FIFO_125_t1_iter5_chan_0_117_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_117_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_117_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_117_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_117_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_117_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_117_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_117_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_117_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_117_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_118_address0() {
    FIFO_125_t1_iter5_chan_0_118_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_118_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_118_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_118_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_118_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_118_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_118_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_118_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_118_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_118_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_119_address0() {
    FIFO_125_t1_iter5_chan_0_119_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_119_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_119_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_119_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_119_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_119_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_119_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_119_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_119_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_119_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_11_address0() {
    FIFO_125_t1_iter5_chan_0_11_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_11_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_11_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_11_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_11_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_11_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_11_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_11_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_120_address0() {
    FIFO_125_t1_iter5_chan_0_120_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_120_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_120_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_120_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_120_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_120_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_120_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_120_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_120_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_120_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_121_address0() {
    FIFO_125_t1_iter5_chan_0_121_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_121_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_121_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_121_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_121_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_121_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_121_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_121_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_121_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_121_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_122_address0() {
    FIFO_125_t1_iter5_chan_0_122_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_122_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_122_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_122_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_122_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_122_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_122_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_122_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_122_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_122_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_123_address0() {
    FIFO_125_t1_iter5_chan_0_123_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_123_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_123_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_123_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_123_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_123_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_123_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_123_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_123_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_123_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_124_address0() {
    FIFO_125_t1_iter5_chan_0_124_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_124_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_124_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_124_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_124_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_124_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_124_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_124_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_124_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_124_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_125_address0() {
    FIFO_125_t1_iter5_chan_0_125_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_125_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_125_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_125_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_125_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_125_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_125_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_125_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_125_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_125_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_12_address0() {
    FIFO_125_t1_iter5_chan_0_12_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_12_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_12_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_12_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_12_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_12_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_12_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_12_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_13_address0() {
    FIFO_125_t1_iter5_chan_0_13_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_13_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_13_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_13_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_13_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_13_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_13_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_13_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_14_address0() {
    FIFO_125_t1_iter5_chan_0_14_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_14_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_14_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_14_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_14_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_14_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_14_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_14_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_15_address0() {
    FIFO_125_t1_iter5_chan_0_15_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_15_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_15_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_15_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_15_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_15_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_15_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_15_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_16_address0() {
    FIFO_125_t1_iter5_chan_0_16_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_16_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_16_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_16_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_16_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_16_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_16_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_16_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_17_address0() {
    FIFO_125_t1_iter5_chan_0_17_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_17_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_17_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_17_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_17_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_17_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_17_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_17_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_18_address0() {
    FIFO_125_t1_iter5_chan_0_18_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_18_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_18_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_18_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_18_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_18_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_18_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_18_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_19_address0() {
    FIFO_125_t1_iter5_chan_0_19_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_19_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_19_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_19_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_19_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_19_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_19_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_19_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_1_address0() {
    FIFO_125_t1_iter5_chan_0_1_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_1_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_1_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_1_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_1_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_1_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_1_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_20_address0() {
    FIFO_125_t1_iter5_chan_0_20_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_20_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_20_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_20_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_20_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_20_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_20_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_20_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_21_address0() {
    FIFO_125_t1_iter5_chan_0_21_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_21_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_21_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_21_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_21_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_21_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_21_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_21_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_22_address0() {
    FIFO_125_t1_iter5_chan_0_22_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_22_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_22_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_22_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_22_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_22_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_22_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_22_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_23_address0() {
    FIFO_125_t1_iter5_chan_0_23_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_23_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_23_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_23_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_23_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_23_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_23_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_23_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_24_address0() {
    FIFO_125_t1_iter5_chan_0_24_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_24_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_24_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_24_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_24_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_24_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_24_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_24_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_25_address0() {
    FIFO_125_t1_iter5_chan_0_25_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_25_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_25_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_25_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_25_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_25_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_25_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_25_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_26_address0() {
    FIFO_125_t1_iter5_chan_0_26_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_26_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_26_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_26_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_26_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_26_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_26_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_26_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_27_address0() {
    FIFO_125_t1_iter5_chan_0_27_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_27_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_27_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_27_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_27_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_27_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_27_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_27_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_28_address0() {
    FIFO_125_t1_iter5_chan_0_28_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_28_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_28_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_28_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_28_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_28_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_28_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_28_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_29_address0() {
    FIFO_125_t1_iter5_chan_0_29_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_29_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_29_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_29_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_29_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_29_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_29_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_29_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_2_address0() {
    FIFO_125_t1_iter5_chan_0_2_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_2_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_2_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_2_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_2_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_2_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_2_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_30_address0() {
    FIFO_125_t1_iter5_chan_0_30_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_30_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_30_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_30_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_30_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_30_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_30_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_30_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_31_address0() {
    FIFO_125_t1_iter5_chan_0_31_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_31_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_31_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_31_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_31_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_31_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_31_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_31_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_32_address0() {
    FIFO_125_t1_iter5_chan_0_32_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_32_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_32_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_32_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_32_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_32_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_32_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_32_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_33_address0() {
    FIFO_125_t1_iter5_chan_0_33_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_33_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_33_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_33_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_33_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_33_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_33_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_33_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_34_address0() {
    FIFO_125_t1_iter5_chan_0_34_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_34_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_34_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_34_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_34_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_34_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_34_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_34_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_35_address0() {
    FIFO_125_t1_iter5_chan_0_35_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_35_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_35_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_35_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_35_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_35_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_35_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_35_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_36_address0() {
    FIFO_125_t1_iter5_chan_0_36_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_36_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_36_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_36_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_36_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_36_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_36_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_36_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_37_address0() {
    FIFO_125_t1_iter5_chan_0_37_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_37_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_37_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_37_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_37_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_37_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_37_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_37_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_38_address0() {
    FIFO_125_t1_iter5_chan_0_38_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_38_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_38_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_38_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_38_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_38_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_38_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_38_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_39_address0() {
    FIFO_125_t1_iter5_chan_0_39_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_39_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_39_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_39_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_39_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_39_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_39_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_39_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_3_address0() {
    FIFO_125_t1_iter5_chan_0_3_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_3_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_3_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_3_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_3_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_3_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_3_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_3_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_40_address0() {
    FIFO_125_t1_iter5_chan_0_40_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_40_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_40_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_40_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_40_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_40_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_40_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_40_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_41_address0() {
    FIFO_125_t1_iter5_chan_0_41_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_41_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_41_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_41_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_41_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_41_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_41_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_41_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_42_address0() {
    FIFO_125_t1_iter5_chan_0_42_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_42_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_42_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_42_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_42_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_42_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_42_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_42_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_43_address0() {
    FIFO_125_t1_iter5_chan_0_43_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_43_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_43_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_43_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_43_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_43_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_43_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_43_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_44_address0() {
    FIFO_125_t1_iter5_chan_0_44_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_44_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_44_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_44_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_44_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_44_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_44_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_44_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_45_address0() {
    FIFO_125_t1_iter5_chan_0_45_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_45_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_45_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_45_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_45_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_45_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_45_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_45_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_46_address0() {
    FIFO_125_t1_iter5_chan_0_46_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_46_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_46_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_46_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_46_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_46_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_46_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_46_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_47_address0() {
    FIFO_125_t1_iter5_chan_0_47_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_47_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_47_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_47_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_47_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_47_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_47_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_47_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_48_address0() {
    FIFO_125_t1_iter5_chan_0_48_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_48_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_48_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_48_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_48_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_48_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_48_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_48_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_49_address0() {
    FIFO_125_t1_iter5_chan_0_49_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_49_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_49_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_49_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_49_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_49_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_49_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_49_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_4_address0() {
    FIFO_125_t1_iter5_chan_0_4_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_4_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_4_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_4_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_4_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_4_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_4_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_4_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_50_address0() {
    FIFO_125_t1_iter5_chan_0_50_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_50_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_50_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_50_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_50_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_50_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_50_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_50_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_51_address0() {
    FIFO_125_t1_iter5_chan_0_51_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_51_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_51_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_51_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_51_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_51_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_51_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_51_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_52_address0() {
    FIFO_125_t1_iter5_chan_0_52_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_52_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_52_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_52_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_52_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_52_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_52_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_52_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_53_address0() {
    FIFO_125_t1_iter5_chan_0_53_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_53_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_53_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_53_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_53_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_53_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_53_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_53_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_54_address0() {
    FIFO_125_t1_iter5_chan_0_54_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_54_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_54_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_54_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_54_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_54_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_54_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_54_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_55_address0() {
    FIFO_125_t1_iter5_chan_0_55_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_55_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_55_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_55_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_55_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_55_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_55_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_55_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_56_address0() {
    FIFO_125_t1_iter5_chan_0_56_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_56_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_56_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_56_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_56_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_56_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_56_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_56_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_57_address0() {
    FIFO_125_t1_iter5_chan_0_57_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_57_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_57_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_57_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_57_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_57_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_57_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_57_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_58_address0() {
    FIFO_125_t1_iter5_chan_0_58_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_58_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_58_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_58_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_58_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_58_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_58_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_58_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_59_address0() {
    FIFO_125_t1_iter5_chan_0_59_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_59_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_59_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_59_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_59_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_59_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_59_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_59_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_5_address0() {
    FIFO_125_t1_iter5_chan_0_5_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_5_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_5_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_5_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_5_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_5_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_5_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_5_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_60_address0() {
    FIFO_125_t1_iter5_chan_0_60_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_60_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_60_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_60_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_60_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_60_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_60_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_60_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_61_address0() {
    FIFO_125_t1_iter5_chan_0_61_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_61_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_61_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_61_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_61_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_61_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_61_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_61_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_62_address0() {
    FIFO_125_t1_iter5_chan_0_62_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_62_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_62_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_62_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_62_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_62_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_62_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_62_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_63_address0() {
    FIFO_125_t1_iter5_chan_0_63_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_63_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_63_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_63_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_63_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_63_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_63_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_63_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_64_address0() {
    FIFO_125_t1_iter5_chan_0_64_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_64_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_64_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_64_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_64_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_64_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_64_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_64_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_64_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_65_address0() {
    FIFO_125_t1_iter5_chan_0_65_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_65_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_65_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_65_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_65_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_65_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_65_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_65_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_65_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_66_address0() {
    FIFO_125_t1_iter5_chan_0_66_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_66_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_66_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_66_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_66_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_66_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_66_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_66_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_66_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_67_address0() {
    FIFO_125_t1_iter5_chan_0_67_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_67_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_67_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_67_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_67_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_67_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_67_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_67_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_67_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_68_address0() {
    FIFO_125_t1_iter5_chan_0_68_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_68_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_68_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_68_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_68_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_68_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_68_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_68_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_68_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_69_address0() {
    FIFO_125_t1_iter5_chan_0_69_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_69_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_69_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_69_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_69_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_69_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_69_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_69_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_69_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_6_address0() {
    FIFO_125_t1_iter5_chan_0_6_address0 =  (sc_lv<7>) (tmp_17_i_fu_40046_p1.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter255.read()))) {
        FIFO_125_t1_iter5_chan_0_6_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_6_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_6_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_6_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_6_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter256_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter257.read()))) {
        FIFO_125_t1_iter5_chan_0_6_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_6_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_70_address0() {
    FIFO_125_t1_iter5_chan_0_70_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_70_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_70_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_70_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_70_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_70_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_70_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_70_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_70_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_71_address0() {
    FIFO_125_t1_iter5_chan_0_71_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_71_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_71_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_71_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_71_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_71_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_71_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_71_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_71_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_72_address0() {
    FIFO_125_t1_iter5_chan_0_72_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_72_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_72_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_72_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_72_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_72_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_72_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_72_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_72_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_73_address0() {
    FIFO_125_t1_iter5_chan_0_73_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_73_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_73_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_73_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_73_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_73_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_73_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_73_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_73_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_74_address0() {
    FIFO_125_t1_iter5_chan_0_74_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_74_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_74_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_74_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_74_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_74_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_74_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_74_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_74_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_75_address0() {
    FIFO_125_t1_iter5_chan_0_75_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_75_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_75_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_75_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_75_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_75_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_75_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_75_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_75_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_76_address0() {
    FIFO_125_t1_iter5_chan_0_76_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_76_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_76_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_76_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_76_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_76_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_76_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_76_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_76_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_77_address0() {
    FIFO_125_t1_iter5_chan_0_77_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_77_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_77_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_77_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_77_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_77_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_77_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_77_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_77_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_78_address0() {
    FIFO_125_t1_iter5_chan_0_78_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_78_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_78_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_78_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_78_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_78_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_78_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_78_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_78_we1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_79_address0() {
    FIFO_125_t1_iter5_chan_0_79_address0 =  (sc_lv<7>) (tmp_17_i_reg_62220_pp0_iter276_reg.read());
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter277.read()))) {
        FIFO_125_t1_iter5_chan_0_79_ce0 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_79_ce0 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()))) {
        FIFO_125_t1_iter5_chan_0_79_ce1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_79_ce1 = ap_const_logic_0;
    }
}

void jacobi2d_kernel_compute::thread_FIFO_125_t1_iter5_chan_0_79_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter278.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, p_demorgan2_i_reg_45617_pp0_iter277_reg.read()))) {
        FIFO_125_t1_iter5_chan_0_79_we1 = ap_const_logic_1;
    } else {
        FIFO_125_t1_iter5_chan_0_79_we1 = ap_const_logic_0;
    }
}

}

