We present three kinds of control broadcasts.
- Broadcast of flow control signals (`eg1, eg2, eg4`). Current Vivado HLS adopts a simple but unscalable approach to implement flow control for pipelines --- when any stage cannot be executed, the whole pipeline will be stalled. Thus the stall signal will be broadcast. We provide a sample tool to potentially fix this problem (`auto_skid_conversion`).

- Broadcast of the central FSM signals (`eg2, eg4`). In our examples, some buffers are shared among multiple sources, thus there will be a multiplexer for each BRAM that is controlled by the centralized FSM, resulting in broadcast.

- Broadcast of the Vivado-HLS-specific protocol signals (`eg3`). Signals such as ap_start and ap_done can also be a potential source of broadcast when the design scales up.