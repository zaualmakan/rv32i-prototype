module ALU (
    input bit30, imm, 
    input [2:0] func3,
    input [31:0] A, B,
    output reg [31:0] data 
);
reg [31:0] sra; //signed_a_for_sra_cause_it_broke_for_some_reason

always @(*) begin
    sra = ($signed(A) >>> B[4:0]);

    case(func3)
        3'b000: data = (bit30 && !imm) ? (A - B) : (A + B); // ADD / SUB
        3'b001: data = A << B[4:0]; // SLL
        3'b010: data = ($signed(A) < $signed(B)) ? 32'b1 : 32'b0; // SLT
        3'b011: data = (A < B) ? 32'b1 : 32'b0; // SLTU
        3'b100: data = A ^ B; // XOR
        3'b101: data = (bit30) ? sra : (A >> B[4:0]); // SRA / SRL
        3'b110: data = A | B; // OR
        3'b111: data = A & B; // AND
        default: data = 32'b0;
    endcase
end
endmodule
