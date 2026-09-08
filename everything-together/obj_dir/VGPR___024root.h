// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VGPR.h for the primary calling header

#ifndef VERILATED_VGPR___024ROOT_H_
#define VERILATED_VGPR___024ROOT_H_  // guard

#include "verilated.h"


class VGPR__Syms;

class alignas(VL_CACHE_LINE_BYTES) VGPR___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(write,0,0);
    VL_IN8(Rd,3,0);
    VL_IN8(Rs1,3,0);
    VL_IN8(Rs2,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN(wdata,31,0);
    VL_OUT(out1,31,0);
    VL_OUT(out2,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> GPR__DOT__registers;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VGPR__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VGPR___024root(VGPR__Syms* symsp, const char* namep);
    ~VGPR___024root();
    VL_UNCOPYABLE(VGPR___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
