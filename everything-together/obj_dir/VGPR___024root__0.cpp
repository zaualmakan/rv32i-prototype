// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGPR.h for the primary calling header

#include "VGPR__pch.h"

void VGPR___024root___eval_triggers_vec__ico(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___eval_triggers_vec__ico\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool VGPR___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___trigger_anySet__ico\n"); );
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

void VGPR___024root___ico_sequent__TOP__0(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___ico_sequent__TOP__0\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out1 = ((0U == (IData)(vlSelfRef.Rs1))
                       ? 0U : vlSelfRef.GPR__DOT__registers
                      [vlSelfRef.Rs1]);
    vlSelfRef.out2 = ((0U == (IData)(vlSelfRef.Rs2))
                       ? 0U : vlSelfRef.GPR__DOT__registers
                      [vlSelfRef.Rs2]);
}

void VGPR___024root___eval_ico(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___eval_ico\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        vlSelfRef.out1 = ((0U == (IData)(vlSelfRef.Rs1))
                           ? 0U : vlSelfRef.GPR__DOT__registers
                          [vlSelfRef.Rs1]);
        vlSelfRef.out2 = ((0U == (IData)(vlSelfRef.Rs2))
                           ? 0U : vlSelfRef.GPR__DOT__registers
                          [vlSelfRef.Rs2]);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VGPR___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VGPR___024root___eval_phase__ico(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___eval_phase__ico\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VGPR___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VGPR___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VGPR___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VGPR___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VGPR___024root___eval_triggers_vec__act(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___eval_triggers_vec__act\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool VGPR___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___trigger_anySet__act\n"); );
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

void VGPR___024root___nba_sequent__TOP__0(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___nba_sequent__TOP__0\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__GPR__DOT__registers__v0;
    __VdlyVal__GPR__DOT__registers__v0 = 0;
    CData/*3:0*/ __VdlyDim0__GPR__DOT__registers__v0;
    __VdlyDim0__GPR__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__GPR__DOT__registers__v0;
    __VdlySet__GPR__DOT__registers__v0 = 0;
    // Body
    __VdlySet__GPR__DOT__registers__v0 = 0U;
    if (((IData)(vlSelfRef.write) & (0U != (IData)(vlSelfRef.Rd)))) {
        __VdlyVal__GPR__DOT__registers__v0 = vlSelfRef.wdata;
        __VdlyDim0__GPR__DOT__registers__v0 = vlSelfRef.Rd;
        __VdlySet__GPR__DOT__registers__v0 = 1U;
    }
    if (__VdlySet__GPR__DOT__registers__v0) {
        vlSelfRef.GPR__DOT__registers[__VdlyDim0__GPR__DOT__registers__v0] 
            = __VdlyVal__GPR__DOT__registers__v0;
    }
    vlSelfRef.out1 = ((0U == (IData)(vlSelfRef.Rs1))
                       ? 0U : vlSelfRef.GPR__DOT__registers
                      [vlSelfRef.Rs1]);
    vlSelfRef.out2 = ((0U == (IData)(vlSelfRef.Rs2))
                       ? 0U : vlSelfRef.GPR__DOT__registers
                      [vlSelfRef.Rs2]);
}

void VGPR___024root___eval_nba(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___eval_nba\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__GPR__DOT__registers__v0;
    __Vinline__nba_sequent__TOP__0___VdlyVal__GPR__DOT__registers__v0 = 0;
    CData/*3:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__GPR__DOT__registers__v0;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__GPR__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__GPR__DOT__registers__v0;
    __Vinline__nba_sequent__TOP__0___VdlySet__GPR__DOT__registers__v0 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___VdlySet__GPR__DOT__registers__v0 = 0U;
        if (((IData)(vlSelfRef.write) & (0U != (IData)(vlSelfRef.Rd)))) {
            __Vinline__nba_sequent__TOP__0___VdlyVal__GPR__DOT__registers__v0 
                = vlSelfRef.wdata;
            __Vinline__nba_sequent__TOP__0___VdlyDim0__GPR__DOT__registers__v0 
                = vlSelfRef.Rd;
            __Vinline__nba_sequent__TOP__0___VdlySet__GPR__DOT__registers__v0 = 1U;
        }
        if (__Vinline__nba_sequent__TOP__0___VdlySet__GPR__DOT__registers__v0) {
            vlSelfRef.GPR__DOT__registers[__Vinline__nba_sequent__TOP__0___VdlyDim0__GPR__DOT__registers__v0] 
                = __Vinline__nba_sequent__TOP__0___VdlyVal__GPR__DOT__registers__v0;
        }
        vlSelfRef.out1 = ((0U == (IData)(vlSelfRef.Rs1))
                           ? 0U : vlSelfRef.GPR__DOT__registers
                          [vlSelfRef.Rs1]);
        vlSelfRef.out2 = ((0U == (IData)(vlSelfRef.Rs2))
                           ? 0U : vlSelfRef.GPR__DOT__registers
                          [vlSelfRef.Rs2]);
    }
}

void VGPR___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VGPR___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VGPR___024root___eval_phase__act(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___eval_phase__act\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VGPR___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VGPR___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VGPR___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VGPR___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VGPR___024root___eval_phase__nba(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___eval_phase__nba\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VGPR___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VGPR___024root___eval_nba(vlSelf);
        VGPR___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VGPR___024root___eval(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___eval\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VGPR___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("GPR.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VGPR___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VGPR___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("GPR.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VGPR___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("GPR.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = VGPR___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VGPR___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VGPR___024root___eval_debug_assertions(VGPR___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGPR___024root___eval_debug_assertions\n"); );
    VGPR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.write & 0xfeU)))) {
        Verilated::overWidthError("write");
    }
    if (VL_UNLIKELY(((vlSelfRef.Rd & 0xf0U)))) {
        Verilated::overWidthError("Rd");
    }
    if (VL_UNLIKELY(((vlSelfRef.Rs1 & 0xf0U)))) {
        Verilated::overWidthError("Rs1");
    }
    if (VL_UNLIKELY(((vlSelfRef.Rs2 & 0xf0U)))) {
        Verilated::overWidthError("Rs2");
    }
}
#endif  // VL_DEBUG
