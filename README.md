# Latest

Starting from Version 2020.2, the Vitis HLS has officially supported our proposed skid-buffer-based pipeline control mechanism, which is named as `free-run pipeline`. Please have a look at their documents if you are interested!

`https://www.xilinx.com/html_docs/xilinx2020_2/vitis_doc/muj1585343754477.html?hl=free%2Crunning%2Cpipeline`

# Introduction

This repo provides analysis and methods to optimize the generated RTL by Vivado HLS regarding the ultimate achievable frequency. Specifically we focus on optimizing the "implicit" broadcasts in HLS-generated designs, which in many cases become the critical paths. This repo can potentially help you with the following:
- A better understanding of the seemingly messy RTL generated by Vivado HLS, which will be beneficial to expert users who want to manually hack the RTL.
- Proper coding style that leads to designs with good timing quality.
- An automated tool to optimize the micro-architecture of the pipelines in dataflow designs.

In this repo, we will complement our paper by presenting in detail our benchmark HLS designs and the generated RTL designs. The results in this repo are generated by Vivado HLS 2018.2, and implemented by Vivado 2018.2 under default optimization level with out-of-context mode. For more details please see our paper and cite:

> Licheng Guo*,  Jason Lau*, Yuze Chi, Jie Wang, Cody Hao Yu, Zhe Chen, Zhiru Zhang and Jason Cong,  “Analysis and Optimization of the Implicit Broadcasts in FPGA HLS to Improve Maximum Frequency". * indicates co-first authors. 

# Two Types of Broadcasts

We classify two major types of implicit broadcasts in HLS-generated designs:
- ***Data Broadcast*** refers to a high-fanout signal in the datapath, which is typically formed after loop unrolling or array partitioning during the HLS compilation process. The wire delay of an operator will increase as the broadcast factor increases. Such varying delay may cause trouble to the HLS scheduler, which generally relies on static pre-characterized delay estimation.
  
- ***Control Broadcast*** refers to a high-fanout control signal which typically originates from an FSM (or controller) and reaches numerous data\-path components such as registers or multiplexers. In our study, we particularly focus on two critical classes of control broadcast: (1) synchronization signal broadcast and (2) pipeline control signal broadcast. These structures commonly cause timing degradation in deeply pipelined and/or highly parallelized designs. Compared to the data broadcasts, the control broadcasts are less studied in HLS.

