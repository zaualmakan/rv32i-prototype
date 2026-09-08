// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vextractor.h for the primary calling header

#ifndef VERILATED_VEXTRACTOR___024ROOT_H_
#define VERILATED_VEXTRACTOR___024ROOT_H_  // guard

#include "verilated.h"


class Vextractor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vextractor___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(format,2,0);
    VL_OUT8(Rd,4,0);
    VL_OUT8(Rs1,4,0);
    VL_OUT8(Rs2,4,0);
    VL_OUT8(func3,2,0);
    VL_OUT8(opcode,6,0);
    VL_OUT8(bit30,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    VL_IN(inst_in,31,0);
    VL_OUT(immediate,31,0);
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Vextractor__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vextractor___024root(Vextractor__Syms* symsp, const char* namep);
    ~Vextractor___024root();
    VL_UNCOPYABLE(Vextractor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
