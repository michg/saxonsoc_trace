module Dpram
(
input [wordWidth-1:0] io_wrdata_a,
output reg [wordWidth-1:0] io_rddata_a,
input [$clog2(wordCount)-1:0] io_adr_a,
input io_wr_a,
input [wordWidth-1:0] io_wrdata_b,
output reg [wordWidth-1:0] io_rddata_b,
input [$clog2(wordCount)-1:0] io_adr_b,
input io_wr_b,
input io_clk
);

parameter wordCount = 64;
parameter wordWidth = 8;


 
reg [wordWidth-1:0] ram[0:wordCount-1];

always @ (posedge io_clk)
    begin 
        if(io_wr_a) begin
             ram[io_adr_a] <= io_wrdata_a;
				 io_rddata_a <= io_wrdata_a;
         end
			else
				io_rddata_a <= ram[io_adr_a];
	  
	end
	
always @ (posedge io_clk)	
	  begin 
        if(io_wr_b) begin
             ram[io_adr_b] <= io_wrdata_b;
				  io_rddata_b <= io_wrdata_b;
         end
	      else 
			   io_rddata_b = ram[io_adr_b];
	  
	end
	
endmodule
