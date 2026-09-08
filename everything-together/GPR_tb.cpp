#include <iostream>
#include <string>
#include <cstdint> 
#include <verilated.h> // Verilator library
#include "VGPR.h" // Verilated GPR.v

class GPR_testbench{
    private:
        VGPR* gpr;
		int test_count;
		int pass_count;
		int fail_count;
    public:
        // constructor
        GPR_testbench(){
            gpr = new VGPR;
            test_count = 0;
            pass_count = 0;
            fail_count = 0;
            gpr->eval(); // forgot this line and first testbench always were failing
        }
        // Destroyer
        ~GPR_testbench(){
            delete gpr;
        }

        // set inputs for asynchronous out1
        void si_out1(uint32_t data, uint8_t Rs1, bool write){
            gpr->wdata = data;
            gpr->Rs1 = Rs1;
            gpr->write = write;
            // outs are related to Rd so Rd = Rs1 is needed apparently(understood it after 2 hours;)
            if(write){ gpr->Rd = Rs1; tick(); } else{ gpr->eval(); }
        }

        // out2 asynchronouts set inputs
        void si_out2(uint32_t data, uint8_t Rs2, bool write){
            gpr->wdata = data;
            gpr->Rs2 = Rs2;
            gpr->write = write;
            if(write){ gpr->Rd = Rs2; tick(); } else{ gpr->eval(); }
        }

        // clock void
        void tick(){
            gpr->clk = 1;
            gpr->eval();

            gpr->clk = 0;
            gpr->eval();
        }

        // set inputs for syncronous write
        void write_inputs(uint32_t data, uint8_t Rd, bool write){
            gpr->wdata = data;
            gpr->Rd = Rd; gpr->Rs1 = Rd;
            gpr->write = write;
            tick();
            gpr->write = 0; // just in case smth goes wrong, well to close the door iguess
        }

        // results for registers
        uint32_t get_out1(){ return gpr->out1; }
        uint32_t get_out2(){ return gpr->out2; }

        // Matchy-match "-" for out reg
        bool check_results(uint32_t expected, uint32_t real, const std::string& test_name){
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

        void tOut1(){
            std::cout << "Asynchronous Out1: \n";
            si_out1(0xFFFFFFFF, 1, 1);
            check_results(0xFFFFFFFF, get_out1(), "0xFFFFFFFF->reg(1)");

            si_out1(1, 12, 1);
            check_results(1, get_out1(), "1->reg(12)");

            si_out1(255, 10, 0);
            check_results(0, get_out1(), "255->reg(10)/write=0");

            si_out1(0, 11, 1);
            check_results(0, get_out1(), "0->reg(11)");

            si_out1(500, 5, 0);
            check_results(0, get_out1(), "500->reg(5)/write=0");

            si_out1(0xFFFFFFFF, 0, 1);
            check_results(0, get_out1(), "0xFFFFFFFF->reg(0)/write=0");
        }

        void tOut2(){
            std::cout << "Asynchronous Out2: \n";
            si_out2(0xFFFFFFFF, 0x1, 1);
            check_results(0xFFFFFFFF, get_out2(), "0xFFFFFFFF->reg(1)");

            si_out2(1, 12, 1);
            check_results(1, get_out2(), "1->reg(12)");

            si_out2(255, 10, 0);
            check_results(0, get_out2(), "255->reg(10)/write=0");

            si_out2(0, 11, 1);
            check_results(0, get_out2(), "0->reg(11)");

            si_out2(500, 5, 0);
            check_results(0, get_out2(), "500->reg(5)/write=0");

            si_out2(0xFFFFFFFF, 0, 1);
            check_results(0, get_out2(), "0xFFFFFFFF->reg(0)/write=0");
        }

        // Synchronous write
        void tRd(){
            std::cout << "Synchronous Rd: \n";
            write_inputs(0xFFFFFFFF, 1, 1);
            check_results(0xFFFFFFFF, get_out1(), "0xFFFFFFFF->reg(1)");

            write_inputs(1, 12, 1);
            check_results(1, get_out1(), "1->reg(12)");

            write_inputs(255, 10, 0);
            check_results(0, get_out1(), "255->reg(10)/write=0");

            write_inputs(0, 11, 1);
            check_results(0, get_out1(), "0->reg(11)");

            write_inputs(500, 5, 0);
            check_results(0, get_out1(), "500->reg(5)/write=0");

            write_inputs(0xFFFFFFFF, 0, 1);
            check_results(0, get_out1(), "0xFFFFFFFF->reg(0)/write=0");
        }

        void run_everything(){

            tOut1();
            tOut2();
            tRd();

            print_results();
        }
};

int main(int argc, char** argv){
    Verilated::commandArgs(argc, argv);

    // Running the hell
    GPR_testbench testbench;
    testbench.run_everything();

    return 0;
}