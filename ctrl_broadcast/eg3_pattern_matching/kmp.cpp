#include "kmp.h"
#include <string.h>

#include "ap_int.h"

typedef ap_int<32> pattern_t;
typedef ap_int<512> uint512_t;


#define WIDTH_FACTOR_CHAR 64
#define FACT 64

void kmp(bool flag, pattern_t pattern_buf, uint512_t input[CACHE_SIZE/FACT/WIDTH_FACTOR_CHAR], int& n_matches) {
#pragma HLS inline off
	if (flag) {
		int i, j;
		int cur_matches;
		for (i=0; i<CACHE_SIZE/FACT/WIDTH_FACTOR_CHAR; i++) {
#pragma HLS PIPELINE
		uint512_t cur_str = input[i];
		cur_matches = 0;
		for (j=0; j<WIDTH_FACTOR_CHAR-PATTERN_SIZE+1; j++) {
		#pragma HLS UNROLL
			if (pattern_buf == cur_str.range(j+PATTERN_SIZE-1, j)) {
			  cur_matches++;
			}
		}
		n_matches += cur_matches;
		}
    }
}

void buffer_load(bool flag, uint512_t local_buf[FACT][CACHE_SIZE/FACT/WIDTH_FACTOR_CHAR], uint512_t* global_buf) {
#pragma HLS inline off
  int j;
  if (flag) {
      for(j=0; j<FACT; j++){
          memcpy((void*)local_buf[j], (const void*)(global_buf+j*CACHE_SIZE/FACT/WIDTH_FACTOR_CHAR), sizeof(char)*(CACHE_SIZE/FACT));
      }
  }
}

void buffer_compute(bool flag, uint512_t local_buf[FACT][CACHE_SIZE/FACT/WIDTH_FACTOR_CHAR], pattern_t pattern_buf, int n_matches_buf[FACT]) {
#pragma HLS inline off
  int j;
  for(j=0; j<FACT; j++){
#pragma HLS UNROLL
	  kmp(flag, pattern_buf, local_buf[j], n_matches_buf[j]);
  }

}

void workload(pattern_t* pattern, uint512_t* input, int32_t n_matches[1]) {
#pragma HLS INTERFACE m_axi port=pattern offset=slave bundle=gmem1
#pragma HLS INTERFACE m_axi port=input offset=slave bundle=gmem2
#pragma HLS INTERFACE m_axi port=n_matches offset=slave bundle=gmem3
#pragma HLS INTERFACE s_axilite port=pattern bundle=control
#pragma HLS INTERFACE s_axilite port=input bundle=control
#pragma HLS INTERFACE s_axilite port=n_matches bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control

//     pattern_t pattern_buf[FACT];
// #pragma HLS ARRAY_PARTITION variable=pattern_buf complete dim=1
    pattern_t pattern_buf = *pattern;
    uint512_t input_buf_x[FACT][CACHE_SIZE/FACT/WIDTH_FACTOR_CHAR];
#pragma HLS ARRAY_PARTITION variable=input_buf_x complete dim=1
    uint512_t input_buf_y[FACT][CACHE_SIZE/FACT/WIDTH_FACTOR_CHAR];
#pragma HLS ARRAY_PARTITION variable=input_buf_y complete dim=1
    int32_t n_matches_buf[FACT];
#pragma HLS ARRAY_PARTITION variable=n_matches_buf complete dim=1

    int i, j;
    for (i=0; i<FACT; i++) {
#pragma HLS UNROLL
	n_matches_buf[i] = 0;
    }

//     pattern_buf[0] = *pattern;
//     for (i=1; i<FACT; i++) {
// #pragma HLS UNROLL
//         pattern_buf[i] = pattern_buf[0];
//     }

    for(i=0; i<STRING_SIZE/CACHE_SIZE+1; i++){
	if (i % 2 == 0) {
	    buffer_load(i < STRING_SIZE/CACHE_SIZE, input_buf_x, input + i*CACHE_SIZE/WIDTH_FACTOR_CHAR);
	    buffer_compute(i > 0, input_buf_y, pattern_buf, n_matches_buf);
	}
	else {
	    buffer_load(i < STRING_SIZE/CACHE_SIZE, input_buf_y, input + i*CACHE_SIZE/WIDTH_FACTOR_CHAR);
	    buffer_compute(i > 0, input_buf_x, pattern_buf, n_matches_buf);
	}
    }

    int final_res = 0;
    for (i=0; i<FACT; i++) {
#pragma HLS UNROLL
	final_res += n_matches_buf[i];
    }
    n_matches[0] = final_res;

    return;

}
