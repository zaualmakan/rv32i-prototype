// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VminiRV.h for the primary calling header

#ifndef VERILATED_VMINIRV___024ROOT_H_
#define VERILATED_VMINIRV___024ROOT_H_  // guard

#include "verilated.h"


class VminiRV__Syms;

class alignas(VL_CACHE_LINE_BYTES) VminiRV___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ miniRV__DOT__mem_load_en;
    CData/*0:0*/ miniRV__DOT__mem_store_en;
    CData/*0:0*/ miniRV__DOT__MyCPU__DOT__jump_en;
    CData/*0:0*/ miniRV__DOT__MyCPU__DOT__reg_write;
    CData/*0:0*/ miniRV__DOT__MyCPU__DOT__alu_src_sel;
    CData/*1:0*/ miniRV__DOT__MyCPU__DOT__wb_sel;
    CData/*0:0*/ miniRV__DOT__MyCPU__DOT__branch_en_signal;
    CData/*3:0*/ miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs2;
    CData/*3:0*/ miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs1;
    CData/*3:0*/ miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rd;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_5;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_6;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_7;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc_wire,31,0);
    IData/*31:0*/ miniRV__DOT__store_data;
    IData/*31:0*/ miniRV__DOT__MyCPU__DOT__pc_next;
    IData/*31:0*/ miniRV__DOT__MyCPU__DOT__imm;
    IData/*31:0*/ miniRV__DOT__MyCPU__DOT__alu_result;
    IData/*31:0*/ miniRV__DOT__MyCPU__DOT__pc_reg;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers;
    VlUnpacked<IData/*31:0*/, 4096> miniRV__DOT__PROG_ROM__DOT__rom;
    VlUnpacked<IData/*31:0*/, 4096> miniRV__DOT__MAIN_RAM__DOT__ram;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VminiRV__Syms* const vlSymsp;

    // CONSTRUCTORS
    VminiRV___024root(VminiRV__Syms* symsp, const char* v__name);
    ~VminiRV___024root();
    VL_UNCOPYABLE(VminiRV___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
