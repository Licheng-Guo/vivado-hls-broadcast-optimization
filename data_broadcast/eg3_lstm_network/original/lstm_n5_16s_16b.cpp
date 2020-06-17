/*********************************
 * FileName: lstm_kernel.c
 * Designer: Zhe
 * Modified: 06/07/2019
 * Describe: LSTM inference kernel with 1 hidden layer and N nodes.
 *********************************************************************/

#include <stdio.h>
#include "ap_int.h"

#define SCALER 4096
#define LUT_SIZE 1024
#define N 256
#define PE_NUM 4

template<class ElemType, int pe_id>
ElemType HLS_REG(ElemType in){
#pragma HLS pipeline
#pragma HLS inline off
#pragma HLS interface port=return register
    return in;
}

template <int pe_id>
void lstm_kernel(
	ap_uint<1> mode,
	int sampleinput,
	ap_uint<8> scale_fac,
	ap_uint<8> scale_mul,
    int weight_1_final[N+1],
    volatile ap_int<16> *lstm_out
    )
{
	static ap_int<16> lut_sigmoid[LUT_SIZE] = {
        #include "lut_sigmoid.inc"
    };

	static ap_int<16> lut_tanh[LUT_SIZE] = {
        #include "lut_tanh.inc"
    };

    static ap_int<16> h_state[N] = {0};
    static ap_int<16> c_state[N] = {0};
#pragma HLS reset variable=h_state
#pragma HLS reset variable=c_state

    ap_int<16> lstm_output;
    int i, j, k;

    ap_int<16> sampleinput_16b;
    int offset;
    int n_int = N;

    static ap_int<16> weight_l_pre[4][N] = {
        #include "weight_l_pre.inc"
    };
#pragma HLS array_partition variable=weight_l_pre dim=2 complete
#pragma HLS array_partition variable=weight_l_pre dim=1 factor=4

    static ap_int<16> weight_l_mid_0[N][N] = {
        #include "weight_l_mid.inc"
    };
#pragma HLS array_partition variable=weight_l_mid_0 dim=2 complete
#pragma HLS resource variable=weight_l_mid_0 core=RAM_1P_BRAM

    static ap_int<16> weight_l_mid_1[N][N] = {
        #include "weight_l_mid.inc"
    };
#pragma HLS array_partition variable=weight_l_mid_1 dim=2 complete
#pragma HLS resource variable=weight_l_mid_1 core=RAM_1P_BRAM

    static ap_int<16> weight_l_mid_2[N][N] = {
        #include "weight_l_mid.inc"
    };
#pragma HLS array_partition variable=weight_l_mid_2 dim=2 complete
#pragma HLS resource variable=weight_l_mid_2 core=RAM_1P_BRAM

    static ap_int<16> weight_l_mid_3[N][N] = {
        #include "weight_l_mid.inc"
    };
#pragma HLS array_partition variable=weight_l_mid_3 dim=2 complete
#pragma HLS resource variable=weight_l_mid_3 core=RAM_1P_BRAM

    static ap_int<16> weight_l_end[4][N] = {
        #include "weight_l_end.inc"
    };
#pragma HLS array_partition variable=weight_l_end dim=2 complete
#pragma HLS array_partition variable=weight_l_end dim=1 factor=4

    ap_int<16> lstm_state[N][4];
#pragma HLS array_partition variable=lstm_state dim=1 complete

    if (mode == 1) {
    }
    else {
    	offset = (1 << (scale_fac - 1));
    	sampleinput_16b = (ap_int<16>) ((sampleinput * scale_mul + offset) >> (scale_fac - 12));

    	for (i = 0; i < 4; ++i) {
#pragma HLS unroll
//#pragma HLS pipeline
    		for (j = 0; j < N; ++j) {
#pragma HLS unroll
    			lstm_state[j][i] = ((sampleinput_16b) * weight_l_pre[i][j]) >> 12;
    		}
    	}

    	for (k = 0; k < N; ++k) {
#pragma HLS pipeline II=1
    			for (j = 0; j < N; ++j) {
#pragma HLS unroll
    				lstm_state[j][0] += (((h_state[k]) * weight_l_mid_0[k][j]) >> 12);
    				lstm_state[j][1] += (((h_state[k]) * weight_l_mid_1[k][j]) >> 12);
    				lstm_state[j][2] += (((h_state[k]) * weight_l_mid_2[k][j]) >> 12);
    				lstm_state[j][3] += (((h_state[k]) * weight_l_mid_3[k][j]) >> 12);
    			}
    	}

    	for (i = 0; i < 4; ++i) {
#pragma HLS unroll
    		for (j = 0; j < N; ++j) {
#pragma HLS unroll
    			lstm_state[j][i] += weight_l_end[i][j];
    			lstm_state[j][i] = lstm_state[j][i] >> 5;
    		}
    	}

        for (j = 0; j < N; ++j) {
#pragma HLS pipeline
            if (lstm_state[j][0] >= LUT_SIZE)
            	lstm_state[j][0] = 4095;
            else if (lstm_state[j][0] >= 0)
            	lstm_state[j][0] = lut_sigmoid[lstm_state[j][0]];
            else if (lstm_state[j][0] > -LUT_SIZE)
            	lstm_state[j][0] = 4096 - lut_sigmoid[-lstm_state[j][0]];
            else
            	lstm_state[j][0] = 1;
        }

        for (j = 0; j < N; ++j) {
#pragma HLS pipeline
            if (lstm_state[j][1] >= LUT_SIZE)
            	lstm_state[j][1] = 4095;
            else if (lstm_state[j][1] >= 0)
            	lstm_state[j][1] = lut_sigmoid[lstm_state[j][1]];
            else if (lstm_state[j][1] > -LUT_SIZE)
            	lstm_state[j][1] = 4096 - lut_sigmoid[-lstm_state[j][1]];
            else
            	lstm_state[j][1] = 1;
        }

        for (j = 0; j < N; ++j) {
#pragma HLS pipeline
            if (lstm_state[j][2] >= LUT_SIZE)
            	lstm_state[j][2] = 4095;
            else if (lstm_state[j][2] >= 0)
            	lstm_state[j][2] = lut_sigmoid[lstm_state[j][2]];
            else if (lstm_state[j][2] > -LUT_SIZE)
            	lstm_state[j][2] = 4096 - lut_sigmoid[-lstm_state[j][2]];
            else
            	lstm_state[j][2] = 1;

            if (lstm_state[j][3] >= LUT_SIZE)
            	lstm_state[j][3] = 4096;
            else if (lstm_state[j][3] >= 0)
            	lstm_state[j][3] = lut_tanh[lstm_state[j][3]];
            else if (lstm_state[j][3] > -LUT_SIZE)
            	lstm_state[j][3] = -lut_tanh[-lstm_state[j][3]];
            else
            	lstm_state[j][3] = -4096;
        }

        for (j = 0; j < N; ++j) {
#pragma HLS pipeline
        	c_state[j] = (((c_state[j] * lstm_state[j][1]) >> 8) + ((lstm_state[j][3] * lstm_state[j][0]) >> 12)) >> 4;
        	h_state[j] = c_state[j] >> 1;
        	if (h_state[j] >= LUT_SIZE)
        		h_state[j] = 4096;
        	else if (h_state[j] >= 0)
        		h_state[j] = lut_tanh[h_state[j]];
        	else if (h_state[j] > -LUT_SIZE)
        		h_state[j] = -lut_tanh[-h_state[j]];
        	else
        		h_state[j] = -4096;
        	h_state[j] = (h_state[j] * lstm_state[j][2]) >> 12;
        }

        lstm_output = weight_1_final[N];                                              // outB
        for (j = 0; j < N; ++j)
#pragma HLS pipeline
        	lstm_output += ((h_state[j] * weight_1_final[j]) >> 12);                  // outW[j]

        *lstm_out = lstm_output;
    }
    return;
}


