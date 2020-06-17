This example shows the influence of the broadcast of control signals such as ```start``` and ```done```

In Vivado HLS, usually each module has an `ap_start` input port and an `ap_done` output port. When there are multiple modules scheduled to execute concurrently, the HLS will `&` together all the `ap_done` signals of the concurrent modules, which may become a broadcast (technically it is a "reduce", but physically it has the same effect as broadcast). Worse, this signal may be broadcast back to all the concurrent modules to control their movement after they finish. Thus a `reduce -> broadcast` pattern is formed. When the number of concurrent modules increase, such control pattern may well become the critical paths.

To see the difference between the original RTL and our modification:
```
diff original_verilog/buffer_compute.v modified_verilog/buffer_compute.v
```