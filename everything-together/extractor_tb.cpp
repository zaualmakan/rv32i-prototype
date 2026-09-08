#include <iostream>
#include <string>
#include <cstdint> 
#include <verilated.h> // Verilator library
#include "Vextractor.h" // Verilated extractor.v

class EX_hehe_testbench{
    private:
        Vextractor* ex;
		int test_count;
		int pass_count;
		int fail_count;
    public:
        // constructor im gonna lose mymind
        EX_hehe_testbench(){
            ex = new Vextractor;
            test_count = 0;
            pass_count = 0;
            fail_count = 0;
        }
        // Destroying the relationships with my ex-tractor
        ~EX_hehe_testbench(){
            delete ex;
        }

        // Divorce certificates:
        void set_inputs(uint32_t inin, uint8_t format){
            ex->inst_in = inin;
            ex->format = format;
            ex->eval();
        }

        // results for types-immediates
        uint32_t get_output(){
            return ex->immediate;
        }

        // Matchy-match "-" for standard extractions
        bool check_results_SE(uint32_t expected, uint32_t real, const std::string& test_name){
			test_count++;
			std::cout << "Checking: [" << test_name << "] \n";
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

        // Matchy-match "-" for immediate types
        bool check_results(uint32_t expected, const std::string& test_name){
			test_count++;
			uint32_t real = get_output();
            std::cout << "Checking: [" << test_name << "] \n";
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

        // checking all standard extractions cause i hate myself
        // will have instruction in and then check all standard extractions
        // outputs
        void tStandardEX(){
            // 0x12345678
            set_inputs(0x12345678, 0);
            check_results_SE(0x78, ex->opcode, "Opcode: 0x12345678");
            check_results_SE(0x0C, ex->Rd, "Rd: 12345678");
            check_results_SE(0x05, ex->func3, "func3: 12345678");
            check_results_SE(0x08, ex->Rs1, "Rs1: 0x12345678");
            check_results_SE(0x03, ex->Rs2, "Rs2: 0x12345678");
            check_results_SE(0x0, ex->bit30, "bit30: 0x12345678");

            // 0x87654321
            set_inputs(0x87654321, 0);
            check_results_SE(0x21, ex->opcode, "Opcode: 0x87654321");
            check_results_SE(0x06, ex->Rd, "Rd: 0x87654321");
            check_results_SE(0x04, ex->func3, "func3: 0x87654321");
            check_results_SE(0x0A, ex->Rs1, "Rs1: 0x87654321");
            check_results_SE(0x16, ex->Rs2, "Rs2: 0x87654321");
            check_results_SE(0x0, ex->bit30, "bit30: 0x87654321");

            // 0x00000000
            set_inputs(0x00000000, 0);
            check_results_SE(0x00, ex->opcode, "Opcode: 0x00000000");
            check_results_SE(0x00, ex->Rd, "Rd: 0x00000000");
            check_results_SE(0x00, ex->func3, "func3: 0x00000000");
            check_results_SE(0x00, ex->Rs1, "Rs1: 0x00000000");
            check_results_SE(0x00, ex->Rs2, "Rs2: 0x00000000");
            check_results_SE(0x0, ex->bit30, "bit30: 0x00000000");
        }

        // standard immediate stuff now
        // Doing I type one first
        // where is my mind >:|
        void tItype(){
            std::cout << "I-type checks: \n";
            // 0x12345678
            set_inputs(0x12345678, 0b001);
            check_results(0x00000123, "I-type: 0x12345678 -> 0x00000123 \n");
            // 0x87654321
            set_inputs(0x87654321, 0b001);
            check_results(0xFFFFF876, "I-type: 0x87654321 -> 0xFFFFF876 \n");
            // 0xFFFFFFFF
            set_inputs(0xFFFFFFFF, 0b001);
            check_results(0xFFFFFFFF, "I-type: 0xFFFFFFFF -> 0xFFFFFFFF \n");
            // 0x00000000
            set_inputs(0x00000000, 0b001);
            check_results(0x00000000, "I-type: 0x00000000 -> 0x00000000 \n");
            // 0x00000001
            set_inputs(0x00000001, 0b001);
            check_results(0x00000000, "I-type: 0x00000000 -> 0x00000000 \n");
        }

        // S-type checks
        void tStype(){
            std::cout << "S-type checks: \n";
            // 0x12345678
            set_inputs(0x12345678, 0b010);
            check_results(0x0000012C, "S-type: 0x12345678 -> 0x0000012C \n");
            // 0x87654321
            set_inputs(0x87654321, 0b010);
            check_results(0xFFFFF866, "S-type: 0x87654321 -> 0xFFFFF866 \n");
            // 0xFFFFFFFF
            set_inputs(0xFFFFFFFF, 0b010);
            check_results(0xFFFFFFFF, "S-type: 0xFFFFFFFF -> 0xFFFFFFFF \n");
            // 0x00000000
            set_inputs(0x00000000, 0b010);
            check_results(0x00000000, "S-type: 0x00000000 -> 0x00000000 \n");
            // 0x00000001
            set_inputs(0x00000001, 0b010);
            check_results(0x00000000, "S-type: 0x00000000 -> 0x00000000 \n");
        }

        // B-type -- i lost my mind
        void tBtype(){
            std::cout << "B-type checks: \n";
            // 0x12345678
            set_inputs(0x12345678, 0b011);
            check_results(0x0000012C, "B-type: 0x12345678 -> 0x0000012C \n");
            // 0x87654321
            set_inputs(0x87654321, 0b011);
            check_results(0xFFFFF066, "B-type: 0x87654321 -> 0xFFFFF066 \n");
            // 0xFFFFFFFF
            set_inputs(0xFFFFFFFF, 0b011);
            check_results(0xFFFFFFFE, "B-type: 0xFFFFFFFF -> 0xFFFFFFFE \n");
            // 0x00000000
            set_inputs(0x00000000, 0b011);
            check_results(0x00000000, "B-type: 0x00000000 -> 0x00000000 \n");
            // 0x00000001
            set_inputs(0x00000001, 0b011);
            check_results(0x00000000, "B-type: 0x00000000 -> 0x00000000 \n");
        }

        // U-type -- chill time
        void tUtype(){
            std::cout << "U-type checks: \n";
            // 0x12345678
            set_inputs(0x12345678, 0b100);
            check_results(0x12345000, "U-type: 0x12345678 -> 0x12345000");
            // 0x87654321
            set_inputs(0x87654321, 0b100);
            check_results(0x87654000, "U-type: 0x87654321 -> 0x87654000");
            // 0xFFFFFFFF
            set_inputs(0xFFFFFFFF, 0b100);
            check_results(0xFFFFF000, "U-type: 0xFFFFFFFF -> 0xFFFFF000");
            // 0x00000000sudo make install
            set_inputs(0x00000000, 0b100);
            check_results(0x00000000, "U-type: 0x00000000 -> 0x00000000");
            // 0x00000001
            set_inputs(0x00000001, 0b100);
            check_results(0x00000000, "U-type: 0x00000000 -> 0x00000000");
        }

        // I am gonna die
        void tJtype(){
            std::cout << "J-type checks: \n";
             // 0x12345678
            set_inputs(0x12345678, 0b101);
            check_results(0x00045922, "J-type: 0x12345678 -> 0x00045922");
            // 0x87654321
            set_inputs(0x87654321, 0b101);
            check_results(0xFFF54076, "J-type: 0x87654321 -> 0xFFF54076");
            // 0xFFFFFFFF
            set_inputs(0xFFFFFFFF, 0b101);
            check_results(0xFFFFFFFE, "J-type: 0xFFFFFFFF -> 0xFFFFFFFFE");
            // 0x00000000
            set_inputs(0x00000000, 0b101);
            check_results(0x00000000, "J-type: 0x00000000 -> 0x00000000");
            // 0x00000001
            set_inputs(0x00000001, 0b101);
            check_results(0x00000000, "J-type: 0x00000000 -> 0x00000000");
        }

        void run_everything(){
            tStandardEX();
            tItype();
            tStype();
            tBtype();
            tUtype();
            tJtype();

            print_results();
        }
};

int main(int argc, char** argv){
    Verilated::commandArgs(argc, argv);

    // Running the hell
    EX_hehe_testbench testbench;
    testbench.run_everything();

    return 0;
}