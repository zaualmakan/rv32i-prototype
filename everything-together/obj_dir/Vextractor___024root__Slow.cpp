// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vextractor.h for the primary calling header

#include "Vextractor__pch.h"

void Vextractor___024root___ctor_var_reset(Vextractor___024root* vlSelf);

Vextractor___024root::Vextractor___024root(Vextractor__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vextractor___024root___ctor_var_reset(this);
}

void Vextractor___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vextractor___024root::~Vextractor___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
