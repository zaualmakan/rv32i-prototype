module Control_Unit(
    input [6:0] opcode,
    output reg branch_en, // Enable branching
    output reg jump, // Enable jumping Jal or jalr
    output reg mem_store, // Write to memory
    output reg mem_load,// Read from memory
    output reg reg_write, // Write to Register File
    output reg alu_src, // 0 = Rs2, 1 = Immediate
    output reg [1:0] wb_sel,// Writeback Select: 0=ALU, 1=Mem, 2=PC+4
    output reg [2:0] format // format
);

    // Opcode constants for readability, so i wont lose my mind writing this
    localparam R_TYPE = 7'b0110011;
    localparam I_TYPE = 7'b0010011;
    localparam LOAD = 7'b0000011;
    localparam STORE = 7'b0100011;
    localparam BRANCH = 7'b1100011;
    localparam JAL = 7'b1101111;
    localparam JALR = 7'b1100111;
    localparam LUI = 7'b0110111;

    always @(*) begin
        // Defaults cause if i wont, then there will be error and i guess its latches or smth
        branch_en = 0; jump = 0; mem_store = 0; mem_load = 0; reg_write = 0; alu_src = 0; wb_sel = 0; format = 3'b000;

        case(opcode)
            R_TYPE: begin
                reg_write = 1; // format defaults to 0, alu_src defaults to 0 (Rs2)
            end
            
            I_TYPE: begin
                reg_write = 1;
                alu_src = 1; // Use Immediate
                format = 3'b001; // I-Type Immediate format
            end
            
            LOAD: begin
                reg_write = 1;
                alu_src = 1;
                mem_load = 1;
                wb_sel = 1; // Write Back data from Memory
                format = 3'b001; // I-Type Immediate
            end
            
            STORE: begin
                mem_store = 1;
                alu_src = 1; // Calculate address with Immediate
                format = 3'b010; // S-Type Immediate format
            end
            
            BRANCH: begin
                branch_en = 1;
                format = 3'b011; // B-Type Immediate format
            end
            
            JAL: begin
                jump = 1;
                reg_write = 1;
                wb_sel = 2; // Write PC+4 to reg
                format = 3'b101; // J-Type Immediate
            end
            
            JALR: begin // Treated like I-Type arithmetic but jumps
                jump = 1;
                reg_write = 1;
                alu_src = 1;
                wb_sel = 2;
                format = 3'b001; // I-Type
            end

            LUI: begin
                reg_write = 1;
                alu_src = 1;
                format = 3'b100; // U-type
            end
            
            default: ; // nope
        endcase
    end
endmodule
