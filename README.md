### Saxonsoc with a trace plugin

[Saxonsoc](https://github.com/SpinalHDL/SaxonSoc) extended with a trace plugin over
one of the following interfaces:

- UART at a baudrate of 6MBaud
- 8 bit parallel FT245 asynchronous mode
- 100Mbit ethernet with MII-interface

The plugin has the following properties:  

- Separate trace for each core. The trace interface of one core is connected to the toplevel.
  The selection can be configured with the csr register MSAMPLECSEL [0x7D3]
- Trace data contains cycle counter value and a fixed amount(REGCOUNT) of register values. Selected registers can be configured by changing the csr register MSAMPLESEL [0x7D1].
- Each value is encoded with a variable bytes length. 
- A trace output can be triggered by:
  - a csr write access to MSAMPLE [0x7D0]
  - program counter matching the value of MSAMPLEADR [0x7D2]  

A sample project for [Altera DE2-115](https://www.terasic.com.tw/cgi-bin/page/archive.pl?Language=English&CategoryNo=139&No=502&PartNo=2) is included in the subdirectory quartus.  
The firmware therefor can be compiled with:  
`python3 mkfw.py saxon hello`  
Then the verilog source can be build:  
`export SAXON_CPU_COUNT=4`  
`sbt "runMain saxon.board.smpbram.SmpBram"`  
Then the project quartus/saxon.qpf can be compiled with quartus.

The captured data can be decoded with:
`python3 dec.py uart0.trc`





