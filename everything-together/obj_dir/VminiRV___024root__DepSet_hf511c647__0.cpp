// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiRV.h for the primary calling header

#include "VminiRV__pch.h"
#include "VminiRV___024root.h"

void VminiRV___024root___eval_act(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_act\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VminiRV___024root___nba_sequent__TOP__0(VminiRV___024root* vlSelf);
void VminiRV___024root___nba_sequent__TOP__1(VminiRV___024root* vlSelf);
void VminiRV___024root___nba_sequent__TOP__2(VminiRV___024root* vlSelf);
void VminiRV___024root___nba_comb__TOP__0(VminiRV___024root* vlSelf);

void VminiRV___024root___eval_nba(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_nba\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VminiRV___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VminiRV___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VminiRV___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VminiRV___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VminiRV___024root___nba_sequent__TOP__0(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___nba_sequent__TOP__0\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__miniRV__DOT__MAIN_RAM__DOT__ram__v0;
    __VdlyVal__miniRV__DOT__MAIN_RAM__DOT__ram__v0 = 0;
    SData/*11:0*/ __VdlyDim0__miniRV__DOT__MAIN_RAM__DOT__ram__v0;
    __VdlyDim0__miniRV__DOT__MAIN_RAM__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__miniRV__DOT__MAIN_RAM__DOT__ram__v0;
    __VdlySet__miniRV__DOT__MAIN_RAM__DOT__ram__v0 = 0;
    // Body
    __VdlySet__miniRV__DOT__MAIN_RAM__DOT__ram__v0 = 0U;
    if (vlSelfRef.miniRV__DOT__mem_store_en) {
        __VdlyVal__miniRV__DOT__MAIN_RAM__DOT__ram__v0 
            = vlSelfRef.miniRV__DOT__store_data;
        __VdlyDim0__miniRV__DOT__MAIN_RAM__DOT__ram__v0 
            = (0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_result 
                         >> 2U));
        __VdlySet__miniRV__DOT__MAIN_RAM__DOT__ram__v0 = 1U;
    }
    if (__VdlySet__miniRV__DOT__MAIN_RAM__DOT__ram__v0) {
        vlSelfRef.miniRV__DOT__MAIN_RAM__DOT__ram[__VdlyDim0__miniRV__DOT__MAIN_RAM__DOT__ram__v0] 
            = __VdlyVal__miniRV__DOT__MAIN_RAM__DOT__ram__v0;
    }
}

VL_INLINE_OPT void VminiRV___024root___nba_sequent__TOP__1(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___nba_sequent__TOP__1\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0;
    __VdlyVal__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0 = 0;
    CData/*3:0*/ __VdlyDim0__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0;
    __VdlyDim0__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0;
    __VdlySet__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0 = 0;
    // Body
    __VdlySet__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0 = 0U;
    if (((IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rd)))) {
        __VdlyVal__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0 
            = ((0U == (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__wb_sel))
                ? vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_result
                : ((1U == (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__wb_sel))
                    ? ((IData)(vlSelfRef.miniRV__DOT__mem_load_en)
                        ? vlSelfRef.miniRV__DOT__MAIN_RAM__DOT__ram
                       [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_result 
                                   >> 2U))] : 0U) : 
                   ((IData)(4U) + vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg)));
        __VdlyDim0__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0 
            = vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rd;
        __VdlySet__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0 = 1U;
    }
    if (__VdlySet__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0) {
        vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers[__VdlyDim0__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0] 
            = __VdlyVal__miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers__v0;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_hb9d14a42_0;
extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_heb6dbbbd_0;
extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_h7ff54604_0;
extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_hc98f84ba_0;
extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_h94d7728a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VminiRV__ConstPool__TABLE_h9f740532_0;
extern const VlUnpacked<CData/*1:0*/, 128> VminiRV__ConstPool__TABLE_h96c15fee_0;
extern const VlUnpacked<CData/*2:0*/, 128> VminiRV__ConstPool__TABLE_h5e4e623f_0;

VL_INLINE_OPT void VminiRV___024root___nba_sequent__TOP__2(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___nba_sequent__TOP__2\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ miniRV__DOT__MyCPU__DOT__imm_format;
    miniRV__DOT__MyCPU__DOT__imm_format = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_2;
    __VdfgRegularize_h495687df_0_2 = 0;
    // Body
    vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg = ((IData)(vlSelfRef.rst)
                                                  ? 0U
                                                  : vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_next);
    vlSelfRef.pc_wire = vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg;
    vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rd 
        = (0xfU & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                   [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                               >> 2U))] >> 7U));
    vlSelfRef.__VdfgRegularize_h495687df_0_5 = (1U 
                                                & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                   [
                                                   (0xfffU 
                                                    & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                       >> 2U))] 
                                                   >> 0xcU));
    vlSelfRef.__VdfgRegularize_h495687df_0_6 = (1U 
                                                & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                   [
                                                   (0xfffU 
                                                    & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                       >> 2U))] 
                                                   >> 0xdU));
    vlSelfRef.__VdfgRegularize_h495687df_0_7 = (1U 
                                                & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                   [
                                                   (0xfffU 
                                                    & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                       >> 2U))] 
                                                   >> 0xeU));
    vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs1 
        = (0xfU & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                   [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                               >> 2U))] >> 0xfU));
    vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs2 
        = (0xfU & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                   [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                               >> 2U))] >> 0x14U));
    __VdfgRegularize_h495687df_0_2 = (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                      [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                  >> 2U))] 
                                      >> 0x1fU);
    __Vtableidx1 = (0x7fU & vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                    [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                >> 2U))]);
    vlSelfRef.miniRV__DOT__MyCPU__DOT__branch_en_signal 
        = VminiRV__ConstPool__TABLE_hb9d14a42_0[__Vtableidx1];
    vlSelfRef.miniRV__DOT__MyCPU__DOT__jump_en = VminiRV__ConstPool__TABLE_heb6dbbbd_0
        [__Vtableidx1];
    vlSelfRef.miniRV__DOT__mem_store_en = VminiRV__ConstPool__TABLE_h7ff54604_0
        [__Vtableidx1];
    vlSelfRef.miniRV__DOT__mem_load_en = VminiRV__ConstPool__TABLE_hc98f84ba_0
        [__Vtableidx1];
    vlSelfRef.miniRV__DOT__MyCPU__DOT__reg_write = 
        VminiRV__ConstPool__TABLE_h94d7728a_0[__Vtableidx1];
    vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_src_sel 
        = VminiRV__ConstPool__TABLE_h9f740532_0[__Vtableidx1];
    vlSelfRef.miniRV__DOT__MyCPU__DOT__wb_sel = VminiRV__ConstPool__TABLE_h96c15fee_0
        [__Vtableidx1];
    miniRV__DOT__MyCPU__DOT__imm_format = VminiRV__ConstPool__TABLE_h5e4e623f_0
        [__Vtableidx1];
    vlSelfRef.miniRV__DOT__MyCPU__DOT__imm = ((4U & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                               ? ((2U 
                                                   & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                                    ? 
                                                   (((- (IData)((IData)(__VdfgRegularize_h495687df_0_2))) 
                                                     << 0x14U) 
                                                    | (((0xff000U 
                                                         & vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                         [
                                                         (0xfffU 
                                                          & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                             >> 2U))]) 
                                                        | (0x800U 
                                                           & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                              [
                                                              (0xfffU 
                                                               & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                  >> 2U))] 
                                                              >> 9U))) 
                                                       | (0x7feU 
                                                          & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                             [
                                                             (0xfffU 
                                                              & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                 >> 2U))] 
                                                             >> 0x14U))))
                                                    : 
                                                   (0xfffff000U 
                                                    & vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                    [
                                                    (0xfffU 
                                                     & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                        >> 2U))])))
                                               : ((2U 
                                                   & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                                    ? 
                                                   (((- (IData)((IData)(__VdfgRegularize_h495687df_0_2))) 
                                                     << 0xdU) 
                                                    | ((((IData)(__VdfgRegularize_h495687df_0_2) 
                                                         << 0xcU) 
                                                        | (0x800U 
                                                           & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                              [
                                                              (0xfffU 
                                                               & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                  >> 2U))] 
                                                              << 4U))) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                              [
                                                              (0xfffU 
                                                               & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                  >> 2U))] 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                                [
                                                                (0xfffU 
                                                                 & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                    >> 2U))] 
                                                                >> 7U)))))
                                                    : 
                                                   (((- (IData)((IData)(__VdfgRegularize_h495687df_0_2))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                           [
                                                           (0xfffU 
                                                            & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                               >> 2U))] 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                             [
                                                             (0xfffU 
                                                              & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                                 >> 2U))] 
                                                             >> 7U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(miniRV__DOT__MyCPU__DOT__imm_format))
                                                    ? 
                                                   (((- (IData)((IData)(__VdfgRegularize_h495687df_0_2))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                                                       [
                                                       (0xfffU 
                                                        & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                                           >> 2U))] 
                                                       >> 0x14U))
                                                    : 0U)));
}

