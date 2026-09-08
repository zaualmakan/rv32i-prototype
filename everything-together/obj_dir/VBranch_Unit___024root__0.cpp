// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBranch_Unit.h for the primary calling header

#include "VBranch_Unit__pch.h"

void VBranch_Unit___024root___eval_triggers_vec__ico(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_triggers_vec__ico\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool VBranch_Unit___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VBranch_Unit___024root___ico_sequent__TOP__0(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___ico_sequent__TOP__0\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch = ((4U & (IData)(vlSelfRef.func3))
                         ? ((2U & (IData)(vlSelfRef.func3))
                             ? ((1U & (IData)(vlSelfRef.func3))
                                 ? (vlSelfRef.A >= vlSelfRef.B)
                                 : (vlSelfRef.A < vlSelfRef.B))
                             : ((1U & (IData)(vlSelfRef.func3))
                                 ? VL_GTES_III(32, vlSelfRef.A, vlSelfRef.B)
                                 : VL_LTS_III(32, vlSelfRef.A, vlSelfRef.B)))
                         : ((~ ((IData)(vlSelfRef.func3) 
                                >> 1U)) & ((1U & (IData)(vlSelfRef.func3))
                                            ? (vlSelfRef.A 
                                               != vlSelfRef.B)
                                            : (vlSelfRef.A 
                                               == vlSelfRef.B))));
}

void VBranch_Unit___024root___eval_ico(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_ico\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        vlSelfRef.branch = ((4U & (IData)(vlSelfRef.func3))
                             ? ((2U & (IData)(vlSelfRef.func3))
                                 ? ((1U & (IData)(vlSelfRef.func3))
                                     ? (vlSelfRef.A 
                                        >= vlSelfRef.B)
                                     : (vlSelfRef.A 
                                        < vlSelfRef.B))
                                 : ((1U & (IData)(vlSelfRef.func3))
                                     ? VL_GTES_III(32, vlSelfRef.A, vlSelfRef.B)
                                     : VL_LTS_III(32, vlSelfRef.A, vlSelfRef.B)))
                             : ((~ ((IData)(vlSelfRef.func3) 
                                    >> 1U)) & ((1U 
                                                & (IData)(vlSelfRef.func3))
                                                ? (vlSelfRef.A 
                                                   != vlSelfRef.B)
                                                : (vlSelfRef.A 
                                                   == vlSelfRef.B))));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBranch_Unit___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VBranch_Unit___024root___eval_phase__ico(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_phase__ico\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VBranch_Unit___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBranch_Unit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VBranch_Unit___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VBranch_Unit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VBranch_Unit___024root___eval(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VBranch_Unit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("Branch_Unit.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VBranch_Unit___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void VBranch_Unit___024root___eval_debug_assertions(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_debug_assertions\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.func3 & 0xf8U)))) {
        Verilated::overWidthError("func3");
    }
}
#endif  // VL_DEBUG
