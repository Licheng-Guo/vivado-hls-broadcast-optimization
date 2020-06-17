This example come from the Rosetta benchmark
```
https://github.com/cornell-zhang/rosetta
```

The only modification to address the potential data broadcast is shown as follows:
```c++
SetIIu: for ( u = 0; u < WINDOW_SIZE; u++){
#pragma HLS unroll
  SetIIj: for ( v = 0; v < WINDOW_SIZE; v++ ){
  #pragma HLS unroll
    II[u][v] = II[u][v] + ( I[u][v+1] - HLS_REG(I[u][0]) );
  }
}
```