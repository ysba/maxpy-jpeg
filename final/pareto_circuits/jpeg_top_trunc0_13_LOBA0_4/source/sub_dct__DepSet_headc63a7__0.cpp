// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc0_13_LOBA0_4.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc0_13_LOBA0_4__Syms.h"
#include "sub_LOBA0u.h"
#include "sub_dct.h"

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__0(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__Y11;
    CData/*2:0*/ __Vdly__count_of_copy;
    // Body
    vlSelf->__Vdly__count = vlSelf->__PVT__count;
    __Vdly__count_of_copy = vlSelf->__PVT__count_of_copy;
    vlSelf->__Vdly__count_of = vlSelf->__PVT__count_of;
    __Vdly__Y11 = vlSelf->__PVT__Y11;
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vdly__count = 0U;
        __Vdly__count_of_copy = 0U;
        vlSelf->__Vdly__count_of = 0U;
        __Vdly__Y11 = 0U;
        vlSelf->__PVT__Y_temp_81 = 0U;
        vlSelf->__PVT__Y_temp_71 = 0U;
        vlSelf->__PVT__Y_temp_61 = 0U;
        vlSelf->__PVT__Y_temp_51 = 0U;
        vlSelf->__PVT__Y_temp_41 = 0U;
        vlSelf->__PVT__Y_temp_31 = 0U;
        vlSelf->__PVT__Y_temp_21 = 0U;
        vlSelf->__PVT__data_1 = 0U;
        vlSelf->__PVT__Z_temp_11 = 0U;
        vlSelf->__PVT__Z_temp_12 = 0U;
        vlSelf->__PVT__Z_temp_13 = 0U;
        vlSelf->__PVT__Z_temp_14 = 0U;
        vlSelf->__PVT__Z_temp_15 = 0U;
        vlSelf->__PVT__Z_temp_16 = 0U;
        vlSelf->__PVT__Z_temp_17 = 0U;
        vlSelf->__PVT__Z_temp_18 = 0U;
        vlSelf->__PVT__Z_temp_88 = 0U;
        vlSelf->__PVT__Z_temp_87 = 0U;
        vlSelf->__PVT__Z_temp_86 = 0U;
        vlSelf->__PVT__Z_temp_85 = 0U;
        vlSelf->__PVT__Z_temp_84 = 0U;
        vlSelf->__PVT__Z_temp_83 = 0U;
        vlSelf->__PVT__Z_temp_44 = 0U;
        vlSelf->__PVT__Z_temp_43 = 0U;
        vlSelf->__PVT__Z_temp_42 = 0U;
        vlSelf->__PVT__Z_temp_41 = 0U;
        vlSelf->__PVT__Z_temp_38 = 0U;
        vlSelf->__PVT__Z_temp_37 = 0U;
        vlSelf->__PVT__Z_temp_36 = 0U;
        vlSelf->__PVT__Z_temp_35 = 0U;
        vlSelf->__PVT__Z_temp_34 = 0U;
        vlSelf->__PVT__Z_temp_33 = 0U;
        vlSelf->__PVT__Z_temp_32 = 0U;
        vlSelf->__PVT__Z_temp_31 = 0U;
        vlSelf->__PVT__Z_temp_28 = 0U;
        vlSelf->__PVT__Z_temp_27 = 0U;
        vlSelf->__PVT__Z_temp_26 = 0U;
        vlSelf->__PVT__Z_temp_25 = 0U;
        vlSelf->__PVT__Z_temp_21 = 0U;
        vlSelf->__PVT__Z_temp_22 = 0U;
        vlSelf->__PVT__Z_temp_23 = 0U;
        vlSelf->__PVT__Z_temp_24 = 0U;
        vlSelf->__PVT__Z_temp_45 = 0U;
        vlSelf->__PVT__Z_temp_46 = 0U;
        vlSelf->__PVT__Z_temp_47 = 0U;
        vlSelf->__PVT__Z_temp_48 = 0U;
        vlSelf->__PVT__Z_temp_51 = 0U;
        vlSelf->__PVT__Z_temp_52 = 0U;
        vlSelf->__PVT__Z_temp_53 = 0U;
        vlSelf->__PVT__Z_temp_54 = 0U;
        vlSelf->__PVT__Z_temp_55 = 0U;
        vlSelf->__PVT__Z_temp_56 = 0U;
        vlSelf->__PVT__Z_temp_57 = 0U;
        vlSelf->__PVT__Z_temp_58 = 0U;
        vlSelf->__PVT__Z_temp_61 = 0U;
        vlSelf->__PVT__Z_temp_62 = 0U;
        vlSelf->__PVT__Z_temp_63 = 0U;
        vlSelf->__PVT__Z_temp_64 = 0U;
        vlSelf->__PVT__Z_temp_65 = 0U;
        vlSelf->__PVT__Z_temp_66 = 0U;
        vlSelf->__PVT__Z_temp_67 = 0U;
        vlSelf->__PVT__Z_temp_68 = 0U;
        vlSelf->__PVT__Z_temp_71 = 0U;
        vlSelf->__PVT__Z_temp_72 = 0U;
        vlSelf->__PVT__Z_temp_73 = 0U;
        vlSelf->__PVT__Z_temp_74 = 0U;
        vlSelf->__PVT__Z_temp_75 = 0U;
        vlSelf->__PVT__Z_temp_76 = 0U;
        vlSelf->__PVT__Z_temp_77 = 0U;
        vlSelf->__PVT__Z_temp_78 = 0U;
        vlSelf->__PVT__Z_temp_81 = 0U;
        vlSelf->__PVT__Z_temp_82 = 0U;
        vlSelf->__PVT__Y_temp_11 = 0U;
        vlSelf->__PVT__Y11_final_4 = 0U;
        vlSelf->__PVT__Y31_final_2 = 0U;
        vlSelf->__PVT__Y21_final_2 = 0U;
        vlSelf->__PVT__Y41_final_2 = 0U;
        vlSelf->__PVT__Y51_final_2 = 0U;
        vlSelf->__PVT__Y61_final_2 = 0U;
        vlSelf->__PVT__Y71_final_2 = 0U;
        vlSelf->__PVT__Y81_final_2 = 0U;
        vlSelf->__PVT__Y11_final_3 = 0U;
        vlSelf->__PVT__Y31_final_1 = 0U;
        vlSelf->__PVT__Y21_final_1 = 0U;
        vlSelf->__PVT__Y41_final_1 = 0U;
        vlSelf->__PVT__Y51_final_1 = 0U;
        vlSelf->__PVT__Y61_final_1 = 0U;
        vlSelf->__PVT__Y71_final_1 = 0U;
        vlSelf->__PVT__Y81_final_1 = 0U;
        vlSelf->__PVT__Y11_final_2 = 0U;
        vlSelf->__PVT__Y31_final_diff = 0U;
        vlSelf->__PVT__Y21_final_diff = 0U;
        vlSelf->__PVT__Y41_final_diff = 0U;
        vlSelf->__PVT__Y51_final_diff = 0U;
        vlSelf->__PVT__Y61_final_diff = 0U;
        vlSelf->__PVT__Y71_final_diff = 0U;
        vlSelf->__PVT__Y81_final_diff = 0U;
        vlSelf->__PVT__Y11_final_1 = 0U;
        vlSelf->__PVT__Y31_final_prev = 0U;
        vlSelf->__PVT__Y21_final_prev = 0U;
        vlSelf->__PVT__Y41_final_prev = 0U;
        vlSelf->__PVT__Y51_final_prev = 0U;
        vlSelf->__PVT__Y61_final_prev = 0U;
        vlSelf->__PVT__Y71_final_prev = 0U;
        vlSelf->__PVT__Y81_final_prev = 0U;
        vlSelf->__PVT__Y11_final = 0U;
        vlSelf->__PVT__Y31_final = 0U;
        vlSelf->__PVT__Y21_final = 0U;
        vlSelf->__PVT__Y41_final = 0U;
        vlSelf->__PVT__Y51_final = 0U;
        vlSelf->__PVT__Y61_final = 0U;
        vlSelf->__PVT__Y71_final = 0U;
        vlSelf->__PVT__Y81_final = 0U;
        vlSelf->__PVT__Y31 = 0U;
        vlSelf->__PVT__Y21 = 0U;
        vlSelf->__PVT__Y41 = 0U;
        vlSelf->__PVT__Y51 = 0U;
        vlSelf->__PVT__Y61 = 0U;
        vlSelf->__PVT__Y71 = 0U;
        vlSelf->__PVT__Y81 = 0U;
    } else {
        if (((1U == (IData)(vlSelf->__PVT__count)) 
             & (IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))) {
            __Vdly__Y11 = vlSelf->__PVT__Y_temp_11;
        } else if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            __Vdly__Y11 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_11 
                                         + vlSelf->__PVT__Y11));
        }
        if (((IData)(vlSelf->__PVT__enable_1) & (IData)(vlSelf->__PVT__count_8))) {
            vlSelf->__PVT__Z_temp_11 = ((0x8000U & 
                                         (vlSelf->__PVT__Y11_final_4 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u86__DOT__u1->r))
                                         : vlSelf->__PVT__u86__DOT__u1->r);
            vlSelf->__PVT__Z_temp_12 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u87__DOT__u1->r))
                                         : vlSelf->__PVT__u87__DOT__u1->r);
            vlSelf->__PVT__Z_temp_13 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u88__DOT__u1->r))
                                         : vlSelf->__PVT__u88__DOT__u1->r);
            vlSelf->__PVT__Z_temp_14 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u89__DOT__u1->r))
                                         : vlSelf->__PVT__u89__DOT__u1->r);
            vlSelf->__PVT__Z_temp_15 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u90__DOT__u1->r))
                                         : vlSelf->__PVT__u90__DOT__u1->r);
            vlSelf->__PVT__Z_temp_16 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u91__DOT__u1->r))
                                         : vlSelf->__PVT__u91__DOT__u1->r);
            vlSelf->__PVT__Z_temp_17 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u92__DOT__u1->r))
                                         : vlSelf->__PVT__u92__DOT__u1->r);
            vlSelf->__PVT__Z_temp_18 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u93__DOT__u1->r))
                                         : vlSelf->__PVT__u93__DOT__u1->r);
            vlSelf->__PVT__Z_temp_88 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u149__DOT__u1->r))
                                         : vlSelf->__PVT__u149__DOT__u1->r);
            vlSelf->__PVT__Z_temp_87 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u148__DOT__u1->r))
                                         : vlSelf->__PVT__u148__DOT__u1->r);
            vlSelf->__PVT__Z_temp_86 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u147__DOT__u1->r))
                                         : vlSelf->__PVT__u147__DOT__u1->r);
            vlSelf->__PVT__Z_temp_85 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u146__DOT__u1->r))
                                         : vlSelf->__PVT__u146__DOT__u1->r);
            vlSelf->__PVT__Z_temp_84 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u145__DOT__u1->r))
                                         : vlSelf->__PVT__u145__DOT__u1->r);
            vlSelf->__PVT__Z_temp_83 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u144__DOT__u1->r))
                                         : vlSelf->__PVT__u144__DOT__u1->r);
            vlSelf->__PVT__Z_temp_44 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u113__DOT__u1->r))
                                         : vlSelf->__PVT__u113__DOT__u1->r);
            vlSelf->__PVT__Z_temp_43 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u112__DOT__u1->r))
                                         : vlSelf->__PVT__u112__DOT__u1->r);
            vlSelf->__PVT__Z_temp_42 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u111__DOT__u1->r))
                                         : vlSelf->__PVT__u111__DOT__u1->r);
            vlSelf->__PVT__Z_temp_41 = ((0x8000U & 
                                         (vlSelf->__PVT__Y41_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u110__DOT__u1->r))
                                         : vlSelf->__PVT__u110__DOT__u1->r);
            vlSelf->__PVT__Z_temp_38 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u109__DOT__u1->r))
                                         : vlSelf->__PVT__u109__DOT__u1->r);
            vlSelf->__PVT__Z_temp_37 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u108__DOT__u1->r))
                                         : vlSelf->__PVT__u108__DOT__u1->r);
            vlSelf->__PVT__Z_temp_36 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u107__DOT__u1->r))
                                         : vlSelf->__PVT__u107__DOT__u1->r);
            vlSelf->__PVT__Z_temp_35 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u106__DOT__u1->r))
                                         : vlSelf->__PVT__u106__DOT__u1->r);
            vlSelf->__PVT__Z_temp_34 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u105__DOT__u1->r))
                                         : vlSelf->__PVT__u105__DOT__u1->r);
            vlSelf->__PVT__Z_temp_33 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u104__DOT__u1->r))
                                         : vlSelf->__PVT__u104__DOT__u1->r);
            vlSelf->__PVT__Z_temp_32 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u103__DOT__u1->r))
                                         : vlSelf->__PVT__u103__DOT__u1->r);
            vlSelf->__PVT__Z_temp_31 = ((0x8000U & 
                                         (vlSelf->__PVT__Y31_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u102__DOT__u1->r))
                                         : vlSelf->__PVT__u102__DOT__u1->r);
            vlSelf->__PVT__Z_temp_28 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u101__DOT__u1->r))
                                         : vlSelf->__PVT__u101__DOT__u1->r);
            vlSelf->__PVT__Z_temp_27 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u100__DOT__u1->r))
                                         : vlSelf->__PVT__u100__DOT__u1->r);
            vlSelf->__PVT__Z_temp_26 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u99__DOT__u1->r))
                                         : vlSelf->__PVT__u99__DOT__u1->r);
            vlSelf->__PVT__Z_temp_25 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u98__DOT__u1->r))
                                         : vlSelf->__PVT__u98__DOT__u1->r);
            vlSelf->__PVT__Z_temp_21 = ((0x8000U & 
                                         (vlSelf->__PVT__Y21_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u94__DOT__u1->r))
                                         : vlSelf->__PVT__u94__DOT__u1->r);
            vlSelf->__PVT__Z_temp_22 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u95__DOT__u1->r))
                                         : vlSelf->__PVT__u95__DOT__u1->r);
            vlSelf->__PVT__Z_temp_23 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u96__DOT__u1->r))
                                         : vlSelf->__PVT__u96__DOT__u1->r);
            vlSelf->__PVT__Z_temp_24 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u97__DOT__u1->r))
                                         : vlSelf->__PVT__u97__DOT__u1->r);
            vlSelf->__PVT__Z_temp_45 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u114__DOT__u1->r))
                                         : vlSelf->__PVT__u114__DOT__u1->r);
            vlSelf->__PVT__Z_temp_46 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u115__DOT__u1->r))
                                         : vlSelf->__PVT__u115__DOT__u1->r);
            vlSelf->__PVT__Z_temp_47 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u116__DOT__u1->r))
                                         : vlSelf->__PVT__u116__DOT__u1->r);
            vlSelf->__PVT__Z_temp_48 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u117__DOT__u1->r))
                                         : vlSelf->__PVT__u117__DOT__u1->r);
            vlSelf->__PVT__Z_temp_51 = ((0x8000U & 
                                         (vlSelf->__PVT__Y51_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u118__DOT__u1->r))
                                         : vlSelf->__PVT__u118__DOT__u1->r);
            vlSelf->__PVT__Z_temp_52 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u119__DOT__u1->r))
                                         : vlSelf->__PVT__u119__DOT__u1->r);
            vlSelf->__PVT__Z_temp_53 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u120__DOT__u1->r))
                                         : vlSelf->__PVT__u120__DOT__u1->r);
            vlSelf->__PVT__Z_temp_54 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u121__DOT__u1->r))
                                         : vlSelf->__PVT__u121__DOT__u1->r);
            vlSelf->__PVT__Z_temp_55 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u122__DOT__u1->r))
                                         : vlSelf->__PVT__u122__DOT__u1->r);
            vlSelf->__PVT__Z_temp_56 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u123__DOT__u1->r))
                                         : vlSelf->__PVT__u123__DOT__u1->r);
            vlSelf->__PVT__Z_temp_57 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u124__DOT__u1->r))
                                         : vlSelf->__PVT__u124__DOT__u1->r);
            vlSelf->__PVT__Z_temp_58 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u125__DOT__u1->r))
                                         : vlSelf->__PVT__u125__DOT__u1->r);
            vlSelf->__PVT__Z_temp_61 = ((0x8000U & 
                                         (vlSelf->__PVT__Y61_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u126__DOT__u1->r))
                                         : vlSelf->__PVT__u126__DOT__u1->r);
            vlSelf->__PVT__Z_temp_62 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u127__DOT__u1->r))
                                         : vlSelf->__PVT__u127__DOT__u1->r);
            vlSelf->__PVT__Z_temp_63 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u128__DOT__u1->r))
                                         : vlSelf->__PVT__u128__DOT__u1->r);
            vlSelf->__PVT__Z_temp_64 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u129__DOT__u1->r))
                                         : vlSelf->__PVT__u129__DOT__u1->r);
            vlSelf->__PVT__Z_temp_65 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u130__DOT__u1->r))
                                         : vlSelf->__PVT__u130__DOT__u1->r);
            vlSelf->__PVT__Z_temp_66 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u131__DOT__u1->r))
                                         : vlSelf->__PVT__u131__DOT__u1->r);
            vlSelf->__PVT__Z_temp_67 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u132__DOT__u1->r))
                                         : vlSelf->__PVT__u132__DOT__u1->r);
            vlSelf->__PVT__Z_temp_68 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u133__DOT__u1->r))
                                         : vlSelf->__PVT__u133__DOT__u1->r);
            vlSelf->__PVT__Z_temp_71 = ((0x8000U & 
                                         (vlSelf->__PVT__Y71_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u134__DOT__u1->r))
                                         : vlSelf->__PVT__u134__DOT__u1->r);
            vlSelf->__PVT__Z_temp_72 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u135__DOT__u1->r))
                                         : vlSelf->__PVT__u135__DOT__u1->r);
            vlSelf->__PVT__Z_temp_73 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u136__DOT__u1->r))
                                         : vlSelf->__PVT__u136__DOT__u1->r);
            vlSelf->__PVT__Z_temp_74 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u137__DOT__u1->r))
                                         : vlSelf->__PVT__u137__DOT__u1->r);
            vlSelf->__PVT__Z_temp_75 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u138__DOT__u1->r))
                                         : vlSelf->__PVT__u138__DOT__u1->r);
            vlSelf->__PVT__Z_temp_76 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u139__DOT__u1->r))
                                         : vlSelf->__PVT__u139__DOT__u1->r);
            vlSelf->__PVT__Z_temp_77 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u140__DOT__u1->r))
                                         : vlSelf->__PVT__u140__DOT__u1->r);
            vlSelf->__PVT__Z_temp_78 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u141__DOT__u1->r))
                                         : vlSelf->__PVT__u141__DOT__u1->r);
            vlSelf->__PVT__Z_temp_81 = ((0x8000U & 
                                         (vlSelf->__PVT__Y81_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u142__DOT__u1->r))
                                         : vlSelf->__PVT__u142__DOT__u1->r);
            vlSelf->__PVT__Z_temp_82 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u143__DOT__u1->r))
                                         : vlSelf->__PVT__u143__DOT__u1->r);
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
                vlSelf->__Vdly__count = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count)));
            }
            if (vlSelf->__PVT__count_1) {
                __Vdly__count_of_copy = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count_of_copy)));
                vlSelf->__Vdly__count_of = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__count_of)));
            }
            vlSelf->__PVT__data_1 = vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR;
            vlSelf->__PVT__Y_temp_11 = (0x1ffffffU 
                                        & ((IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR) 
                                           * vlSelf->__PVT__T1));
            vlSelf->__PVT__Y11_final_4 = vlSelf->__PVT__Y11_final_3;
            vlSelf->__PVT__Y31_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y31_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y31_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (IData)(vlSelf->__PVT__Y31_final_1));
            vlSelf->__PVT__Y21_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y21_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y21_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (IData)(vlSelf->__PVT__Y21_final_1));
            vlSelf->__PVT__Y41_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y41_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y41_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (IData)(vlSelf->__PVT__Y41_final_1));
            vlSelf->__PVT__Y51_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y51_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y51_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (IData)(vlSelf->__PVT__Y51_final_1));
            vlSelf->__PVT__Y61_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y61_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y61_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (IData)(vlSelf->__PVT__Y61_final_1));
            vlSelf->__PVT__Y71_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y71_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y71_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (IData)(vlSelf->__PVT__Y71_final_1));
            vlSelf->__PVT__Y81_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y81_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y81_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (IData)(vlSelf->__PVT__Y81_final_1));
            vlSelf->__PVT__Y11_final_3 = vlSelf->__PVT__Y11_final_2;
            vlSelf->__PVT__Y31_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y31_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y31_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y31_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y21_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y21_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y21_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y21_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y41_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y41_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y41_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y41_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y51_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y51_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y51_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y51_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y61_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y61_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y61_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y61_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y71_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y71_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y71_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y71_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y81_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y81_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y81_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y81_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y11_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y11_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y11_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (IData)(vlSelf->__PVT__Y11_final_1));
            vlSelf->__PVT__Y11_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y11_final)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y11_final 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y11_final 
                                                  >> 0xcU))));
        } else {
            vlSelf->__Vdly__count = 0U;
            __Vdly__count_of_copy = 0U;
            vlSelf->__Vdly__count_of = 0U;
        }
        if (((IData)(vlSelf->__PVT__count_5) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y31_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y31_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y31_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y21_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y21_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y21_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y41_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y41_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y41_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y51_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y51_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y51_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y61_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y61_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y61_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y71_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y71_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y71_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y81_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y81_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y81_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
        }
        if (vlSelf->__PVT__enable_1) {
            if (((IData)(vlSelf->__PVT__count_4) & (IData)(vlSelf->__PVT__enable_1))) {
                vlSelf->__PVT__Y31_final_prev = vlSelf->__PVT__Y31_final;
                vlSelf->__PVT__Y21_final_prev = vlSelf->__PVT__Y21_final;
                vlSelf->__PVT__Y41_final_prev = vlSelf->__PVT__Y41_final;
                vlSelf->__PVT__Y51_final_prev = vlSelf->__PVT__Y51_final;
                vlSelf->__PVT__Y61_final_prev = vlSelf->__PVT__Y61_final;
                vlSelf->__PVT__Y71_final_prev = vlSelf->__PVT__Y71_final;
                vlSelf->__PVT__Y81_final_prev = vlSelf->__PVT__Y81_final;
                vlSelf->__PVT__Y31_final = vlSelf->__PVT__Y31;
                vlSelf->__PVT__Y21_final = vlSelf->__PVT__Y21;
                vlSelf->__PVT__Y41_final = vlSelf->__PVT__Y41;
                vlSelf->__PVT__Y51_final = vlSelf->__PVT__Y51;
                vlSelf->__PVT__Y61_final = vlSelf->__PVT__Y61;
                vlSelf->__PVT__Y71_final = vlSelf->__PVT__Y71;
                vlSelf->__PVT__Y81_final = vlSelf->__PVT__Y81;
            }
            if (vlSelf->__PVT__enable_1) {
                vlSelf->__PVT__Y_temp_81 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_hc686e7df__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u85__DOT__u1->r))
                                                 : vlSelf->__PVT__u85__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hc686e7df__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u85__DOT__u1->r))
                                                       : vlSelf->__PVT__u85__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hc686e7df__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u85__DOT__u1->r))
                                                    : vlSelf->__PVT__u85__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_71 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u84__DOT__u1->r))
                                                 : vlSelf->__PVT__u84__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u84__DOT__u1->r))
                                                       : vlSelf->__PVT__u84__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u84__DOT__u1->r))
                                                    : vlSelf->__PVT__u84__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_61 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_hb6088b02__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u83__DOT__u1->r))
                                                 : vlSelf->__PVT__u83__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hb6088b02__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u83__DOT__u1->r))
                                                       : vlSelf->__PVT__u83__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hb6088b02__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u83__DOT__u1->r))
                                                    : vlSelf->__PVT__u83__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_51 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u82__DOT__u1->r))
                                                 : vlSelf->__PVT__u82__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u82__DOT__u1->r))
                                                       : vlSelf->__PVT__u82__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u82__DOT__u1->r))
                                                    : vlSelf->__PVT__u82__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_41 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_ha58a2781__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u81__DOT__u1->r))
                                                 : vlSelf->__PVT__u81__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_ha58a2781__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u81__DOT__u1->r))
                                                       : vlSelf->__PVT__u81__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_ha58a2781__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u81__DOT__u1->r))
                                                    : vlSelf->__PVT__u81__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_31 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_h3a975308__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u80__DOT__u1->r))
                                                 : vlSelf->__PVT__u80__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h3a975308__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u80__DOT__u1->r))
                                                       : vlSelf->__PVT__u80__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h3a975308__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u80__DOT__u1->r))
                                                    : vlSelf->__PVT__u80__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_21 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u79__DOT__u1->r))
                                                 : vlSelf->__PVT__u79__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u79__DOT__u1->r))
                                                       : vlSelf->__PVT__u79__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u79__DOT__u1->r))
                                                    : vlSelf->__PVT__u79__DOT__u1->r)));
                vlSelf->__PVT__Y31 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h53832542__0 
                                       << 0xdU));
                vlSelf->__PVT__Y21 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_ha2e8c01e__0 
                                       << 0xdU));
                vlSelf->__PVT__Y41 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h5e674723__0 
                                       << 0xdU));
                vlSelf->__PVT__Y51 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h35911cf1__0 
                                       << 0xdU));
                vlSelf->__PVT__Y61 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h40d26797__0 
                                       << 0xdU));
                vlSelf->__PVT__Y71 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h540d27e9__0 
                                       << 0xdU));
                vlSelf->__PVT__Y81 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h54a82709__0 
                                       << 0xdU));
            }
        } else {
            vlSelf->__PVT__Y_temp_81 = 0U;
            vlSelf->__PVT__Y_temp_71 = 0U;
            vlSelf->__PVT__Y_temp_61 = 0U;
            vlSelf->__PVT__Y_temp_51 = 0U;
            vlSelf->__PVT__Y_temp_41 = 0U;
            vlSelf->__PVT__Y_temp_31 = 0U;
            vlSelf->__PVT__Y_temp_21 = 0U;
            vlSelf->__PVT__Y31_final_prev = 0U;
            vlSelf->__PVT__Y21_final_prev = 0U;
            vlSelf->__PVT__Y41_final_prev = 0U;
            vlSelf->__PVT__Y51_final_prev = 0U;
            vlSelf->__PVT__Y61_final_prev = 0U;
            vlSelf->__PVT__Y71_final_prev = 0U;
            vlSelf->__PVT__Y81_final_prev = 0U;
            vlSelf->__PVT__Y31_final = 0U;
            vlSelf->__PVT__Y21_final = 0U;
            vlSelf->__PVT__Y41_final = 0U;
            vlSelf->__PVT__Y51_final = 0U;
            vlSelf->__PVT__Y61_final = 0U;
            vlSelf->__PVT__Y71_final = 0U;
            vlSelf->__PVT__Y81_final = 0U;
            vlSelf->__PVT__Y31 = 0U;
            vlSelf->__PVT__Y21 = 0U;
            vlSelf->__PVT__Y41 = 0U;
            vlSelf->__PVT__Y51 = 0U;
            vlSelf->__PVT__Y61 = 0U;
            vlSelf->__PVT__Y71 = 0U;
            vlSelf->__PVT__Y81 = 0U;
        }
        if (((IData)(vlSelf->__PVT__count_3) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y11_final = (0x1ffffffU 
                                        & (vlSelf->__PVT__Y11 
                                           - (IData)(0x5a8400U)));
        }
    }
    if ((4U & (IData)(vlSelf->__PVT__count))) {
        if ((2U & (IData)(vlSelf->__PVT__count))) {
            if ((1U & (IData)(vlSelf->__PVT__count))) {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T25;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T26;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T27;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T28;
            } else {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T23;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T21;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T24;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T27;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T25;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T26;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T23;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T25;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count))) {
        if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T26;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T24;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T24;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T23;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__count))) {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T26;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T28;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T25;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T22;
    } else {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T24;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T23;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T22;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T21;
    }
    if ((4U & (IData)(vlSelf->__PVT__count_of_copy))) {
        if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti24;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti27;
            } else {
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti25;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti26;
            }
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
        } else {
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti33;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti34;
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti25;
            } else {
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti28;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti22;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti26;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti24;
            }
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti23;
        } else {
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti22;
        }
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
    } else {
        vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti32;
        vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti31;
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti23;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti21;
        } else {
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti27;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti28;
        }
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
    }
    vlSelf->__PVT__count_of_copy = __Vdly__count_of_copy;
    vlSelf->__PVT__T52 = 0xffffe95fU;
    vlSelf->__VdfgTmp_h4c5300e6__0 = ((0x2000U & vlSelf->__PVT__Y5_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y5_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y5_mul_input)));
    vlSelf->__VdfgTmp_hde2d8c69__0 = ((0x2000U & vlSelf->__PVT__Y7_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y7_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y7_mul_input)));
    vlSelf->__PVT__T31 = 0x1d90U;
    vlSelf->__PVT__T32 = 0xc3fU;
    vlSelf->__PVT__T33 = 0xfffff3c1U;
    vlSelf->__PVT__T34 = 0xffffe270U;
    vlSelf->__VdfgTmp_h3a975308__0 = ((0x2000U & vlSelf->__PVT__Y3_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y3_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y3_mul_input)));
    vlSelf->__VdfgTmp_hc686e7df__0 = ((0x2000U & vlSelf->__PVT__Y8_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y8_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y8_mul_input)));
    vlSelf->__VdfgTmp_hb6088b02__0 = ((0x2000U & vlSelf->__PVT__Y6_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y6_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y6_mul_input)));
    vlSelf->__VdfgTmp_ha58a2781__0 = ((0x2000U & vlSelf->__PVT__Y4_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y4_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y4_mul_input)));
    vlSelf->__PVT__T28 = 0xffffe09dU;
    vlSelf->__PVT__T27 = 0xffffe565U;
    vlSelf->__PVT__T26 = 0xffffee39U;
    vlSelf->__PVT__T25 = 0xfffff9c2U;
    vlSelf->__PVT__T24 = 0x63eU;
    vlSelf->__PVT__T23 = 0x11c7U;
    vlSelf->__PVT__T22 = 0x1a9bU;
    vlSelf->__PVT__T21 = 0x1f63U;
    vlSelf->__VdfgTmp_h7f1a2df4__0 = ((0x2000U & vlSelf->__PVT__Y2_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y2_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y2_mul_input)));
    vlSelf->__VdfgTmp_h4f997fe4__0 = ((0x2000U & vlSelf->__PVT__Ti7_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti7_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti7_mul_input)));
    vlSelf->__PVT__Ti32 = 0xc3fU;
    vlSelf->__PVT__Ti33 = 0xfffff3c1U;
    vlSelf->__PVT__Ti34 = 0xffffe270U;
    vlSelf->__PVT__Ti31 = 0x1d90U;
    vlSelf->__VdfgTmp_hb5d3819f__0 = ((0x2000U & vlSelf->__PVT__Ti3_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti3_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti3_mul_input)));
    vlSelf->__VdfgTmp_h38cce513__0 = ((0x2000U & vlSelf->__PVT__Ti8_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti8_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti8_mul_input)));
    vlSelf->__VdfgTmp_h216275e3__0 = ((0x2000U & vlSelf->__PVT__Ti6_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti6_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti6_mul_input)));
    vlSelf->__VdfgTmp_h6b20eb67__0 = ((0x2000U & vlSelf->__PVT__Ti4_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti4_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti4_mul_input)));
    vlSelf->__PVT__Ti27 = 0xffffe565U;
    vlSelf->__PVT__Ti26 = 0xffffee39U;
    vlSelf->__PVT__Ti25 = 0xfffff9c2U;
    vlSelf->__PVT__Ti24 = 0x63eU;
    vlSelf->__PVT__Ti23 = 0x11c7U;
    vlSelf->__PVT__Ti22 = 0x1a9bU;
    vlSelf->__PVT__Ti21 = 0x1f63U;
    vlSelf->__PVT__Ti28 = 0xffffe09dU;
    vlSelf->__VdfgTmp_hd358cecd__0 = ((0x2000U & vlSelf->__PVT__Ti2_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti2_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti2_mul_input)));
    vlSelf->__PVT__Ti52 = 0xffffe95fU;
    vlSelf->__VdfgTmp_h223a61ce__0 = ((0x2000U & vlSelf->__PVT__Ti5_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti5_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti5_mul_input)));
    vlSelf->__PVT__Ti1 = 0x16a1U;
    vlSelf->__PVT__u82__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h4c5300e6__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h4c5300e6__0))));
    vlSelf->__PVT__u84__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hde2d8c69__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hde2d8c69__0))));
    vlSelf->__PVT__u80__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h3a975308__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h3a975308__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h3a975308__0))));
    vlSelf->__PVT__u85__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hc686e7df__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hc686e7df__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hc686e7df__0))));
    vlSelf->__PVT__u83__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hb6088b02__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hb6088b02__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hb6088b02__0))));
    vlSelf->__PVT__u81__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_ha58a2781__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_ha58a2781__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_ha58a2781__0))));
    vlSelf->__PVT__u79__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h7f1a2df4__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h7f1a2df4__0))));
    vlSelf->__PVT__u100__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h4f997fe4__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h4f997fe4__0))));
    vlSelf->__PVT__u104__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_hb5d3819f__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_hb5d3819f__0))));
    vlSelf->__PVT__u101__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h38cce513__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h38cce513__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h38cce513__0))));
    vlSelf->__PVT__u107__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h216275e3__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h216275e3__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h216275e3__0))));
    vlSelf->__PVT__u105__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h6b20eb67__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h6b20eb67__0))));
    vlSelf->__PVT__u103__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hd358cecd__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_hd358cecd__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_hd358cecd__0))));
    vlSelf->__PVT__u106__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h223a61ce__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h223a61ce__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h223a61ce__0))));
    vlSelf->__PVT__T1 = 0x16a1U;
    vlSelf->__Vcellinp__u102____pinNumber2 = ((0x2000U 
                                               & (IData)(vlSelf->__PVT__Ti1))
                                               ? (0xc000U 
                                                  | (IData)(vlSelf->__PVT__Ti1))
                                               : (IData)(vlSelf->__PVT__Ti1));
    vlSelf->__PVT__u86__DOT__a_temp = (0xffffU & ((0x8000U 
                                                   & vlSelf->__PVT__Y11_final_4)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & vlSelf->__PVT__Y11_final_4)))
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->__PVT__Y11_final_4)));
    vlSelf->__PVT__u102__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y31_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y31_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y31_final_2)));
    vlSelf->__PVT__u100__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y21_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y21_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y21_final_2)));
    vlSelf->__PVT__u110__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y41_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y41_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y41_final_2)));
    vlSelf->__PVT__u118__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y51_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y51_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y51_final_2)));
    vlSelf->__PVT__u126__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y61_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y61_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y61_final_2)));
    vlSelf->__PVT__u134__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y71_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y71_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y71_final_2)));
    vlSelf->__PVT__u142__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y81_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y81_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y81_final_2)));
    vlSelf->__PVT__u102__DOT__b_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & (IData)(vlSelf->__Vcellinp__u102____pinNumber2))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                                    : (IData)(vlSelf->__Vcellinp__u102____pinNumber2)));
    vlSelf->__PVT__Y11 = __Vdly__Y11;
    vlSelf->__VdfgTmp_h53832542__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_31 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y31 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_ha2e8c01e__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_21 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y21 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h5e674723__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_41 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y41 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h35911cf1__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_51 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y51 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h40d26797__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_61 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y61 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h540d27e9__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_71 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y71 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h54a82709__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_81 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y81 
                                                      >> 0xdU))));
}

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__0(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__Y11;
    CData/*2:0*/ __Vdly__count_of_copy;
    // Body
    vlSelf->__Vdly__count = vlSelf->__PVT__count;
    __Vdly__count_of_copy = vlSelf->__PVT__count_of_copy;
    vlSelf->__Vdly__count_of = vlSelf->__PVT__count_of;
    __Vdly__Y11 = vlSelf->__PVT__Y11;
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vdly__count = 0U;
        __Vdly__count_of_copy = 0U;
        vlSelf->__Vdly__count_of = 0U;
        __Vdly__Y11 = 0U;
        vlSelf->__PVT__Y_temp_81 = 0U;
        vlSelf->__PVT__Y_temp_71 = 0U;
        vlSelf->__PVT__Y_temp_61 = 0U;
        vlSelf->__PVT__Y_temp_51 = 0U;
        vlSelf->__PVT__Y_temp_41 = 0U;
        vlSelf->__PVT__Y_temp_31 = 0U;
        vlSelf->__PVT__Y_temp_21 = 0U;
        vlSelf->__PVT__data_1 = 0U;
        vlSelf->__PVT__Z_temp_11 = 0U;
        vlSelf->__PVT__Z_temp_12 = 0U;
        vlSelf->__PVT__Z_temp_13 = 0U;
        vlSelf->__PVT__Z_temp_14 = 0U;
        vlSelf->__PVT__Z_temp_15 = 0U;
        vlSelf->__PVT__Z_temp_16 = 0U;
        vlSelf->__PVT__Z_temp_17 = 0U;
        vlSelf->__PVT__Z_temp_18 = 0U;
        vlSelf->__PVT__Z_temp_88 = 0U;
        vlSelf->__PVT__Z_temp_87 = 0U;
        vlSelf->__PVT__Z_temp_86 = 0U;
        vlSelf->__PVT__Z_temp_85 = 0U;
        vlSelf->__PVT__Z_temp_84 = 0U;
        vlSelf->__PVT__Z_temp_83 = 0U;
        vlSelf->__PVT__Z_temp_44 = 0U;
        vlSelf->__PVT__Z_temp_43 = 0U;
        vlSelf->__PVT__Z_temp_42 = 0U;
        vlSelf->__PVT__Z_temp_41 = 0U;
        vlSelf->__PVT__Z_temp_38 = 0U;
        vlSelf->__PVT__Z_temp_37 = 0U;
        vlSelf->__PVT__Z_temp_36 = 0U;
        vlSelf->__PVT__Z_temp_35 = 0U;
        vlSelf->__PVT__Z_temp_34 = 0U;
        vlSelf->__PVT__Z_temp_33 = 0U;
        vlSelf->__PVT__Z_temp_32 = 0U;
        vlSelf->__PVT__Z_temp_31 = 0U;
        vlSelf->__PVT__Z_temp_28 = 0U;
        vlSelf->__PVT__Z_temp_27 = 0U;
        vlSelf->__PVT__Z_temp_26 = 0U;
        vlSelf->__PVT__Z_temp_25 = 0U;
        vlSelf->__PVT__Z_temp_21 = 0U;
        vlSelf->__PVT__Z_temp_22 = 0U;
        vlSelf->__PVT__Z_temp_23 = 0U;
        vlSelf->__PVT__Z_temp_24 = 0U;
        vlSelf->__PVT__Z_temp_45 = 0U;
        vlSelf->__PVT__Z_temp_46 = 0U;
        vlSelf->__PVT__Z_temp_47 = 0U;
        vlSelf->__PVT__Z_temp_48 = 0U;
        vlSelf->__PVT__Z_temp_51 = 0U;
        vlSelf->__PVT__Z_temp_52 = 0U;
        vlSelf->__PVT__Z_temp_53 = 0U;
        vlSelf->__PVT__Z_temp_54 = 0U;
        vlSelf->__PVT__Z_temp_55 = 0U;
        vlSelf->__PVT__Z_temp_56 = 0U;
        vlSelf->__PVT__Z_temp_57 = 0U;
        vlSelf->__PVT__Z_temp_58 = 0U;
        vlSelf->__PVT__Z_temp_61 = 0U;
        vlSelf->__PVT__Z_temp_62 = 0U;
        vlSelf->__PVT__Z_temp_63 = 0U;
        vlSelf->__PVT__Z_temp_64 = 0U;
        vlSelf->__PVT__Z_temp_65 = 0U;
        vlSelf->__PVT__Z_temp_66 = 0U;
        vlSelf->__PVT__Z_temp_67 = 0U;
        vlSelf->__PVT__Z_temp_68 = 0U;
        vlSelf->__PVT__Z_temp_71 = 0U;
        vlSelf->__PVT__Z_temp_72 = 0U;
        vlSelf->__PVT__Z_temp_73 = 0U;
        vlSelf->__PVT__Z_temp_74 = 0U;
        vlSelf->__PVT__Z_temp_75 = 0U;
        vlSelf->__PVT__Z_temp_76 = 0U;
        vlSelf->__PVT__Z_temp_77 = 0U;
        vlSelf->__PVT__Z_temp_78 = 0U;
        vlSelf->__PVT__Z_temp_81 = 0U;
        vlSelf->__PVT__Z_temp_82 = 0U;
        vlSelf->__PVT__Y_temp_11 = 0U;
        vlSelf->__PVT__Y11_final_4 = 0U;
        vlSelf->__PVT__Y31_final_2 = 0U;
        vlSelf->__PVT__Y21_final_2 = 0U;
        vlSelf->__PVT__Y41_final_2 = 0U;
        vlSelf->__PVT__Y51_final_2 = 0U;
        vlSelf->__PVT__Y61_final_2 = 0U;
        vlSelf->__PVT__Y71_final_2 = 0U;
        vlSelf->__PVT__Y81_final_2 = 0U;
        vlSelf->__PVT__Y11_final_3 = 0U;
        vlSelf->__PVT__Y31_final_1 = 0U;
        vlSelf->__PVT__Y21_final_1 = 0U;
        vlSelf->__PVT__Y41_final_1 = 0U;
        vlSelf->__PVT__Y51_final_1 = 0U;
        vlSelf->__PVT__Y61_final_1 = 0U;
        vlSelf->__PVT__Y71_final_1 = 0U;
        vlSelf->__PVT__Y81_final_1 = 0U;
        vlSelf->__PVT__Y11_final_2 = 0U;
        vlSelf->__PVT__Y31_final_diff = 0U;
        vlSelf->__PVT__Y21_final_diff = 0U;
        vlSelf->__PVT__Y41_final_diff = 0U;
        vlSelf->__PVT__Y51_final_diff = 0U;
        vlSelf->__PVT__Y61_final_diff = 0U;
        vlSelf->__PVT__Y71_final_diff = 0U;
        vlSelf->__PVT__Y81_final_diff = 0U;
        vlSelf->__PVT__Y11_final_1 = 0U;
        vlSelf->__PVT__Y31_final_prev = 0U;
        vlSelf->__PVT__Y21_final_prev = 0U;
        vlSelf->__PVT__Y41_final_prev = 0U;
        vlSelf->__PVT__Y51_final_prev = 0U;
        vlSelf->__PVT__Y61_final_prev = 0U;
        vlSelf->__PVT__Y71_final_prev = 0U;
        vlSelf->__PVT__Y81_final_prev = 0U;
        vlSelf->__PVT__Y11_final = 0U;
        vlSelf->__PVT__Y31_final = 0U;
        vlSelf->__PVT__Y21_final = 0U;
        vlSelf->__PVT__Y41_final = 0U;
        vlSelf->__PVT__Y51_final = 0U;
        vlSelf->__PVT__Y61_final = 0U;
        vlSelf->__PVT__Y71_final = 0U;
        vlSelf->__PVT__Y81_final = 0U;
        vlSelf->__PVT__Y31 = 0U;
        vlSelf->__PVT__Y21 = 0U;
        vlSelf->__PVT__Y41 = 0U;
        vlSelf->__PVT__Y51 = 0U;
        vlSelf->__PVT__Y61 = 0U;
        vlSelf->__PVT__Y71 = 0U;
        vlSelf->__PVT__Y81 = 0U;
    } else {
        if (((1U == (IData)(vlSelf->__PVT__count)) 
             & (IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))) {
            __Vdly__Y11 = vlSelf->__PVT__Y_temp_11;
        } else if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            __Vdly__Y11 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_11 
                                         + vlSelf->__PVT__Y11));
        }
        if (((IData)(vlSelf->__PVT__enable_1) & (IData)(vlSelf->__PVT__count_8))) {
            vlSelf->__PVT__Z_temp_11 = ((0x8000U & 
                                         (vlSelf->__PVT__Y11_final_4 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u86__DOT__u1->r))
                                         : vlSelf->__PVT__u86__DOT__u1->r);
            vlSelf->__PVT__Z_temp_12 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u87__DOT__u1->r))
                                         : vlSelf->__PVT__u87__DOT__u1->r);
            vlSelf->__PVT__Z_temp_13 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u88__DOT__u1->r))
                                         : vlSelf->__PVT__u88__DOT__u1->r);
            vlSelf->__PVT__Z_temp_14 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u89__DOT__u1->r))
                                         : vlSelf->__PVT__u89__DOT__u1->r);
            vlSelf->__PVT__Z_temp_15 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u90__DOT__u1->r))
                                         : vlSelf->__PVT__u90__DOT__u1->r);
            vlSelf->__PVT__Z_temp_16 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u91__DOT__u1->r))
                                         : vlSelf->__PVT__u91__DOT__u1->r);
            vlSelf->__PVT__Z_temp_17 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u92__DOT__u1->r))
                                         : vlSelf->__PVT__u92__DOT__u1->r);
            vlSelf->__PVT__Z_temp_18 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u93__DOT__u1->r))
                                         : vlSelf->__PVT__u93__DOT__u1->r);
            vlSelf->__PVT__Z_temp_88 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u149__DOT__u1->r))
                                         : vlSelf->__PVT__u149__DOT__u1->r);
            vlSelf->__PVT__Z_temp_87 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u148__DOT__u1->r))
                                         : vlSelf->__PVT__u148__DOT__u1->r);
            vlSelf->__PVT__Z_temp_86 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u147__DOT__u1->r))
                                         : vlSelf->__PVT__u147__DOT__u1->r);
            vlSelf->__PVT__Z_temp_85 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u146__DOT__u1->r))
                                         : vlSelf->__PVT__u146__DOT__u1->r);
            vlSelf->__PVT__Z_temp_84 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u145__DOT__u1->r))
                                         : vlSelf->__PVT__u145__DOT__u1->r);
            vlSelf->__PVT__Z_temp_83 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u144__DOT__u1->r))
                                         : vlSelf->__PVT__u144__DOT__u1->r);
            vlSelf->__PVT__Z_temp_44 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u113__DOT__u1->r))
                                         : vlSelf->__PVT__u113__DOT__u1->r);
            vlSelf->__PVT__Z_temp_43 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u112__DOT__u1->r))
                                         : vlSelf->__PVT__u112__DOT__u1->r);
            vlSelf->__PVT__Z_temp_42 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u111__DOT__u1->r))
                                         : vlSelf->__PVT__u111__DOT__u1->r);
            vlSelf->__PVT__Z_temp_41 = ((0x8000U & 
                                         (vlSelf->__PVT__Y41_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u110__DOT__u1->r))
                                         : vlSelf->__PVT__u110__DOT__u1->r);
            vlSelf->__PVT__Z_temp_38 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u109__DOT__u1->r))
                                         : vlSelf->__PVT__u109__DOT__u1->r);
            vlSelf->__PVT__Z_temp_37 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u108__DOT__u1->r))
                                         : vlSelf->__PVT__u108__DOT__u1->r);
            vlSelf->__PVT__Z_temp_36 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u107__DOT__u1->r))
                                         : vlSelf->__PVT__u107__DOT__u1->r);
            vlSelf->__PVT__Z_temp_35 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u106__DOT__u1->r))
                                         : vlSelf->__PVT__u106__DOT__u1->r);
            vlSelf->__PVT__Z_temp_34 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u105__DOT__u1->r))
                                         : vlSelf->__PVT__u105__DOT__u1->r);
            vlSelf->__PVT__Z_temp_33 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u104__DOT__u1->r))
                                         : vlSelf->__PVT__u104__DOT__u1->r);
            vlSelf->__PVT__Z_temp_32 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u103__DOT__u1->r))
                                         : vlSelf->__PVT__u103__DOT__u1->r);
            vlSelf->__PVT__Z_temp_31 = ((0x8000U & 
                                         (vlSelf->__PVT__Y31_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u102__DOT__u1->r))
                                         : vlSelf->__PVT__u102__DOT__u1->r);
            vlSelf->__PVT__Z_temp_28 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u101__DOT__u1->r))
                                         : vlSelf->__PVT__u101__DOT__u1->r);
            vlSelf->__PVT__Z_temp_27 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u100__DOT__u1->r))
                                         : vlSelf->__PVT__u100__DOT__u1->r);
            vlSelf->__PVT__Z_temp_26 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u99__DOT__u1->r))
                                         : vlSelf->__PVT__u99__DOT__u1->r);
            vlSelf->__PVT__Z_temp_25 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u98__DOT__u1->r))
                                         : vlSelf->__PVT__u98__DOT__u1->r);
            vlSelf->__PVT__Z_temp_21 = ((0x8000U & 
                                         (vlSelf->__PVT__Y21_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u94__DOT__u1->r))
                                         : vlSelf->__PVT__u94__DOT__u1->r);
            vlSelf->__PVT__Z_temp_22 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u95__DOT__u1->r))
                                         : vlSelf->__PVT__u95__DOT__u1->r);
            vlSelf->__PVT__Z_temp_23 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u96__DOT__u1->r))
                                         : vlSelf->__PVT__u96__DOT__u1->r);
            vlSelf->__PVT__Z_temp_24 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u97__DOT__u1->r))
                                         : vlSelf->__PVT__u97__DOT__u1->r);
            vlSelf->__PVT__Z_temp_45 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u114__DOT__u1->r))
                                         : vlSelf->__PVT__u114__DOT__u1->r);
            vlSelf->__PVT__Z_temp_46 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u115__DOT__u1->r))
                                         : vlSelf->__PVT__u115__DOT__u1->r);
            vlSelf->__PVT__Z_temp_47 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u116__DOT__u1->r))
                                         : vlSelf->__PVT__u116__DOT__u1->r);
            vlSelf->__PVT__Z_temp_48 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u117__DOT__u1->r))
                                         : vlSelf->__PVT__u117__DOT__u1->r);
            vlSelf->__PVT__Z_temp_51 = ((0x8000U & 
                                         (vlSelf->__PVT__Y51_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u118__DOT__u1->r))
                                         : vlSelf->__PVT__u118__DOT__u1->r);
            vlSelf->__PVT__Z_temp_52 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u119__DOT__u1->r))
                                         : vlSelf->__PVT__u119__DOT__u1->r);
            vlSelf->__PVT__Z_temp_53 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u120__DOT__u1->r))
                                         : vlSelf->__PVT__u120__DOT__u1->r);
            vlSelf->__PVT__Z_temp_54 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u121__DOT__u1->r))
                                         : vlSelf->__PVT__u121__DOT__u1->r);
            vlSelf->__PVT__Z_temp_55 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u122__DOT__u1->r))
                                         : vlSelf->__PVT__u122__DOT__u1->r);
            vlSelf->__PVT__Z_temp_56 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u123__DOT__u1->r))
                                         : vlSelf->__PVT__u123__DOT__u1->r);
            vlSelf->__PVT__Z_temp_57 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u124__DOT__u1->r))
                                         : vlSelf->__PVT__u124__DOT__u1->r);
            vlSelf->__PVT__Z_temp_58 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u125__DOT__u1->r))
                                         : vlSelf->__PVT__u125__DOT__u1->r);
            vlSelf->__PVT__Z_temp_61 = ((0x8000U & 
                                         (vlSelf->__PVT__Y61_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u126__DOT__u1->r))
                                         : vlSelf->__PVT__u126__DOT__u1->r);
            vlSelf->__PVT__Z_temp_62 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u127__DOT__u1->r))
                                         : vlSelf->__PVT__u127__DOT__u1->r);
            vlSelf->__PVT__Z_temp_63 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u128__DOT__u1->r))
                                         : vlSelf->__PVT__u128__DOT__u1->r);
            vlSelf->__PVT__Z_temp_64 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u129__DOT__u1->r))
                                         : vlSelf->__PVT__u129__DOT__u1->r);
            vlSelf->__PVT__Z_temp_65 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u130__DOT__u1->r))
                                         : vlSelf->__PVT__u130__DOT__u1->r);
            vlSelf->__PVT__Z_temp_66 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u131__DOT__u1->r))
                                         : vlSelf->__PVT__u131__DOT__u1->r);
            vlSelf->__PVT__Z_temp_67 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u132__DOT__u1->r))
                                         : vlSelf->__PVT__u132__DOT__u1->r);
            vlSelf->__PVT__Z_temp_68 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u133__DOT__u1->r))
                                         : vlSelf->__PVT__u133__DOT__u1->r);
            vlSelf->__PVT__Z_temp_71 = ((0x8000U & 
                                         (vlSelf->__PVT__Y71_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u134__DOT__u1->r))
                                         : vlSelf->__PVT__u134__DOT__u1->r);
            vlSelf->__PVT__Z_temp_72 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u135__DOT__u1->r))
                                         : vlSelf->__PVT__u135__DOT__u1->r);
            vlSelf->__PVT__Z_temp_73 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u136__DOT__u1->r))
                                         : vlSelf->__PVT__u136__DOT__u1->r);
            vlSelf->__PVT__Z_temp_74 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u137__DOT__u1->r))
                                         : vlSelf->__PVT__u137__DOT__u1->r);
            vlSelf->__PVT__Z_temp_75 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u138__DOT__u1->r))
                                         : vlSelf->__PVT__u138__DOT__u1->r);
            vlSelf->__PVT__Z_temp_76 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u139__DOT__u1->r))
                                         : vlSelf->__PVT__u139__DOT__u1->r);
            vlSelf->__PVT__Z_temp_77 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u140__DOT__u1->r))
                                         : vlSelf->__PVT__u140__DOT__u1->r);
            vlSelf->__PVT__Z_temp_78 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u141__DOT__u1->r))
                                         : vlSelf->__PVT__u141__DOT__u1->r);
            vlSelf->__PVT__Z_temp_81 = ((0x8000U & 
                                         (vlSelf->__PVT__Y81_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u142__DOT__u1->r))
                                         : vlSelf->__PVT__u142__DOT__u1->r);
            vlSelf->__PVT__Z_temp_82 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u143__DOT__u1->r))
                                         : vlSelf->__PVT__u143__DOT__u1->r);
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
                vlSelf->__Vdly__count = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count)));
            }
            if (vlSelf->__PVT__count_1) {
                __Vdly__count_of_copy = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count_of_copy)));
                vlSelf->__Vdly__count_of = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__count_of)));
            }
            vlSelf->__PVT__data_1 = vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB;
            vlSelf->__PVT__Y_temp_11 = (0x1ffffffU 
                                        & ((IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB) 
                                           * vlSelf->__PVT__T1));
            vlSelf->__PVT__Y11_final_4 = vlSelf->__PVT__Y11_final_3;
            vlSelf->__PVT__Y31_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y31_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y31_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (IData)(vlSelf->__PVT__Y31_final_1));
            vlSelf->__PVT__Y21_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y21_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y21_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (IData)(vlSelf->__PVT__Y21_final_1));
            vlSelf->__PVT__Y41_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y41_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y41_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (IData)(vlSelf->__PVT__Y41_final_1));
            vlSelf->__PVT__Y51_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y51_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y51_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (IData)(vlSelf->__PVT__Y51_final_1));
            vlSelf->__PVT__Y61_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y61_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y61_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (IData)(vlSelf->__PVT__Y61_final_1));
            vlSelf->__PVT__Y71_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y71_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y71_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (IData)(vlSelf->__PVT__Y71_final_1));
            vlSelf->__PVT__Y81_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y81_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y81_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (IData)(vlSelf->__PVT__Y81_final_1));
            vlSelf->__PVT__Y11_final_3 = vlSelf->__PVT__Y11_final_2;
            vlSelf->__PVT__Y31_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y31_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y31_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y31_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y21_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y21_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y21_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y21_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y41_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y41_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y41_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y41_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y51_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y51_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y51_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y51_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y61_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y61_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y61_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y61_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y71_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y71_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y71_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y71_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y81_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y81_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y81_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y81_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y11_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y11_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y11_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (IData)(vlSelf->__PVT__Y11_final_1));
            vlSelf->__PVT__Y11_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y11_final)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y11_final 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y11_final 
                                                  >> 0xcU))));
        } else {
            vlSelf->__Vdly__count = 0U;
            __Vdly__count_of_copy = 0U;
            vlSelf->__Vdly__count_of = 0U;
        }
        if (((IData)(vlSelf->__PVT__count_5) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y31_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y31_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y31_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y21_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y21_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y21_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y41_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y41_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y41_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y51_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y51_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y51_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y61_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y61_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y61_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y71_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y71_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y71_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y81_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y81_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y81_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
        }
        if (vlSelf->__PVT__enable_1) {
            if (((IData)(vlSelf->__PVT__count_4) & (IData)(vlSelf->__PVT__enable_1))) {
                vlSelf->__PVT__Y31_final_prev = vlSelf->__PVT__Y31_final;
                vlSelf->__PVT__Y21_final_prev = vlSelf->__PVT__Y21_final;
                vlSelf->__PVT__Y41_final_prev = vlSelf->__PVT__Y41_final;
                vlSelf->__PVT__Y51_final_prev = vlSelf->__PVT__Y51_final;
                vlSelf->__PVT__Y61_final_prev = vlSelf->__PVT__Y61_final;
                vlSelf->__PVT__Y71_final_prev = vlSelf->__PVT__Y71_final;
                vlSelf->__PVT__Y81_final_prev = vlSelf->__PVT__Y81_final;
                vlSelf->__PVT__Y31_final = vlSelf->__PVT__Y31;
                vlSelf->__PVT__Y21_final = vlSelf->__PVT__Y21;
                vlSelf->__PVT__Y41_final = vlSelf->__PVT__Y41;
                vlSelf->__PVT__Y51_final = vlSelf->__PVT__Y51;
                vlSelf->__PVT__Y61_final = vlSelf->__PVT__Y61;
                vlSelf->__PVT__Y71_final = vlSelf->__PVT__Y71;
                vlSelf->__PVT__Y81_final = vlSelf->__PVT__Y81;
            }
            if (vlSelf->__PVT__enable_1) {
                vlSelf->__PVT__Y_temp_81 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_hc686e7df__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u85__DOT__u1->r))
                                                 : vlSelf->__PVT__u85__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hc686e7df__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u85__DOT__u1->r))
                                                       : vlSelf->__PVT__u85__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hc686e7df__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u85__DOT__u1->r))
                                                    : vlSelf->__PVT__u85__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_71 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u84__DOT__u1->r))
                                                 : vlSelf->__PVT__u84__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u84__DOT__u1->r))
                                                       : vlSelf->__PVT__u84__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u84__DOT__u1->r))
                                                    : vlSelf->__PVT__u84__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_61 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_hb6088b02__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u83__DOT__u1->r))
                                                 : vlSelf->__PVT__u83__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hb6088b02__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u83__DOT__u1->r))
                                                       : vlSelf->__PVT__u83__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hb6088b02__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u83__DOT__u1->r))
                                                    : vlSelf->__PVT__u83__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_51 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u82__DOT__u1->r))
                                                 : vlSelf->__PVT__u82__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u82__DOT__u1->r))
                                                       : vlSelf->__PVT__u82__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u82__DOT__u1->r))
                                                    : vlSelf->__PVT__u82__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_41 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_ha58a2781__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u81__DOT__u1->r))
                                                 : vlSelf->__PVT__u81__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_ha58a2781__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u81__DOT__u1->r))
                                                       : vlSelf->__PVT__u81__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_ha58a2781__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u81__DOT__u1->r))
                                                    : vlSelf->__PVT__u81__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_31 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_h3a975308__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u80__DOT__u1->r))
                                                 : vlSelf->__PVT__u80__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h3a975308__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u80__DOT__u1->r))
                                                       : vlSelf->__PVT__u80__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h3a975308__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u80__DOT__u1->r))
                                                    : vlSelf->__PVT__u80__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_21 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u79__DOT__u1->r))
                                                 : vlSelf->__PVT__u79__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u79__DOT__u1->r))
                                                       : vlSelf->__PVT__u79__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u79__DOT__u1->r))
                                                    : vlSelf->__PVT__u79__DOT__u1->r)));
                vlSelf->__PVT__Y31 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h53832542__0 
                                       << 0xdU));
                vlSelf->__PVT__Y21 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_ha2e8c01e__0 
                                       << 0xdU));
                vlSelf->__PVT__Y41 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h5e674723__0 
                                       << 0xdU));
                vlSelf->__PVT__Y51 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h35911cf1__0 
                                       << 0xdU));
                vlSelf->__PVT__Y61 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h40d26797__0 
                                       << 0xdU));
                vlSelf->__PVT__Y71 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h540d27e9__0 
                                       << 0xdU));
                vlSelf->__PVT__Y81 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h54a82709__0 
                                       << 0xdU));
            }
        } else {
            vlSelf->__PVT__Y_temp_81 = 0U;
            vlSelf->__PVT__Y_temp_71 = 0U;
            vlSelf->__PVT__Y_temp_61 = 0U;
            vlSelf->__PVT__Y_temp_51 = 0U;
            vlSelf->__PVT__Y_temp_41 = 0U;
            vlSelf->__PVT__Y_temp_31 = 0U;
            vlSelf->__PVT__Y_temp_21 = 0U;
            vlSelf->__PVT__Y31_final_prev = 0U;
            vlSelf->__PVT__Y21_final_prev = 0U;
            vlSelf->__PVT__Y41_final_prev = 0U;
            vlSelf->__PVT__Y51_final_prev = 0U;
            vlSelf->__PVT__Y61_final_prev = 0U;
            vlSelf->__PVT__Y71_final_prev = 0U;
            vlSelf->__PVT__Y81_final_prev = 0U;
            vlSelf->__PVT__Y31_final = 0U;
            vlSelf->__PVT__Y21_final = 0U;
            vlSelf->__PVT__Y41_final = 0U;
            vlSelf->__PVT__Y51_final = 0U;
            vlSelf->__PVT__Y61_final = 0U;
            vlSelf->__PVT__Y71_final = 0U;
            vlSelf->__PVT__Y81_final = 0U;
            vlSelf->__PVT__Y31 = 0U;
            vlSelf->__PVT__Y21 = 0U;
            vlSelf->__PVT__Y41 = 0U;
            vlSelf->__PVT__Y51 = 0U;
            vlSelf->__PVT__Y61 = 0U;
            vlSelf->__PVT__Y71 = 0U;
            vlSelf->__PVT__Y81 = 0U;
        }
        if (((IData)(vlSelf->__PVT__count_3) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y11_final = (0x1ffffffU 
                                        & (vlSelf->__PVT__Y11 
                                           - (IData)(0x5a8400U)));
        }
    }
    if ((4U & (IData)(vlSelf->__PVT__count))) {
        if ((2U & (IData)(vlSelf->__PVT__count))) {
            if ((1U & (IData)(vlSelf->__PVT__count))) {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T25;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T26;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T27;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T28;
            } else {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T23;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T21;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T24;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T27;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T25;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T26;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T23;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T25;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count))) {
        if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T26;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T24;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T24;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T23;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__count))) {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T26;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T28;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T25;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T22;
    } else {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T24;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T23;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T22;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T21;
    }
    if ((4U & (IData)(vlSelf->__PVT__count_of_copy))) {
        if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti24;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti27;
            } else {
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti25;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti26;
            }
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
        } else {
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti33;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti34;
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti25;
            } else {
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti28;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti22;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti26;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti24;
            }
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti23;
        } else {
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti22;
        }
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
    } else {
        vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti32;
        vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti31;
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti23;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti21;
        } else {
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti27;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti28;
        }
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
    }
    vlSelf->__PVT__count_of_copy = __Vdly__count_of_copy;
    vlSelf->__PVT__T52 = 0xffffe95fU;
    vlSelf->__VdfgTmp_h4c5300e6__0 = ((0x2000U & vlSelf->__PVT__Y5_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y5_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y5_mul_input)));
    vlSelf->__VdfgTmp_hde2d8c69__0 = ((0x2000U & vlSelf->__PVT__Y7_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y7_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y7_mul_input)));
    vlSelf->__PVT__T31 = 0x1d90U;
    vlSelf->__PVT__T32 = 0xc3fU;
    vlSelf->__PVT__T33 = 0xfffff3c1U;
    vlSelf->__PVT__T34 = 0xffffe270U;
    vlSelf->__VdfgTmp_h3a975308__0 = ((0x2000U & vlSelf->__PVT__Y3_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y3_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y3_mul_input)));
    vlSelf->__VdfgTmp_hc686e7df__0 = ((0x2000U & vlSelf->__PVT__Y8_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y8_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y8_mul_input)));
    vlSelf->__VdfgTmp_hb6088b02__0 = ((0x2000U & vlSelf->__PVT__Y6_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y6_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y6_mul_input)));
    vlSelf->__VdfgTmp_ha58a2781__0 = ((0x2000U & vlSelf->__PVT__Y4_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y4_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y4_mul_input)));
    vlSelf->__PVT__T28 = 0xffffe09dU;
    vlSelf->__PVT__T27 = 0xffffe565U;
    vlSelf->__PVT__T26 = 0xffffee39U;
    vlSelf->__PVT__T25 = 0xfffff9c2U;
    vlSelf->__PVT__T24 = 0x63eU;
    vlSelf->__PVT__T23 = 0x11c7U;
    vlSelf->__PVT__T22 = 0x1a9bU;
    vlSelf->__PVT__T21 = 0x1f63U;
    vlSelf->__VdfgTmp_h7f1a2df4__0 = ((0x2000U & vlSelf->__PVT__Y2_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y2_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y2_mul_input)));
    vlSelf->__VdfgTmp_h4f997fe4__0 = ((0x2000U & vlSelf->__PVT__Ti7_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti7_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti7_mul_input)));
    vlSelf->__PVT__Ti32 = 0xc3fU;
    vlSelf->__PVT__Ti33 = 0xfffff3c1U;
    vlSelf->__PVT__Ti34 = 0xffffe270U;
    vlSelf->__PVT__Ti31 = 0x1d90U;
    vlSelf->__VdfgTmp_hb5d3819f__0 = ((0x2000U & vlSelf->__PVT__Ti3_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti3_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti3_mul_input)));
    vlSelf->__VdfgTmp_h38cce513__0 = ((0x2000U & vlSelf->__PVT__Ti8_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti8_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti8_mul_input)));
    vlSelf->__VdfgTmp_h216275e3__0 = ((0x2000U & vlSelf->__PVT__Ti6_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti6_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti6_mul_input)));
    vlSelf->__VdfgTmp_h6b20eb67__0 = ((0x2000U & vlSelf->__PVT__Ti4_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti4_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti4_mul_input)));
    vlSelf->__PVT__Ti27 = 0xffffe565U;
    vlSelf->__PVT__Ti26 = 0xffffee39U;
    vlSelf->__PVT__Ti25 = 0xfffff9c2U;
    vlSelf->__PVT__Ti24 = 0x63eU;
    vlSelf->__PVT__Ti23 = 0x11c7U;
    vlSelf->__PVT__Ti22 = 0x1a9bU;
    vlSelf->__PVT__Ti21 = 0x1f63U;
    vlSelf->__PVT__Ti28 = 0xffffe09dU;
    vlSelf->__VdfgTmp_hd358cecd__0 = ((0x2000U & vlSelf->__PVT__Ti2_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti2_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti2_mul_input)));
    vlSelf->__PVT__Ti52 = 0xffffe95fU;
    vlSelf->__VdfgTmp_h223a61ce__0 = ((0x2000U & vlSelf->__PVT__Ti5_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti5_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti5_mul_input)));
    vlSelf->__PVT__Ti1 = 0x16a1U;
    vlSelf->__PVT__u82__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h4c5300e6__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h4c5300e6__0))));
    vlSelf->__PVT__u84__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hde2d8c69__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hde2d8c69__0))));
    vlSelf->__PVT__u80__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h3a975308__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h3a975308__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h3a975308__0))));
    vlSelf->__PVT__u85__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hc686e7df__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hc686e7df__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hc686e7df__0))));
    vlSelf->__PVT__u83__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hb6088b02__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hb6088b02__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hb6088b02__0))));
    vlSelf->__PVT__u81__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_ha58a2781__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_ha58a2781__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_ha58a2781__0))));
    vlSelf->__PVT__u79__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h7f1a2df4__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h7f1a2df4__0))));
    vlSelf->__PVT__u100__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h4f997fe4__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h4f997fe4__0))));
    vlSelf->__PVT__u104__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_hb5d3819f__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_hb5d3819f__0))));
    vlSelf->__PVT__u101__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h38cce513__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h38cce513__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h38cce513__0))));
    vlSelf->__PVT__u107__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h216275e3__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h216275e3__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h216275e3__0))));
    vlSelf->__PVT__u105__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h6b20eb67__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h6b20eb67__0))));
    vlSelf->__PVT__u103__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hd358cecd__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_hd358cecd__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_hd358cecd__0))));
    vlSelf->__PVT__u106__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h223a61ce__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h223a61ce__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h223a61ce__0))));
    vlSelf->__PVT__T1 = 0x16a1U;
    vlSelf->__Vcellinp__u102____pinNumber2 = ((0x2000U 
                                               & (IData)(vlSelf->__PVT__Ti1))
                                               ? (0xc000U 
                                                  | (IData)(vlSelf->__PVT__Ti1))
                                               : (IData)(vlSelf->__PVT__Ti1));
    vlSelf->__PVT__u86__DOT__a_temp = (0xffffU & ((0x8000U 
                                                   & vlSelf->__PVT__Y11_final_4)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & vlSelf->__PVT__Y11_final_4)))
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->__PVT__Y11_final_4)));
    vlSelf->__PVT__u102__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y31_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y31_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y31_final_2)));
    vlSelf->__PVT__u100__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y21_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y21_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y21_final_2)));
    vlSelf->__PVT__u110__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y41_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y41_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y41_final_2)));
    vlSelf->__PVT__u118__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y51_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y51_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y51_final_2)));
    vlSelf->__PVT__u126__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y61_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y61_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y61_final_2)));
    vlSelf->__PVT__u134__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y71_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y71_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y71_final_2)));
    vlSelf->__PVT__u142__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y81_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y81_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y81_final_2)));
    vlSelf->__PVT__u102__DOT__b_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & (IData)(vlSelf->__Vcellinp__u102____pinNumber2))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                                    : (IData)(vlSelf->__Vcellinp__u102____pinNumber2)));
    vlSelf->__PVT__Y11 = __Vdly__Y11;
    vlSelf->__VdfgTmp_h53832542__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_31 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y31 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_ha2e8c01e__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_21 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y21 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h5e674723__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_41 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y41 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h35911cf1__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_51 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y51 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h40d26797__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_61 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y61 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h540d27e9__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_71 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y71 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h54a82709__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_81 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y81 
                                                      >> 0xdU))));
}

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__0(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__0\n"); );
    // Init
    IData/*24:0*/ __Vdly__Y11;
    CData/*2:0*/ __Vdly__count_of_copy;
    // Body
    vlSelf->__Vdly__count = vlSelf->__PVT__count;
    __Vdly__count_of_copy = vlSelf->__PVT__count_of_copy;
    vlSelf->__Vdly__count_of = vlSelf->__PVT__count_of;
    __Vdly__Y11 = vlSelf->__PVT__Y11;
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vdly__count = 0U;
        __Vdly__count_of_copy = 0U;
        vlSelf->__Vdly__count_of = 0U;
        __Vdly__Y11 = 0U;
        vlSelf->__PVT__Y_temp_81 = 0U;
        vlSelf->__PVT__Y_temp_71 = 0U;
        vlSelf->__PVT__Y_temp_61 = 0U;
        vlSelf->__PVT__Y_temp_51 = 0U;
        vlSelf->__PVT__Y_temp_41 = 0U;
        vlSelf->__PVT__Y_temp_31 = 0U;
        vlSelf->__PVT__Y_temp_21 = 0U;
        vlSelf->__PVT__data_1 = 0U;
        vlSelf->__PVT__Z_temp_11 = 0U;
        vlSelf->__PVT__Z_temp_12 = 0U;
        vlSelf->__PVT__Z_temp_13 = 0U;
        vlSelf->__PVT__Z_temp_14 = 0U;
        vlSelf->__PVT__Z_temp_15 = 0U;
        vlSelf->__PVT__Z_temp_16 = 0U;
        vlSelf->__PVT__Z_temp_17 = 0U;
        vlSelf->__PVT__Z_temp_18 = 0U;
        vlSelf->__PVT__Z_temp_88 = 0U;
        vlSelf->__PVT__Z_temp_87 = 0U;
        vlSelf->__PVT__Z_temp_86 = 0U;
        vlSelf->__PVT__Z_temp_85 = 0U;
        vlSelf->__PVT__Z_temp_84 = 0U;
        vlSelf->__PVT__Z_temp_83 = 0U;
        vlSelf->__PVT__Z_temp_44 = 0U;
        vlSelf->__PVT__Z_temp_43 = 0U;
        vlSelf->__PVT__Z_temp_42 = 0U;
        vlSelf->__PVT__Z_temp_41 = 0U;
        vlSelf->__PVT__Z_temp_38 = 0U;
        vlSelf->__PVT__Z_temp_37 = 0U;
        vlSelf->__PVT__Z_temp_36 = 0U;
        vlSelf->__PVT__Z_temp_35 = 0U;
        vlSelf->__PVT__Z_temp_34 = 0U;
        vlSelf->__PVT__Z_temp_33 = 0U;
        vlSelf->__PVT__Z_temp_32 = 0U;
        vlSelf->__PVT__Z_temp_31 = 0U;
        vlSelf->__PVT__Z_temp_28 = 0U;
        vlSelf->__PVT__Z_temp_27 = 0U;
        vlSelf->__PVT__Z_temp_26 = 0U;
        vlSelf->__PVT__Z_temp_25 = 0U;
        vlSelf->__PVT__Z_temp_21 = 0U;
        vlSelf->__PVT__Z_temp_22 = 0U;
        vlSelf->__PVT__Z_temp_23 = 0U;
        vlSelf->__PVT__Z_temp_24 = 0U;
        vlSelf->__PVT__Z_temp_45 = 0U;
        vlSelf->__PVT__Z_temp_46 = 0U;
        vlSelf->__PVT__Z_temp_47 = 0U;
        vlSelf->__PVT__Z_temp_48 = 0U;
        vlSelf->__PVT__Z_temp_51 = 0U;
        vlSelf->__PVT__Z_temp_52 = 0U;
        vlSelf->__PVT__Z_temp_53 = 0U;
        vlSelf->__PVT__Z_temp_54 = 0U;
        vlSelf->__PVT__Z_temp_55 = 0U;
        vlSelf->__PVT__Z_temp_56 = 0U;
        vlSelf->__PVT__Z_temp_57 = 0U;
        vlSelf->__PVT__Z_temp_58 = 0U;
        vlSelf->__PVT__Z_temp_61 = 0U;
        vlSelf->__PVT__Z_temp_62 = 0U;
        vlSelf->__PVT__Z_temp_63 = 0U;
        vlSelf->__PVT__Z_temp_64 = 0U;
        vlSelf->__PVT__Z_temp_65 = 0U;
        vlSelf->__PVT__Z_temp_66 = 0U;
        vlSelf->__PVT__Z_temp_67 = 0U;
        vlSelf->__PVT__Z_temp_68 = 0U;
        vlSelf->__PVT__Z_temp_71 = 0U;
        vlSelf->__PVT__Z_temp_72 = 0U;
        vlSelf->__PVT__Z_temp_73 = 0U;
        vlSelf->__PVT__Z_temp_74 = 0U;
        vlSelf->__PVT__Z_temp_75 = 0U;
        vlSelf->__PVT__Z_temp_76 = 0U;
        vlSelf->__PVT__Z_temp_77 = 0U;
        vlSelf->__PVT__Z_temp_78 = 0U;
        vlSelf->__PVT__Z_temp_81 = 0U;
        vlSelf->__PVT__Z_temp_82 = 0U;
        vlSelf->__PVT__Y_temp_11 = 0U;
        vlSelf->__PVT__Y11_final_4 = 0U;
        vlSelf->__PVT__Y31_final_2 = 0U;
        vlSelf->__PVT__Y21_final_2 = 0U;
        vlSelf->__PVT__Y41_final_2 = 0U;
        vlSelf->__PVT__Y51_final_2 = 0U;
        vlSelf->__PVT__Y61_final_2 = 0U;
        vlSelf->__PVT__Y71_final_2 = 0U;
        vlSelf->__PVT__Y81_final_2 = 0U;
        vlSelf->__PVT__Y11_final_3 = 0U;
        vlSelf->__PVT__Y31_final_1 = 0U;
        vlSelf->__PVT__Y21_final_1 = 0U;
        vlSelf->__PVT__Y41_final_1 = 0U;
        vlSelf->__PVT__Y51_final_1 = 0U;
        vlSelf->__PVT__Y61_final_1 = 0U;
        vlSelf->__PVT__Y71_final_1 = 0U;
        vlSelf->__PVT__Y81_final_1 = 0U;
        vlSelf->__PVT__Y11_final_2 = 0U;
        vlSelf->__PVT__Y31_final_diff = 0U;
        vlSelf->__PVT__Y21_final_diff = 0U;
        vlSelf->__PVT__Y41_final_diff = 0U;
        vlSelf->__PVT__Y51_final_diff = 0U;
        vlSelf->__PVT__Y61_final_diff = 0U;
        vlSelf->__PVT__Y71_final_diff = 0U;
        vlSelf->__PVT__Y81_final_diff = 0U;
        vlSelf->__PVT__Y11_final_1 = 0U;
        vlSelf->__PVT__Y31_final_prev = 0U;
        vlSelf->__PVT__Y21_final_prev = 0U;
        vlSelf->__PVT__Y41_final_prev = 0U;
        vlSelf->__PVT__Y51_final_prev = 0U;
        vlSelf->__PVT__Y61_final_prev = 0U;
        vlSelf->__PVT__Y71_final_prev = 0U;
        vlSelf->__PVT__Y81_final_prev = 0U;
        vlSelf->__PVT__Y11_final = 0U;
        vlSelf->__PVT__Y31_final = 0U;
        vlSelf->__PVT__Y21_final = 0U;
        vlSelf->__PVT__Y41_final = 0U;
        vlSelf->__PVT__Y51_final = 0U;
        vlSelf->__PVT__Y61_final = 0U;
        vlSelf->__PVT__Y71_final = 0U;
        vlSelf->__PVT__Y81_final = 0U;
        vlSelf->__PVT__Y31 = 0U;
        vlSelf->__PVT__Y21 = 0U;
        vlSelf->__PVT__Y41 = 0U;
        vlSelf->__PVT__Y51 = 0U;
        vlSelf->__PVT__Y61 = 0U;
        vlSelf->__PVT__Y71 = 0U;
        vlSelf->__PVT__Y81 = 0U;
    } else {
        if (((1U == (IData)(vlSelf->__PVT__count)) 
             & (IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))) {
            __Vdly__Y11 = vlSelf->__PVT__Y_temp_11;
        } else if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            __Vdly__Y11 = (0x1ffffffU & (vlSelf->__PVT__Y_temp_11 
                                         + vlSelf->__PVT__Y11));
        }
        if (((IData)(vlSelf->__PVT__enable_1) & (IData)(vlSelf->__PVT__count_8))) {
            vlSelf->__PVT__Z_temp_11 = ((0x8000U & 
                                         (vlSelf->__PVT__Y11_final_4 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u86__DOT__u1->r))
                                         : vlSelf->__PVT__u86__DOT__u1->r);
            vlSelf->__PVT__Z_temp_12 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u87__DOT__u1->r))
                                         : vlSelf->__PVT__u87__DOT__u1->r);
            vlSelf->__PVT__Z_temp_13 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u88__DOT__u1->r))
                                         : vlSelf->__PVT__u88__DOT__u1->r);
            vlSelf->__PVT__Z_temp_14 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u89__DOT__u1->r))
                                         : vlSelf->__PVT__u89__DOT__u1->r);
            vlSelf->__PVT__Z_temp_15 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u90__DOT__u1->r))
                                         : vlSelf->__PVT__u90__DOT__u1->r);
            vlSelf->__PVT__Z_temp_16 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u91__DOT__u1->r))
                                         : vlSelf->__PVT__u91__DOT__u1->r);
            vlSelf->__PVT__Z_temp_17 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u92__DOT__u1->r))
                                         : vlSelf->__PVT__u92__DOT__u1->r);
            vlSelf->__PVT__Z_temp_18 = ((1U & ((vlSelf->__PVT__Y11_final_4 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u93__DOT__u1->r))
                                         : vlSelf->__PVT__u93__DOT__u1->r);
            vlSelf->__PVT__Z_temp_88 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u149__DOT__u1->r))
                                         : vlSelf->__PVT__u149__DOT__u1->r);
            vlSelf->__PVT__Z_temp_87 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u148__DOT__u1->r))
                                         : vlSelf->__PVT__u148__DOT__u1->r);
            vlSelf->__PVT__Z_temp_86 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u147__DOT__u1->r))
                                         : vlSelf->__PVT__u147__DOT__u1->r);
            vlSelf->__PVT__Z_temp_85 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u146__DOT__u1->r))
                                         : vlSelf->__PVT__u146__DOT__u1->r);
            vlSelf->__PVT__Z_temp_84 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u145__DOT__u1->r))
                                         : vlSelf->__PVT__u145__DOT__u1->r);
            vlSelf->__PVT__Z_temp_83 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u144__DOT__u1->r))
                                         : vlSelf->__PVT__u144__DOT__u1->r);
            vlSelf->__PVT__Z_temp_44 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u113__DOT__u1->r))
                                         : vlSelf->__PVT__u113__DOT__u1->r);
            vlSelf->__PVT__Z_temp_43 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u112__DOT__u1->r))
                                         : vlSelf->__PVT__u112__DOT__u1->r);
            vlSelf->__PVT__Z_temp_42 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u111__DOT__u1->r))
                                         : vlSelf->__PVT__u111__DOT__u1->r);
            vlSelf->__PVT__Z_temp_41 = ((0x8000U & 
                                         (vlSelf->__PVT__Y41_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u110__DOT__u1->r))
                                         : vlSelf->__PVT__u110__DOT__u1->r);
            vlSelf->__PVT__Z_temp_38 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u109__DOT__u1->r))
                                         : vlSelf->__PVT__u109__DOT__u1->r);
            vlSelf->__PVT__Z_temp_37 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u108__DOT__u1->r))
                                         : vlSelf->__PVT__u108__DOT__u1->r);
            vlSelf->__PVT__Z_temp_36 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u107__DOT__u1->r))
                                         : vlSelf->__PVT__u107__DOT__u1->r);
            vlSelf->__PVT__Z_temp_35 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u106__DOT__u1->r))
                                         : vlSelf->__PVT__u106__DOT__u1->r);
            vlSelf->__PVT__Z_temp_34 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u105__DOT__u1->r))
                                         : vlSelf->__PVT__u105__DOT__u1->r);
            vlSelf->__PVT__Z_temp_33 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u104__DOT__u1->r))
                                         : vlSelf->__PVT__u104__DOT__u1->r);
            vlSelf->__PVT__Z_temp_32 = ((1U & ((vlSelf->__PVT__Y31_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u103__DOT__u1->r))
                                         : vlSelf->__PVT__u103__DOT__u1->r);
            vlSelf->__PVT__Z_temp_31 = ((0x8000U & 
                                         (vlSelf->__PVT__Y31_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u102__DOT__u1->r))
                                         : vlSelf->__PVT__u102__DOT__u1->r);
            vlSelf->__PVT__Z_temp_28 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u101__DOT__u1->r))
                                         : vlSelf->__PVT__u101__DOT__u1->r);
            vlSelf->__PVT__Z_temp_27 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u100__DOT__u1->r))
                                         : vlSelf->__PVT__u100__DOT__u1->r);
            vlSelf->__PVT__Z_temp_26 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u99__DOT__u1->r))
                                         : vlSelf->__PVT__u99__DOT__u1->r);
            vlSelf->__PVT__Z_temp_25 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u98__DOT__u1->r))
                                         : vlSelf->__PVT__u98__DOT__u1->r);
            vlSelf->__PVT__Z_temp_21 = ((0x8000U & 
                                         (vlSelf->__PVT__Y21_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u94__DOT__u1->r))
                                         : vlSelf->__PVT__u94__DOT__u1->r);
            vlSelf->__PVT__Z_temp_22 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u95__DOT__u1->r))
                                         : vlSelf->__PVT__u95__DOT__u1->r);
            vlSelf->__PVT__Z_temp_23 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u96__DOT__u1->r))
                                         : vlSelf->__PVT__u96__DOT__u1->r);
            vlSelf->__PVT__Z_temp_24 = ((1U & ((vlSelf->__PVT__Y21_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u97__DOT__u1->r))
                                         : vlSelf->__PVT__u97__DOT__u1->r);
            vlSelf->__PVT__Z_temp_45 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u114__DOT__u1->r))
                                         : vlSelf->__PVT__u114__DOT__u1->r);
            vlSelf->__PVT__Z_temp_46 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u115__DOT__u1->r))
                                         : vlSelf->__PVT__u115__DOT__u1->r);
            vlSelf->__PVT__Z_temp_47 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u116__DOT__u1->r))
                                         : vlSelf->__PVT__u116__DOT__u1->r);
            vlSelf->__PVT__Z_temp_48 = ((1U & ((vlSelf->__PVT__Y41_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u117__DOT__u1->r))
                                         : vlSelf->__PVT__u117__DOT__u1->r);
            vlSelf->__PVT__Z_temp_51 = ((0x8000U & 
                                         (vlSelf->__PVT__Y51_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u118__DOT__u1->r))
                                         : vlSelf->__PVT__u118__DOT__u1->r);
            vlSelf->__PVT__Z_temp_52 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u119__DOT__u1->r))
                                         : vlSelf->__PVT__u119__DOT__u1->r);
            vlSelf->__PVT__Z_temp_53 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u120__DOT__u1->r))
                                         : vlSelf->__PVT__u120__DOT__u1->r);
            vlSelf->__PVT__Z_temp_54 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u121__DOT__u1->r))
                                         : vlSelf->__PVT__u121__DOT__u1->r);
            vlSelf->__PVT__Z_temp_55 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u122__DOT__u1->r))
                                         : vlSelf->__PVT__u122__DOT__u1->r);
            vlSelf->__PVT__Z_temp_56 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u123__DOT__u1->r))
                                         : vlSelf->__PVT__u123__DOT__u1->r);
            vlSelf->__PVT__Z_temp_57 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u124__DOT__u1->r))
                                         : vlSelf->__PVT__u124__DOT__u1->r);
            vlSelf->__PVT__Z_temp_58 = ((1U & ((vlSelf->__PVT__Y51_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u125__DOT__u1->r))
                                         : vlSelf->__PVT__u125__DOT__u1->r);
            vlSelf->__PVT__Z_temp_61 = ((0x8000U & 
                                         (vlSelf->__PVT__Y61_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u126__DOT__u1->r))
                                         : vlSelf->__PVT__u126__DOT__u1->r);
            vlSelf->__PVT__Z_temp_62 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u127__DOT__u1->r))
                                         : vlSelf->__PVT__u127__DOT__u1->r);
            vlSelf->__PVT__Z_temp_63 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u128__DOT__u1->r))
                                         : vlSelf->__PVT__u128__DOT__u1->r);
            vlSelf->__PVT__Z_temp_64 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u129__DOT__u1->r))
                                         : vlSelf->__PVT__u129__DOT__u1->r);
            vlSelf->__PVT__Z_temp_65 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u130__DOT__u1->r))
                                         : vlSelf->__PVT__u130__DOT__u1->r);
            vlSelf->__PVT__Z_temp_66 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u131__DOT__u1->r))
                                         : vlSelf->__PVT__u131__DOT__u1->r);
            vlSelf->__PVT__Z_temp_67 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u132__DOT__u1->r))
                                         : vlSelf->__PVT__u132__DOT__u1->r);
            vlSelf->__PVT__Z_temp_68 = ((1U & ((vlSelf->__PVT__Y61_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u133__DOT__u1->r))
                                         : vlSelf->__PVT__u133__DOT__u1->r);
            vlSelf->__PVT__Z_temp_71 = ((0x8000U & 
                                         (vlSelf->__PVT__Y71_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u134__DOT__u1->r))
                                         : vlSelf->__PVT__u134__DOT__u1->r);
            vlSelf->__PVT__Z_temp_72 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u135__DOT__u1->r))
                                         : vlSelf->__PVT__u135__DOT__u1->r);
            vlSelf->__PVT__Z_temp_73 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u136__DOT__u1->r))
                                         : vlSelf->__PVT__u136__DOT__u1->r);
            vlSelf->__PVT__Z_temp_74 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u137__DOT__u1->r))
                                         : vlSelf->__PVT__u137__DOT__u1->r);
            vlSelf->__PVT__Z_temp_75 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h223a61ce__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u138__DOT__u1->r))
                                         : vlSelf->__PVT__u138__DOT__u1->r);
            vlSelf->__PVT__Z_temp_76 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h216275e3__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u139__DOT__u1->r))
                                         : vlSelf->__PVT__u139__DOT__u1->r);
            vlSelf->__PVT__Z_temp_77 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u140__DOT__u1->r))
                                         : vlSelf->__PVT__u140__DOT__u1->r);
            vlSelf->__PVT__Z_temp_78 = ((1U & ((vlSelf->__PVT__Y71_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_h38cce513__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u141__DOT__u1->r))
                                         : vlSelf->__PVT__u141__DOT__u1->r);
            vlSelf->__PVT__Z_temp_81 = ((0x8000U & 
                                         (vlSelf->__PVT__Y81_final_2 
                                          ^ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u142__DOT__u1->r))
                                         : vlSelf->__PVT__u142__DOT__u1->r);
            vlSelf->__PVT__Z_temp_82 = ((1U & ((vlSelf->__PVT__Y81_final_2 
                                                >> 0xfU) 
                                               ^ (IData)(
                                                         (vlSelf->__VdfgTmp_hd358cecd__0 
                                                          >> 0xfU))))
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u143__DOT__u1->r))
                                         : vlSelf->__PVT__u143__DOT__u1->r);
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
                vlSelf->__Vdly__count = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count)));
            }
            if (vlSelf->__PVT__count_1) {
                __Vdly__count_of_copy = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__count_of_copy)));
                vlSelf->__Vdly__count_of = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__count_of)));
            }
            vlSelf->__PVT__data_1 = vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y;
            vlSelf->__PVT__Y_temp_11 = (0x1ffffffU 
                                        & ((IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y) 
                                           * vlSelf->__PVT__T1));
            vlSelf->__PVT__Y11_final_4 = vlSelf->__PVT__Y11_final_3;
            vlSelf->__PVT__Y31_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y31_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y31_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y31_final_2) 
                                          | (IData)(vlSelf->__PVT__Y31_final_1));
            vlSelf->__PVT__Y21_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y21_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y21_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y21_final_2) 
                                          | (IData)(vlSelf->__PVT__Y21_final_1));
            vlSelf->__PVT__Y41_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y41_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y41_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y41_final_2) 
                                          | (IData)(vlSelf->__PVT__Y41_final_1));
            vlSelf->__PVT__Y51_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y51_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y51_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y51_final_2) 
                                          | (IData)(vlSelf->__PVT__Y51_final_1));
            vlSelf->__PVT__Y61_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y61_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y61_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y61_final_2) 
                                          | (IData)(vlSelf->__PVT__Y61_final_1));
            vlSelf->__PVT__Y71_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y71_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y71_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y71_final_2) 
                                          | (IData)(vlSelf->__PVT__Y71_final_1));
            vlSelf->__PVT__Y81_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y81_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y81_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y81_final_2) 
                                          | (IData)(vlSelf->__PVT__Y81_final_1));
            vlSelf->__PVT__Y11_final_3 = vlSelf->__PVT__Y11_final_2;
            vlSelf->__PVT__Y31_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y31_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y31_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y31_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y21_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y21_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y21_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y21_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y41_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y41_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y41_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y41_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y51_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y51_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y51_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y51_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y61_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y61_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y61_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y61_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y71_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y71_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y71_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y71_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y81_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y81_final_diff)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y81_final_diff 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y81_final_diff 
                                                  >> 0xcU))));
            vlSelf->__PVT__Y11_final_2 = ((0x1fffU 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__Y11_final_1))
                                               ? 0x7ffffU
                                               : 0U) 
                                             << 0xdU));
            vlSelf->__PVT__Y11_final_2 = ((0xffffe000U 
                                           & vlSelf->__PVT__Y11_final_2) 
                                          | (IData)(vlSelf->__PVT__Y11_final_1));
            vlSelf->__PVT__Y11_final_1 = (0x1fffU & 
                                          ((0x800U 
                                            & vlSelf->__PVT__Y11_final)
                                            ? ((IData)(1U) 
                                               + (0x1fffU 
                                                  & (vlSelf->__PVT__Y11_final 
                                                     >> 0xcU)))
                                            : (0x1fffU 
                                               & (vlSelf->__PVT__Y11_final 
                                                  >> 0xcU))));
        } else {
            vlSelf->__Vdly__count = 0U;
            __Vdly__count_of_copy = 0U;
            vlSelf->__Vdly__count_of = 0U;
        }
        if (((IData)(vlSelf->__PVT__count_5) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y31_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y31_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y31_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y21_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y21_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y21_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y41_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y41_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y41_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y51_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y51_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y51_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y61_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y61_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y61_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y71_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y71_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y71_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
            vlSelf->__PVT__Y81_final_diff = (0x1ffe000U 
                                             & (((vlSelf->__PVT__Y81_final 
                                                  >> 0xdU) 
                                                 + 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__Y81_final_prev)) 
                                                     >> 0xdU))) 
                                                << 0xdU));
        }
        if (vlSelf->__PVT__enable_1) {
            if (((IData)(vlSelf->__PVT__count_4) & (IData)(vlSelf->__PVT__enable_1))) {
                vlSelf->__PVT__Y31_final_prev = vlSelf->__PVT__Y31_final;
                vlSelf->__PVT__Y21_final_prev = vlSelf->__PVT__Y21_final;
                vlSelf->__PVT__Y41_final_prev = vlSelf->__PVT__Y41_final;
                vlSelf->__PVT__Y51_final_prev = vlSelf->__PVT__Y51_final;
                vlSelf->__PVT__Y61_final_prev = vlSelf->__PVT__Y61_final;
                vlSelf->__PVT__Y71_final_prev = vlSelf->__PVT__Y71_final;
                vlSelf->__PVT__Y81_final_prev = vlSelf->__PVT__Y81_final;
                vlSelf->__PVT__Y31_final = vlSelf->__PVT__Y31;
                vlSelf->__PVT__Y21_final = vlSelf->__PVT__Y21;
                vlSelf->__PVT__Y41_final = vlSelf->__PVT__Y41;
                vlSelf->__PVT__Y51_final = vlSelf->__PVT__Y51;
                vlSelf->__PVT__Y61_final = vlSelf->__PVT__Y61;
                vlSelf->__PVT__Y71_final = vlSelf->__PVT__Y71;
                vlSelf->__PVT__Y81_final = vlSelf->__PVT__Y81;
            }
            if (vlSelf->__PVT__enable_1) {
                vlSelf->__PVT__Y_temp_81 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_hc686e7df__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u85__DOT__u1->r))
                                                 : vlSelf->__PVT__u85__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hc686e7df__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u85__DOT__u1->r))
                                                       : vlSelf->__PVT__u85__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hc686e7df__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u85__DOT__u1->r))
                                                    : vlSelf->__PVT__u85__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_71 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u84__DOT__u1->r))
                                                 : vlSelf->__PVT__u84__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u84__DOT__u1->r))
                                                       : vlSelf->__PVT__u84__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u84__DOT__u1->r))
                                                    : vlSelf->__PVT__u84__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_61 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_hb6088b02__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u83__DOT__u1->r))
                                                 : vlSelf->__PVT__u83__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hb6088b02__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u83__DOT__u1->r))
                                                       : vlSelf->__PVT__u83__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hb6088b02__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u83__DOT__u1->r))
                                                    : vlSelf->__PVT__u83__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_51 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u82__DOT__u1->r))
                                                 : vlSelf->__PVT__u82__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u82__DOT__u1->r))
                                                       : vlSelf->__PVT__u82__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u82__DOT__u1->r))
                                                    : vlSelf->__PVT__u82__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_41 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_ha58a2781__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u81__DOT__u1->r))
                                                 : vlSelf->__PVT__u81__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_ha58a2781__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u81__DOT__u1->r))
                                                       : vlSelf->__PVT__u81__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_ha58a2781__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u81__DOT__u1->r))
                                                    : vlSelf->__PVT__u81__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_31 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_h3a975308__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u80__DOT__u1->r))
                                                 : vlSelf->__PVT__u80__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h3a975308__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u80__DOT__u1->r))
                                                       : vlSelf->__PVT__u80__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h3a975308__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u80__DOT__u1->r))
                                                    : vlSelf->__PVT__u80__DOT__u1->r)));
                vlSelf->__PVT__Y_temp_21 = ((0x200000U 
                                             & ((1U 
                                                 & (IData)(
                                                           (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->__PVT__u79__DOT__u1->r))
                                                 : vlSelf->__PVT__u79__DOT__u1->r))
                                             ? (0xffc00000U 
                                                | (0x3fffffU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__u79__DOT__u1->r))
                                                       : vlSelf->__PVT__u79__DOT__u1->r)))
                                             : (0x3fffffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__u79__DOT__u1->r))
                                                    : vlSelf->__PVT__u79__DOT__u1->r)));
                vlSelf->__PVT__Y31 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h53832542__0 
                                       << 0xdU));
                vlSelf->__PVT__Y21 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_ha2e8c01e__0 
                                       << 0xdU));
                vlSelf->__PVT__Y41 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h5e674723__0 
                                       << 0xdU));
                vlSelf->__PVT__Y51 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h35911cf1__0 
                                       << 0xdU));
                vlSelf->__PVT__Y61 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h40d26797__0 
                                       << 0xdU));
                vlSelf->__PVT__Y71 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h540d27e9__0 
                                       << 0xdU));
                vlSelf->__PVT__Y81 = (0x1ffe000U & 
                                      (vlSelf->__VdfgTmp_h54a82709__0 
                                       << 0xdU));
            }
        } else {
            vlSelf->__PVT__Y_temp_81 = 0U;
            vlSelf->__PVT__Y_temp_71 = 0U;
            vlSelf->__PVT__Y_temp_61 = 0U;
            vlSelf->__PVT__Y_temp_51 = 0U;
            vlSelf->__PVT__Y_temp_41 = 0U;
            vlSelf->__PVT__Y_temp_31 = 0U;
            vlSelf->__PVT__Y_temp_21 = 0U;
            vlSelf->__PVT__Y31_final_prev = 0U;
            vlSelf->__PVT__Y21_final_prev = 0U;
            vlSelf->__PVT__Y41_final_prev = 0U;
            vlSelf->__PVT__Y51_final_prev = 0U;
            vlSelf->__PVT__Y61_final_prev = 0U;
            vlSelf->__PVT__Y71_final_prev = 0U;
            vlSelf->__PVT__Y81_final_prev = 0U;
            vlSelf->__PVT__Y31_final = 0U;
            vlSelf->__PVT__Y21_final = 0U;
            vlSelf->__PVT__Y41_final = 0U;
            vlSelf->__PVT__Y51_final = 0U;
            vlSelf->__PVT__Y61_final = 0U;
            vlSelf->__PVT__Y71_final = 0U;
            vlSelf->__PVT__Y81_final = 0U;
            vlSelf->__PVT__Y31 = 0U;
            vlSelf->__PVT__Y21 = 0U;
            vlSelf->__PVT__Y41 = 0U;
            vlSelf->__PVT__Y51 = 0U;
            vlSelf->__PVT__Y61 = 0U;
            vlSelf->__PVT__Y71 = 0U;
            vlSelf->__PVT__Y81 = 0U;
        }
        if (((IData)(vlSelf->__PVT__count_3) & (IData)(vlSelf->__PVT__enable_1))) {
            vlSelf->__PVT__Y11_final = (0x1ffffffU 
                                        & (vlSelf->__PVT__Y11 
                                           - (IData)(0x5a8400U)));
        }
    }
    if ((4U & (IData)(vlSelf->__PVT__count))) {
        if ((2U & (IData)(vlSelf->__PVT__count))) {
            if ((1U & (IData)(vlSelf->__PVT__count))) {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T25;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T26;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T27;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T28;
            } else {
                vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
                vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
                vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
                vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T23;
                vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T21;
                vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T24;
                vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T27;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T25;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T26;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T21;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T27;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T23;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T25;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count))) {
        if ((1U & (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T34;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T26;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T24;
        } else {
            vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
            vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T31;
            vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T33;
            vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T22;
            vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T24;
            vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T28;
            vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T23;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__count))) {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T52;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T34;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T26;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T28;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T25;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T22;
    } else {
        vlSelf->__PVT__Y5_mul_input = vlSelf->__PVT__T1;
        vlSelf->__PVT__Y7_mul_input = vlSelf->__PVT__T32;
        vlSelf->__PVT__Y3_mul_input = vlSelf->__PVT__T31;
        vlSelf->__PVT__Y8_mul_input = vlSelf->__PVT__T24;
        vlSelf->__PVT__Y6_mul_input = vlSelf->__PVT__T23;
        vlSelf->__PVT__Y4_mul_input = vlSelf->__PVT__T22;
        vlSelf->__PVT__Y2_mul_input = vlSelf->__PVT__T21;
    }
    if ((4U & (IData)(vlSelf->__PVT__count_of_copy))) {
        if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti24;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti27;
            } else {
                vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
                vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti25;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti26;
            }
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
        } else {
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti33;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti34;
            if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti21;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti27;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti23;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti25;
            } else {
                vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti28;
                vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti22;
                vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti26;
                vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti24;
            }
            vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__count_of_copy))) {
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti31;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti33;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti23;
        } else {
            vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti34;
            vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti32;
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti28;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti22;
        }
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti52;
    } else {
        vlSelf->__PVT__Ti7_mul_input = vlSelf->__PVT__Ti32;
        vlSelf->__PVT__Ti3_mul_input = vlSelf->__PVT__Ti31;
        if ((1U & (IData)(vlSelf->__PVT__count_of_copy))) {
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti24;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti23;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti22;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti21;
        } else {
            vlSelf->__PVT__Ti8_mul_input = vlSelf->__PVT__Ti25;
            vlSelf->__PVT__Ti6_mul_input = vlSelf->__PVT__Ti26;
            vlSelf->__PVT__Ti4_mul_input = vlSelf->__PVT__Ti27;
            vlSelf->__PVT__Ti2_mul_input = vlSelf->__PVT__Ti28;
        }
        vlSelf->__PVT__Ti5_mul_input = vlSelf->__PVT__Ti1;
    }
    vlSelf->__PVT__count_of_copy = __Vdly__count_of_copy;
    vlSelf->__PVT__T52 = 0xffffe95fU;
    vlSelf->__VdfgTmp_h4c5300e6__0 = ((0x2000U & vlSelf->__PVT__Y5_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y5_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y5_mul_input)));
    vlSelf->__VdfgTmp_hde2d8c69__0 = ((0x2000U & vlSelf->__PVT__Y7_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y7_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y7_mul_input)));
    vlSelf->__PVT__T31 = 0x1d90U;
    vlSelf->__PVT__T32 = 0xc3fU;
    vlSelf->__PVT__T33 = 0xfffff3c1U;
    vlSelf->__PVT__T34 = 0xffffe270U;
    vlSelf->__VdfgTmp_h3a975308__0 = ((0x2000U & vlSelf->__PVT__Y3_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y3_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y3_mul_input)));
    vlSelf->__VdfgTmp_hc686e7df__0 = ((0x2000U & vlSelf->__PVT__Y8_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y8_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y8_mul_input)));
    vlSelf->__VdfgTmp_hb6088b02__0 = ((0x2000U & vlSelf->__PVT__Y6_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y6_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y6_mul_input)));
    vlSelf->__VdfgTmp_ha58a2781__0 = ((0x2000U & vlSelf->__PVT__Y4_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y4_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y4_mul_input)));
    vlSelf->__PVT__T28 = 0xffffe09dU;
    vlSelf->__PVT__T27 = 0xffffe565U;
    vlSelf->__PVT__T26 = 0xffffee39U;
    vlSelf->__PVT__T25 = 0xfffff9c2U;
    vlSelf->__PVT__T24 = 0x63eU;
    vlSelf->__PVT__T23 = 0x11c7U;
    vlSelf->__PVT__T22 = 0x1a9bU;
    vlSelf->__PVT__T21 = 0x1f63U;
    vlSelf->__VdfgTmp_h7f1a2df4__0 = ((0x2000U & vlSelf->__PVT__Y2_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Y2_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Y2_mul_input)));
    vlSelf->__VdfgTmp_h4f997fe4__0 = ((0x2000U & vlSelf->__PVT__Ti7_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti7_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti7_mul_input)));
    vlSelf->__PVT__Ti32 = 0xc3fU;
    vlSelf->__PVT__Ti33 = 0xfffff3c1U;
    vlSelf->__PVT__Ti34 = 0xffffe270U;
    vlSelf->__PVT__Ti31 = 0x1d90U;
    vlSelf->__VdfgTmp_hb5d3819f__0 = ((0x2000U & vlSelf->__PVT__Ti3_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti3_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti3_mul_input)));
    vlSelf->__VdfgTmp_h38cce513__0 = ((0x2000U & vlSelf->__PVT__Ti8_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti8_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti8_mul_input)));
    vlSelf->__VdfgTmp_h216275e3__0 = ((0x2000U & vlSelf->__PVT__Ti6_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti6_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti6_mul_input)));
    vlSelf->__VdfgTmp_h6b20eb67__0 = ((0x2000U & vlSelf->__PVT__Ti4_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti4_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti4_mul_input)));
    vlSelf->__PVT__Ti27 = 0xffffe565U;
    vlSelf->__PVT__Ti26 = 0xffffee39U;
    vlSelf->__PVT__Ti25 = 0xfffff9c2U;
    vlSelf->__PVT__Ti24 = 0x63eU;
    vlSelf->__PVT__Ti23 = 0x11c7U;
    vlSelf->__PVT__Ti22 = 0x1a9bU;
    vlSelf->__PVT__Ti21 = 0x1f63U;
    vlSelf->__PVT__Ti28 = 0xffffe09dU;
    vlSelf->__VdfgTmp_hd358cecd__0 = ((0x2000U & vlSelf->__PVT__Ti2_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti2_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti2_mul_input)));
    vlSelf->__PVT__Ti52 = 0xffffe95fU;
    vlSelf->__VdfgTmp_h223a61ce__0 = ((0x2000U & vlSelf->__PVT__Ti5_mul_input)
                                       ? (0x300000000ULL 
                                          | (QData)((IData)(vlSelf->__PVT__Ti5_mul_input)))
                                       : (QData)((IData)(vlSelf->__PVT__Ti5_mul_input)));
    vlSelf->__PVT__Ti1 = 0x16a1U;
    vlSelf->__PVT__u82__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h4c5300e6__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h4c5300e6__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h4c5300e6__0))));
    vlSelf->__PVT__u84__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hde2d8c69__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hde2d8c69__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hde2d8c69__0))));
    vlSelf->__PVT__u80__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h3a975308__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h3a975308__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h3a975308__0))));
    vlSelf->__PVT__u85__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hc686e7df__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hc686e7df__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hc686e7df__0))));
    vlSelf->__PVT__u83__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_hb6088b02__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_hb6088b02__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_hb6088b02__0))));
    vlSelf->__PVT__u81__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_ha58a2781__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_ha58a2781__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_ha58a2781__0))));
    vlSelf->__PVT__u79__DOT__a_temp = (0xffffU & ((1U 
                                                   & (IData)(
                                                             (vlSelf->__VdfgTmp_h7f1a2df4__0 
                                                              >> 0xfU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h7f1a2df4__0))))
                                                   : 
                                                  (0xffffU 
                                                   & (IData)(vlSelf->__VdfgTmp_h7f1a2df4__0))));
    vlSelf->__PVT__u100__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h4f997fe4__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h4f997fe4__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h4f997fe4__0))));
    vlSelf->__PVT__u104__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hb5d3819f__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_hb5d3819f__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_hb5d3819f__0))));
    vlSelf->__PVT__u101__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h38cce513__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h38cce513__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h38cce513__0))));
    vlSelf->__PVT__u107__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h216275e3__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h216275e3__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h216275e3__0))));
    vlSelf->__PVT__u105__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h6b20eb67__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h6b20eb67__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h6b20eb67__0))));
    vlSelf->__PVT__u103__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_hd358cecd__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_hd358cecd__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_hd358cecd__0))));
    vlSelf->__PVT__u106__DOT__b_temp = (0xffffU & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h223a61ce__0 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & (IData)(vlSelf->__VdfgTmp_h223a61ce__0))))
                                                    : 
                                                   (0xffffU 
                                                    & (IData)(vlSelf->__VdfgTmp_h223a61ce__0))));
    vlSelf->__PVT__T1 = 0x16a1U;
    vlSelf->__Vcellinp__u102____pinNumber2 = ((0x2000U 
                                               & (IData)(vlSelf->__PVT__Ti1))
                                               ? (0xc000U 
                                                  | (IData)(vlSelf->__PVT__Ti1))
                                               : (IData)(vlSelf->__PVT__Ti1));
    vlSelf->__PVT__u86__DOT__a_temp = (0xffffU & ((0x8000U 
                                                   & vlSelf->__PVT__Y11_final_4)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ 
                                                    (0xffffU 
                                                     & vlSelf->__PVT__Y11_final_4)))
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->__PVT__Y11_final_4)));
    vlSelf->__PVT__u102__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y31_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y31_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y31_final_2)));
    vlSelf->__PVT__u100__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y21_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y21_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y21_final_2)));
    vlSelf->__PVT__u110__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y41_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y41_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y41_final_2)));
    vlSelf->__PVT__u118__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y51_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y51_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y51_final_2)));
    vlSelf->__PVT__u126__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y61_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y61_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y61_final_2)));
    vlSelf->__PVT__u134__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y71_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y71_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y71_final_2)));
    vlSelf->__PVT__u142__DOT__a_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & vlSelf->__PVT__Y81_final_2)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     (0xffffU 
                                                      & vlSelf->__PVT__Y81_final_2)))
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__Y81_final_2)));
    vlSelf->__PVT__u102__DOT__b_temp = (0xffffU & (
                                                   (0x8000U 
                                                    & (IData)(vlSelf->__Vcellinp__u102____pinNumber2))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->__Vcellinp__u102____pinNumber2)))
                                                    : (IData)(vlSelf->__Vcellinp__u102____pinNumber2)));
    vlSelf->__PVT__Y11 = __Vdly__Y11;
    vlSelf->__VdfgTmp_h53832542__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_31 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y31 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_ha2e8c01e__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_21 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y21 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h5e674723__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_41 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y41 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h35911cf1__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_51 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y51 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h40d26797__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_61 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y61 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h540d27e9__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_71 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y71 
                                                      >> 0xdU))));
    vlSelf->__VdfgTmp_h54a82709__0 = (0xfffffU & ((vlSelf->__PVT__Y_temp_81 
                                                   >> 0xdU) 
                                                  + 
                                                  (0xfffU 
                                                   & (vlSelf->__PVT__Y81 
                                                      >> 0xdU))));
}