VL_INLINE_OPT void VminiRV___024root___nba_comb__TOP__0(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___nba_comb__TOP__0\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ miniRV__DOT__MyCPU__DOT__reg_out1;
    miniRV__DOT__MyCPU__DOT__reg_out1 = 0;
    IData/*31:0*/ miniRV__DOT__MyCPU__DOT__alu_op_b;
    miniRV__DOT__MyCPU__DOT__alu_op_b = 0;
    // Body
    miniRV__DOT__MyCPU__DOT__reg_out1 = ((0U == (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs1))
                                          ? 0U : vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers
                                         [vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs1]);
    vlSelfRef.miniRV__DOT__store_data = ((0U == (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs2))
                                          ? 0U : vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT__GPR1__DOT__registers
                                         [vlSelfRef.miniRV__DOT__MyCPU__DOT__RegFile__DOT____Vcellinp__GPR1__Rs2]);
    vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_next = ((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_7)
                                                      ? 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_6)
                                                       ? 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                                                        ? 
                                                       (miniRV__DOT__MyCPU__DOT__reg_out1 
                                                        >= vlSelfRef.miniRV__DOT__store_data)
                                                        : 
                                                       (miniRV__DOT__MyCPU__DOT__reg_out1 
                                                        < vlSelfRef.miniRV__DOT__store_data))
                                                       : 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                                                        ? 
                                                       VL_GTES_III(32, miniRV__DOT__MyCPU__DOT__reg_out1, vlSelfRef.miniRV__DOT__store_data)
                                                        : 
                                                       VL_LTS_III(32, miniRV__DOT__MyCPU__DOT__reg_out1, vlSelfRef.miniRV__DOT__store_data)))
                                                      : 
                                                     ((~ (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_6)) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                                                          ? 
                                                         (miniRV__DOT__MyCPU__DOT__reg_out1 
                                                          != vlSelfRef.miniRV__DOT__store_data)
                                                          : 
                                                         (miniRV__DOT__MyCPU__DOT__reg_out1 
                                                          == vlSelfRef.miniRV__DOT__store_data)))) 
                                                    & (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__branch_en_signal)) 
                                                   | (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__jump_en))
                                                   ? 
                                                  (vlSelfRef.miniRV__DOT__MyCPU__DOT__imm 
                                                   + vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg)
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg));
    miniRV__DOT__MyCPU__DOT__alu_op_b = ((IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_src_sel)
                                          ? vlSelfRef.miniRV__DOT__MyCPU__DOT__imm
                                          : vlSelfRef.miniRV__DOT__store_data);
    vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_result = 
        ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_7)
          ? ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_6)
              ? ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                  ? (miniRV__DOT__MyCPU__DOT__reg_out1 
                     & miniRV__DOT__MyCPU__DOT__alu_op_b)
                  : (miniRV__DOT__MyCPU__DOT__reg_out1 
                     | miniRV__DOT__MyCPU__DOT__alu_op_b))
              : ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                  ? (miniRV__DOT__MyCPU__DOT__reg_out1 
                     >> (0x1fU & miniRV__DOT__MyCPU__DOT__alu_op_b))
                  : (miniRV__DOT__MyCPU__DOT__reg_out1 
                     ^ miniRV__DOT__MyCPU__DOT__alu_op_b)))
          : ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_6)
              ? ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
                  ? ((miniRV__DOT__MyCPU__DOT__reg_out1 
                      < miniRV__DOT__MyCPU__DOT__alu_op_b)
                      ? 1U : 0U) : (VL_LTS_III(32, miniRV__DOT__MyCPU__DOT__reg_out1, miniRV__DOT__MyCPU__DOT__alu_op_b)
                                     ? 1U : 0U)) : 
             ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_5)
               ? (miniRV__DOT__MyCPU__DOT__reg_out1 
                  << (0x1fU & miniRV__DOT__MyCPU__DOT__alu_op_b))
               : ((1U & ((~ (IData)(vlSelfRef.miniRV__DOT__MyCPU__DOT__alu_src_sel)) 
                         & (vlSelfRef.miniRV__DOT__PROG_ROM__DOT__rom
                            [(0xfffU & (vlSelfRef.miniRV__DOT__MyCPU__DOT__pc_reg 
                                        >> 2U))] >> 0x1eU)))
                   ? (miniRV__DOT__MyCPU__DOT__reg_out1 
                      - miniRV__DOT__MyCPU__DOT__alu_op_b)
                   : (miniRV__DOT__MyCPU__DOT__reg_out1 
                      + miniRV__DOT__MyCPU__DOT__alu_op_b)))));
}

void VminiRV___024root___eval_triggers__act(VminiRV___024root* vlSelf);

bool VminiRV___024root___eval_phase__act(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_phase__act\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VminiRV___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VminiRV___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VminiRV___024root___eval_phase__nba(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_phase__nba\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VminiRV___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiRV___024root___dump_triggers__nba(VminiRV___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VminiRV___024root___dump_triggers__act(VminiRV___024root* vlSelf);
#endif  // VL_DEBUG

void VminiRV___024root___eval(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VminiRV___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("miniRV.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VminiRV___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("miniRV.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VminiRV___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VminiRV___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VminiRV___024root___eval_debug_assertions(VminiRV___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiRV___024root___eval_debug_assertions\n"); );
    VminiRV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
