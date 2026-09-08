module miniRV(
    input clk,
    input rst,
    output [31:0] pc_wire        
);

    // Interconnecting Wiresw
    wire [31:0] instruction_wire; // Inst ROM -> CPU

    wire [31:0] data_addr; // Address CPU -> RAM
    wire [31:0] store_data; // Data CPU -> RAM
    wire [31:0] load_data; // Data RAM -> CPU
    
    wire mem_load_en;              // Control: CPU -> RAM
    wire mem_store_en;             // Control: CPU -> RAM

    // the CPU core
    CPU MyCPU (
        .clk(clk),
        .rst(rst),
        // Instruction Path
        .instruction(instruction_wire),
        .pc_out(pc_wire),
        // Data Path
        .mem_addr(data_addr),
        .store_val(store_data),
        .load_val(load_data),
        .mem_load(mem_load_en),
        .mem_store(mem_store_en)
    );

    // instruction memory (ROM) ---
    // Takes PC, gives Instruction
    Instruction_Memory PROG_ROM (
        .pc(pc_wire),
        .instruction(instruction_wire)
    );

    // data Memory (RAM)
    // Takes Address/Data, gives Load Value
    Memory MAIN_RAM (
        .clk(clk),
        .store(mem_store_en),
        .load(mem_load_en),
        .address(data_addr),
        .store_data(store_data),
        .load_value(load_data)
    );

endmodule
