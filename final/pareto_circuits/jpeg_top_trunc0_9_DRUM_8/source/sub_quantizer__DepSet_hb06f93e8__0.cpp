// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc0_9_DRUM_8.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc0_9_DRUM_8__Syms.h"
#include "sub_DRUMs__K8.h"
#include "sub_quantizer.h"

VL_INLINE_OPT void sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__0(sub_quantizer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_9_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__0\n"); );
    // Body
    vlSelf->out_enable = ((~ (IData)(vlSymsp->TOP.rst)) 
                          & (IData)(vlSelf->__PVT__enable_3));
    if (vlSymsp->TOP.rst) {
        vlSelf->Q21 = 0U;
        vlSelf->Q11 = 0U;
        vlSelf->Q12 = 0U;
        vlSelf->Q13 = 0U;
        vlSelf->Q22 = 0U;
        vlSelf->Q31 = 0U;
        vlSelf->Q41 = 0U;
        vlSelf->Q32 = 0U;
        vlSelf->Q23 = 0U;
        vlSelf->Q14 = 0U;
        vlSelf->Q15 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q21 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z21_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z21_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z21_temp_1 
                                               >> 0xcU))));
        vlSelf->Q11 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z11_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z11_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z11_temp_1 
                                               >> 0xcU))));
        vlSelf->Q12 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z12_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z12_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z12_temp_1 
                                               >> 0xcU))));
        vlSelf->Q13 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z13_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z13_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z13_temp_1 
                                               >> 0xcU))));
        vlSelf->Q22 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z22_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z22_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z22_temp_1 
                                               >> 0xcU))));
        vlSelf->Q31 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z31_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z31_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z31_temp_1 
                                               >> 0xcU))));
        vlSelf->Q41 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z41_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z41_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z41_temp_1 
                                               >> 0xcU))));
        vlSelf->Q32 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z32_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z32_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z32_temp_1 
                                               >> 0xcU))));
        vlSelf->Q23 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z23_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z23_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z23_temp_1 
                                               >> 0xcU))));
        vlSelf->Q14 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z14_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z14_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z14_temp_1 
                                               >> 0xcU))));
        vlSelf->Q15 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z15_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z15_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z15_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z15_temp_1 = vlSelf->__PVT__Z15_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q24 = 0U;
        vlSelf->Q33 = 0U;
        vlSelf->Q42 = 0U;
        vlSelf->Q51 = 0U;
        vlSelf->Q61 = 0U;
        vlSelf->Q52 = 0U;
        vlSelf->Q43 = 0U;
        vlSelf->Q34 = 0U;
        vlSelf->Q25 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q24 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z24_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z24_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z24_temp_1 
                                               >> 0xcU))));
        vlSelf->Q33 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z33_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z33_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z33_temp_1 
                                               >> 0xcU))));
        vlSelf->Q42 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z42_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z42_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z42_temp_1 
                                               >> 0xcU))));
        vlSelf->Q51 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z51_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z51_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z51_temp_1 
                                               >> 0xcU))));
        vlSelf->Q61 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z61_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z61_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z61_temp_1 
                                               >> 0xcU))));
        vlSelf->Q52 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z52_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z52_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z52_temp_1 
                                               >> 0xcU))));
        vlSelf->Q43 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z43_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z43_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z43_temp_1 
                                               >> 0xcU))));
        vlSelf->Q34 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z34_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z34_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z34_temp_1 
                                               >> 0xcU))));
        vlSelf->Q25 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z25_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z25_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z25_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z25_temp_1 = vlSelf->__PVT__Z25_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q16 = 0U;
        vlSelf->Q17 = 0U;
        vlSelf->Q26 = 0U;
        vlSelf->Q35 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q16 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z16_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z16_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z16_temp_1 
                                               >> 0xcU))));
        vlSelf->Q17 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z17_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z17_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z17_temp_1 
                                               >> 0xcU))));
        vlSelf->Q26 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z26_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z26_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z26_temp_1 
                                               >> 0xcU))));
        vlSelf->Q35 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z35_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z35_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z35_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z35_temp_1 = vlSelf->__PVT__Z35_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q44 = 0U;
        vlSelf->Q53 = 0U;
        vlSelf->Q62 = 0U;
        vlSelf->Q71 = 0U;
        vlSelf->Q81 = 0U;
        vlSelf->Q72 = 0U;
        vlSelf->Q63 = 0U;
        vlSelf->Q54 = 0U;
        vlSelf->Q45 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q44 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z44_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z44_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z44_temp_1 
                                               >> 0xcU))));
        vlSelf->Q53 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z53_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z53_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z53_temp_1 
                                               >> 0xcU))));
        vlSelf->Q62 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z62_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z62_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z62_temp_1 
                                               >> 0xcU))));
        vlSelf->Q71 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z71_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z71_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z71_temp_1 
                                               >> 0xcU))));
        vlSelf->Q81 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z81_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z81_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z81_temp_1 
                                               >> 0xcU))));
        vlSelf->Q72 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z72_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z72_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z72_temp_1 
                                               >> 0xcU))));
        vlSelf->Q63 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z63_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z63_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z63_temp_1 
                                               >> 0xcU))));
        vlSelf->Q54 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z54_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z54_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z54_temp_1 
                                               >> 0xcU))));
        vlSelf->Q45 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z45_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z45_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z45_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z45_temp_1 = vlSelf->__PVT__Z45_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q36 = 0U;
        vlSelf->Q27 = 0U;
        vlSelf->Q18 = 0U;
        vlSelf->Q28 = 0U;
        vlSelf->Q37 = 0U;
        vlSelf->Q46 = 0U;
        vlSelf->Q55 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q36 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z36_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z36_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z36_temp_1 
                                               >> 0xcU))));
        vlSelf->Q27 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z27_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z27_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z27_temp_1 
                                               >> 0xcU))));
        vlSelf->Q18 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z18_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z18_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z18_temp_1 
                                               >> 0xcU))));
        vlSelf->Q28 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z28_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z28_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z28_temp_1 
                                               >> 0xcU))));
        vlSelf->Q37 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z37_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z37_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z37_temp_1 
                                               >> 0xcU))));
        vlSelf->Q46 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z46_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z46_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z46_temp_1 
                                               >> 0xcU))));
        vlSelf->Q55 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z55_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z55_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z55_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z55_temp_1 = vlSelf->__PVT__Z55_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q64 = 0U;
        vlSelf->Q73 = 0U;
        vlSelf->Q82 = 0U;
        vlSelf->Q83 = 0U;
        vlSelf->Q74 = 0U;
        vlSelf->Q65 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q64 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z64_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z64_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z64_temp_1 
                                               >> 0xcU))));
        vlSelf->Q73 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z73_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z73_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z73_temp_1 
                                               >> 0xcU))));
        vlSelf->Q82 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z82_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z82_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z82_temp_1 
                                               >> 0xcU))));
        vlSelf->Q83 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z83_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z83_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z83_temp_1 
                                               >> 0xcU))));
        vlSelf->Q74 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z74_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z74_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z74_temp_1 
                                               >> 0xcU))));
        vlSelf->Q65 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z65_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z65_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z65_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z65_temp_1 = vlSelf->__PVT__Z65_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q56 = 0U;
        vlSelf->Q47 = 0U;
        vlSelf->Q38 = 0U;
        vlSelf->Q48 = 0U;
        vlSelf->Q57 = 0U;
        vlSelf->Q66 = 0U;
        vlSelf->Q75 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q56 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z56_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z56_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z56_temp_1 
                                               >> 0xcU))));
        vlSelf->Q47 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z47_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z47_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z47_temp_1 
                                               >> 0xcU))));
        vlSelf->Q38 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z38_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z38_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z38_temp_1 
                                               >> 0xcU))));
        vlSelf->Q48 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z48_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z48_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z48_temp_1 
                                               >> 0xcU))));
        vlSelf->Q57 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z57_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z57_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z57_temp_1 
                                               >> 0xcU))));
        vlSelf->Q66 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z66_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z66_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z66_temp_1 
                                               >> 0xcU))));
        vlSelf->Q75 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z75_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z75_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z75_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z75_temp_1 = vlSelf->__PVT__Z75_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q84 = 0U;
        vlSelf->Q85 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q84 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z84_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z84_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z84_temp_1 
                                               >> 0xcU))));
        vlSelf->Q85 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z85_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z85_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z85_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z85_temp_1 = vlSelf->__PVT__Z85_temp;
        }
        if (vlSelf->__PVT__enable_1) {
            vlSelf->__PVT__Z15_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z15_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u15->__PVT__r_temp))
                                         : vlSelf->__PVT__u15->__PVT__r_temp));
            vlSelf->__PVT__Z25_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z25_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u25->__PVT__r_temp))
                                         : vlSelf->__PVT__u25->__PVT__r_temp));
            vlSelf->__PVT__Z35_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z35_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u35->__PVT__r_temp))
                                         : vlSelf->__PVT__u35->__PVT__r_temp));
            vlSelf->__PVT__Z45_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z45_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u45->__PVT__r_temp))
                                         : vlSelf->__PVT__u45->__PVT__r_temp));
            vlSelf->__PVT__Z55_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z55_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u55->__PVT__r_temp))
                                         : vlSelf->__PVT__u55->__PVT__r_temp));
            vlSelf->__PVT__Z65_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z65_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u65->__PVT__r_temp))
                                         : vlSelf->__PVT__u65->__PVT__r_temp));
            vlSelf->__PVT__Z75_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z75_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u75->__PVT__r_temp))
                                         : vlSelf->__PVT__u75->__PVT__r_temp));
            vlSelf->__PVT__Z85_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z85_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u85->__PVT__r_temp))
                                         : vlSelf->__PVT__u85->__PVT__r_temp));
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q76 = 0U;
        vlSelf->Q67 = 0U;
        vlSelf->Q58 = 0U;
        vlSelf->Q68 = 0U;
        vlSelf->Q77 = 0U;
        vlSelf->Q86 = 0U;
        vlSelf->Q87 = 0U;
        vlSelf->Q78 = 0U;
        vlSelf->Q88 = 0U;
        vlSelf->__PVT__Z21_temp_1 = 0U;
        vlSelf->__PVT__Z11_temp_1 = 0U;
        vlSelf->__PVT__Z12_temp_1 = 0U;
        vlSelf->__PVT__Z12_temp_1 = 0U;
        vlSelf->__PVT__Z13_temp_1 = 0U;
        vlSelf->__PVT__Z22_temp_1 = 0U;
        vlSelf->__PVT__Z22_temp_1 = 0U;
        vlSelf->__PVT__Z31_temp_1 = 0U;
        vlSelf->__PVT__Z41_temp_1 = 0U;
        vlSelf->__PVT__Z32_temp_1 = 0U;
        vlSelf->__PVT__Z32_temp_1 = 0U;
        vlSelf->__PVT__Z23_temp_1 = 0U;
        vlSelf->__PVT__Z14_temp_1 = 0U;
        vlSelf->__PVT__Z24_temp_1 = 0U;
        vlSelf->__PVT__Z33_temp_1 = 0U;
        vlSelf->__PVT__Z42_temp_1 = 0U;
        vlSelf->__PVT__Z42_temp_1 = 0U;
        vlSelf->__PVT__Z51_temp_1 = 0U;
        vlSelf->__PVT__Z61_temp_1 = 0U;
        vlSelf->__PVT__Z52_temp_1 = 0U;
        vlSelf->__PVT__Z52_temp_1 = 0U;
        vlSelf->__PVT__Z43_temp_1 = 0U;
        vlSelf->__PVT__Z34_temp_1 = 0U;
        vlSelf->__PVT__Z16_temp_1 = 0U;
        vlSelf->__PVT__Z17_temp_1 = 0U;
        vlSelf->__PVT__Z26_temp_1 = 0U;
        vlSelf->__PVT__Z44_temp_1 = 0U;
        vlSelf->__PVT__Z53_temp_1 = 0U;
        vlSelf->__PVT__Z62_temp_1 = 0U;
        vlSelf->__PVT__Z62_temp_1 = 0U;
        vlSelf->__PVT__Z71_temp_1 = 0U;
        vlSelf->__PVT__Z81_temp_1 = 0U;
        vlSelf->__PVT__Z72_temp_1 = 0U;
        vlSelf->__PVT__Z72_temp_1 = 0U;
        vlSelf->__PVT__Z63_temp_1 = 0U;
        vlSelf->__PVT__Z54_temp_1 = 0U;
        vlSelf->__PVT__Z36_temp_1 = 0U;
        vlSelf->__PVT__Z27_temp_1 = 0U;
        vlSelf->__PVT__Z18_temp_1 = 0U;
        vlSelf->__PVT__Z28_temp_1 = 0U;
        vlSelf->__PVT__Z37_temp_1 = 0U;
        vlSelf->__PVT__Z46_temp_1 = 0U;
        vlSelf->__PVT__Z64_temp_1 = 0U;
        vlSelf->__PVT__Z73_temp_1 = 0U;
        vlSelf->__PVT__Z82_temp_1 = 0U;
        vlSelf->__PVT__Z82_temp_1 = 0U;
        vlSelf->__PVT__Z83_temp_1 = 0U;
        vlSelf->__PVT__Z74_temp_1 = 0U;
        vlSelf->__PVT__Z56_temp_1 = 0U;
        vlSelf->__PVT__Z47_temp_1 = 0U;
        vlSelf->__PVT__Z38_temp_1 = 0U;
        vlSelf->__PVT__Z48_temp_1 = 0U;
        vlSelf->__PVT__Z57_temp_1 = 0U;
        vlSelf->__PVT__Z66_temp_1 = 0U;
        vlSelf->__PVT__Z84_temp_1 = 0U;
        vlSelf->__PVT__Z76_temp_1 = 0U;
        vlSelf->__PVT__Z67_temp_1 = 0U;
        vlSelf->__PVT__Z58_temp_1 = 0U;
        vlSelf->__PVT__Z68_temp_1 = 0U;
        vlSelf->__PVT__Z77_temp_1 = 0U;
        vlSelf->__PVT__Z86_temp_1 = 0U;
        vlSelf->__PVT__Z87_temp_1 = 0U;
        vlSelf->__PVT__Z78_temp_1 = 0U;
        vlSelf->__PVT__Z88_temp_1 = 0U;
        vlSelf->__PVT__Z21_temp = 0U;
        vlSelf->__PVT__Z11_temp = 0U;
        vlSelf->__PVT__Z12_temp = 0U;
        vlSelf->__PVT__Z12_temp = 0U;
        vlSelf->__PVT__Z13_temp = 0U;
        vlSelf->__PVT__Z22_temp = 0U;
        vlSelf->__PVT__Z22_temp = 0U;
        vlSelf->__PVT__Z31_temp = 0U;
        vlSelf->__PVT__Z41_temp = 0U;
        vlSelf->__PVT__Z32_temp = 0U;
        vlSelf->__PVT__Z32_temp = 0U;
        vlSelf->__PVT__Z23_temp = 0U;
        vlSelf->__PVT__Z14_temp = 0U;
        vlSelf->__PVT__Z24_temp = 0U;
        vlSelf->__PVT__Z33_temp = 0U;
        vlSelf->__PVT__Z42_temp = 0U;
        vlSelf->__PVT__Z42_temp = 0U;
        vlSelf->__PVT__Z51_temp = 0U;
        vlSelf->__PVT__Z61_temp = 0U;
        vlSelf->__PVT__Z52_temp = 0U;
        vlSelf->__PVT__Z52_temp = 0U;
        vlSelf->__PVT__Z43_temp = 0U;
        vlSelf->__PVT__Z34_temp = 0U;
        vlSelf->__PVT__Z16_temp = 0U;
        vlSelf->__PVT__Z17_temp = 0U;
        vlSelf->__PVT__Z26_temp = 0U;
        vlSelf->__PVT__Z44_temp = 0U;
        vlSelf->__PVT__Z53_temp = 0U;
        vlSelf->__PVT__Z62_temp = 0U;
        vlSelf->__PVT__Z62_temp = 0U;
        vlSelf->__PVT__Z71_temp = 0U;
        vlSelf->__PVT__Z81_temp = 0U;
        vlSelf->__PVT__Z72_temp = 0U;
        vlSelf->__PVT__Z72_temp = 0U;
        vlSelf->__PVT__Z63_temp = 0U;
        vlSelf->__PVT__Z54_temp = 0U;
        vlSelf->__PVT__Z36_temp = 0U;
        vlSelf->__PVT__Z27_temp = 0U;
        vlSelf->__PVT__Z18_temp = 0U;
        vlSelf->__PVT__Z28_temp = 0U;
        vlSelf->__PVT__Z37_temp = 0U;
        vlSelf->__PVT__Z46_temp = 0U;
        vlSelf->__PVT__Z64_temp = 0U;
        vlSelf->__PVT__Z73_temp = 0U;
        vlSelf->__PVT__Z82_temp = 0U;
        vlSelf->__PVT__Z82_temp = 0U;
        vlSelf->__PVT__Z83_temp = 0U;
        vlSelf->__PVT__Z74_temp = 0U;
        vlSelf->__PVT__Z56_temp = 0U;
        vlSelf->__PVT__Z47_temp = 0U;
        vlSelf->__PVT__Z38_temp = 0U;
        vlSelf->__PVT__Z48_temp = 0U;
        vlSelf->__PVT__Z57_temp = 0U;
        vlSelf->__PVT__Z66_temp = 0U;
        vlSelf->__PVT__Z84_temp = 0U;
        vlSelf->__PVT__Z76_temp = 0U;
        vlSelf->__PVT__Z67_temp = 0U;
        vlSelf->__PVT__Z58_temp = 0U;
        vlSelf->__PVT__Z68_temp = 0U;
        vlSelf->__PVT__Z77_temp = 0U;
        vlSelf->__PVT__Z86_temp = 0U;
        vlSelf->__PVT__Z87_temp = 0U;
        vlSelf->__PVT__Z78_temp = 0U;
        vlSelf->__PVT__Z88_temp = 0U;
        vlSelf->__PVT__Z21_int = 0U;
        vlSelf->__PVT__Z11_int = 0U;
        vlSelf->__PVT__Z12_int = 0U;
        vlSelf->__PVT__Z13_int = 0U;
        vlSelf->__PVT__Z22_int = 0U;
        vlSelf->__PVT__Z31_int = 0U;
        vlSelf->__PVT__Z41_int = 0U;
        vlSelf->__PVT__Z32_int = 0U;
        vlSelf->__PVT__Z23_int = 0U;
        vlSelf->__PVT__Z14_int = 0U;
        vlSelf->__PVT__Z15_int = 0U;
        vlSelf->__PVT__Z24_int = 0U;
        vlSelf->__PVT__Z33_int = 0U;
        vlSelf->__PVT__Z42_int = 0U;
        vlSelf->__PVT__Z51_int = 0U;
        vlSelf->__PVT__Z61_int = 0U;
        vlSelf->__PVT__Z52_int = 0U;
        vlSelf->__PVT__Z43_int = 0U;
        vlSelf->__PVT__Z34_int = 0U;
        vlSelf->__PVT__Z25_int = 0U;
        vlSelf->__PVT__Z16_int = 0U;
        vlSelf->__PVT__Z17_int = 0U;
        vlSelf->__PVT__Z26_int = 0U;
        vlSelf->__PVT__Z35_int = 0U;
        vlSelf->__PVT__Z44_int = 0U;
        vlSelf->__PVT__Z53_int = 0U;
        vlSelf->__PVT__Z62_int = 0U;
        vlSelf->__PVT__Z71_int = 0U;
        vlSelf->__PVT__Z81_int = 0U;
        vlSelf->__PVT__Z72_int = 0U;
        vlSelf->__PVT__Z63_int = 0U;
        vlSelf->__PVT__Z54_int = 0U;
        vlSelf->__PVT__Z45_int = 0U;
        vlSelf->__PVT__Z36_int = 0U;
        vlSelf->__PVT__Z27_int = 0U;
        vlSelf->__PVT__Z18_int = 0U;
        vlSelf->__PVT__Z28_int = 0U;
        vlSelf->__PVT__Z37_int = 0U;
        vlSelf->__PVT__Z46_int = 0U;
        vlSelf->__PVT__Z55_int = 0U;
        vlSelf->__PVT__Z64_int = 0U;
        vlSelf->__PVT__Z73_int = 0U;
        vlSelf->__PVT__Z82_int = 0U;
        vlSelf->__PVT__Z83_int = 0U;
        vlSelf->__PVT__Z74_int = 0U;
        vlSelf->__PVT__Z65_int = 0U;
        vlSelf->__PVT__Z56_int = 0U;
        vlSelf->__PVT__Z47_int = 0U;
        vlSelf->__PVT__Z38_int = 0U;
        vlSelf->__PVT__Z48_int = 0U;
        vlSelf->__PVT__Z57_int = 0U;
        vlSelf->__PVT__Z66_int = 0U;
        vlSelf->__PVT__Z75_int = 0U;
        vlSelf->__PVT__Z84_int = 0U;
        vlSelf->__PVT__Z85_int = 0U;
        vlSelf->__PVT__Z76_int = 0U;
        vlSelf->__PVT__Z67_int = 0U;
        vlSelf->__PVT__Z58_int = 0U;
        vlSelf->__PVT__Z68_int = 0U;
        vlSelf->__PVT__Z77_int = 0U;
        vlSelf->__PVT__Z86_int = 0U;
        vlSelf->__PVT__Z87_int = 0U;
        vlSelf->__PVT__Z78_int = 0U;
        vlSelf->__PVT__Z88_int = 0U;
    } else {
        if (vlSelf->__PVT__enable_3) {
            vlSelf->Q76 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z76_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z76_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z76_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q67 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z67_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z67_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z67_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q58 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z58_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z58_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z58_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q68 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z68_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z68_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z68_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q77 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z77_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z77_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z77_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q86 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z86_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z86_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z86_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q87 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z87_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z87_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z87_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q78 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z78_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z78_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z78_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q88 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z88_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z88_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z88_temp_1 
                                                   >> 0xcU))));
        }
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z21_temp_1 = vlSelf->__PVT__Z21_temp;
            vlSelf->__PVT__Z11_temp_1 = vlSelf->__PVT__Z11_temp;
            vlSelf->__PVT__Z12_temp_1 = vlSelf->__PVT__Z12_temp;
            vlSelf->__PVT__Z13_temp_1 = vlSelf->__PVT__Z13_temp;
            vlSelf->__PVT__Z22_temp_1 = vlSelf->__PVT__Z22_temp;
            vlSelf->__PVT__Z31_temp_1 = vlSelf->__PVT__Z31_temp;
            vlSelf->__PVT__Z41_temp_1 = vlSelf->__PVT__Z41_temp;
            vlSelf->__PVT__Z32_temp_1 = vlSelf->__PVT__Z32_temp;
            vlSelf->__PVT__Z23_temp_1 = vlSelf->__PVT__Z23_temp;
            vlSelf->__PVT__Z14_temp_1 = vlSelf->__PVT__Z14_temp;
            vlSelf->__PVT__Z24_temp_1 = vlSelf->__PVT__Z24_temp;
            vlSelf->__PVT__Z33_temp_1 = vlSelf->__PVT__Z33_temp;
            vlSelf->__PVT__Z42_temp_1 = vlSelf->__PVT__Z42_temp;
            vlSelf->__PVT__Z51_temp_1 = vlSelf->__PVT__Z51_temp;
            vlSelf->__PVT__Z61_temp_1 = vlSelf->__PVT__Z61_temp;
            vlSelf->__PVT__Z52_temp_1 = vlSelf->__PVT__Z52_temp;
            vlSelf->__PVT__Z43_temp_1 = vlSelf->__PVT__Z43_temp;
            vlSelf->__PVT__Z34_temp_1 = vlSelf->__PVT__Z34_temp;
            vlSelf->__PVT__Z16_temp_1 = vlSelf->__PVT__Z16_temp;
            vlSelf->__PVT__Z17_temp_1 = vlSelf->__PVT__Z17_temp;
            vlSelf->__PVT__Z26_temp_1 = vlSelf->__PVT__Z26_temp;
            vlSelf->__PVT__Z44_temp_1 = vlSelf->__PVT__Z44_temp;
            vlSelf->__PVT__Z53_temp_1 = vlSelf->__PVT__Z53_temp;
            vlSelf->__PVT__Z62_temp_1 = vlSelf->__PVT__Z62_temp;
            vlSelf->__PVT__Z71_temp_1 = vlSelf->__PVT__Z71_temp;
            vlSelf->__PVT__Z81_temp_1 = vlSelf->__PVT__Z81_temp;
            vlSelf->__PVT__Z72_temp_1 = vlSelf->__PVT__Z72_temp;
            vlSelf->__PVT__Z63_temp_1 = vlSelf->__PVT__Z63_temp;
            vlSelf->__PVT__Z54_temp_1 = vlSelf->__PVT__Z54_temp;
            vlSelf->__PVT__Z36_temp_1 = vlSelf->__PVT__Z36_temp;
            vlSelf->__PVT__Z27_temp_1 = vlSelf->__PVT__Z27_temp;
            vlSelf->__PVT__Z18_temp_1 = vlSelf->__PVT__Z18_temp;
            vlSelf->__PVT__Z28_temp_1 = vlSelf->__PVT__Z28_temp;
            vlSelf->__PVT__Z37_temp_1 = vlSelf->__PVT__Z37_temp;
            vlSelf->__PVT__Z46_temp_1 = vlSelf->__PVT__Z46_temp;
            vlSelf->__PVT__Z64_temp_1 = vlSelf->__PVT__Z64_temp;
            vlSelf->__PVT__Z73_temp_1 = vlSelf->__PVT__Z73_temp;
            vlSelf->__PVT__Z82_temp_1 = vlSelf->__PVT__Z82_temp;
            vlSelf->__PVT__Z83_temp_1 = vlSelf->__PVT__Z83_temp;
            vlSelf->__PVT__Z74_temp_1 = vlSelf->__PVT__Z74_temp;
            vlSelf->__PVT__Z56_temp_1 = vlSelf->__PVT__Z56_temp;
            vlSelf->__PVT__Z47_temp_1 = vlSelf->__PVT__Z47_temp;
            vlSelf->__PVT__Z38_temp_1 = vlSelf->__PVT__Z38_temp;
            vlSelf->__PVT__Z48_temp_1 = vlSelf->__PVT__Z48_temp;
            vlSelf->__PVT__Z57_temp_1 = vlSelf->__PVT__Z57_temp;
            vlSelf->__PVT__Z66_temp_1 = vlSelf->__PVT__Z66_temp;
            vlSelf->__PVT__Z84_temp_1 = vlSelf->__PVT__Z84_temp;
            vlSelf->__PVT__Z76_temp_1 = vlSelf->__PVT__Z76_temp;
            vlSelf->__PVT__Z67_temp_1 = vlSelf->__PVT__Z67_temp;
            vlSelf->__PVT__Z58_temp_1 = vlSelf->__PVT__Z58_temp;
            vlSelf->__PVT__Z68_temp_1 = vlSelf->__PVT__Z68_temp;
            vlSelf->__PVT__Z77_temp_1 = vlSelf->__PVT__Z77_temp;
            vlSelf->__PVT__Z86_temp_1 = vlSelf->__PVT__Z86_temp;
            vlSelf->__PVT__Z87_temp_1 = vlSelf->__PVT__Z87_temp;
            vlSelf->__PVT__Z78_temp_1 = vlSelf->__PVT__Z78_temp;
            vlSelf->__PVT__Z88_temp_1 = vlSelf->__PVT__Z88_temp;
        }
        if (vlSelf->__PVT__enable_1) {
            vlSelf->__PVT__Z21_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z21_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u21->__PVT__r_temp))
                                         : vlSelf->__PVT__u21->__PVT__r_temp));
            vlSelf->__PVT__Z11_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z11_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u11->__PVT__r_temp))
                                         : vlSelf->__PVT__u11->__PVT__r_temp));
            vlSelf->__PVT__Z12_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z12_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u12->__PVT__r_temp))
                                         : vlSelf->__PVT__u12->__PVT__r_temp));
            vlSelf->__PVT__Z13_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z13_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u13->__PVT__r_temp))
                                         : vlSelf->__PVT__u13->__PVT__r_temp));
            vlSelf->__PVT__Z22_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z22_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u22->__PVT__r_temp))
                                         : vlSelf->__PVT__u22->__PVT__r_temp));
            vlSelf->__PVT__Z31_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z31_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u31->__PVT__r_temp))
                                         : vlSelf->__PVT__u31->__PVT__r_temp));
            vlSelf->__PVT__Z41_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z41_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u41->__PVT__r_temp))
                                         : vlSelf->__PVT__u41->__PVT__r_temp));
            vlSelf->__PVT__Z32_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z32_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u32->__PVT__r_temp))
                                         : vlSelf->__PVT__u32->__PVT__r_temp));
            vlSelf->__PVT__Z23_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z23_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u23->__PVT__r_temp))
                                         : vlSelf->__PVT__u23->__PVT__r_temp));
            vlSelf->__PVT__Z14_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z14_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u14->__PVT__r_temp))
                                         : vlSelf->__PVT__u14->__PVT__r_temp));
            vlSelf->__PVT__Z24_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z24_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u24->__PVT__r_temp))
                                         : vlSelf->__PVT__u24->__PVT__r_temp));
            vlSelf->__PVT__Z33_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z33_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u33->__PVT__r_temp))
                                         : vlSelf->__PVT__u33->__PVT__r_temp));
            vlSelf->__PVT__Z42_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z42_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u42->__PVT__r_temp))
                                         : vlSelf->__PVT__u42->__PVT__r_temp));
            vlSelf->__PVT__Z51_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z51_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u51->__PVT__r_temp))
                                         : vlSelf->__PVT__u51->__PVT__r_temp));
            vlSelf->__PVT__Z61_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z61_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u61->__PVT__r_temp))
                                         : vlSelf->__PVT__u61->__PVT__r_temp));
            vlSelf->__PVT__Z52_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z52_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u52->__PVT__r_temp))
                                         : vlSelf->__PVT__u52->__PVT__r_temp));
            vlSelf->__PVT__Z43_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z43_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u43->__PVT__r_temp))
                                         : vlSelf->__PVT__u43->__PVT__r_temp));
            vlSelf->__PVT__Z34_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z34_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u34->__PVT__r_temp))
                                         : vlSelf->__PVT__u34->__PVT__r_temp));
            vlSelf->__PVT__Z16_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z16_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u16->__PVT__r_temp))
                                         : vlSelf->__PVT__u16->__PVT__r_temp));
            vlSelf->__PVT__Z17_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z17_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u17->__PVT__r_temp))
                                         : vlSelf->__PVT__u17->__PVT__r_temp));
            vlSelf->__PVT__Z26_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z26_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u26->__PVT__r_temp))
                                         : vlSelf->__PVT__u26->__PVT__r_temp));
            vlSelf->__PVT__Z44_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z44_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u44->__PVT__r_temp))
                                         : vlSelf->__PVT__u44->__PVT__r_temp));
            vlSelf->__PVT__Z53_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z53_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u53->__PVT__r_temp))
                                         : vlSelf->__PVT__u53->__PVT__r_temp));
            vlSelf->__PVT__Z62_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z62_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u62->__PVT__r_temp))
                                         : vlSelf->__PVT__u62->__PVT__r_temp));
            vlSelf->__PVT__Z71_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z71_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u71->__PVT__r_temp))
                                         : vlSelf->__PVT__u71->__PVT__r_temp));
            vlSelf->__PVT__Z81_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z81_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u81->__PVT__r_temp))
                                         : vlSelf->__PVT__u81->__PVT__r_temp));
            vlSelf->__PVT__Z72_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z72_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u72->__PVT__r_temp))
                                         : vlSelf->__PVT__u72->__PVT__r_temp));
            vlSelf->__PVT__Z63_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z63_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u63->__PVT__r_temp))
                                         : vlSelf->__PVT__u63->__PVT__r_temp));
            vlSelf->__PVT__Z54_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z54_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u54->__PVT__r_temp))
                                         : vlSelf->__PVT__u54->__PVT__r_temp));
            vlSelf->__PVT__Z36_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z36_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u36->__PVT__r_temp))
                                         : vlSelf->__PVT__u36->__PVT__r_temp));
            vlSelf->__PVT__Z27_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z27_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u27->__PVT__r_temp))
                                         : vlSelf->__PVT__u27->__PVT__r_temp));
            vlSelf->__PVT__Z18_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z18_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u18->__PVT__r_temp))
                                         : vlSelf->__PVT__u18->__PVT__r_temp));
            vlSelf->__PVT__Z28_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z28_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u28->__PVT__r_temp))
                                         : vlSelf->__PVT__u28->__PVT__r_temp));
            vlSelf->__PVT__Z37_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z37_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u37->__PVT__r_temp))
                                         : vlSelf->__PVT__u37->__PVT__r_temp));
            vlSelf->__PVT__Z46_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z46_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u46->__PVT__r_temp))
                                         : vlSelf->__PVT__u46->__PVT__r_temp));
            vlSelf->__PVT__Z64_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z64_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u64->__PVT__r_temp))
                                         : vlSelf->__PVT__u64->__PVT__r_temp));
            vlSelf->__PVT__Z73_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z73_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u73->__PVT__r_temp))
                                         : vlSelf->__PVT__u73->__PVT__r_temp));
            vlSelf->__PVT__Z82_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z82_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u82->__PVT__r_temp))
                                         : vlSelf->__PVT__u82->__PVT__r_temp));
            vlSelf->__PVT__Z83_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z83_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u83->__PVT__r_temp))
                                         : vlSelf->__PVT__u83->__PVT__r_temp));
            vlSelf->__PVT__Z74_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z74_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u74->__PVT__r_temp))
                                         : vlSelf->__PVT__u74->__PVT__r_temp));
            vlSelf->__PVT__Z56_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z56_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u56->__PVT__r_temp))
                                         : vlSelf->__PVT__u56->__PVT__r_temp));
            vlSelf->__PVT__Z47_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z47_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u47->__PVT__r_temp))
                                         : vlSelf->__PVT__u47->__PVT__r_temp));
            vlSelf->__PVT__Z38_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z38_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u38->__PVT__r_temp))
                                         : vlSelf->__PVT__u38->__PVT__r_temp));
            vlSelf->__PVT__Z48_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z48_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u48->__PVT__r_temp))
                                         : vlSelf->__PVT__u48->__PVT__r_temp));
            vlSelf->__PVT__Z57_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z57_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u57->__PVT__r_temp))
                                         : vlSelf->__PVT__u57->__PVT__r_temp));
            vlSelf->__PVT__Z66_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z66_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u66->__PVT__r_temp))
                                         : vlSelf->__PVT__u66->__PVT__r_temp));
            vlSelf->__PVT__Z84_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z84_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u84->__PVT__r_temp))
                                         : vlSelf->__PVT__u84->__PVT__r_temp));
            vlSelf->__PVT__Z76_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z76_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u76->__PVT__r_temp))
                                         : vlSelf->__PVT__u76->__PVT__r_temp));
            vlSelf->__PVT__Z67_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z67_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u67->__PVT__r_temp))
                                         : vlSelf->__PVT__u67->__PVT__r_temp));
            vlSelf->__PVT__Z58_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z58_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u58->__PVT__r_temp))
                                         : vlSelf->__PVT__u58->__PVT__r_temp));
            vlSelf->__PVT__Z68_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z68_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u68->__PVT__r_temp))
                                         : vlSelf->__PVT__u68->__PVT__r_temp));
            vlSelf->__PVT__Z77_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z77_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u77->__PVT__r_temp))
                                         : vlSelf->__PVT__u77->__PVT__r_temp));
            vlSelf->__PVT__Z86_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z86_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u86->__PVT__r_temp))
                                         : vlSelf->__PVT__u86->__PVT__r_temp));
            vlSelf->__PVT__Z87_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z87_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u87->__PVT__r_temp))
                                         : vlSelf->__PVT__u87->__PVT__r_temp));
            vlSelf->__PVT__Z78_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z78_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u78->__PVT__r_temp))
                                         : vlSelf->__PVT__u78->__PVT__r_temp));
            vlSelf->__PVT__Z88_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z88_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u88->__PVT__r_temp))
                                         : vlSelf->__PVT__u88->__PVT__r_temp));
        }
        if (vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.output_enable) {
            vlSelf->__PVT__Z21_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z21_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z21_final));
            vlSelf->__PVT__Z11_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z11_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z11_final));
            vlSelf->__PVT__Z12_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z12_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z12_final));
            vlSelf->__PVT__Z13_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z13_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z13_final));
            vlSelf->__PVT__Z22_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z22_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z22_final));
            vlSelf->__PVT__Z31_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z31_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z31_final));
            vlSelf->__PVT__Z41_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z41_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z41_final));
            vlSelf->__PVT__Z32_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z32_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z32_final));
            vlSelf->__PVT__Z23_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z23_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z23_final));
            vlSelf->__PVT__Z14_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z14_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z14_final));
            vlSelf->__PVT__Z15_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z15_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z15_final));
            vlSelf->__PVT__Z24_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z24_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z24_final));
            vlSelf->__PVT__Z33_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z33_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z33_final));
            vlSelf->__PVT__Z42_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z42_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z42_final));
            vlSelf->__PVT__Z51_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z51_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z51_final));
            vlSelf->__PVT__Z61_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z61_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z61_final));
            vlSelf->__PVT__Z52_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z52_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z52_final));
            vlSelf->__PVT__Z43_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z43_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z43_final));
            vlSelf->__PVT__Z34_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z34_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z34_final));
            vlSelf->__PVT__Z25_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z25_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z25_final));
            vlSelf->__PVT__Z16_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z16_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z16_final));
            vlSelf->__PVT__Z17_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z17_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z17_final));
            vlSelf->__PVT__Z26_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z26_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z26_final));
            vlSelf->__PVT__Z35_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z35_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z35_final));
            vlSelf->__PVT__Z44_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z44_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z44_final));
            vlSelf->__PVT__Z53_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z53_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z53_final));
            vlSelf->__PVT__Z62_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z62_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z62_final));
            vlSelf->__PVT__Z71_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z71_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z71_final));
            vlSelf->__PVT__Z81_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z81_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z81_final));
            vlSelf->__PVT__Z72_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z72_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z72_final));
            vlSelf->__PVT__Z63_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z63_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z63_final));
            vlSelf->__PVT__Z54_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z54_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z54_final));
            vlSelf->__PVT__Z45_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z45_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z45_final));
            vlSelf->__PVT__Z36_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z36_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z36_final));
            vlSelf->__PVT__Z27_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z27_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z27_final));
            vlSelf->__PVT__Z18_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z18_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z18_final));
            vlSelf->__PVT__Z28_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z28_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z28_final));
            vlSelf->__PVT__Z37_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z37_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z37_final));
            vlSelf->__PVT__Z46_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z46_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z46_final));
            vlSelf->__PVT__Z55_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z55_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z55_final));
            vlSelf->__PVT__Z64_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z64_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z64_final));
            vlSelf->__PVT__Z73_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z73_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z73_final));
            vlSelf->__PVT__Z82_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z82_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z82_final));
            vlSelf->__PVT__Z83_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z83_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z83_final));
            vlSelf->__PVT__Z74_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z74_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z74_final));
            vlSelf->__PVT__Z65_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z65_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z65_final));
            vlSelf->__PVT__Z56_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z56_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z56_final));
            vlSelf->__PVT__Z47_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z47_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z47_final));
            vlSelf->__PVT__Z38_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z38_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z38_final));
            vlSelf->__PVT__Z48_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z48_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z48_final));
            vlSelf->__PVT__Z57_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z57_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z57_final));
            vlSelf->__PVT__Z66_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z66_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z66_final));
            vlSelf->__PVT__Z75_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z75_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z75_final));
            vlSelf->__PVT__Z84_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z84_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z84_final));
            vlSelf->__PVT__Z85_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z85_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z85_final));
            vlSelf->__PVT__Z76_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z76_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z76_final));
            vlSelf->__PVT__Z67_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z67_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z67_final));
            vlSelf->__PVT__Z58_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z58_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z58_final));
            vlSelf->__PVT__Z68_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z68_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z68_final));
            vlSelf->__PVT__Z77_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z77_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z77_final));
            vlSelf->__PVT__Z86_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z86_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z86_final));
            vlSelf->__PVT__Z87_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z87_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z87_final));
            vlSelf->__PVT__Z78_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z78_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z78_final));
            vlSelf->__PVT__Z88_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z88_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.Z88_final));
        }
    }
    vlSelf->__PVT__enable_3 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSelf->__PVT__enable_2));
    vlSelf->__PVT__enable_2 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSelf->__PVT__enable_1));
    vlSelf->__PVT__enable_1 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.output_enable));
}

