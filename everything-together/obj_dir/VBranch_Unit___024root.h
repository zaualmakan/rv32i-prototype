// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBranch_Unit.h for the primary calling header

#ifndef VERILATED_VBRANCH_UNIT___024ROOT_H_
#define VERILATED_VBRANCH_UNIT___024ROOT_H_  // guard

#include "verilated.h"


class VBranch_Unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VBranch_Unit___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(func3,2,0);
    VL_OUT8(branch,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    VL_IN(A,31,0);
    VL_IN(B,31,0);
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    VBranch_Unit__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VBranch_Unit___024root(VBranch_Unit__Syms* symsp, const char* namep);
    ~VBranch_Unit___024root();
    VL_UNCOPYABLE(VBranch_Unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
