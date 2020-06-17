#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <hls_stream.h>

typedef float elem_t;
#define MAT_DIM 32
#define MAT_SIZE 1024

template<class T, int reg_id>
T HLS_REG(T in){
#pragma HLS pipeline
#pragma HLS inline off
#pragma HLS interface port=return register
        return in;
}


typedef struct stream_array{
    hls::stream<elem_t> streams[MAT_DIM];
} stream_array; 

elem_t reduction_32(elem_t sc[MAT_DIM]);

elem_t reduction_16(elem_t sc[MAT_DIM]);

elem_t vector_dot(const elem_t* a, const elem_t *b);


//template <int pe_id>
void vector_dot_wrapper(const elem_t a_buffer[MAT_DIM][MAT_DIM], const elem_t b[MAT_DIM], elem_t result[MAT_DIM])
{
#pragma HLS inline off

    hls::stream<elem_t> fifo;

    elem_t a_local[MAT_DIM];
#pragma HLS array_partition variable=a_local complete
    elem_t b_local[MAT_DIM];
#pragma HLS array_partition variable=b_local complete
    
INIT_B: for (int i = 0; i < MAT_DIM; i++) {
#pragma HLS pipeline II=1
        b_local[i] = b[i];
    }

CALC: for (int i = 0; i < MAT_DIM; i++) { // for each row of a
#pragma HLS pipeline II=1
        for (int j = 0; j < MAT_DIM; j++) { // get a from fifo
            a_local[j] = a_buffer[i][j];
        }

        result[i] = vector_dot(a_local, b_local); //a * b
    }
}

void matrix_kernel(const elem_t a_buffer[MAT_DIM][MAT_DIM][MAT_DIM], const elem_t b_buffer[MAT_DIM][MAT_DIM], elem_t result[MAT_DIM][MAT_DIM])
{
#pragma HLS inline


#define PE(id) vector_dot_wrapper(a_buffer[id], b_buffer[id], result[id]);
        PE(0)
        PE(1)
        PE(2)
        PE(3)
        PE(4)
        PE(5)
        PE(6)
        PE(7)
        PE(8)
        PE(9)
        PE(10)
        PE(11)
        PE(12)
        PE(13)
        PE(14)
        PE(15)
        PE(16)
        PE(17)
        PE(18)
        PE(19)
        PE(20)
        PE(21)
        PE(22)
        PE(23)
        PE(24)
        PE(25)
        PE(26)
        PE(27)
        PE(28)
        PE(29)
        PE(30)
        PE(31)
}

void mmult(elem_t *a, elem_t *b, elem_t *output)
{
/*#pragma HLS INTERFACE m_axi port=a offset=slave bundle=gmem
#pragma HLS INTERFACE m_axi port=b offset=slave bundle=gmem2
#pragma HLS INTERFACE m_axi port=output offset=slave bundle=gmem3
#pragma HLS INTERFACE s_axilite port=a bundle=control
#pragma HLS INTERFACE s_axilite port=b bundle=control
#pragma HLS INTERFACE s_axilite port=output bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control
*/
#pragma HLS interface ap_fifo port=a depth=1024
#pragma HLS interface ap_fifo port=b depth=1024
#pragma HLS interface ap_fifo port=output depth=1024

    printf("kernel starts\n");

    elem_t result[MAT_DIM][MAT_DIM];
#pragma HLS array_partition variable=result dim=1 complete

    elem_t a_buffer[MAT_DIM][MAT_DIM][MAT_DIM];
#pragma HLS array_partition variable=a_buffer dim=1 complete
#pragma HLS array_partition variable=a_buffer dim=3 complete

    elem_t b_buffer[MAT_DIM][MAT_DIM];
#pragma HLS array_partition variable=b_buffer dim=1 complete

    for (int i = 0; i < MAT_DIM; i++) {
        for (int j = 0; j < MAT_DIM; j++) {
#pragma HLS pipeline II=1
            for (int k = 0; k < MAT_DIM; k++) {
                a_buffer[k][i][j] = a[i*MAT_DIM+j];
            }
            b_buffer[j][i] = b[i*MAT_DIM+j];
        }
    }

    // compute the multiplication
    matrix_kernel(a_buffer, b_buffer, result);

    // write back
    for (int i = 0; i < MAT_DIM; i++) {
        for (int j = 0; j < MAT_DIM; j++) {
#pragma HLS pipeline II=1
            output[i*MAT_DIM + j] = result[i][j];
        }
    }

    printf("kernel ends\n");
    return;
}


