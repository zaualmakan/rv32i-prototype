// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vextractor.h for the primary calling header

#include "Vextractor__pch.h"

VL_ATTR_COLD void Vextractor___024root___eval_static(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_static\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vextractor___024root___eval_initial(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_initial\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vextractor___024root___eval_final(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_final\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextractor___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vextractor___024root___eval_phase__stl(Vextractor___024root* vlSelf);

VL_ATTR_COLD void Vextractor___024root___eval_settle(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_settle\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vextractor___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("extractor.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vextractor___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vextractor___024root___eval_triggers_vec__stl(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_triggers_vec__stl\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vextractor___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextractor___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vextractor___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vextractor___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___trigger_anySet__stl\n"); );
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

void Vextractor___024root___ico_sequent__TOP__0(Vextractor___024root* vlSelf);

VL_ATTR_COLD void Vextractor___024root___eval_stl(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_stl\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vextractor___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vextractor___024root___eval_phase__stl(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___eval_phase__stl\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vextractor___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vextractor___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vextractor___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vextractor___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vextractor___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vextractor___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vextractor___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vextractor___024root___ctor_var_reset(Vextractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextractor___024root___ctor_var_reset\n"); );
    Vextractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->inst_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15544804360470151695ull);
    vlSelf->format = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2833833415272749956ull);
    vlSelf->immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14979782960453030085ull);
    vlSelf->Rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5129377351112949026ull);
    vlSelf->Rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3776051774964689599ull);
    vlSelf->Rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16579071978838602716ull);
    vlSelf->func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17167398980792102871ull);
    vlSelf->opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17409787017080135397ull);
    vlSelf->bit30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4820445882577232477ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
}
