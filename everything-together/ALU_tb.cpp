#include <iostream>
#include <string>
#include <cstdint> 
#include <verilated.h> // Verilator library
#include "VALU.h" // Verilated header for ALU.v

class ALUtestbench {
	private:
		VALU* alu;
		int test_count;
		int pass_count;
		int fail_count;
	public:
		// Constructer
		ALUtestbench(){
			alu = new VALU;
			test_count = 0;
			pass_count = 0;
			fail_count = 0;
		}

		// Deconstructer
		~ALUtestbench(){
			delete alu;
		}

		// Prerequisites 
		// Inputs initializations
		void set_inputs(uint32_t a, uint32_t b, uint8_t func3, bool bit30, bool imm){
			alu->A = a;
			alu->B = b;
			alu->func3 = func3;
			alu->bit30 = bit30;
			alu->imm = imm;
			alu->eval();
		}
		// signed
		void signed_inputs(int32_t a, int32_t b, uint8_t func3, bool bit30, bool imm){
			alu->A = a;
			alu->B = b;
			alu->func3 = func3;
			alu->bit30 = bit30;
			alu->imm = imm;
			alu->eval();
		}

		// Output results
		uint32_t get_output(){
			return alu->data;
		}

		// Matchy matchy
		bool check_results(uint32_t expected, const std::string& test_name){
			test_count++;
			uint32_t real = get_output();
			if(real == expected){
				pass_count++;
				std::cout << "Passed\n";
				return true;
			}
			else{
				fail_count++;
				std::cout << "Failed lol" << std::endl;
				return false;
			}
		}

		// prints resulst ._.
		void print_results(){
			std::cout << "----------\n";
			std::cout << "Summary\n";
			std::cout << "Tests: " << test_count << "\n";
			std::cout << "Passes: " << pass_count << "\n";
			std::cout << "Fails: " << fail_count << "\n";
			std::cout << "----------" << std::endl;
		}

		// beef checks
		void tAdd(){
			std::cout << "ADD check: \n";
			// positiv small addition
			set_inputs(5, 2, 0b000, 0, 0);
			check_results(7, "ADD: 5+2=7");

			// positive large
			set_inputs(100, 23, 0b000, 0, 0);
			check_results(123, "ADD: 100+23 = 123");

			// overflow
			set_inputs(0xFFFFFFFF, 1, 0b000, 0, 0);
			check_results(0, "ADD: 0xFFFFFFFF+1 = 0 (overflow)");

			// addition with zero
			set_inputs(1, 0, 0b000, 0, 0);
			check_results(1, "ADD: 1+0=1");

			// addition with imm
			set_inputs(5, 1, 0b000, 0, 1);
			check_results(6, "ADD: 5+1=6");
		}

		void tSub(){
			std::cout << "SUB check: \n";
			// small substract
			set_inputs(5, 2, 0b000, 1, 0);
			check_results(3, "SUB: 5-2=3");

			// large substract
			set_inputs(100, 50, 0b00, 1, 0);
			check_results(50, "SUB: 100-50=50");

			// subsract negative
			set_inputs(5, 10, 0b000, 1, 0);
			check_results(0xFFFFFFFB, "SUB: 5-10=0xFFFFFFFB");

			// substract max
			set_inputs(0xFFFFFFFF, 1, 0b000, 1, 0);
			check_results(0xFFFFFFFE, "SUB 0xFFFFFFFF - 1 = 0xFFFFFFFE");
		}

		void tSLL(){
			std::cout << "SLL check: \n";
			//shift by one
			set_inputs(4, 1, 0b001, 0, 0);
			check_results(8, "SLL: 4 << 1 = 8");

			// shift by four
			set_inputs(1, 4, 0b001, 0, 0);
			check_results(16, "SLL: 1 << 4 = 16");

			// shift by 0
			set_inputs(32, 0, 0b001, 0, 0);
			check_results(32, "SLL:32 << 0 = 32");
		}

		void tSLT(){
			std::cout << "SLT check: \n";
			// Set less than one
			signed_inputs(1, 2, 0b010, 0, 0);
			check_results(1, "SLT: signed 1 < 2 == 1");

			// Set less than zero
			signed_inputs(0, 0, 0b010, 0, 0);
			check_results(0, "SLT: 0 < 0 == 0");
			
			// Set less than negative
			signed_inputs(0xFFFFFFFF, 1, 0b010, 0, 0);
			check_results(1, "SLT: -1 << 1 == 1");
		}

		void tSLTU(){
			std::cout << "SLTU check: \n";
			// Set less than one
			set_inputs(1, 2, 0b011, 0, 0);
			check_results(1, "SLTU: 1 < 2 == 1");

			// Set less than zero
			set_inputs(0, 0, 0b011, 0, 0);
			check_results(0, "SLT: 0 < 0 == 0");
			
			// Set less than max
			set_inputs(0xFFFFFFFF, 1, 0b011, 0, 0);
			check_results(0, "SLT: 0xFFFFFFFF << 1 == 0");
		}

