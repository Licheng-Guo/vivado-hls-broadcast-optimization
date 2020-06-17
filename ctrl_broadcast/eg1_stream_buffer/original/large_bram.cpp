#include <hls_stream.h>

using data_t = int;

//8MB

#define SIZE 2000000

void kernel(hls::stream<data_t>&  in_port, hls::stream<data_t>&  out_port)
{
  static data_t super_buffer[SIZE];
#pragma HLS resource variable=super_buffer core=RAM_1P_BRAM

  for (long long i = 0; i < SIZE; i++) {
    #pragma HLS pipeline II=1
    in_port.read(super_buffer[i]);
  }
    
  for (long long i = 0; i < SIZE; i++) {
    #pragma HLS pipeline II=1
    out_port.write(super_buffer[i]);
  }
}
