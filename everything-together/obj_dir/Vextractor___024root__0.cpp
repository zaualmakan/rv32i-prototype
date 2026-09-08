// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vextractor.h for the primary calling header

#include "Vextractor__pch.h"

void Vextractor___024root___eval_triggers_vec__ico(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_triggers_vec__ico\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vextractor___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___trigger_anySet__ico\n"); );
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

void Vextractor___024root___ico_sequent__TOP__0(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___ico_sequent__TOP__0\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Rd = (0x0000001fU & (vlSelfRef.inst_in 
                                   >> 7U));
    vlSelfRef.Rs1 = (0x0000001fU & (vlSelfRef.inst_in 
                                    >> 0x0000000fU));
    vlSelfRef.Rs2 = (0x0000001fU & (vlSelfRef.inst_in 
                                    >> 0x00000014U));
    vlSelfRef.func3 = (7U & (vlSelfRef.inst_in >> 0x0000000cU));
    vlSelfRef.opcode = (0x0000007fU & vlSelfRef.inst_in);
    vlSelfRef.bit30 = (1U & (vlSelfRef.inst_in >> 0x0000001eU));
    vlSelfRef.immediate = ((4U & (IData)(vlSelfRef.format))
                            ? ((2U & (IData)(vlSelfRef.format))
                                ? 0U : ((1U & (IData)(vlSelfRef.format))
                                         ? ((((0x00000ffeU 
                                               & ((- (IData)(
                                                             (vlSelfRef.inst_in 
                                                              >> 0x0000001fU))) 
                                                  << 1U)) 
                                              | (vlSelfRef.inst_in 
                                                 >> 0x0000001fU)) 
                                             << 0x00000014U) 
                                            | ((((0x000001feU 
                                                  & (vlSelfRef.inst_in 
                                                     >> 0x0000000bU)) 
                                                 | (1U 
                                                    & (vlSelfRef.inst_in 
                                                       >> 0x00000014U))) 
                                                << 0x0000000bU) 
                                               | (0x000007feU 
                                                  & (vlSelfRef.inst_in 
                                                     >> 0x00000014U))))
                                         : (0xfffff000U 
                                            & vlSelfRef.inst_in)))
                            : ((2U & (IData)(vlSelfRef.format))
                                ? ((1U & (IData)(vlSelfRef.format))
                                    ? (((- (IData)(
                                                   (vlSelfRef.inst_in 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000dU) 
                                       | ((((2U & (vlSelfRef.inst_in 
                                                   >> 0x0000001eU)) 
                                            | (1U & 
                                               (vlSelfRef.inst_in 
                                                >> 7U))) 
                                           << 0x0000000bU) 
                                          | ((0x000007e0U 
                                              & (vlSelfRef.inst_in 
                                                 >> 0x00000014U)) 
                                             | (0x0000001eU 
                                                & (vlSelfRef.inst_in 
                                                   >> 7U)))))
                                    : (((- (IData)(
                                                   (vlSelfRef.inst_in 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000cU) 
                                       | ((0x00000fe0U 
                                           & (vlSelfRef.inst_in 
                                              >> 0x00000014U)) 
                                          | (0x0000001fU 
                                             & (vlSelfRef.inst_in 
                                                >> 7U)))))
                                : ((1U & (IData)(vlSelfRef.format))
                                    ? (((- (IData)(
                                                   (vlSelfRef.inst_in 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000cU) 
                                       | (vlSelfRef.inst_in 
                                          >> 0x00000014U))
                                    : 0U)));
}

void Vextractor___024root___eval_ico(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_ico\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vextractor___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextractor___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vextractor___024root___eval_phase__ico(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_phase__ico\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vextractor___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vextractor___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vextractor___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vextractor___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vextractor___024root___eval(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vextractor___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("extractor.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vextractor___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void Vextractor___024root___eval_debug_assertions(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_debug_assertions\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.format & 0xf8U)))) {
        Verilated::overWidthError("format");
    }
}
#endif  // VL_DEBUG
