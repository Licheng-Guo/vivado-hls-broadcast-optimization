#include <hls_stream.h>

using data_t = int;

//8MB

#define SIZE 2000000

void kernel(hls::stream<data_t>&  in_port, hls::stream<data_t>&  out_port)
{
  // add latency property to fix data broadcast
  static data_t super_buffer[SIZE];
#pragma HLS resource variable=super_buffer core=RAM_1P_BRAM latency=4

  // use the non-blocking read coding style
  for (long long i = 0; i < SIZE; ) {
    #pragma HLS pipeline II=1
    if (!in_port.empty()) {
      in_port.read(super_buffer[i]);
      i++;
    }
  }
    
  // use non-blocking write, and fix the functionality by hacking the RTL
  for (long long i = 0; i < SIZE; i++) {
    #pragma HLS pipeline II=1
    out_port.write_nb(super_buffer[i]);
  }
}
