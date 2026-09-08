#include <iostream>
#include <string>
#include <cstdint> 
#include <verilated.h> // Verilator library
#include "VBranch_Unit.h" // Verilated Branch Unit.v

class BUtestbench{
    private:
        VBranch_Unit* Vbu;
		int test_count;
		int pass_count;
		int fail_count;
    public:
        //Constructor
        BUtestbench(){
            Vbu = new VBranch_Unit;
            test_count = 0;
            pass_count = 0;
            fail_count = 0;
        }

        // DESTRUCTION HAHAHHAHA
        ~BUtestbench(){
            delete Vbu;
        }

        //Prerequisites
        //Inputs initializations
        void set_inputs(uint32_t a, uint32_t b, uint8_t func3){
            Vbu->A = a;
            Vbu->B = b;
            Vbu->func3 = func3;
            Vbu->eval();
        }

        // outputs getty :D
        bool get_output(){
            return Vbu->branch;
        }

        // Matchy-match "-"
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

        void tBEQ(){
            // simple equal lol
            std::cout << "BEQ check: \n";
            set_inputs(10, 10, 0b00);
            check_results(1, "BEQ: 10 == 10 = 1");

            // zeros
            set_inputs(0, 0, 0b000);
            check_results(1, "BEQ: 0 == 0 = 1");

            // no
            set_inputs(0xFFFFFFFF, 1, 0b000);
            check_results(0, "BEQ: MAX == 1 =0");

            // max
            set_inputs(0xFFFFFFFF, 0xFFFFFFFF, 0b000);
            check_results(1, "BEQ: MAX == MAX = 1");

            // max and simple
            set_inputs(0xFFFFFFFF, 0xFFFFFFFE, 0b000);
            check_results(0, "BEQ: MAx == MAX-1 = 0");
        }

        void tBNE(){
            // simple equal lol
            std::cout << "BNE check: \n";
            set_inputs(10, 10, 0b001);
            check_results(0, "BNE: 10 == 10 = 0");

            // zeros
            set_inputs(0, 0, 0b001);
            check_results(0, "BNE: 0 == 0 = 0");

            // no
            set_inputs(0xFFFFFFFF, 1, 0b001);
            check_results(1, "BNE: MAX == 1 = 1");

            // max
            set_inputs(0xFFFFFFFF, 0xFFFFFFFF, 0b001);
            check_results(0, "BNE: MAX == MAX = 0");

            // max and simple
            set_inputs(0xFFFFFFFF, 0xFFFFFFFE, 0b001);
            check_results(1, "BNE: MAx == MAX-1 = 1");
        }

        void tBLT(){
            std::cout << "BLT check: \n";
            // simple check signed
            set_inputs(1, 2, 0b100);
            check_results(1, "BLT: 1 < 2 == 1");

            // zeros
            set_inputs(0, 0, 0b100);
            check_results(0, "BLT: 0 < 0 == 0");

            // negatives
            set_inputs(0xFFFFFFFF, 1, 0b100);
            check_results(1, "BLT: -MAX < 1 == 1");

            // large
            set_inputs(255, 256, 0b100);
            check_results(1, "BLT: 255 < 256 == 1");

            // MAX and 1
            set_inputs(0x0FFFFFFF, 1, 0b100);
            check_results(0, "BLT:0x0FFFFFFF < 1 == 0");
        }

        void tBGE(){
            std::cout << "BGE check: \n";
            // simple check signed
            set_inputs(1, 2, 0b101);
            check_results(0, "BGE: 1 >= 2 == 0");

            // zeros
            set_inputs(0, 0, 0b101);
            check_results(1, "BGE: 0 >= 0 == 1");

            // negatives
            set_inputs(0xFFFFFFFF, 1, 0b101);
            check_results(0, "BGE: -MAX >= 1 == 0");

            // large
            set_inputs(255, 256, 0b101);
            check_results(0, "BGE: 255 >= 256 == 0");

            // MAX and 1
            set_inputs(0x0FFFFFFF, 1, 0b101);
            check_results(1, "BLT:0x0FFFFFFF >= 1 == 1");

            // some stuff
            set_inputs(0xFFFFFFFF, 0xFFFFFFFF, 0b101);
            check_results(1, "BGE: 0xFFFFFFFF >= 0xFFFFFFFF == 1");

            // negatives
            set_inputs(0xFFFFFFF1, 0xFFFFFFFF, 0b101);
            check_results(0, "BGE: 0xFFFFFFF1 >= 0xFFFFFFFF == 0");
        }

        void tBLTU(){
            std::cout << "BLTU check: \n";
            // simple check signed
            set_inputs(1, 2, 0b110);
            check_results(1, "BLTU: 1 < 2 == 1");

            // zeros
            set_inputs(0, 0, 0b110);
            check_results(0, "BLTU: 0 < 0 == 0");

            // negatives
            set_inputs(0xFFFFFFFF, 1, 0b110);
            check_results(0, "BLTU: MAX < 1 == 0");

            // large
            set_inputs(255, 0xFFFFFFFF, 0b110);
            check_results(1, "BLTU: 255 < 256 == 1");

            // MAX and 1
            set_inputs(0x0FFFFFFF, 0xFFFFFFFF, 0b110);
            check_results(1, "BLTU:0x0FFFFFFF < 1 == 1");
        }

        void tBGEU(){
            std::cout << "BGEU check: \n";
            // simple check signed
            set_inputs(1, 2, 0b111);
            check_results(0, "BGEU: 1 >= 2 == 0");

            // zeros
            set_inputs(0, 0, 0b111);
            check_results(1, "BGEU: 0 >= 0 == 1");

            // negatives
            set_inputs(0xFFFFFFFF, 1, 0b111);
            check_results(1, "BGE: MAX >= 1 == 1");

            // large
            set_inputs(255, 256, 0b111);
            check_results(0, "BGE: 255 >= 256 == 0");

            // MAX and 1
            set_inputs(0x0FFFFFFF, 1, 0b111);
            check_results(1, "BGEU:0x0FFFFFFF >= 1 == 1");

            // some stuff
            set_inputs(0xFFFFFFFF, 0xFFFFFFFF, 0b111);
            check_results(1, "BGEU: 0xFFFFFFFF >= 0xFFFFFFFF == 1");

            // huge numbers
            set_inputs(0xFFFFFFF1, 0xFFFFFFFF, 0b111);
            check_results(0, "BGEU: 0xFFFFFFF1 >= 0xFFFFFFFF == 0");

            // MAX
            set_inputs(0xFFFFFFFF, 0xFFFFFFFE, 0b111);
            check_results(1, "BGEU: 0xFFFFFFFF >= 0xFFFFFFFE == 1");
        }

        void run_all_test(){
            tBEQ();
            tBNE();
            tBLT();
            tBGE();
            tBLTU();
            tBGEU();
            print_results();
        }
};

int main(int argc, char** argv){
    Verilated::commandArgs(argc, argv);
    
    BUtestbench testbench;
    testbench.run_all_test();

    return 0;
}