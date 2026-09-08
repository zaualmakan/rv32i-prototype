module Branch_Unit(
    input [31:0] A, B,
    input [2:0] func3,
    output reg branch
);

always @(*) begin
    case(func3)
        3'b000: branch = (A == B); // BEQ
        3'b001: branch = (A != B); // BNE
        3'b100: branch = ($signed(A) < $signed(B)); // BLT
        3'b101: branch = ($signed(A) >= $signed(B)); // BGE
        3'b110: branch = (A < B); // BLTU
        3'b111: branch = (A >= B); // BGEU
        default: branch = 1'b0;
    endcase
end

endmodule
