// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControl_Unit.h for the primary calling header

#include "VControl_Unit__pch.h"

void VControl_Unit___024root___ctor_var_reset(VControl_Unit___024root* vlSelf);

VControl_Unit___024root::VControl_Unit___024root(VControl_Unit__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VControl_Unit___024root___ctor_var_reset(this);
}

void VControl_Unit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VControl_Unit___024root::~VControl_Unit___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
