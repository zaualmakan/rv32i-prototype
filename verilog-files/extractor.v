module extractor(
    input [31:0] inst_in,
    input [2:0] format,
    output reg [31:0] immediate,
    output reg [4:0] Rd, Rs1, Rs2,
    output reg [2:0] func3,
    output reg [6:0] opcode,
    output reg bit30
);

always @(*) begin
    // Standard extractions for RV32I
    opcode = inst_in[6:0];
    Rd = inst_in[11:7];
    func3 = inst_in[14:12];
    Rs1 = inst_in[19:15];
    Rs2 = inst_in[24:20];
    bit30 = inst_in[30];

    // Format for immidieateaae afaewfe my head broke doing this
    case(format) 
        3'b001: immediate = {{20{inst_in[31]}}, inst_in[31:20]}; // I-type
        3'b010: immediate = {{20{inst_in[31]}}, inst_in[31:25], inst_in[11:7]}; // S-type
        3'b011: immediate = {{19{inst_in[31]}}, inst_in[31], inst_in[7], inst_in[30:25], inst_in[11:8], 1'b0}; // B-type
        3'b100: immediate = {inst_in[31:12], 12'b0}; // U-type
        3'b101: immediate = {{11{inst_in[31]}}, inst_in[31], inst_in[19:12], inst_in[20], inst_in[30:21], 1'b0}; // J-type
        default: immediate = 32'b0;
    endcase
end

endmodule
