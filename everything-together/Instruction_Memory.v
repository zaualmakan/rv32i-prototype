module Instruction_Memory(
    input [31:0] pc,
    output [31:0] instruction
);

    // 4096 words = 16KB of program space for tang nano 9k
    reg [31:0] rom [0:4095]; 

    // rom initializatione
    initial begin
        $readmemh("mem.hex", rom);
    end

    // Address Translation:
    // PC is a byte address (0, 4, 8 and etc), but ROM is word-indexed (0, 1, 2 and etc)
    // drop the bottom 2 bits (divide by 4) to get the index otherwise i need to rewrite the rom but iam lazy
    assign instruction = rom[pc[13:2]];

endmodule
