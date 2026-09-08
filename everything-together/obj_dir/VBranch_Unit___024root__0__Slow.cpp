// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBranch_Unit.h for the primary calling header

#include "VBranch_Unit__pch.h"

VL_ATTR_COLD void VBranch_Unit___024root___eval_static(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_static\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VBranch_Unit___024root___eval_initial(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_initial\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VBranch_Unit___024root___eval_final(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_final\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBranch_Unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VBranch_Unit___024root___eval_phase__stl(VBranch_Unit___024root* vlSelf);

VL_ATTR_COLD void VBranch_Unit___024root___eval_settle(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_settle\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VBranch_Unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("Branch_Unit.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VBranch_Unit___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VBranch_Unit___024root___eval_triggers_vec__stl(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_triggers_vec__stl\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VBranch_Unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VBranch_Unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VBranch_Unit___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VBranch_Unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void VBranch_Unit___024root___eval_stl(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_stl\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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

VL_ATTR_COLD bool VBranch_Unit___024root___eval_phase__stl(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___eval_phase__stl\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VBranch_Unit___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBranch_Unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VBranch_Unit___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VBranch_Unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VBranch_Unit___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VBranch_Unit___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VBranch_Unit___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VBranch_Unit___024root___ctor_var_reset(VBranch_Unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBranch_Unit___024root___ctor_var_reset\n"); );
    VBranch_Unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3969090544990846983ull);
    vlSelf->B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 149303876845869574ull);
    vlSelf->func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17167398980792102871ull);
    vlSelf->branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16985980692193088871ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
}
