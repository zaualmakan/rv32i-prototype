module Memory(
    input clk,
    input store, load, // Control signals
    input [31:0] address, // From ALU
    input [31:0] store_data, // From Register File Rs2 forgot and it broke lol
    output [31:0] load_value
);

    // 4096 words = 16KB for tang nano 9k
    reg [31:0] ram [0:4095];
    
    wire [11:0] addr = address[13:2];

    // stor :D
    always @(negedge clk) begin
        if (store) begin
            ram[addr] <= store_data;
        end
    end

    // Asynchronous read
    assign load_value = (load) ? ram[addr] : 32'b0;

endmodule
