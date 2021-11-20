module Ram_1wrs
(
input [31:0] wrData,
output reg [31:0] rdData,
input [$clog2(wordCount)-1:0] addr,
input wr,
input en,
input clk,
input mask
);

parameter wordCount = 2048;
parameter wordWidth = 32;
parameter maskEnable = 1;
parameter maskWidth = 1;
parameter readUnderWrite = "dontCare";
parameter technology = "auto";

reg [31:0] ram[0:wordCount-1];

integer i; 
initial begin
    for (i = 0; i < wordCount; i = i + 1) begin
                ram[i] = 0;
    end
end 

always @ (posedge clk)
    begin 
        if (wr) begin
                if(mask) ram[addr] <= wrData;
                rdData <= wrData;
         end
         else rdData <= ram[addr];
    end
endmodule
