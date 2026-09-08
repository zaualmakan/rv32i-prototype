// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBranch_Unit.h for the primary calling header

#include "VBranch_Unit__pch.h"

void VBranch_Unit___024root___ctor_var_reset(VBranch_Unit___024root* vlSelf);

VBranch_Unit___024root::VBranch_Unit___024root(VBranch_Unit__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VBranch_Unit___024root___ctor_var_reset(this);
}

void VBranch_Unit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VBranch_Unit___024root::~VBranch_Unit___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