elem_t reduction_32(elem_t sc[MAT_DIM])
{
#pragma HLS inline
	assert(MAT_DIM == 32);
        //32
        elem_t sc_32[16];
#pragma HLS array_partition variable=sc_32 complete
        for (int r = 0; r < 16; r++) {
#pragma HLS unroll
            sc_32[r] = sc[2*r+1] + sc[2*r];
        }

        //elem_t* sc_32 = sc;
        //16
        elem_t sc_16[8];
#pragma HLS array_partition variable=sc_16 complete
        for (int r = 0; r < 8; r++) {
#pragma HLS unroll
            sc_16[r] = sc_32[2*r+1] + sc_32[2*r];
        }
        //8 -> 4
        elem_t sc_8[4];
#pragma HLS array_partition variable=sc_8 complete
        for (int r = 0; r < 4; r++) {
#pragma HLS unroll
            sc_8[r] = sc_16[2*r+1] + sc_16[2*r];
        }
        //4 -> 2
        elem_t sc_4[2];
#pragma HLS array_partition variable=sc_4 complete
        for (int r = 0; r < 2; r++) {
#pragma HLS unroll
            sc_4[r] = sc_8[2*r+1] + sc_8[2*r];
        }
        //2 -> 1
        elem_t sc_2;
        for (int r = 0; r < 1; r++) {
#pragma HLS unroll
            sc_2 = sc_4[2*r+1] + sc_4[2*r];
        }

        return sc_2;
}

elem_t reduction_16(elem_t sc[MAT_DIM])
{
#pragma HLS inline
        /*//32
        elem_t sc_32[MAT_DIM/2];
#pragma HLS array_partition variable=sc_32 complete
        for (int r = 0; r < MAT_DIM/2; r++) {
#pragma HLS unroll
            sc_32[r] = sc[2*r+1] + sc[2*r];
        }*/

        elem_t* sc_32 = sc;
        //16
        elem_t sc_16[8];
#pragma HLS array_partition variable=sc_16 complete
        for (int r = 0; r < 8; r++) {
#pragma HLS unroll
            sc_16[r] = sc_32[2*r+1] + sc_32[2*r];
        }
        //8 -> 4
        elem_t sc_8[4];
#pragma HLS array_partition variable=sc_8 complete
        for (int r = 0; r < 4; r++) {
#pragma HLS unroll
            sc_8[r] = sc_16[2*r+1] + sc_16[2*r];
        }
        //4 -> 2
        elem_t sc_4[2];
#pragma HLS array_partition variable=sc_4 complete
        for (int r = 0; r < 2; r++) {
#pragma HLS unroll
            sc_4[r] = sc_8[2*r+1] + sc_8[2*r];
        }
        //2 -> 1
        elem_t sc_2;
        for (int r = 0; r < 1; r++) {
#pragma HLS unroll
            sc_2 = sc_4[2*r+1] + sc_4[2*r];
        }

        return sc_2;
}

elem_t reduction_4(elem_t sc[MAT_DIM])
{
#pragma HLS inline
        /*//32
        elem_t sc_32[MAT_DIM/2];
#pragma HLS array_partition variable=sc_32 complete
        for (int r = 0; r < MAT_DIM/2; r++) {
#pragma HLS unroll
            sc_32[r] = sc[2*r+1] + sc[2*r];
        }*/

        elem_t* sc_8 = sc;
        //4 -> 2
        elem_t sc_4[2];
#pragma HLS array_partition variable=sc_4 complete
        for (int r = 0; r < 2; r++) {
#pragma HLS unroll
            sc_4[r] = sc_8[2*r+1] + sc_8[2*r];
        }
        //2 -> 1
        elem_t sc_2;
        for (int r = 0; r < 1; r++) {
#pragma HLS unroll
            sc_2 = sc_4[2*r+1] + sc_4[2*r];
        }

        return sc_2;
}

elem_t vector_dot(const elem_t* a, const elem_t *b)
{
#pragma HLS inline
    elem_t mult_res[MAT_DIM]; 
#pragma HLS array_partition variable=mult_res complete

    for (int i = 0; i < MAT_DIM; i++) {
#pragma HLS unroll 
        mult_res[i] = a[i] * b[i];
    }

    assert(MAT_DIM == 32);
    elem_t res = reduction_32(mult_res);

    return res;
}