VL_INLINE_OPT void sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__0(sub_quantizer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_9_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__0\n"); );
    // Body
    vlSelf->out_enable = ((~ (IData)(vlSymsp->TOP.rst)) 
                          & (IData)(vlSelf->__PVT__enable_3));
    if (vlSymsp->TOP.rst) {
        vlSelf->Q21 = 0U;
        vlSelf->Q11 = 0U;
        vlSelf->Q12 = 0U;
        vlSelf->Q13 = 0U;
        vlSelf->Q22 = 0U;
        vlSelf->Q31 = 0U;
        vlSelf->Q41 = 0U;
        vlSelf->Q32 = 0U;
        vlSelf->Q23 = 0U;
        vlSelf->Q14 = 0U;
        vlSelf->Q15 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q21 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z21_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z21_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z21_temp_1 
                                               >> 0xcU))));
        vlSelf->Q11 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z11_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z11_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z11_temp_1 
                                               >> 0xcU))));
        vlSelf->Q12 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z12_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z12_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z12_temp_1 
                                               >> 0xcU))));
        vlSelf->Q13 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z13_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z13_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z13_temp_1 
                                               >> 0xcU))));
        vlSelf->Q22 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z22_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z22_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z22_temp_1 
                                               >> 0xcU))));
        vlSelf->Q31 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z31_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z31_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z31_temp_1 
                                               >> 0xcU))));
        vlSelf->Q41 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z41_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z41_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z41_temp_1 
                                               >> 0xcU))));
        vlSelf->Q32 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z32_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z32_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z32_temp_1 
                                               >> 0xcU))));
        vlSelf->Q23 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z23_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z23_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z23_temp_1 
                                               >> 0xcU))));
        vlSelf->Q14 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z14_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z14_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z14_temp_1 
                                               >> 0xcU))));
        vlSelf->Q15 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z15_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z15_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z15_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z15_temp_1 = vlSelf->__PVT__Z15_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q24 = 0U;
        vlSelf->Q33 = 0U;
        vlSelf->Q42 = 0U;
        vlSelf->Q51 = 0U;
        vlSelf->Q61 = 0U;
        vlSelf->Q52 = 0U;
        vlSelf->Q43 = 0U;
        vlSelf->Q34 = 0U;
        vlSelf->Q25 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q24 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z24_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z24_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z24_temp_1 
                                               >> 0xcU))));
        vlSelf->Q33 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z33_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z33_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z33_temp_1 
                                               >> 0xcU))));
        vlSelf->Q42 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z42_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z42_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z42_temp_1 
                                               >> 0xcU))));
        vlSelf->Q51 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z51_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z51_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z51_temp_1 
                                               >> 0xcU))));
        vlSelf->Q61 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z61_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z61_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z61_temp_1 
                                               >> 0xcU))));
        vlSelf->Q52 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z52_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z52_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z52_temp_1 
                                               >> 0xcU))));
        vlSelf->Q43 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z43_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z43_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z43_temp_1 
                                               >> 0xcU))));
        vlSelf->Q34 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z34_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z34_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z34_temp_1 
                                               >> 0xcU))));
        vlSelf->Q25 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z25_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z25_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z25_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z25_temp_1 = vlSelf->__PVT__Z25_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q16 = 0U;
        vlSelf->Q17 = 0U;
        vlSelf->Q26 = 0U;
        vlSelf->Q35 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q16 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z16_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z16_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z16_temp_1 
                                               >> 0xcU))));
        vlSelf->Q17 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z17_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z17_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z17_temp_1 
                                               >> 0xcU))));
        vlSelf->Q26 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z26_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z26_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z26_temp_1 
                                               >> 0xcU))));
        vlSelf->Q35 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z35_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z35_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z35_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z35_temp_1 = vlSelf->__PVT__Z35_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q44 = 0U;
        vlSelf->Q53 = 0U;
        vlSelf->Q62 = 0U;
        vlSelf->Q71 = 0U;
        vlSelf->Q81 = 0U;
        vlSelf->Q72 = 0U;
        vlSelf->Q63 = 0U;
        vlSelf->Q54 = 0U;
        vlSelf->Q45 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q44 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z44_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z44_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z44_temp_1 
                                               >> 0xcU))));
        vlSelf->Q53 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z53_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z53_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z53_temp_1 
                                               >> 0xcU))));
        vlSelf->Q62 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z62_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z62_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z62_temp_1 
                                               >> 0xcU))));
        vlSelf->Q71 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z71_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z71_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z71_temp_1 
                                               >> 0xcU))));
        vlSelf->Q81 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z81_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z81_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z81_temp_1 
                                               >> 0xcU))));
        vlSelf->Q72 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z72_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z72_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z72_temp_1 
                                               >> 0xcU))));
        vlSelf->Q63 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z63_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z63_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z63_temp_1 
                                               >> 0xcU))));
        vlSelf->Q54 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z54_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z54_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z54_temp_1 
                                               >> 0xcU))));
        vlSelf->Q45 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z45_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z45_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z45_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z45_temp_1 = vlSelf->__PVT__Z45_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q36 = 0U;
        vlSelf->Q27 = 0U;
        vlSelf->Q18 = 0U;
        vlSelf->Q28 = 0U;
        vlSelf->Q37 = 0U;
        vlSelf->Q46 = 0U;
        vlSelf->Q55 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q36 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z36_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z36_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z36_temp_1 
                                               >> 0xcU))));
        vlSelf->Q27 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z27_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z27_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z27_temp_1 
                                               >> 0xcU))));
        vlSelf->Q18 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z18_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z18_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z18_temp_1 
                                               >> 0xcU))));
        vlSelf->Q28 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z28_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z28_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z28_temp_1 
                                               >> 0xcU))));
        vlSelf->Q37 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z37_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z37_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z37_temp_1 
                                               >> 0xcU))));
        vlSelf->Q46 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z46_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z46_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z46_temp_1 
                                               >> 0xcU))));
        vlSelf->Q55 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z55_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z55_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z55_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z55_temp_1 = vlSelf->__PVT__Z55_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q64 = 0U;
        vlSelf->Q73 = 0U;
        vlSelf->Q82 = 0U;
        vlSelf->Q83 = 0U;
        vlSelf->Q74 = 0U;
        vlSelf->Q65 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q64 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z64_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z64_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z64_temp_1 
                                               >> 0xcU))));
        vlSelf->Q73 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z73_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z73_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z73_temp_1 
                                               >> 0xcU))));
        vlSelf->Q82 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z82_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z82_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z82_temp_1 
                                               >> 0xcU))));
        vlSelf->Q83 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z83_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z83_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z83_temp_1 
                                               >> 0xcU))));
        vlSelf->Q74 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z74_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z74_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z74_temp_1 
                                               >> 0xcU))));
        vlSelf->Q65 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z65_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z65_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z65_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z65_temp_1 = vlSelf->__PVT__Z65_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q56 = 0U;
        vlSelf->Q47 = 0U;
        vlSelf->Q38 = 0U;
        vlSelf->Q48 = 0U;
        vlSelf->Q57 = 0U;
        vlSelf->Q66 = 0U;
        vlSelf->Q75 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q56 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z56_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z56_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z56_temp_1 
                                               >> 0xcU))));
        vlSelf->Q47 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z47_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z47_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z47_temp_1 
                                               >> 0xcU))));
        vlSelf->Q38 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z38_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z38_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z38_temp_1 
                                               >> 0xcU))));
        vlSelf->Q48 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z48_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z48_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z48_temp_1 
                                               >> 0xcU))));
        vlSelf->Q57 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z57_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z57_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z57_temp_1 
                                               >> 0xcU))));
        vlSelf->Q66 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z66_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z66_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z66_temp_1 
                                               >> 0xcU))));
        vlSelf->Q75 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z75_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z75_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z75_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z75_temp_1 = vlSelf->__PVT__Z75_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q84 = 0U;
        vlSelf->Q85 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q84 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z84_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z84_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z84_temp_1 
                                               >> 0xcU))));
        vlSelf->Q85 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z85_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z85_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z85_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z85_temp_1 = vlSelf->__PVT__Z85_temp;
        }
        if (vlSelf->__PVT__enable_1) {
            vlSelf->__PVT__Z15_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z15_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u15->__PVT__r_temp))
                                         : vlSelf->__PVT__u15->__PVT__r_temp));
            vlSelf->__PVT__Z25_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z25_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u25->__PVT__r_temp))
                                         : vlSelf->__PVT__u25->__PVT__r_temp));
            vlSelf->__PVT__Z35_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z35_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u35->__PVT__r_temp))
                                         : vlSelf->__PVT__u35->__PVT__r_temp));
            vlSelf->__PVT__Z45_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z45_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u45->__PVT__r_temp))
                                         : vlSelf->__PVT__u45->__PVT__r_temp));
            vlSelf->__PVT__Z55_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z55_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u55->__PVT__r_temp))
                                         : vlSelf->__PVT__u55->__PVT__r_temp));
            vlSelf->__PVT__Z65_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z65_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u65->__PVT__r_temp))
                                         : vlSelf->__PVT__u65->__PVT__r_temp));
            vlSelf->__PVT__Z75_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z75_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u75->__PVT__r_temp))
                                         : vlSelf->__PVT__u75->__PVT__r_temp));
            vlSelf->__PVT__Z85_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z85_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u85->__PVT__r_temp))
                                         : vlSelf->__PVT__u85->__PVT__r_temp));
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q76 = 0U;
        vlSelf->Q67 = 0U;
        vlSelf->Q58 = 0U;
        vlSelf->Q68 = 0U;
        vlSelf->Q77 = 0U;
        vlSelf->Q86 = 0U;
        vlSelf->Q87 = 0U;
        vlSelf->Q78 = 0U;
        vlSelf->Q88 = 0U;
        vlSelf->__PVT__Z21_temp_1 = 0U;
        vlSelf->__PVT__Z11_temp_1 = 0U;
        vlSelf->__PVT__Z12_temp_1 = 0U;
        vlSelf->__PVT__Z12_temp_1 = 0U;
        vlSelf->__PVT__Z13_temp_1 = 0U;
        vlSelf->__PVT__Z22_temp_1 = 0U;
        vlSelf->__PVT__Z22_temp_1 = 0U;
        vlSelf->__PVT__Z31_temp_1 = 0U;
        vlSelf->__PVT__Z41_temp_1 = 0U;
        vlSelf->__PVT__Z32_temp_1 = 0U;
        vlSelf->__PVT__Z32_temp_1 = 0U;
        vlSelf->__PVT__Z23_temp_1 = 0U;
        vlSelf->__PVT__Z14_temp_1 = 0U;
        vlSelf->__PVT__Z24_temp_1 = 0U;
        vlSelf->__PVT__Z33_temp_1 = 0U;
        vlSelf->__PVT__Z42_temp_1 = 0U;
        vlSelf->__PVT__Z42_temp_1 = 0U;
        vlSelf->__PVT__Z51_temp_1 = 0U;
        vlSelf->__PVT__Z61_temp_1 = 0U;
        vlSelf->__PVT__Z52_temp_1 = 0U;
        vlSelf->__PVT__Z52_temp_1 = 0U;
        vlSelf->__PVT__Z43_temp_1 = 0U;
        vlSelf->__PVT__Z34_temp_1 = 0U;
        vlSelf->__PVT__Z16_temp_1 = 0U;
        vlSelf->__PVT__Z17_temp_1 = 0U;
        vlSelf->__PVT__Z26_temp_1 = 0U;
        vlSelf->__PVT__Z44_temp_1 = 0U;
        vlSelf->__PVT__Z53_temp_1 = 0U;
        vlSelf->__PVT__Z62_temp_1 = 0U;
        vlSelf->__PVT__Z62_temp_1 = 0U;
        vlSelf->__PVT__Z71_temp_1 = 0U;
        vlSelf->__PVT__Z81_temp_1 = 0U;
        vlSelf->__PVT__Z72_temp_1 = 0U;
        vlSelf->__PVT__Z72_temp_1 = 0U;
        vlSelf->__PVT__Z63_temp_1 = 0U;
        vlSelf->__PVT__Z54_temp_1 = 0U;
        vlSelf->__PVT__Z36_temp_1 = 0U;
        vlSelf->__PVT__Z27_temp_1 = 0U;
        vlSelf->__PVT__Z18_temp_1 = 0U;
        vlSelf->__PVT__Z28_temp_1 = 0U;
        vlSelf->__PVT__Z37_temp_1 = 0U;
        vlSelf->__PVT__Z46_temp_1 = 0U;
        vlSelf->__PVT__Z64_temp_1 = 0U;
        vlSelf->__PVT__Z73_temp_1 = 0U;
        vlSelf->__PVT__Z82_temp_1 = 0U;
        vlSelf->__PVT__Z82_temp_1 = 0U;
        vlSelf->__PVT__Z83_temp_1 = 0U;
        vlSelf->__PVT__Z74_temp_1 = 0U;
        vlSelf->__PVT__Z56_temp_1 = 0U;
        vlSelf->__PVT__Z47_temp_1 = 0U;
        vlSelf->__PVT__Z38_temp_1 = 0U;
        vlSelf->__PVT__Z48_temp_1 = 0U;
        vlSelf->__PVT__Z57_temp_1 = 0U;
        vlSelf->__PVT__Z66_temp_1 = 0U;
        vlSelf->__PVT__Z84_temp_1 = 0U;
        vlSelf->__PVT__Z76_temp_1 = 0U;
        vlSelf->__PVT__Z67_temp_1 = 0U;
        vlSelf->__PVT__Z58_temp_1 = 0U;
        vlSelf->__PVT__Z68_temp_1 = 0U;
        vlSelf->__PVT__Z77_temp_1 = 0U;
        vlSelf->__PVT__Z86_temp_1 = 0U;
        vlSelf->__PVT__Z87_temp_1 = 0U;
        vlSelf->__PVT__Z78_temp_1 = 0U;
        vlSelf->__PVT__Z88_temp_1 = 0U;
        vlSelf->__PVT__Z21_temp = 0U;
        vlSelf->__PVT__Z11_temp = 0U;
        vlSelf->__PVT__Z12_temp = 0U;
        vlSelf->__PVT__Z12_temp = 0U;
        vlSelf->__PVT__Z13_temp = 0U;
        vlSelf->__PVT__Z22_temp = 0U;
        vlSelf->__PVT__Z22_temp = 0U;
        vlSelf->__PVT__Z31_temp = 0U;
        vlSelf->__PVT__Z41_temp = 0U;
        vlSelf->__PVT__Z32_temp = 0U;
        vlSelf->__PVT__Z32_temp = 0U;
        vlSelf->__PVT__Z23_temp = 0U;
        vlSelf->__PVT__Z14_temp = 0U;
        vlSelf->__PVT__Z24_temp = 0U;
        vlSelf->__PVT__Z33_temp = 0U;
        vlSelf->__PVT__Z42_temp = 0U;
        vlSelf->__PVT__Z42_temp = 0U;
        vlSelf->__PVT__Z51_temp = 0U;
        vlSelf->__PVT__Z61_temp = 0U;
        vlSelf->__PVT__Z52_temp = 0U;
        vlSelf->__PVT__Z52_temp = 0U;
        vlSelf->__PVT__Z43_temp = 0U;
        vlSelf->__PVT__Z34_temp = 0U;
        vlSelf->__PVT__Z16_temp = 0U;
        vlSelf->__PVT__Z17_temp = 0U;
        vlSelf->__PVT__Z26_temp = 0U;
        vlSelf->__PVT__Z44_temp = 0U;
        vlSelf->__PVT__Z53_temp = 0U;
        vlSelf->__PVT__Z62_temp = 0U;
        vlSelf->__PVT__Z62_temp = 0U;
        vlSelf->__PVT__Z71_temp = 0U;
        vlSelf->__PVT__Z81_temp = 0U;
        vlSelf->__PVT__Z72_temp = 0U;
        vlSelf->__PVT__Z72_temp = 0U;
        vlSelf->__PVT__Z63_temp = 0U;
        vlSelf->__PVT__Z54_temp = 0U;
        vlSelf->__PVT__Z36_temp = 0U;
        vlSelf->__PVT__Z27_temp = 0U;
        vlSelf->__PVT__Z18_temp = 0U;
        vlSelf->__PVT__Z28_temp = 0U;
        vlSelf->__PVT__Z37_temp = 0U;
        vlSelf->__PVT__Z46_temp = 0U;
        vlSelf->__PVT__Z64_temp = 0U;
        vlSelf->__PVT__Z73_temp = 0U;
        vlSelf->__PVT__Z82_temp = 0U;
        vlSelf->__PVT__Z82_temp = 0U;
        vlSelf->__PVT__Z83_temp = 0U;
        vlSelf->__PVT__Z74_temp = 0U;
        vlSelf->__PVT__Z56_temp = 0U;
        vlSelf->__PVT__Z47_temp = 0U;
        vlSelf->__PVT__Z38_temp = 0U;
        vlSelf->__PVT__Z48_temp = 0U;
        vlSelf->__PVT__Z57_temp = 0U;
        vlSelf->__PVT__Z66_temp = 0U;
        vlSelf->__PVT__Z84_temp = 0U;
        vlSelf->__PVT__Z76_temp = 0U;
        vlSelf->__PVT__Z67_temp = 0U;
        vlSelf->__PVT__Z58_temp = 0U;
        vlSelf->__PVT__Z68_temp = 0U;
        vlSelf->__PVT__Z77_temp = 0U;
        vlSelf->__PVT__Z86_temp = 0U;
        vlSelf->__PVT__Z87_temp = 0U;
        vlSelf->__PVT__Z78_temp = 0U;
        vlSelf->__PVT__Z88_temp = 0U;
        vlSelf->__PVT__Z21_int = 0U;
        vlSelf->__PVT__Z11_int = 0U;
        vlSelf->__PVT__Z12_int = 0U;
        vlSelf->__PVT__Z13_int = 0U;
        vlSelf->__PVT__Z22_int = 0U;
        vlSelf->__PVT__Z31_int = 0U;
        vlSelf->__PVT__Z41_int = 0U;
        vlSelf->__PVT__Z32_int = 0U;
        vlSelf->__PVT__Z23_int = 0U;
        vlSelf->__PVT__Z14_int = 0U;
        vlSelf->__PVT__Z15_int = 0U;
        vlSelf->__PVT__Z24_int = 0U;
        vlSelf->__PVT__Z33_int = 0U;
        vlSelf->__PVT__Z42_int = 0U;
        vlSelf->__PVT__Z51_int = 0U;
        vlSelf->__PVT__Z61_int = 0U;
        vlSelf->__PVT__Z52_int = 0U;
        vlSelf->__PVT__Z43_int = 0U;
        vlSelf->__PVT__Z34_int = 0U;
        vlSelf->__PVT__Z25_int = 0U;
        vlSelf->__PVT__Z16_int = 0U;
        vlSelf->__PVT__Z17_int = 0U;
        vlSelf->__PVT__Z26_int = 0U;
        vlSelf->__PVT__Z35_int = 0U;
        vlSelf->__PVT__Z44_int = 0U;
        vlSelf->__PVT__Z53_int = 0U;
        vlSelf->__PVT__Z62_int = 0U;
        vlSelf->__PVT__Z71_int = 0U;
        vlSelf->__PVT__Z81_int = 0U;
        vlSelf->__PVT__Z72_int = 0U;
        vlSelf->__PVT__Z63_int = 0U;
        vlSelf->__PVT__Z54_int = 0U;
        vlSelf->__PVT__Z45_int = 0U;
        vlSelf->__PVT__Z36_int = 0U;
        vlSelf->__PVT__Z27_int = 0U;
        vlSelf->__PVT__Z18_int = 0U;
        vlSelf->__PVT__Z28_int = 0U;
        vlSelf->__PVT__Z37_int = 0U;
        vlSelf->__PVT__Z46_int = 0U;
        vlSelf->__PVT__Z55_int = 0U;
        vlSelf->__PVT__Z64_int = 0U;
        vlSelf->__PVT__Z73_int = 0U;
        vlSelf->__PVT__Z82_int = 0U;
        vlSelf->__PVT__Z83_int = 0U;
        vlSelf->__PVT__Z74_int = 0U;
        vlSelf->__PVT__Z65_int = 0U;
        vlSelf->__PVT__Z56_int = 0U;
        vlSelf->__PVT__Z47_int = 0U;
        vlSelf->__PVT__Z38_int = 0U;
        vlSelf->__PVT__Z48_int = 0U;
        vlSelf->__PVT__Z57_int = 0U;
        vlSelf->__PVT__Z66_int = 0U;
        vlSelf->__PVT__Z75_int = 0U;
        vlSelf->__PVT__Z84_int = 0U;
        vlSelf->__PVT__Z85_int = 0U;
        vlSelf->__PVT__Z76_int = 0U;
        vlSelf->__PVT__Z67_int = 0U;
        vlSelf->__PVT__Z58_int = 0U;
        vlSelf->__PVT__Z68_int = 0U;
        vlSelf->__PVT__Z77_int = 0U;
        vlSelf->__PVT__Z86_int = 0U;
        vlSelf->__PVT__Z87_int = 0U;
        vlSelf->__PVT__Z78_int = 0U;
        vlSelf->__PVT__Z88_int = 0U;
    } else {
        if (vlSelf->__PVT__enable_3) {
            vlSelf->Q76 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z76_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z76_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z76_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q67 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z67_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z67_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z67_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q58 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z58_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z58_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z58_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q68 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z68_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z68_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z68_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q77 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z77_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z77_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z77_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q86 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z86_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z86_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z86_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q87 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z87_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z87_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z87_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q78 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z78_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z78_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z78_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q88 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z88_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z88_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z88_temp_1 
                                                   >> 0xcU))));
        }
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z21_temp_1 = vlSelf->__PVT__Z21_temp;
            vlSelf->__PVT__Z11_temp_1 = vlSelf->__PVT__Z11_temp;
            vlSelf->__PVT__Z12_temp_1 = vlSelf->__PVT__Z12_temp;
            vlSelf->__PVT__Z13_temp_1 = vlSelf->__PVT__Z13_temp;
            vlSelf->__PVT__Z22_temp_1 = vlSelf->__PVT__Z22_temp;
            vlSelf->__PVT__Z31_temp_1 = vlSelf->__PVT__Z31_temp;
            vlSelf->__PVT__Z41_temp_1 = vlSelf->__PVT__Z41_temp;
            vlSelf->__PVT__Z32_temp_1 = vlSelf->__PVT__Z32_temp;
            vlSelf->__PVT__Z23_temp_1 = vlSelf->__PVT__Z23_temp;
            vlSelf->__PVT__Z14_temp_1 = vlSelf->__PVT__Z14_temp;
            vlSelf->__PVT__Z24_temp_1 = vlSelf->__PVT__Z24_temp;
            vlSelf->__PVT__Z33_temp_1 = vlSelf->__PVT__Z33_temp;
            vlSelf->__PVT__Z42_temp_1 = vlSelf->__PVT__Z42_temp;
            vlSelf->__PVT__Z51_temp_1 = vlSelf->__PVT__Z51_temp;
            vlSelf->__PVT__Z61_temp_1 = vlSelf->__PVT__Z61_temp;
            vlSelf->__PVT__Z52_temp_1 = vlSelf->__PVT__Z52_temp;
            vlSelf->__PVT__Z43_temp_1 = vlSelf->__PVT__Z43_temp;
            vlSelf->__PVT__Z34_temp_1 = vlSelf->__PVT__Z34_temp;
            vlSelf->__PVT__Z16_temp_1 = vlSelf->__PVT__Z16_temp;
            vlSelf->__PVT__Z17_temp_1 = vlSelf->__PVT__Z17_temp;
            vlSelf->__PVT__Z26_temp_1 = vlSelf->__PVT__Z26_temp;
            vlSelf->__PVT__Z44_temp_1 = vlSelf->__PVT__Z44_temp;
            vlSelf->__PVT__Z53_temp_1 = vlSelf->__PVT__Z53_temp;
            vlSelf->__PVT__Z62_temp_1 = vlSelf->__PVT__Z62_temp;
            vlSelf->__PVT__Z71_temp_1 = vlSelf->__PVT__Z71_temp;
            vlSelf->__PVT__Z81_temp_1 = vlSelf->__PVT__Z81_temp;
            vlSelf->__PVT__Z72_temp_1 = vlSelf->__PVT__Z72_temp;
            vlSelf->__PVT__Z63_temp_1 = vlSelf->__PVT__Z63_temp;
            vlSelf->__PVT__Z54_temp_1 = vlSelf->__PVT__Z54_temp;
            vlSelf->__PVT__Z36_temp_1 = vlSelf->__PVT__Z36_temp;
            vlSelf->__PVT__Z27_temp_1 = vlSelf->__PVT__Z27_temp;
            vlSelf->__PVT__Z18_temp_1 = vlSelf->__PVT__Z18_temp;
            vlSelf->__PVT__Z28_temp_1 = vlSelf->__PVT__Z28_temp;
            vlSelf->__PVT__Z37_temp_1 = vlSelf->__PVT__Z37_temp;
            vlSelf->__PVT__Z46_temp_1 = vlSelf->__PVT__Z46_temp;
            vlSelf->__PVT__Z64_temp_1 = vlSelf->__PVT__Z64_temp;
            vlSelf->__PVT__Z73_temp_1 = vlSelf->__PVT__Z73_temp;
            vlSelf->__PVT__Z82_temp_1 = vlSelf->__PVT__Z82_temp;
            vlSelf->__PVT__Z83_temp_1 = vlSelf->__PVT__Z83_temp;
            vlSelf->__PVT__Z74_temp_1 = vlSelf->__PVT__Z74_temp;
            vlSelf->__PVT__Z56_temp_1 = vlSelf->__PVT__Z56_temp;
            vlSelf->__PVT__Z47_temp_1 = vlSelf->__PVT__Z47_temp;
            vlSelf->__PVT__Z38_temp_1 = vlSelf->__PVT__Z38_temp;
            vlSelf->__PVT__Z48_temp_1 = vlSelf->__PVT__Z48_temp;
            vlSelf->__PVT__Z57_temp_1 = vlSelf->__PVT__Z57_temp;
            vlSelf->__PVT__Z66_temp_1 = vlSelf->__PVT__Z66_temp;
            vlSelf->__PVT__Z84_temp_1 = vlSelf->__PVT__Z84_temp;
            vlSelf->__PVT__Z76_temp_1 = vlSelf->__PVT__Z76_temp;
            vlSelf->__PVT__Z67_temp_1 = vlSelf->__PVT__Z67_temp;
            vlSelf->__PVT__Z58_temp_1 = vlSelf->__PVT__Z58_temp;
            vlSelf->__PVT__Z68_temp_1 = vlSelf->__PVT__Z68_temp;
            vlSelf->__PVT__Z77_temp_1 = vlSelf->__PVT__Z77_temp;
            vlSelf->__PVT__Z86_temp_1 = vlSelf->__PVT__Z86_temp;
            vlSelf->__PVT__Z87_temp_1 = vlSelf->__PVT__Z87_temp;
            vlSelf->__PVT__Z78_temp_1 = vlSelf->__PVT__Z78_temp;
            vlSelf->__PVT__Z88_temp_1 = vlSelf->__PVT__Z88_temp;
        }
        if (vlSelf->__PVT__enable_1) {
            vlSelf->__PVT__Z21_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z21_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u21->__PVT__r_temp))
                                         : vlSelf->__PVT__u21->__PVT__r_temp));
            vlSelf->__PVT__Z11_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z11_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u11->__PVT__r_temp))
                                         : vlSelf->__PVT__u11->__PVT__r_temp));
            vlSelf->__PVT__Z12_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z12_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u12->__PVT__r_temp))
                                         : vlSelf->__PVT__u12->__PVT__r_temp));
            vlSelf->__PVT__Z13_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z13_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u13->__PVT__r_temp))
                                         : vlSelf->__PVT__u13->__PVT__r_temp));
            vlSelf->__PVT__Z22_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z22_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u22->__PVT__r_temp))
                                         : vlSelf->__PVT__u22->__PVT__r_temp));
            vlSelf->__PVT__Z31_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z31_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u31->__PVT__r_temp))
                                         : vlSelf->__PVT__u31->__PVT__r_temp));
            vlSelf->__PVT__Z41_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z41_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u41->__PVT__r_temp))
                                         : vlSelf->__PVT__u41->__PVT__r_temp));
            vlSelf->__PVT__Z32_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z32_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u32->__PVT__r_temp))
                                         : vlSelf->__PVT__u32->__PVT__r_temp));
            vlSelf->__PVT__Z23_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z23_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u23->__PVT__r_temp))
                                         : vlSelf->__PVT__u23->__PVT__r_temp));
            vlSelf->__PVT__Z14_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z14_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u14->__PVT__r_temp))
                                         : vlSelf->__PVT__u14->__PVT__r_temp));
            vlSelf->__PVT__Z24_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z24_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u24->__PVT__r_temp))
                                         : vlSelf->__PVT__u24->__PVT__r_temp));
            vlSelf->__PVT__Z33_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z33_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u33->__PVT__r_temp))
                                         : vlSelf->__PVT__u33->__PVT__r_temp));
            vlSelf->__PVT__Z42_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z42_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u42->__PVT__r_temp))
                                         : vlSelf->__PVT__u42->__PVT__r_temp));
            vlSelf->__PVT__Z51_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z51_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u51->__PVT__r_temp))
                                         : vlSelf->__PVT__u51->__PVT__r_temp));
            vlSelf->__PVT__Z61_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z61_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u61->__PVT__r_temp))
                                         : vlSelf->__PVT__u61->__PVT__r_temp));
            vlSelf->__PVT__Z52_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z52_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u52->__PVT__r_temp))
                                         : vlSelf->__PVT__u52->__PVT__r_temp));
            vlSelf->__PVT__Z43_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z43_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u43->__PVT__r_temp))
                                         : vlSelf->__PVT__u43->__PVT__r_temp));
            vlSelf->__PVT__Z34_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z34_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u34->__PVT__r_temp))
                                         : vlSelf->__PVT__u34->__PVT__r_temp));
            vlSelf->__PVT__Z16_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z16_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u16->__PVT__r_temp))
                                         : vlSelf->__PVT__u16->__PVT__r_temp));
            vlSelf->__PVT__Z17_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z17_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u17->__PVT__r_temp))
                                         : vlSelf->__PVT__u17->__PVT__r_temp));
            vlSelf->__PVT__Z26_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z26_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u26->__PVT__r_temp))
                                         : vlSelf->__PVT__u26->__PVT__r_temp));
            vlSelf->__PVT__Z44_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z44_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u44->__PVT__r_temp))
                                         : vlSelf->__PVT__u44->__PVT__r_temp));
            vlSelf->__PVT__Z53_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z53_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u53->__PVT__r_temp))
                                         : vlSelf->__PVT__u53->__PVT__r_temp));
            vlSelf->__PVT__Z62_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z62_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u62->__PVT__r_temp))
                                         : vlSelf->__PVT__u62->__PVT__r_temp));
            vlSelf->__PVT__Z71_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z71_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u71->__PVT__r_temp))
                                         : vlSelf->__PVT__u71->__PVT__r_temp));
            vlSelf->__PVT__Z81_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z81_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u81->__PVT__r_temp))
                                         : vlSelf->__PVT__u81->__PVT__r_temp));
            vlSelf->__PVT__Z72_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z72_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u72->__PVT__r_temp))
                                         : vlSelf->__PVT__u72->__PVT__r_temp));
            vlSelf->__PVT__Z63_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z63_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u63->__PVT__r_temp))
                                         : vlSelf->__PVT__u63->__PVT__r_temp));
            vlSelf->__PVT__Z54_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z54_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u54->__PVT__r_temp))
                                         : vlSelf->__PVT__u54->__PVT__r_temp));
            vlSelf->__PVT__Z36_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z36_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u36->__PVT__r_temp))
                                         : vlSelf->__PVT__u36->__PVT__r_temp));
            vlSelf->__PVT__Z27_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z27_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u27->__PVT__r_temp))
                                         : vlSelf->__PVT__u27->__PVT__r_temp));
            vlSelf->__PVT__Z18_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z18_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u18->__PVT__r_temp))
                                         : vlSelf->__PVT__u18->__PVT__r_temp));
            vlSelf->__PVT__Z28_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z28_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u28->__PVT__r_temp))
                                         : vlSelf->__PVT__u28->__PVT__r_temp));
            vlSelf->__PVT__Z37_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z37_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u37->__PVT__r_temp))
                                         : vlSelf->__PVT__u37->__PVT__r_temp));
            vlSelf->__PVT__Z46_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z46_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u46->__PVT__r_temp))
                                         : vlSelf->__PVT__u46->__PVT__r_temp));
            vlSelf->__PVT__Z64_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z64_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u64->__PVT__r_temp))
                                         : vlSelf->__PVT__u64->__PVT__r_temp));
            vlSelf->__PVT__Z73_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z73_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u73->__PVT__r_temp))
                                         : vlSelf->__PVT__u73->__PVT__r_temp));
            vlSelf->__PVT__Z82_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z82_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u82->__PVT__r_temp))
                                         : vlSelf->__PVT__u82->__PVT__r_temp));
            vlSelf->__PVT__Z83_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z83_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u83->__PVT__r_temp))
                                         : vlSelf->__PVT__u83->__PVT__r_temp));
            vlSelf->__PVT__Z74_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z74_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u74->__PVT__r_temp))
                                         : vlSelf->__PVT__u74->__PVT__r_temp));
            vlSelf->__PVT__Z56_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z56_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u56->__PVT__r_temp))
                                         : vlSelf->__PVT__u56->__PVT__r_temp));
            vlSelf->__PVT__Z47_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z47_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u47->__PVT__r_temp))
                                         : vlSelf->__PVT__u47->__PVT__r_temp));
            vlSelf->__PVT__Z38_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z38_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u38->__PVT__r_temp))
                                         : vlSelf->__PVT__u38->__PVT__r_temp));
            vlSelf->__PVT__Z48_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z48_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u48->__PVT__r_temp))
                                         : vlSelf->__PVT__u48->__PVT__r_temp));
            vlSelf->__PVT__Z57_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z57_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u57->__PVT__r_temp))
                                         : vlSelf->__PVT__u57->__PVT__r_temp));
            vlSelf->__PVT__Z66_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z66_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u66->__PVT__r_temp))
                                         : vlSelf->__PVT__u66->__PVT__r_temp));
            vlSelf->__PVT__Z84_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z84_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u84->__PVT__r_temp))
                                         : vlSelf->__PVT__u84->__PVT__r_temp));
            vlSelf->__PVT__Z76_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z76_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u76->__PVT__r_temp))
                                         : vlSelf->__PVT__u76->__PVT__r_temp));
            vlSelf->__PVT__Z67_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z67_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u67->__PVT__r_temp))
                                         : vlSelf->__PVT__u67->__PVT__r_temp));
            vlSelf->__PVT__Z58_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z58_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u58->__PVT__r_temp))
                                         : vlSelf->__PVT__u58->__PVT__r_temp));
            vlSelf->__PVT__Z68_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z68_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u68->__PVT__r_temp))
                                         : vlSelf->__PVT__u68->__PVT__r_temp));
            vlSelf->__PVT__Z77_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z77_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u77->__PVT__r_temp))
                                         : vlSelf->__PVT__u77->__PVT__r_temp));
            vlSelf->__PVT__Z86_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z86_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u86->__PVT__r_temp))
                                         : vlSelf->__PVT__u86->__PVT__r_temp));
            vlSelf->__PVT__Z87_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z87_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u87->__PVT__r_temp))
                                         : vlSelf->__PVT__u87->__PVT__r_temp));
            vlSelf->__PVT__Z78_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z78_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u78->__PVT__r_temp))
                                         : vlSelf->__PVT__u78->__PVT__r_temp));
            vlSelf->__PVT__Z88_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z88_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u88->__PVT__r_temp))
                                         : vlSelf->__PVT__u88->__PVT__r_temp));
        }
        if (vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.output_enable) {
            vlSelf->__PVT__Z21_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z21_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z21_final));
            vlSelf->__PVT__Z11_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z11_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z11_final));
            vlSelf->__PVT__Z12_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z12_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z12_final));
            vlSelf->__PVT__Z13_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z13_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z13_final));
            vlSelf->__PVT__Z22_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z22_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z22_final));
            vlSelf->__PVT__Z31_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z31_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z31_final));
            vlSelf->__PVT__Z41_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z41_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z41_final));
            vlSelf->__PVT__Z32_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z32_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z32_final));
            vlSelf->__PVT__Z23_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z23_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z23_final));
            vlSelf->__PVT__Z14_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z14_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z14_final));
            vlSelf->__PVT__Z15_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z15_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z15_final));
            vlSelf->__PVT__Z24_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z24_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z24_final));
            vlSelf->__PVT__Z33_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z33_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z33_final));
            vlSelf->__PVT__Z42_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z42_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z42_final));
            vlSelf->__PVT__Z51_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z51_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z51_final));
            vlSelf->__PVT__Z61_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z61_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z61_final));
            vlSelf->__PVT__Z52_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z52_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z52_final));
            vlSelf->__PVT__Z43_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z43_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z43_final));
            vlSelf->__PVT__Z34_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z34_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z34_final));
            vlSelf->__PVT__Z25_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z25_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z25_final));
            vlSelf->__PVT__Z16_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z16_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z16_final));
            vlSelf->__PVT__Z17_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z17_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z17_final));
            vlSelf->__PVT__Z26_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z26_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z26_final));
            vlSelf->__PVT__Z35_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z35_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z35_final));
            vlSelf->__PVT__Z44_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z44_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z44_final));
            vlSelf->__PVT__Z53_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z53_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z53_final));
            vlSelf->__PVT__Z62_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z62_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z62_final));
            vlSelf->__PVT__Z71_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z71_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z71_final));
            vlSelf->__PVT__Z81_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z81_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z81_final));
            vlSelf->__PVT__Z72_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z72_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z72_final));
            vlSelf->__PVT__Z63_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z63_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z63_final));
            vlSelf->__PVT__Z54_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z54_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z54_final));
            vlSelf->__PVT__Z45_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z45_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z45_final));
            vlSelf->__PVT__Z36_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z36_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z36_final));
            vlSelf->__PVT__Z27_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z27_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z27_final));
            vlSelf->__PVT__Z18_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z18_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z18_final));
            vlSelf->__PVT__Z28_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z28_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z28_final));
            vlSelf->__PVT__Z37_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z37_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z37_final));
            vlSelf->__PVT__Z46_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z46_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z46_final));
            vlSelf->__PVT__Z55_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z55_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z55_final));
            vlSelf->__PVT__Z64_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z64_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z64_final));
            vlSelf->__PVT__Z73_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z73_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z73_final));
            vlSelf->__PVT__Z82_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z82_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z82_final));
            vlSelf->__PVT__Z83_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z83_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z83_final));
            vlSelf->__PVT__Z74_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z74_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z74_final));
            vlSelf->__PVT__Z65_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z65_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z65_final));
            vlSelf->__PVT__Z56_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z56_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z56_final));
            vlSelf->__PVT__Z47_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z47_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z47_final));
            vlSelf->__PVT__Z38_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z38_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z38_final));
            vlSelf->__PVT__Z48_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z48_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z48_final));
            vlSelf->__PVT__Z57_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z57_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z57_final));
            vlSelf->__PVT__Z66_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z66_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z66_final));
            vlSelf->__PVT__Z75_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z75_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z75_final));
            vlSelf->__PVT__Z84_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z84_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z84_final));
            vlSelf->__PVT__Z85_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z85_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z85_final));
            vlSelf->__PVT__Z76_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z76_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z76_final));
            vlSelf->__PVT__Z67_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z67_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z67_final));
            vlSelf->__PVT__Z58_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z58_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z58_final));
            vlSelf->__PVT__Z68_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z68_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z68_final));
            vlSelf->__PVT__Z77_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z77_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z77_final));
            vlSelf->__PVT__Z86_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z86_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z86_final));
            vlSelf->__PVT__Z87_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z87_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z87_final));
            vlSelf->__PVT__Z78_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z78_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z78_final));
            vlSelf->__PVT__Z88_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z88_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.Z88_final));
        }
    }
    vlSelf->__PVT__enable_3 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSelf->__PVT__enable_2));
    vlSelf->__PVT__enable_2 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSelf->__PVT__enable_1));
    vlSelf->__PVT__enable_1 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.output_enable));
}

