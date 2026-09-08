// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGPR.h for the primary calling header

#include "VGPR__pch.h"

void VGPR___024root___ctor_var_reset(VGPR___024root* vlSelf);

VGPR___024root::VGPR___024root(VGPR__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VGPR___024root___ctor_var_reset(this);
}

void VGPR___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VGPR___024root::~VGPR___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
