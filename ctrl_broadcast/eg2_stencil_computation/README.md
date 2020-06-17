This example design consists of a giant stencil computation kernel. Changing from stall-based pipeline control to skid-buffer-based pipeline control may almost double the achievable frequency.

It is observed that this design cannot be correctly scheduled by Vivado HLS 2019.2. It works correctly on Vivado HLS 2018.2.

To see the difference from the original hls design and the modified one that fits into our recommended coding style:
```
diff original/*.cpp optimized/*.cpp
```