		void tXOR(){
			std::cout << "XOR check: \n";
			// XOR 01
			set_inputs(1, 2, 0b100, 0, 0);
			check_results(3, "XOR: 1 ^ 2 = 3");

			// XOR 00
			set_inputs(0, 0, 0b100, 0, 0);
			check_results(0, "XOR: 0 ^ 0 = 0");

			// XOR MAX
			set_inputs(0xFFFFFFFF, 0xFFFFFFFF, 0b100, 0, 0);
			check_results(0, "XOR: MAX ^ MAX = 0");

			// XOR MAX and 1 
			set_inputs(0xFFFFFFFF, 1, 0b100, 0, 0);
			check_results(0xFFFFFFFE, "XOR: MAX ^ 1 = 0xFFFFFFFE");

			// XOR smth and 0
			set_inputs(0xFFFFFFFF, 0, 0b100, 0, 0);
			check_results(0xFFFFFFFF, "XOR: 0xFFFFFFFF ^ 0 = itself");

		}

		void tSRL(){
			std::cout << "SRL check: \n";
			// TSRL by one
            set_inputs(8, 1, 0b101, 0, 0);
            check_results(4, "SRL: 8 >> 1 = 4");
        
             // SRL by four
            set_inputs(0x10000000, 4, 0b101, 0, 0);
            check_results(0x01000000, "SRL: 0x10000000 >> 4 = 0x01000000");
        
            // SRL sign checl
            set_inputs(0x80000000, 1, 0b101, 0, 0);
            check_results(0x40000000, "SRL: 0x80000000 >> 1 = 0x40000000");
        
            // SRL by zero
            set_inputs(0x12345678, 0, 0b101, 0, 0);
            check_results(0x12345678, "SRL: 0x12345678 >> 0 = 0x12345678");
        }
		void tSRA(){
			std::cout << "SRA check: \n";
        
            // SRA by one
            set_inputs(8, 1, 0b101, 1, 0);
            check_results(4, "SRA: 8 >>> 1 = 4");
        
            // SRA sign check
            signed_inputs(0x80000000, 1, 0b101, 1, 0);
            check_results(0xC0000000, "SRA: 0x80000000 >>> 1 = 0xC0000000");
        
            // SRA sign chek by multiple
            signed_inputs(0xFFFFFFF0, 2, 0b101, 1, 0);
            check_results(0xFFFFFFFC, "SRA: 0xFFFFFFF0 >>> 2 = 0xFFFFFFFC");
        
            // SRA full shift
            signed_inputs(0x80000000, 31, 0b101, 1, 0);
            check_results(0xFFFFFFFF, "SRA: 0x80000000 >>> 31 = 0xFFFFFFFF");
        }
    
        void tOR(){
			std::cout << "OR check: \n";
        
            // Or check
            set_inputs(0b1010, 0b1100, 0b110, 0, 0);
            check_results(0b1110, "OR: 0b1010 | 0b1100 = 0b1110");
        
            // RO check with 0
            set_inputs(0x12345678, 0, 0b110, 0, 0);
            check_results(0x12345678, "OR: 0x12345678 | 0 = 0x12345678");
        
            // Or check with MAX
            set_inputs(0x12345678, 0xFFFFFFFF, 0b110, 0, 0);
            check_results(0xFFFFFFFF, "OR: 0x12345678 | 0xFFFFFFFF = 0xFFFFFFFF");
        
            // OR mirrored
            set_inputs(0xABCDEF12, 0xABCDEF12, 0b110, 0, 0);
            check_results(0xABCDEF12, "OR: 0xABCDEF12 | 0xABCDEF12 = 0xABCDEF12");
        }
    
        void tAND(){
			std::cout << "AND check: \n";
            // AND check
            set_inputs(0b1010, 0b1100, 0b111, 0, 0);
            check_results(0b1000, "AND: 0b1010 & 0b1100 = 0b1000");
        
            // AND with 0
            set_inputs(0x12345678, 0, 0b111, 0, 0);
            check_results(0, "AND: 0x12345678 & 0 = 0");
        
            // AND mask with ones
            set_inputs(0x12345678, 0xFFFFFFFF, 0b111, 0, 0);
            check_results(0x12345678, "AND: 0x12345678 & 0xFFFFFFFF = 0x12345678");
        
            // AND mirrored
            set_inputs(0xABCDEF12, 0xABCDEF12, 0b111, 0, 0);
            check_results(0xABCDEF12, "AND: 0xABCDEF12 & 0xABCDEF12 = 0xABCDEF12");
        
            // AND mask
            set_inputs(0x12345678, 0x0000FFFF, 0b111, 0, 0);
            check_results(0x00005678, "AND: 0x12345678 & 0x0000FFFF = 0x00005678 (mask)");
        }
    
  
		void run_all_tests() {
			tAdd();
			tSub();
			tSLL();
			tSLT();
			tSLTU();
			tXOR();
			tSRA();
			tSRL();
			tOR();
			tAND();

			print_results();
		}
};


int main(int argc, char** argv){ // argcount/argvector
	Verilated::commandArgs(argc, argv); // Verilator arguments initialization

    ALUtestbench testbench;
    testbench.run_all_tests();

	return 0;
}
