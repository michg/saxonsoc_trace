module CRam
(
input [inCount*wordWidth-1:0] io_wrdata,
output reg [outCount*wordWidth-1:0] io_rddata,
input [$clog2(wordCount)-1:0] io_wr_addr,
input [$clog2(wordCount)-1:0] io_rd_addr,
input io_wr,
input io_clk,
input [inCount-1:0] io_mask
);

parameter wordCount = 64;
parameter wordWidth = 8;
parameter inCount = 16;
parameter outCount = 1;

 
reg [wordWidth-1:0] ram[0:wordCount-1];
var [$clog2(wordCount)-1:0] wradr;
int unsigned i; 
always @ (posedge io_clk)
    begin 
       for (i=0;i<inCount;i=i+1) begin
            if(io_wr && io_mask[i]) begin
                wradr = io_wr_addr + i;
                ram[wradr] <= io_wrdata[i*wordWidth +: wordWidth];
            end
       end
  io_rddata <= ram[io_rd_addr];
end
endmodule
