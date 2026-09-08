// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"

void VALU___024root___eval_triggers_vec__ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers_vec__ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool VALU___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___trigger_anySet__ico\n"); );
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

void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__0\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data = ((4U & (IData)(vlSelfRef.func3))
                       ? ((2U & (IData)(vlSelfRef.func3))
                           ? ((1U & (IData)(vlSelfRef.func3))
                               ? (vlSelfRef.A & vlSelfRef.B)
                               : (vlSelfRef.A | vlSelfRef.B))
                           : ((1U & (IData)(vlSelfRef.func3))
                               ? ((IData)(vlSelfRef.bit30)
                                   ? VL_SHIFTRS_III(32,32,5, vlSelfRef.A, 
                                                    (0x0000001fU 
                                                     & vlSelfRef.B))
                                   : (vlSelfRef.A >> 
                                      (0x0000001fU 
                                       & vlSelfRef.B)))
                               : (vlSelfRef.A ^ vlSelfRef.B)))
                       : ((2U & (IData)(vlSelfRef.func3))
                           ? ((1U & (IData)(vlSelfRef.func3))
                               ? ((vlSelfRef.A < vlSelfRef.B)
                                   ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.A, vlSelfRef.B)
                                                  ? 1U
                                                  : 0U))
                           : ((1U & (IData)(vlSelfRef.func3))
                               ? (vlSelfRef.A << (0x0000001fU 
                                                  & vlSelfRef.B))
                               : (((~ (IData)(vlSelfRef.imm)) 
                                   & (IData)(vlSelfRef.bit30))
                                   ? (vlSelfRef.A - vlSelfRef.B)
                                   : (vlSelfRef.A + vlSelfRef.B)))));
}

void VALU___024root___eval_ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        vlSelfRef.data = ((4U & (IData)(vlSelfRef.func3))
                           ? ((2U & (IData)(vlSelfRef.func3))
                               ? ((1U & (IData)(vlSelfRef.func3))
                                   ? (vlSelfRef.A & vlSelfRef.B)
                                   : (vlSelfRef.A | vlSelfRef.B))
                               : ((1U & (IData)(vlSelfRef.func3))
                                   ? ((IData)(vlSelfRef.bit30)
                                       ? VL_SHIFTRS_III(32,32,5, vlSelfRef.A, 
                                                        (0x0000001fU 
                                                         & vlSelfRef.B))
                                       : (vlSelfRef.A 
                                          >> (0x0000001fU 
                                              & vlSelfRef.B)))
                                   : (vlSelfRef.A ^ vlSelfRef.B)))
                           : ((2U & (IData)(vlSelfRef.func3))
                               ? ((1U & (IData)(vlSelfRef.func3))
                                   ? ((vlSelfRef.A 
                                       < vlSelfRef.B)
                                       ? 1U : 0U) : 
                                  (VL_LTS_III(32, vlSelfRef.A, vlSelfRef.B)
                                    ? 1U : 0U)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.func3))
                                                    ? 
                                                   (vlSelfRef.A 
                                                    << 
                                                    (0x0000001fU 
                                                     & vlSelfRef.B))
                                                    : 
                                                   (((~ (IData)(vlSelfRef.imm)) 
                                                     & (IData)(vlSelfRef.bit30))
                                                     ? 
                                                    (vlSelfRef.A 
                                                     - vlSelfRef.B)
                                                     : 
                                                    (vlSelfRef.A 
                                                     + vlSelfRef.B)))));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VALU___024root___eval_phase__ico(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__ico\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VALU___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VALU___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VALU___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VALU___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("ALU.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VALU___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.bit30 & 0xfeU)))) {
        Verilated::overWidthError("bit30");
    }
    if (VL_UNLIKELY(((vlSelfRef.imm & 0xfeU)))) {
        Verilated::overWidthError("imm");
    }
    if (VL_UNLIKELY(((vlSelfRef.func3 & 0xf8U)))) {
        Verilated::overWidthError("func3");
    }
}
#endif  // VL_DEBUG