void kernel(	
    ap_uint<1> mode_0,
	int sampleinput_0,
	ap_uint<8> scale_fac_0,
	ap_uint<8> scale_mul_0,
    int weight_1_final[N+1],
    volatile ap_int<16>* lstm_out_0

    //     ap_uint<1> mode_1,
	// int sampleinput_1,z
	// ap_uint<8> scale_fac_1,
	// ap_uint<8> scale_mul_1,
	// int weight_1[N*4+N*N*4+N*4+N+N],
    // volatile ap_int<16>* lstm_out_1,

    //     ap_uint<1> mode_2,
	// int sampleinput_2,
	// ap_uint<8> scale_fac_2,
	// ap_uint<8> scale_mul_2,
	// int weight_2[N*4+N*N*4+N*4+N+N],
    // volatile ap_int<16>* lstm_out_2,

    //     ap_uint<1> mode_3,
	// int sampleinput_3,
	// ap_uint<8> scale_fac_3,
	// ap_uint<8> scale_mul_3,
	// int weight_3[N*4+N*N*4+N*4+N+N],
    // volatile ap_int<16>* lstm_out_3
)
{
    #pragma HLS interface bram port=weight_1_final

    #define PE(i) lstm_kernel<i>(mode_##i, sampleinput_##i,scale_fac_##i, scale_mul_##i, weight_1_final, lstm_out_##i);

    PE(0);
    // PE(1);
    // PE(2);
    // PE(3);

}