VL_INLINE_OPT void sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2__0(sub_quantizer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_9_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2__0\n"); );
    // Body
    vlSelf->out_enable = ((~ (IData)(vlSymsp->TOP.rst)) 
                          & (IData)(vlSelf->__PVT__enable_3));
    if (vlSymsp->TOP.rst) {
        vlSelf->Q21 = 0U;
        vlSelf->Q11 = 0U;
        vlSelf->Q12 = 0U;
        vlSelf->Q13 = 0U;
        vlSelf->Q22 = 0U;
        vlSelf->Q31 = 0U;
        vlSelf->Q41 = 0U;
        vlSelf->Q32 = 0U;
        vlSelf->Q23 = 0U;
        vlSelf->Q14 = 0U;
        vlSelf->Q15 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q21 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z21_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z21_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z21_temp_1 
                                               >> 0xcU))));
        vlSelf->Q11 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z11_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z11_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z11_temp_1 
                                               >> 0xcU))));
        vlSelf->Q12 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z12_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z12_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z12_temp_1 
                                               >> 0xcU))));
        vlSelf->Q13 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z13_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z13_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z13_temp_1 
                                               >> 0xcU))));
        vlSelf->Q22 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z22_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z22_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z22_temp_1 
                                               >> 0xcU))));
        vlSelf->Q31 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z31_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z31_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z31_temp_1 
                                               >> 0xcU))));
        vlSelf->Q41 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z41_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z41_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z41_temp_1 
                                               >> 0xcU))));
        vlSelf->Q32 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z32_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z32_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z32_temp_1 
                                               >> 0xcU))));
        vlSelf->Q23 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z23_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z23_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z23_temp_1 
                                               >> 0xcU))));
        vlSelf->Q14 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z14_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z14_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z14_temp_1 
                                               >> 0xcU))));
        vlSelf->Q15 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z15_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z15_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z15_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z15_temp_1 = vlSelf->__PVT__Z15_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q24 = 0U;
        vlSelf->Q33 = 0U;
        vlSelf->Q42 = 0U;
        vlSelf->Q51 = 0U;
        vlSelf->Q61 = 0U;
        vlSelf->Q52 = 0U;
        vlSelf->Q43 = 0U;
        vlSelf->Q34 = 0U;
        vlSelf->Q25 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q24 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z24_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z24_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z24_temp_1 
                                               >> 0xcU))));
        vlSelf->Q33 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z33_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z33_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z33_temp_1 
                                               >> 0xcU))));
        vlSelf->Q42 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z42_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z42_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z42_temp_1 
                                               >> 0xcU))));
        vlSelf->Q51 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z51_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z51_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z51_temp_1 
                                               >> 0xcU))));
        vlSelf->Q61 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z61_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z61_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z61_temp_1 
                                               >> 0xcU))));
        vlSelf->Q52 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z52_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z52_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z52_temp_1 
                                               >> 0xcU))));
        vlSelf->Q43 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z43_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z43_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z43_temp_1 
                                               >> 0xcU))));
        vlSelf->Q34 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z34_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z34_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z34_temp_1 
                                               >> 0xcU))));
        vlSelf->Q25 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z25_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z25_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z25_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z25_temp_1 = vlSelf->__PVT__Z25_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q16 = 0U;
        vlSelf->Q17 = 0U;
        vlSelf->Q26 = 0U;
        vlSelf->Q35 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q16 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z16_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z16_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z16_temp_1 
                                               >> 0xcU))));
        vlSelf->Q17 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z17_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z17_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z17_temp_1 
                                               >> 0xcU))));
        vlSelf->Q26 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z26_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z26_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z26_temp_1 
                                               >> 0xcU))));
        vlSelf->Q35 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z35_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z35_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z35_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z35_temp_1 = vlSelf->__PVT__Z35_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q44 = 0U;
        vlSelf->Q53 = 0U;
        vlSelf->Q62 = 0U;
        vlSelf->Q71 = 0U;
        vlSelf->Q81 = 0U;
        vlSelf->Q72 = 0U;
        vlSelf->Q63 = 0U;
        vlSelf->Q54 = 0U;
        vlSelf->Q45 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q44 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z44_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z44_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z44_temp_1 
                                               >> 0xcU))));
        vlSelf->Q53 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z53_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z53_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z53_temp_1 
                                               >> 0xcU))));
        vlSelf->Q62 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z62_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z62_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z62_temp_1 
                                               >> 0xcU))));
        vlSelf->Q71 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z71_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z71_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z71_temp_1 
                                               >> 0xcU))));
        vlSelf->Q81 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z81_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z81_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z81_temp_1 
                                               >> 0xcU))));
        vlSelf->Q72 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z72_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z72_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z72_temp_1 
                                               >> 0xcU))));
        vlSelf->Q63 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z63_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z63_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z63_temp_1 
                                               >> 0xcU))));
        vlSelf->Q54 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z54_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z54_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z54_temp_1 
                                               >> 0xcU))));
        vlSelf->Q45 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z45_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z45_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z45_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z45_temp_1 = vlSelf->__PVT__Z45_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q36 = 0U;
        vlSelf->Q27 = 0U;
        vlSelf->Q18 = 0U;
        vlSelf->Q28 = 0U;
        vlSelf->Q37 = 0U;
        vlSelf->Q46 = 0U;
        vlSelf->Q55 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q36 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z36_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z36_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z36_temp_1 
                                               >> 0xcU))));
        vlSelf->Q27 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z27_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z27_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z27_temp_1 
                                               >> 0xcU))));
        vlSelf->Q18 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z18_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z18_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z18_temp_1 
                                               >> 0xcU))));
        vlSelf->Q28 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z28_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z28_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z28_temp_1 
                                               >> 0xcU))));
        vlSelf->Q37 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z37_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z37_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z37_temp_1 
                                               >> 0xcU))));
        vlSelf->Q46 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z46_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z46_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z46_temp_1 
                                               >> 0xcU))));
        vlSelf->Q55 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z55_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z55_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z55_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z55_temp_1 = vlSelf->__PVT__Z55_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q64 = 0U;
        vlSelf->Q73 = 0U;
        vlSelf->Q82 = 0U;
        vlSelf->Q83 = 0U;
        vlSelf->Q74 = 0U;
        vlSelf->Q65 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q64 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z64_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z64_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z64_temp_1 
                                               >> 0xcU))));
        vlSelf->Q73 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z73_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z73_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z73_temp_1 
                                               >> 0xcU))));
        vlSelf->Q82 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z82_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z82_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z82_temp_1 
                                               >> 0xcU))));
        vlSelf->Q83 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z83_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z83_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z83_temp_1 
                                               >> 0xcU))));
        vlSelf->Q74 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z74_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z74_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z74_temp_1 
                                               >> 0xcU))));
        vlSelf->Q65 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z65_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z65_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z65_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z65_temp_1 = vlSelf->__PVT__Z65_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q56 = 0U;
        vlSelf->Q47 = 0U;
        vlSelf->Q38 = 0U;
        vlSelf->Q48 = 0U;
        vlSelf->Q57 = 0U;
        vlSelf->Q66 = 0U;
        vlSelf->Q75 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q56 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z56_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z56_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z56_temp_1 
                                               >> 0xcU))));
        vlSelf->Q47 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z47_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z47_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z47_temp_1 
                                               >> 0xcU))));
        vlSelf->Q38 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z38_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z38_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z38_temp_1 
                                               >> 0xcU))));
        vlSelf->Q48 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z48_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z48_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z48_temp_1 
                                               >> 0xcU))));
        vlSelf->Q57 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z57_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z57_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z57_temp_1 
                                               >> 0xcU))));
        vlSelf->Q66 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z66_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z66_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z66_temp_1 
                                               >> 0xcU))));
        vlSelf->Q75 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z75_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z75_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z75_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z75_temp_1 = vlSelf->__PVT__Z75_temp;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q84 = 0U;
        vlSelf->Q85 = 0U;
    } else if (vlSelf->__PVT__enable_3) {
        vlSelf->Q84 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z84_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z84_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z84_temp_1 
                                               >> 0xcU))));
        vlSelf->Q85 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z85_temp_1)
                                  ? ((IData)(1U) + 
                                     (0x7ffU & (vlSelf->__PVT__Z85_temp_1 
                                                >> 0xcU)))
                                  : (0x7ffU & (vlSelf->__PVT__Z85_temp_1 
                                               >> 0xcU))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z85_temp_1 = vlSelf->__PVT__Z85_temp;
        }
        if (vlSelf->__PVT__enable_1) {
            vlSelf->__PVT__Z15_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z15_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u15->__PVT__r_temp))
                                         : vlSelf->__PVT__u15->__PVT__r_temp));
            vlSelf->__PVT__Z25_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z25_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u25->__PVT__r_temp))
                                         : vlSelf->__PVT__u25->__PVT__r_temp));
            vlSelf->__PVT__Z35_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z35_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u35->__PVT__r_temp))
                                         : vlSelf->__PVT__u35->__PVT__r_temp));
            vlSelf->__PVT__Z45_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z45_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u45->__PVT__r_temp))
                                         : vlSelf->__PVT__u45->__PVT__r_temp));
            vlSelf->__PVT__Z55_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z55_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u55->__PVT__r_temp))
                                         : vlSelf->__PVT__u55->__PVT__r_temp));
            vlSelf->__PVT__Z65_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z65_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u65->__PVT__r_temp))
                                         : vlSelf->__PVT__u65->__PVT__r_temp));
            vlSelf->__PVT__Z75_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z75_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u75->__PVT__r_temp))
                                         : vlSelf->__PVT__u75->__PVT__r_temp));
            vlSelf->__PVT__Z85_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z85_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u85->__PVT__r_temp))
                                         : vlSelf->__PVT__u85->__PVT__r_temp));
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->Q76 = 0U;
        vlSelf->Q67 = 0U;
        vlSelf->Q58 = 0U;
        vlSelf->Q68 = 0U;
        vlSelf->Q77 = 0U;
        vlSelf->Q86 = 0U;
        vlSelf->Q87 = 0U;
        vlSelf->Q78 = 0U;
        vlSelf->Q88 = 0U;
        vlSelf->__PVT__Z21_temp_1 = 0U;
        vlSelf->__PVT__Z11_temp_1 = 0U;
        vlSelf->__PVT__Z12_temp_1 = 0U;
        vlSelf->__PVT__Z12_temp_1 = 0U;
        vlSelf->__PVT__Z13_temp_1 = 0U;
        vlSelf->__PVT__Z22_temp_1 = 0U;
        vlSelf->__PVT__Z22_temp_1 = 0U;
        vlSelf->__PVT__Z31_temp_1 = 0U;
        vlSelf->__PVT__Z41_temp_1 = 0U;
        vlSelf->__PVT__Z32_temp_1 = 0U;
        vlSelf->__PVT__Z32_temp_1 = 0U;
        vlSelf->__PVT__Z23_temp_1 = 0U;
        vlSelf->__PVT__Z14_temp_1 = 0U;
        vlSelf->__PVT__Z24_temp_1 = 0U;
        vlSelf->__PVT__Z33_temp_1 = 0U;
        vlSelf->__PVT__Z42_temp_1 = 0U;
        vlSelf->__PVT__Z42_temp_1 = 0U;
        vlSelf->__PVT__Z51_temp_1 = 0U;
        vlSelf->__PVT__Z61_temp_1 = 0U;
        vlSelf->__PVT__Z52_temp_1 = 0U;
        vlSelf->__PVT__Z52_temp_1 = 0U;
        vlSelf->__PVT__Z43_temp_1 = 0U;
        vlSelf->__PVT__Z34_temp_1 = 0U;
        vlSelf->__PVT__Z16_temp_1 = 0U;
        vlSelf->__PVT__Z17_temp_1 = 0U;
        vlSelf->__PVT__Z26_temp_1 = 0U;
        vlSelf->__PVT__Z44_temp_1 = 0U;
        vlSelf->__PVT__Z53_temp_1 = 0U;
        vlSelf->__PVT__Z62_temp_1 = 0U;
        vlSelf->__PVT__Z62_temp_1 = 0U;
        vlSelf->__PVT__Z71_temp_1 = 0U;
        vlSelf->__PVT__Z81_temp_1 = 0U;
        vlSelf->__PVT__Z72_temp_1 = 0U;
        vlSelf->__PVT__Z72_temp_1 = 0U;
        vlSelf->__PVT__Z63_temp_1 = 0U;
        vlSelf->__PVT__Z54_temp_1 = 0U;
        vlSelf->__PVT__Z36_temp_1 = 0U;
        vlSelf->__PVT__Z27_temp_1 = 0U;
        vlSelf->__PVT__Z18_temp_1 = 0U;
        vlSelf->__PVT__Z28_temp_1 = 0U;
        vlSelf->__PVT__Z37_temp_1 = 0U;
        vlSelf->__PVT__Z46_temp_1 = 0U;
        vlSelf->__PVT__Z64_temp_1 = 0U;
        vlSelf->__PVT__Z73_temp_1 = 0U;
        vlSelf->__PVT__Z82_temp_1 = 0U;
        vlSelf->__PVT__Z82_temp_1 = 0U;
        vlSelf->__PVT__Z83_temp_1 = 0U;
        vlSelf->__PVT__Z74_temp_1 = 0U;
        vlSelf->__PVT__Z56_temp_1 = 0U;
        vlSelf->__PVT__Z47_temp_1 = 0U;
        vlSelf->__PVT__Z38_temp_1 = 0U;
        vlSelf->__PVT__Z48_temp_1 = 0U;
        vlSelf->__PVT__Z57_temp_1 = 0U;
        vlSelf->__PVT__Z66_temp_1 = 0U;
        vlSelf->__PVT__Z84_temp_1 = 0U;
        vlSelf->__PVT__Z76_temp_1 = 0U;
        vlSelf->__PVT__Z67_temp_1 = 0U;
        vlSelf->__PVT__Z58_temp_1 = 0U;
        vlSelf->__PVT__Z68_temp_1 = 0U;
        vlSelf->__PVT__Z77_temp_1 = 0U;
        vlSelf->__PVT__Z86_temp_1 = 0U;
        vlSelf->__PVT__Z87_temp_1 = 0U;
        vlSelf->__PVT__Z78_temp_1 = 0U;
        vlSelf->__PVT__Z88_temp_1 = 0U;
        vlSelf->__PVT__Z21_temp = 0U;
        vlSelf->__PVT__Z11_temp = 0U;
        vlSelf->__PVT__Z12_temp = 0U;
        vlSelf->__PVT__Z12_temp = 0U;
        vlSelf->__PVT__Z13_temp = 0U;
        vlSelf->__PVT__Z22_temp = 0U;
        vlSelf->__PVT__Z22_temp = 0U;
        vlSelf->__PVT__Z31_temp = 0U;
        vlSelf->__PVT__Z41_temp = 0U;
        vlSelf->__PVT__Z32_temp = 0U;
        vlSelf->__PVT__Z32_temp = 0U;
        vlSelf->__PVT__Z23_temp = 0U;
        vlSelf->__PVT__Z14_temp = 0U;
        vlSelf->__PVT__Z24_temp = 0U;
        vlSelf->__PVT__Z33_temp = 0U;
        vlSelf->__PVT__Z42_temp = 0U;
        vlSelf->__PVT__Z42_temp = 0U;
        vlSelf->__PVT__Z51_temp = 0U;
        vlSelf->__PVT__Z61_temp = 0U;
        vlSelf->__PVT__Z52_temp = 0U;
        vlSelf->__PVT__Z52_temp = 0U;
        vlSelf->__PVT__Z43_temp = 0U;
        vlSelf->__PVT__Z34_temp = 0U;
        vlSelf->__PVT__Z16_temp = 0U;
        vlSelf->__PVT__Z17_temp = 0U;
        vlSelf->__PVT__Z26_temp = 0U;
        vlSelf->__PVT__Z44_temp = 0U;
        vlSelf->__PVT__Z53_temp = 0U;
        vlSelf->__PVT__Z62_temp = 0U;
        vlSelf->__PVT__Z62_temp = 0U;
        vlSelf->__PVT__Z71_temp = 0U;
        vlSelf->__PVT__Z81_temp = 0U;
        vlSelf->__PVT__Z72_temp = 0U;
        vlSelf->__PVT__Z72_temp = 0U;
        vlSelf->__PVT__Z63_temp = 0U;
        vlSelf->__PVT__Z54_temp = 0U;
        vlSelf->__PVT__Z36_temp = 0U;
        vlSelf->__PVT__Z27_temp = 0U;
        vlSelf->__PVT__Z18_temp = 0U;
        vlSelf->__PVT__Z28_temp = 0U;
        vlSelf->__PVT__Z37_temp = 0U;
        vlSelf->__PVT__Z46_temp = 0U;
        vlSelf->__PVT__Z64_temp = 0U;
        vlSelf->__PVT__Z73_temp = 0U;
        vlSelf->__PVT__Z82_temp = 0U;
        vlSelf->__PVT__Z82_temp = 0U;
        vlSelf->__PVT__Z83_temp = 0U;
        vlSelf->__PVT__Z74_temp = 0U;
        vlSelf->__PVT__Z56_temp = 0U;
        vlSelf->__PVT__Z47_temp = 0U;
        vlSelf->__PVT__Z38_temp = 0U;
        vlSelf->__PVT__Z48_temp = 0U;
        vlSelf->__PVT__Z57_temp = 0U;
        vlSelf->__PVT__Z66_temp = 0U;
        vlSelf->__PVT__Z84_temp = 0U;
        vlSelf->__PVT__Z76_temp = 0U;
        vlSelf->__PVT__Z67_temp = 0U;
        vlSelf->__PVT__Z58_temp = 0U;
        vlSelf->__PVT__Z68_temp = 0U;
        vlSelf->__PVT__Z77_temp = 0U;
        vlSelf->__PVT__Z86_temp = 0U;
        vlSelf->__PVT__Z87_temp = 0U;
        vlSelf->__PVT__Z78_temp = 0U;
        vlSelf->__PVT__Z88_temp = 0U;
        vlSelf->__PVT__Z21_int = 0U;
        vlSelf->__PVT__Z11_int = 0U;
        vlSelf->__PVT__Z12_int = 0U;
        vlSelf->__PVT__Z13_int = 0U;
        vlSelf->__PVT__Z22_int = 0U;
        vlSelf->__PVT__Z31_int = 0U;
        vlSelf->__PVT__Z41_int = 0U;
        vlSelf->__PVT__Z32_int = 0U;
        vlSelf->__PVT__Z23_int = 0U;
        vlSelf->__PVT__Z14_int = 0U;
        vlSelf->__PVT__Z15_int = 0U;
        vlSelf->__PVT__Z24_int = 0U;
        vlSelf->__PVT__Z33_int = 0U;
        vlSelf->__PVT__Z42_int = 0U;
        vlSelf->__PVT__Z51_int = 0U;
        vlSelf->__PVT__Z61_int = 0U;
        vlSelf->__PVT__Z52_int = 0U;
        vlSelf->__PVT__Z43_int = 0U;
        vlSelf->__PVT__Z34_int = 0U;
        vlSelf->__PVT__Z25_int = 0U;
        vlSelf->__PVT__Z16_int = 0U;
        vlSelf->__PVT__Z17_int = 0U;
        vlSelf->__PVT__Z26_int = 0U;
        vlSelf->__PVT__Z35_int = 0U;
        vlSelf->__PVT__Z44_int = 0U;
        vlSelf->__PVT__Z53_int = 0U;
        vlSelf->__PVT__Z62_int = 0U;
        vlSelf->__PVT__Z71_int = 0U;
        vlSelf->__PVT__Z81_int = 0U;
        vlSelf->__PVT__Z72_int = 0U;
        vlSelf->__PVT__Z63_int = 0U;
        vlSelf->__PVT__Z54_int = 0U;
        vlSelf->__PVT__Z45_int = 0U;
        vlSelf->__PVT__Z36_int = 0U;
        vlSelf->__PVT__Z27_int = 0U;
        vlSelf->__PVT__Z18_int = 0U;
        vlSelf->__PVT__Z28_int = 0U;
        vlSelf->__PVT__Z37_int = 0U;
        vlSelf->__PVT__Z46_int = 0U;
        vlSelf->__PVT__Z55_int = 0U;
        vlSelf->__PVT__Z64_int = 0U;
        vlSelf->__PVT__Z73_int = 0U;
        vlSelf->__PVT__Z82_int = 0U;
        vlSelf->__PVT__Z83_int = 0U;
        vlSelf->__PVT__Z74_int = 0U;
        vlSelf->__PVT__Z65_int = 0U;
        vlSelf->__PVT__Z56_int = 0U;
        vlSelf->__PVT__Z47_int = 0U;
        vlSelf->__PVT__Z38_int = 0U;
        vlSelf->__PVT__Z48_int = 0U;
        vlSelf->__PVT__Z57_int = 0U;
        vlSelf->__PVT__Z66_int = 0U;
        vlSelf->__PVT__Z75_int = 0U;
        vlSelf->__PVT__Z84_int = 0U;
        vlSelf->__PVT__Z85_int = 0U;
        vlSelf->__PVT__Z76_int = 0U;
        vlSelf->__PVT__Z67_int = 0U;
        vlSelf->__PVT__Z58_int = 0U;
        vlSelf->__PVT__Z68_int = 0U;
        vlSelf->__PVT__Z77_int = 0U;
        vlSelf->__PVT__Z86_int = 0U;
        vlSelf->__PVT__Z87_int = 0U;
        vlSelf->__PVT__Z78_int = 0U;
        vlSelf->__PVT__Z88_int = 0U;
    } else {
        if (vlSelf->__PVT__enable_3) {
            vlSelf->Q76 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z76_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z76_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z76_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q67 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z67_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z67_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z67_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q58 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z58_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z58_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z58_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q68 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z68_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z68_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z68_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q77 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z77_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z77_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z77_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q86 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z86_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z86_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z86_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q87 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z87_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z87_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z87_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q78 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z78_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z78_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z78_temp_1 
                                                   >> 0xcU))));
            vlSelf->Q88 = (0x7ffU & ((0x800U & vlSelf->__PVT__Z88_temp_1)
                                      ? ((IData)(1U) 
                                         + (0x7ffU 
                                            & (vlSelf->__PVT__Z88_temp_1 
                                               >> 0xcU)))
                                      : (0x7ffU & (vlSelf->__PVT__Z88_temp_1 
                                                   >> 0xcU))));
        }
        if (vlSelf->__PVT__enable_2) {
            vlSelf->__PVT__Z21_temp_1 = vlSelf->__PVT__Z21_temp;
            vlSelf->__PVT__Z11_temp_1 = vlSelf->__PVT__Z11_temp;
            vlSelf->__PVT__Z12_temp_1 = vlSelf->__PVT__Z12_temp;
            vlSelf->__PVT__Z13_temp_1 = vlSelf->__PVT__Z13_temp;
            vlSelf->__PVT__Z22_temp_1 = vlSelf->__PVT__Z22_temp;
            vlSelf->__PVT__Z31_temp_1 = vlSelf->__PVT__Z31_temp;
            vlSelf->__PVT__Z41_temp_1 = vlSelf->__PVT__Z41_temp;
            vlSelf->__PVT__Z32_temp_1 = vlSelf->__PVT__Z32_temp;
            vlSelf->__PVT__Z23_temp_1 = vlSelf->__PVT__Z23_temp;
            vlSelf->__PVT__Z14_temp_1 = vlSelf->__PVT__Z14_temp;
            vlSelf->__PVT__Z24_temp_1 = vlSelf->__PVT__Z24_temp;
            vlSelf->__PVT__Z33_temp_1 = vlSelf->__PVT__Z33_temp;
            vlSelf->__PVT__Z42_temp_1 = vlSelf->__PVT__Z42_temp;
            vlSelf->__PVT__Z51_temp_1 = vlSelf->__PVT__Z51_temp;
            vlSelf->__PVT__Z61_temp_1 = vlSelf->__PVT__Z61_temp;
            vlSelf->__PVT__Z52_temp_1 = vlSelf->__PVT__Z52_temp;
            vlSelf->__PVT__Z43_temp_1 = vlSelf->__PVT__Z43_temp;
            vlSelf->__PVT__Z34_temp_1 = vlSelf->__PVT__Z34_temp;
            vlSelf->__PVT__Z16_temp_1 = vlSelf->__PVT__Z16_temp;
            vlSelf->__PVT__Z17_temp_1 = vlSelf->__PVT__Z17_temp;
            vlSelf->__PVT__Z26_temp_1 = vlSelf->__PVT__Z26_temp;
            vlSelf->__PVT__Z44_temp_1 = vlSelf->__PVT__Z44_temp;
            vlSelf->__PVT__Z53_temp_1 = vlSelf->__PVT__Z53_temp;
            vlSelf->__PVT__Z62_temp_1 = vlSelf->__PVT__Z62_temp;
            vlSelf->__PVT__Z71_temp_1 = vlSelf->__PVT__Z71_temp;
            vlSelf->__PVT__Z81_temp_1 = vlSelf->__PVT__Z81_temp;
            vlSelf->__PVT__Z72_temp_1 = vlSelf->__PVT__Z72_temp;
            vlSelf->__PVT__Z63_temp_1 = vlSelf->__PVT__Z63_temp;
            vlSelf->__PVT__Z54_temp_1 = vlSelf->__PVT__Z54_temp;
            vlSelf->__PVT__Z36_temp_1 = vlSelf->__PVT__Z36_temp;
            vlSelf->__PVT__Z27_temp_1 = vlSelf->__PVT__Z27_temp;
            vlSelf->__PVT__Z18_temp_1 = vlSelf->__PVT__Z18_temp;
            vlSelf->__PVT__Z28_temp_1 = vlSelf->__PVT__Z28_temp;
            vlSelf->__PVT__Z37_temp_1 = vlSelf->__PVT__Z37_temp;
            vlSelf->__PVT__Z46_temp_1 = vlSelf->__PVT__Z46_temp;
            vlSelf->__PVT__Z64_temp_1 = vlSelf->__PVT__Z64_temp;
            vlSelf->__PVT__Z73_temp_1 = vlSelf->__PVT__Z73_temp;
            vlSelf->__PVT__Z82_temp_1 = vlSelf->__PVT__Z82_temp;
            vlSelf->__PVT__Z83_temp_1 = vlSelf->__PVT__Z83_temp;
            vlSelf->__PVT__Z74_temp_1 = vlSelf->__PVT__Z74_temp;
            vlSelf->__PVT__Z56_temp_1 = vlSelf->__PVT__Z56_temp;
            vlSelf->__PVT__Z47_temp_1 = vlSelf->__PVT__Z47_temp;
            vlSelf->__PVT__Z38_temp_1 = vlSelf->__PVT__Z38_temp;
            vlSelf->__PVT__Z48_temp_1 = vlSelf->__PVT__Z48_temp;
            vlSelf->__PVT__Z57_temp_1 = vlSelf->__PVT__Z57_temp;
            vlSelf->__PVT__Z66_temp_1 = vlSelf->__PVT__Z66_temp;
            vlSelf->__PVT__Z84_temp_1 = vlSelf->__PVT__Z84_temp;
            vlSelf->__PVT__Z76_temp_1 = vlSelf->__PVT__Z76_temp;
            vlSelf->__PVT__Z67_temp_1 = vlSelf->__PVT__Z67_temp;
            vlSelf->__PVT__Z58_temp_1 = vlSelf->__PVT__Z58_temp;
            vlSelf->__PVT__Z68_temp_1 = vlSelf->__PVT__Z68_temp;
            vlSelf->__PVT__Z77_temp_1 = vlSelf->__PVT__Z77_temp;
            vlSelf->__PVT__Z86_temp_1 = vlSelf->__PVT__Z86_temp;
            vlSelf->__PVT__Z87_temp_1 = vlSelf->__PVT__Z87_temp;
            vlSelf->__PVT__Z78_temp_1 = vlSelf->__PVT__Z78_temp;
            vlSelf->__PVT__Z88_temp_1 = vlSelf->__PVT__Z88_temp;
        }
        if (vlSelf->__PVT__enable_1) {
            vlSelf->__PVT__Z21_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z21_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u21->__PVT__r_temp))
                                         : vlSelf->__PVT__u21->__PVT__r_temp));
            vlSelf->__PVT__Z11_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z11_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u11->__PVT__r_temp))
                                         : vlSelf->__PVT__u11->__PVT__r_temp));
            vlSelf->__PVT__Z12_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z12_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u12->__PVT__r_temp))
                                         : vlSelf->__PVT__u12->__PVT__r_temp));
            vlSelf->__PVT__Z13_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z13_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u13->__PVT__r_temp))
                                         : vlSelf->__PVT__u13->__PVT__r_temp));
            vlSelf->__PVT__Z22_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z22_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u22->__PVT__r_temp))
                                         : vlSelf->__PVT__u22->__PVT__r_temp));
            vlSelf->__PVT__Z31_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z31_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u31->__PVT__r_temp))
                                         : vlSelf->__PVT__u31->__PVT__r_temp));
            vlSelf->__PVT__Z41_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z41_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u41->__PVT__r_temp))
                                         : vlSelf->__PVT__u41->__PVT__r_temp));
            vlSelf->__PVT__Z32_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z32_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u32->__PVT__r_temp))
                                         : vlSelf->__PVT__u32->__PVT__r_temp));
            vlSelf->__PVT__Z23_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z23_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u23->__PVT__r_temp))
                                         : vlSelf->__PVT__u23->__PVT__r_temp));
            vlSelf->__PVT__Z14_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z14_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u14->__PVT__r_temp))
                                         : vlSelf->__PVT__u14->__PVT__r_temp));
            vlSelf->__PVT__Z24_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z24_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u24->__PVT__r_temp))
                                         : vlSelf->__PVT__u24->__PVT__r_temp));
            vlSelf->__PVT__Z33_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z33_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u33->__PVT__r_temp))
                                         : vlSelf->__PVT__u33->__PVT__r_temp));
            vlSelf->__PVT__Z42_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z42_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u42->__PVT__r_temp))
                                         : vlSelf->__PVT__u42->__PVT__r_temp));
            vlSelf->__PVT__Z51_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z51_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u51->__PVT__r_temp))
                                         : vlSelf->__PVT__u51->__PVT__r_temp));
            vlSelf->__PVT__Z61_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z61_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u61->__PVT__r_temp))
                                         : vlSelf->__PVT__u61->__PVT__r_temp));
            vlSelf->__PVT__Z52_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z52_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u52->__PVT__r_temp))
                                         : vlSelf->__PVT__u52->__PVT__r_temp));
            vlSelf->__PVT__Z43_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z43_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u43->__PVT__r_temp))
                                         : vlSelf->__PVT__u43->__PVT__r_temp));
            vlSelf->__PVT__Z34_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z34_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u34->__PVT__r_temp))
                                         : vlSelf->__PVT__u34->__PVT__r_temp));
            vlSelf->__PVT__Z16_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z16_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u16->__PVT__r_temp))
                                         : vlSelf->__PVT__u16->__PVT__r_temp));
            vlSelf->__PVT__Z17_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z17_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u17->__PVT__r_temp))
                                         : vlSelf->__PVT__u17->__PVT__r_temp));
            vlSelf->__PVT__Z26_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z26_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u26->__PVT__r_temp))
                                         : vlSelf->__PVT__u26->__PVT__r_temp));
            vlSelf->__PVT__Z44_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z44_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u44->__PVT__r_temp))
                                         : vlSelf->__PVT__u44->__PVT__r_temp));
            vlSelf->__PVT__Z53_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z53_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u53->__PVT__r_temp))
                                         : vlSelf->__PVT__u53->__PVT__r_temp));
            vlSelf->__PVT__Z62_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z62_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u62->__PVT__r_temp))
                                         : vlSelf->__PVT__u62->__PVT__r_temp));
            vlSelf->__PVT__Z71_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z71_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u71->__PVT__r_temp))
                                         : vlSelf->__PVT__u71->__PVT__r_temp));
            vlSelf->__PVT__Z81_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z81_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u81->__PVT__r_temp))
                                         : vlSelf->__PVT__u81->__PVT__r_temp));
            vlSelf->__PVT__Z72_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z72_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u72->__PVT__r_temp))
                                         : vlSelf->__PVT__u72->__PVT__r_temp));
            vlSelf->__PVT__Z63_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z63_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u63->__PVT__r_temp))
                                         : vlSelf->__PVT__u63->__PVT__r_temp));
            vlSelf->__PVT__Z54_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z54_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u54->__PVT__r_temp))
                                         : vlSelf->__PVT__u54->__PVT__r_temp));
            vlSelf->__PVT__Z36_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z36_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u36->__PVT__r_temp))
                                         : vlSelf->__PVT__u36->__PVT__r_temp));
            vlSelf->__PVT__Z27_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z27_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u27->__PVT__r_temp))
                                         : vlSelf->__PVT__u27->__PVT__r_temp));
            vlSelf->__PVT__Z18_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z18_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u18->__PVT__r_temp))
                                         : vlSelf->__PVT__u18->__PVT__r_temp));
            vlSelf->__PVT__Z28_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z28_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u28->__PVT__r_temp))
                                         : vlSelf->__PVT__u28->__PVT__r_temp));
            vlSelf->__PVT__Z37_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z37_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u37->__PVT__r_temp))
                                         : vlSelf->__PVT__u37->__PVT__r_temp));
            vlSelf->__PVT__Z46_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z46_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u46->__PVT__r_temp))
                                         : vlSelf->__PVT__u46->__PVT__r_temp));
            vlSelf->__PVT__Z64_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z64_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u64->__PVT__r_temp))
                                         : vlSelf->__PVT__u64->__PVT__r_temp));
            vlSelf->__PVT__Z73_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z73_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u73->__PVT__r_temp))
                                         : vlSelf->__PVT__u73->__PVT__r_temp));
            vlSelf->__PVT__Z82_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z82_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u82->__PVT__r_temp))
                                         : vlSelf->__PVT__u82->__PVT__r_temp));
            vlSelf->__PVT__Z83_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z83_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u83->__PVT__r_temp))
                                         : vlSelf->__PVT__u83->__PVT__r_temp));
            vlSelf->__PVT__Z74_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z74_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u74->__PVT__r_temp))
                                         : vlSelf->__PVT__u74->__PVT__r_temp));
            vlSelf->__PVT__Z56_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z56_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u56->__PVT__r_temp))
                                         : vlSelf->__PVT__u56->__PVT__r_temp));
            vlSelf->__PVT__Z47_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z47_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u47->__PVT__r_temp))
                                         : vlSelf->__PVT__u47->__PVT__r_temp));
            vlSelf->__PVT__Z38_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z38_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u38->__PVT__r_temp))
                                         : vlSelf->__PVT__u38->__PVT__r_temp));
            vlSelf->__PVT__Z48_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z48_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u48->__PVT__r_temp))
                                         : vlSelf->__PVT__u48->__PVT__r_temp));
            vlSelf->__PVT__Z57_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z57_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u57->__PVT__r_temp))
                                         : vlSelf->__PVT__u57->__PVT__r_temp));
            vlSelf->__PVT__Z66_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z66_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u66->__PVT__r_temp))
                                         : vlSelf->__PVT__u66->__PVT__r_temp));
            vlSelf->__PVT__Z84_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z84_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u84->__PVT__r_temp))
                                         : vlSelf->__PVT__u84->__PVT__r_temp));
            vlSelf->__PVT__Z76_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z76_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u76->__PVT__r_temp))
                                         : vlSelf->__PVT__u76->__PVT__r_temp));
            vlSelf->__PVT__Z67_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z67_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u67->__PVT__r_temp))
                                         : vlSelf->__PVT__u67->__PVT__r_temp));
            vlSelf->__PVT__Z58_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z58_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u58->__PVT__r_temp))
                                         : vlSelf->__PVT__u58->__PVT__r_temp));
            vlSelf->__PVT__Z68_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z68_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u68->__PVT__r_temp))
                                         : vlSelf->__PVT__u68->__PVT__r_temp));
            vlSelf->__PVT__Z77_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z77_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u77->__PVT__r_temp))
                                         : vlSelf->__PVT__u77->__PVT__r_temp));
            vlSelf->__PVT__Z86_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z86_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u86->__PVT__r_temp))
                                         : vlSelf->__PVT__u86->__PVT__r_temp));
            vlSelf->__PVT__Z87_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z87_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u87->__PVT__r_temp))
                                         : vlSelf->__PVT__u87->__PVT__r_temp));
            vlSelf->__PVT__Z78_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z78_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u78->__PVT__r_temp))
                                         : vlSelf->__PVT__u78->__PVT__r_temp));
            vlSelf->__PVT__Z88_temp = (0x7fffffU & 
                                       ((0x8000U & vlSelf->__PVT__Z88_int)
                                         ? ((IData)(1U) 
                                            + (~ vlSelf->__PVT__u88->__PVT__r_temp))
                                         : vlSelf->__PVT__u88->__PVT__r_temp));
        }
        if (vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.output_enable) {
            vlSelf->__PVT__Z21_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z21_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z21_final));
            vlSelf->__PVT__Z11_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z11_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z11_final));
            vlSelf->__PVT__Z12_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z12_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z12_final));
            vlSelf->__PVT__Z13_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z13_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z13_final));
            vlSelf->__PVT__Z22_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z22_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z22_final));
            vlSelf->__PVT__Z31_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z31_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z31_final));
            vlSelf->__PVT__Z41_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z41_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z41_final));
            vlSelf->__PVT__Z32_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z32_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z32_final));
            vlSelf->__PVT__Z23_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z23_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z23_final));
            vlSelf->__PVT__Z14_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z14_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z14_final));
            vlSelf->__PVT__Z15_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z15_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z15_final));
            vlSelf->__PVT__Z24_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z24_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z24_final));
            vlSelf->__PVT__Z33_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z33_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z33_final));
            vlSelf->__PVT__Z42_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z42_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z42_final));
            vlSelf->__PVT__Z51_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z51_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z51_final));
            vlSelf->__PVT__Z61_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z61_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z61_final));
            vlSelf->__PVT__Z52_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z52_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z52_final));
            vlSelf->__PVT__Z43_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z43_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z43_final));
            vlSelf->__PVT__Z34_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z34_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z34_final));
            vlSelf->__PVT__Z25_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z25_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z25_final));
            vlSelf->__PVT__Z16_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z16_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z16_final));
            vlSelf->__PVT__Z17_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z17_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z17_final));
            vlSelf->__PVT__Z26_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z26_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z26_final));
            vlSelf->__PVT__Z35_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z35_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z35_final));
            vlSelf->__PVT__Z44_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z44_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z44_final));
            vlSelf->__PVT__Z53_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z53_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z53_final));
            vlSelf->__PVT__Z62_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z62_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z62_final));
            vlSelf->__PVT__Z71_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z71_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z71_final));
            vlSelf->__PVT__Z81_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z81_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z81_final));
            vlSelf->__PVT__Z72_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z72_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z72_final));
            vlSelf->__PVT__Z63_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z63_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z63_final));
            vlSelf->__PVT__Z54_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z54_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z54_final));
            vlSelf->__PVT__Z45_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z45_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z45_final));
            vlSelf->__PVT__Z36_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z36_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z36_final));
            vlSelf->__PVT__Z27_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z27_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z27_final));
            vlSelf->__PVT__Z18_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z18_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z18_final));
            vlSelf->__PVT__Z28_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z28_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z28_final));
            vlSelf->__PVT__Z37_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z37_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z37_final));
            vlSelf->__PVT__Z46_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z46_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z46_final));
            vlSelf->__PVT__Z55_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z55_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z55_final));
            vlSelf->__PVT__Z64_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z64_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z64_final));
            vlSelf->__PVT__Z73_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z73_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z73_final));
            vlSelf->__PVT__Z82_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z82_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z82_final));
            vlSelf->__PVT__Z83_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z83_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z83_final));
            vlSelf->__PVT__Z74_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z74_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z74_final));
            vlSelf->__PVT__Z65_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z65_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z65_final));
            vlSelf->__PVT__Z56_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z56_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z56_final));
            vlSelf->__PVT__Z47_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z47_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z47_final));
            vlSelf->__PVT__Z38_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z38_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z38_final));
            vlSelf->__PVT__Z48_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z48_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z48_final));
            vlSelf->__PVT__Z57_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z57_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z57_final));
            vlSelf->__PVT__Z66_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z66_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z66_final));
            vlSelf->__PVT__Z75_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z75_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z75_final));
            vlSelf->__PVT__Z84_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z84_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z84_final));
            vlSelf->__PVT__Z85_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z85_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z85_final));
            vlSelf->__PVT__Z76_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z76_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z76_final));
            vlSelf->__PVT__Z67_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z67_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z67_final));
            vlSelf->__PVT__Z58_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z58_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z58_final));
            vlSelf->__PVT__Z68_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z68_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z68_final));
            vlSelf->__PVT__Z77_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z77_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z77_final));
            vlSelf->__PVT__Z86_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z86_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z86_final));
            vlSelf->__PVT__Z87_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z87_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z87_final));
            vlSelf->__PVT__Z78_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z78_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z78_final));
            vlSelf->__PVT__Z88_int = ((((0x400U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z88_final))
                                         ? 0x1fffffU
                                         : 0U) << 0xbU) 
                                      | (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.Z88_final));
        }
    }
    vlSelf->__PVT__enable_3 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSelf->__PVT__enable_2));
    vlSelf->__PVT__enable_2 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSelf->__PVT__enable_1));
    vlSelf->__PVT__enable_1 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.output_enable));
}
