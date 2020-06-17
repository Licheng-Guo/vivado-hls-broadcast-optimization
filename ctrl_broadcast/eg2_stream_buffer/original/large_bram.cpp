#include <hls_stream.h>

using type_t = int;

//8MB

#define BUF_SIZE 1280000
#define PARTITION 64

void kernel(type_t* in_port, type_t* out_port)
{
#pragma HLS interface ap_fifo port=in_port
#pragma HLS interface ap_fifo port=out_port

    static type_t super_buffer[PARTITION][BUF_SIZE/PARTITION];
#pragma HLS array_partition variable=super_buffer dim=1 complete
#pragma HLS resource variable=super_buffer core=RAM_1P_BRAM

    for (long long i = 0; i < PARTITION; i++) {
        for (long long j = 0; j < BUF_SIZE/PARTITION; j++) {
            #pragma HLS pipeline II=1
            super_buffer[i][j] = in_port[i * BUF_SIZE/PARTITION + j];
        }
    }

    for (long long i = 0; i < PARTITION; i++) {
        for (long long j = 0; j < BUF_SIZE/PARTITION; j++) {
            #pragma HLS pipeline II=1
            out_port[i * BUF_SIZE/PARTITION + j] = super_buffer[i][j] ;
        }
    }
}
