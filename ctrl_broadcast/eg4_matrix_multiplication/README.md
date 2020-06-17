This example is a synthetic matrix multiplication. While it is not the best matrix multiplication design, this simple design exposes both data and control broadcast that call for our attention.

The design contains multiple 32 x 32 vector product PEs. Each vector-product PE consists of 32 parallel multipliers and a reduction tree, which is fully pipelined. The data are first loaded into the local buffers of each vector-product PE, then each PE does the computation and writes back the results. It is a widely-used design pattern to move data between modules by passing arrays. However, in this way, all the buffers are under the control of the top-level controller (e.g., switch the buffer between different peer modules), which will lead to significant control signal broadcasts.

```c++
void matrix_kernel(
    data_t a_mat_local[MAT_DIM][MAT_DIM][MAT_DIM], 
    data_t b_vec_local[MAT_DIM][MAT_DIM], 
    data_t result_local[MAT_DIM][MAT_DIM])
{
    for (int i = 0; i < PE_NUM; i++) {
#pragma HLS unroll
        // fully pipelined vector product units
        PE(a_mat_local[i], b_vec_local[i], result_local[i]);
}   }   
```

This example can be solved in a similar way as the stream buffer example. Either skid-buffer-based pipeline control or multi-cycle-stall will work.