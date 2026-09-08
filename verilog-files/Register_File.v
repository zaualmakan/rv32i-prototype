module Register_File(
    input write, clk,
    input [4:0] Rd, Rs1, Rs2,
    input [31:0] wdata,
    output [31:0] out1, out2
); 
    
    // We are cutting the 5bit RV addresses to 4 bit [3:0] 
    // to match 16 registers
    GPR GPR1 (
        .clk(clk),
        .write(write),
        .Rd(Rd[3:0]),
        .Rs1(Rs1[3:0]),
        .Rs2(Rs2[3:0]),
        .wdata(wdata),
        .out1(out1),
        .out2(out2)
    );

endmodule