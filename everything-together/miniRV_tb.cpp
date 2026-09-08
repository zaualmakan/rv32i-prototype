#include <iostream>
#include <verilated.h> // Verilator Library
#include "VminiRV.h" // Verilated header for my miniRV.v

int main(int argc, char** argv){
	Verilated::commandArgs(argc, argv); // Initialized Verilator arguments
	
	VminiRV* top = new VminiRV; // An instance of our module
	
	int main_time = 0; // Clock simulation
	int pc_wire = 0;
	while(!Verilated::gotFinish() && main_time < 200){


		if(main_time < 10){ // Reset logic
			top->rst = 1; //Reset Active-High
		}
		else{
			top->rst = 0; //Run the code
		}

		// Clock logic
		top->clk = ((main_time % 10) >= 5) ? 1 : 0;

                top->eval(); // Tell Verilator to update all logic signals
		
		// Testbench results on rising edge
		if(top->clk == 1 && (main_time % 10 ==5)){
			std::cout << "Time: " << main_time
				  << " | PC: 0x" << std::hex << top->pc_wire
				  << std::dec;
			
			if(top->rst==1){
				std::cout << "(in resetting...)"; 
			}
			std::cout << std::endl;
		}
		
		main_time++;
	}

	delete top;
	return 0;
}
