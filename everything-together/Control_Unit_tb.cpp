#include <iostream>
#include <string>
#include <cstdint> 
#include <verilated.h> // Verilator library
#include "VControl_Unit.h" // Verilated CU_tb

class CUtestbench{
    private:
        VControl_Unit* Vcu;
		int test_count;
		int pass_count;
		int fail_count;
    public:
        //Constructor
        CUtestbench(){
            Vcu = new VControl_Unit;
            test_count = 0;
            pass_count = 0;
            fail_count = 0;
        }

        // destructorere
        ~CUtestbench(){
            delete Vcu;
        }

        //Prerequisites
        //Inputs initializations
        void set_inputs(uint8_t opcode){
            Vcu->opcode = opcode;
            Vcu->eval();
        }

        // Matches with harsh reality
        bool check_results(uint8_t expected, uint8_t real, const std::string& test_name){
			test_count++;
			std::cout << "Checking: [" << test_name << "] \n";
			if(real == expected){
				pass_count++;
				std::cout << "Passed\n";
				return true;
			}
			else{
				fail_count++;
				std::cout << "Failed lol: Expected: " << expected 
                << " Real: " << real << std::endl;
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

        void case_check(){
            std::cout << "-- Checking: R-type -- \n";
            set_inputs(0b0110011);
            check_results(1, Vcu->reg_write, "7'b0110011 -> Rtype = reg_write");

            std::cout << "-- Checking: I-type -- \n";
            set_inputs(0b0010011);
            check_results(1, Vcu->reg_write, "7'b0010011 -> Itype = reg_write");
            check_results(1, Vcu->alu_src, "7'b0010011 -> Itype = alu_src");
            check_results(0b001, Vcu->format, "7'b0010011 -> Itype = format(3'b001)");

            std::cout << "-- Checking: LOAD -- \n";
            set_inputs(0b0000011);
            check_results(1, Vcu->reg_write, "7'b0000011 -> LOAD = reg_write");
            check_results(1, Vcu->alu_src, "7'b0000011 -> LOAD = alu_src");
            check_results(1, Vcu->mem_load, "7'b0000011 -> LOAD = mem_load");
            check_results(1, Vcu->wb_sel, "7'b0000011 -> LOAD = wb_sel");
            check_results(0b001, Vcu->format, "7'b0000011 -> LOAD = format(3'b001)");
            
            std::cout << "-- Checking: STORE -- \n";
            set_inputs(0b0100011);
            check_results(1, Vcu->mem_store, "7'b0100011 -> STORE = mem_store");
            check_results(1, Vcu->alu_src, "7'b0100011 -> STORE = alu_src");
            check_results(0b010, Vcu->format, "7'b0100011 -> STORE = format(3'b010)");

            std::cout << "-- Checking: BRANCH -- \n";
            set_inputs(0b1100011);
            check_results(1, Vcu->branch_en, "7'b1100011 -> BRANCH = branch_en");
            check_results(0b011, Vcu->format, "7'b1100011 -> BRANCH = format(3'b011)");

            std::cout << "-- Checking: JAL -- \n";
            set_inputs(0b1101111);
            check_results(1, Vcu->jump, "7'b1101111 -> JAL = jump");
            check_results(1, Vcu->reg_write, "7'b1101111 -> JAL = reg_write");
            check_results(2, Vcu->wb_sel, "7'b1101111 -> JAL = wb_sel");
            check_results(0b101, Vcu->format, "7'b1101111 -> JAL = format(3'b101)");
            
            std::cout << "-- Checking: JALR -- \n";
            set_inputs(0b1100111);
            check_results(1, Vcu->jump, "7'b1100111 -> JALR = jump");
            check_results(1, Vcu->reg_write, "7'b1100111 -> JALR = reg_write");
            check_results(1, Vcu->alu_src, "7'b1100111 -> JALR = alu_src");
            check_results(2, Vcu->wb_sel, "7'b1100111 -> JALR = wb_sel");
            check_results(0b001, Vcu->format, "7'b1100111 -> JALR = format(3'b001)");
            
            std::cout << "-- Checking: LUI -- \n";
            set_inputs(0b0110111);
            check_results(1, Vcu->reg_write, "7'b0110111 -> LUI = reg_write");
            check_results(1, Vcu->alu_src, "7'b0110111 -> LUI = alu_src");
            check_results(0b100, Vcu->format, "7'b0110111 -> LUI = format(3'b100)");
        }

        void run_all_test(){
            case_check();
            print_results();
        }
};

int main(int argc, char** argv){
    Verilated::commandArgs(argc, argv);
    
    CUtestbench testbench;
    testbench.run_all_test();

    return 0;
}