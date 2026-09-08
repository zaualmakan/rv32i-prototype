module GPR(
    input clk, write,
    input [3:0] Rd, Rs1, Rs2,
    input [31:0] wdata,
    output [31:0] out1, out2 
);

reg [31:0] registers [0:15];

// Asynchronous Read - x0 is always 0, incredibles meme
assign out1 = (Rs1 == 4'b0) ? 32'b0 : registers[Rs1];
assign out2 = (Rs2 == 4'b0) ? 32'b0 : registers[Rs2];

// Synchronous Write - do NOT write if Rd is x0 or i will eat ur dog
always @(posedge clk) begin
    if(write && (Rd != 4'b0)) begin
        registers[Rd] <= wdata;
    end
end

endmodule
