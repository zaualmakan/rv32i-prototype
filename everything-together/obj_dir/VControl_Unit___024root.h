// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VControl_Unit.h for the primary calling header

#ifndef VERILATED_VCONTROL_UNIT___024ROOT_H_
#define VERILATED_VCONTROL_UNIT___024ROOT_H_  // guard

#include "verilated.h"


class VControl_Unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VControl_Unit___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(opcode,6,0);
    VL_OUT8(branch_en,0,0);
    VL_OUT8(jump,0,0);
    VL_OUT8(mem_store,0,0);
    VL_OUT8(mem_load,0,0);
    VL_OUT8(reg_write,0,0);
    VL_OUT8(alu_src,0,0);
    VL_OUT8(wb_sel,1,0);
    VL_OUT8(format,2,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    VControl_Unit__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VControl_Unit___024root(VControl_Unit__Syms* symsp, const char* namep);
    ~VControl_Unit___024root();
    VL_UNCOPYABLE(VControl_Unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
