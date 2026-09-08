module CPU(
    input clk, rst,
    input [31:0] instruction, // Instruction from IMEM
    input [31:0] load_val,// Data read from DMEM
    output [31:0] pc_out, // Current PC (to IMEM)
    output [31:0] mem_addr, // Address for DMEM
    output [31:0] store_val,  // Data to write to DMEM
    output mem_load, // Read Enable
    output mem_store // Write Enable
);

    // internal wires
    wire [31:0] pc, pc_next, pc_plus_4, pc_target;
    wire [31:0] imm;
    wire [4:0] rd, rs1, rs2;
    wire [6:0] opcode;
    wire [2:0] func3;
    wire bit30;
    
    // Data wires
    wire [31:0] reg_out1, reg_out2;
    wire [31:0] alu_op_b;
    wire [31:0] alu_result;
    wire [31:0] wb_data; // Write-back data
    
    // Control signals
    wire branch_taken, jump_en, reg_write, alu_src_sel;
    wire [1:0] wb_sel;
    wire [2:0] imm_format;
    wire branch_condition_met;

    // PC Logic
    reg [31:0] pc_reg;
    
    assign pc_plus_4 = pc_reg + 4;
    assign pc_target = pc_reg + imm; // Branch/JAL target
    
    // take branch if (branch instruction and condition met) otherwise Jump
    assign branch_taken = (branch_condition_met && jump_en == 0) ? 1'b1 : 1'b0; // Logic for B-type
    
    // Simplification for the Next PC Mux:
    wire pc_mux_sel = (branch_condition_met && branch_en_signal) || jump_en;
    
    assign pc_next = (pc_mux_sel) ? pc_target : pc_plus_4;

    always @(posedge clk or posedge rst) begin
        if(rst) pc_reg <= 32'b0;
        else    pc_reg <= pc_next;
    end
    
    assign pc_out = pc_reg;

    // Control Unit
    wire branch_en_signal;
    
    Control_Unit Control (
        .opcode(opcode),
        .branch_en(branch_en_signal),
        .jump(jump_en),
        .mem_store(mem_store),
        .mem_load(mem_load),
        .reg_write(reg_write),
        .alu_src(alu_src_sel),
        .wb_sel(wb_sel),
        .format(imm_format)
    );

    // Extractor
    extractor Extractor (
        .inst_in(instruction),
        .format(imm_format), // From Control Unit
        .immediate(imm),
        .Rd(rd), .Rs1(rs1), .Rs2(rs2),
        .func3(func3),
        .opcode(opcode),
        .bit30(bit30)
    );

    // Register File
    assign wb_data = (wb_sel == 2'b00) ? alu_result :       // ALU Result
                     (wb_sel == 2'b01) ? load_val :         // Memory Load
                     pc_plus_4;                             // PC+4 (for JAL/JALR)

    Register_File RegFile (
        .clk(clk),
        .write(reg_write),
        .Rd(rd), .Rs1(rs1), .Rs2(rs2),
        .wdata(wb_data),
        .out1(reg_out1),
        .out2(reg_out2)
    );
    
    assign store_val = reg_out2; // Data to store in memory comes from Rs2

    // ALU
    assign alu_op_b = (alu_src_sel) ? imm : reg_out2;

    ALU Main_ALU (
        .bit30(bit30),
        .imm(alu_src_sel), // Uses immediate flag logic
        .func3(func3),
        .A(reg_out1),
        .B(alu_op_b),
        .data(alu_result)
    );
    
    assign mem_addr = alu_result; // ALU calculates memory address

    // Branch Unit
    Branch_Unit Branch (
        .A(reg_out1),
        .B(reg_out2),
        .func3(func3),
        .branch(branch_condition_met)
    );

endmodule