#include <hls_stream.h>

using data_t = int;
#define SIZE 128


void module_add(
  data_t array_in[SIZE],
  hls::stream<data_t>& fifo1,
  hls::stream<data_t>& fifo2
) {
#pragma HLS inline off
  for (int i = 0; i < SIZE;i++) {
#pragma HLS pipeline II=4
    fifo1.write_nb(array_in[i]+i);
    fifo2.write_nb(array_in[i]+i);
  }

}

void module_sub(
  hls::stream<data_t>& fifo1,
  hls::stream<data_t>& fifo2,
  data_t array_out[SIZE]
) {
#pragma HLS inline off
  for (int i = 0; i < SIZE; i++) {
#pragma HLS pipeline II=1
    data_t temp1, temp2;
    if (!fifo1.empty() & !fifo2.empty()){
      fifo1.read_nb(temp1);
      fifo2.read_nb(temp2);
      array_out[i] = (temp1*temp2*i);
    }
  }

}

extern "C" {
void top(
  data_t array_in[SIZE],
  data_t array_out[SIZE]
) {
  int size = SIZE;
#pragma HLS INTERFACE m_axi port=array_in offset=slave bundle=gmem0 depth=size
#pragma HLS INTERFACE m_axi port=array_out offset=slave bundle=gmem1 depth=size
#pragma HLS INTERFACE s_axilite port=return bundle=control

#pragma HLS dataflow
  hls::stream<data_t> fifo1;
#pragma HLS stream variable=fifo1 depth=4
  hls::stream<data_t> fifo2;
#pragma HLS stream variable=fifo2 depth=4

  module_add(array_in, fifo1, fifo2);
  module_sub(fifo1, fifo2, array_out);
}
}