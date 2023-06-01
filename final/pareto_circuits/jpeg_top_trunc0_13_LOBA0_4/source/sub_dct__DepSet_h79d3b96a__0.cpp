// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc0_13_LOBA0_4.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc0_13_LOBA0_4__Syms.h"
#include "sub_dct.h"

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1\n"); );
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelf->Z21_final = 0U;
        vlSelf->Z11_final = 0U;
        vlSelf->Z12_final = 0U;
        vlSelf->Z13_final = 0U;
        vlSelf->Z22_final = 0U;
        vlSelf->Z31_final = 0U;
        vlSelf->Z41_final = 0U;
        vlSelf->Z32_final = 0U;
        vlSelf->Z23_final = 0U;
        vlSelf->Z14_final = 0U;
        vlSelf->Z15_final = 0U;
        vlSelf->Z24_final = 0U;
        vlSelf->Z33_final = 0U;
        vlSelf->Z42_final = 0U;
        vlSelf->Z51_final = 0U;
        vlSelf->Z61_final = 0U;
        vlSelf->Z52_final = 0U;
        vlSelf->Z43_final = 0U;
        vlSelf->Z34_final = 0U;
        vlSelf->Z25_final = 0U;
        vlSelf->Z16_final = 0U;
        vlSelf->Z17_final = 0U;
        vlSelf->Z26_final = 0U;
        vlSelf->Z35_final = 0U;
        vlSelf->Z44_final = 0U;
        vlSelf->Z53_final = 0U;
        vlSelf->Z62_final = 0U;
        vlSelf->Z71_final = 0U;
        vlSelf->Z81_final = 0U;
        vlSelf->Z72_final = 0U;
        vlSelf->Z63_final = 0U;
        vlSelf->Z54_final = 0U;
        vlSelf->Z45_final = 0U;
        vlSelf->Z36_final = 0U;
        vlSelf->Z27_final = 0U;
        vlSelf->Z18_final = 0U;
        vlSelf->Z28_final = 0U;
        vlSelf->Z37_final = 0U;
        vlSelf->Z46_final = 0U;
        vlSelf->Z55_final = 0U;
        vlSelf->Z64_final = 0U;
        vlSelf->Z73_final = 0U;
        vlSelf->Z82_final = 0U;
        vlSelf->Z83_final = 0U;
        vlSelf->Z74_final = 0U;
        vlSelf->Z65_final = 0U;
        vlSelf->Z56_final = 0U;
        vlSelf->Z47_final = 0U;
        vlSelf->Z38_final = 0U;
        vlSelf->Z48_final = 0U;
        vlSelf->Z57_final = 0U;
        vlSelf->Z66_final = 0U;
        vlSelf->Z75_final = 0U;
        vlSelf->Z84_final = 0U;
        vlSelf->Z85_final = 0U;
        vlSelf->Z76_final = 0U;
        vlSelf->Z67_final = 0U;
        vlSelf->Z58_final = 0U;
        vlSelf->Z68_final = 0U;
        vlSelf->Z77_final = 0U;
        vlSelf->Z86_final = 0U;
        vlSelf->Z87_final = 0U;
        vlSelf->Z78_final = 0U;
        vlSelf->Z88_final = 0U;
        vlSelf->output_enable = 0U;
        vlSelf->__PVT__Z21 = 0U;
        vlSelf->__PVT__Z11 = 0U;
        vlSelf->__PVT__Z12 = 0U;
        vlSelf->__PVT__Z13 = 0U;
        vlSelf->__PVT__Z22 = 0U;
        vlSelf->__PVT__Z31 = 0U;
        vlSelf->__PVT__Z41 = 0U;
        vlSelf->__PVT__Z32 = 0U;
        vlSelf->__PVT__Z23 = 0U;
        vlSelf->__PVT__Z14 = 0U;
        vlSelf->__PVT__Z15 = 0U;
        vlSelf->__PVT__Z24 = 0U;
        vlSelf->__PVT__Z33 = 0U;
        vlSelf->__PVT__Z42 = 0U;
        vlSelf->__PVT__Z51 = 0U;
        vlSelf->__PVT__Z61 = 0U;
        vlSelf->__PVT__Z52 = 0U;
        vlSelf->__PVT__Z43 = 0U;
        vlSelf->__PVT__Z34 = 0U;
        vlSelf->__PVT__Z25 = 0U;
        vlSelf->__PVT__Z16 = 0U;
        vlSelf->__PVT__Z17 = 0U;
        vlSelf->__PVT__Z26 = 0U;
        vlSelf->__PVT__Z35 = 0U;
        vlSelf->__PVT__Z44 = 0U;
        vlSelf->__PVT__Z53 = 0U;
        vlSelf->__PVT__Z62 = 0U;
        vlSelf->__PVT__Z71 = 0U;
        vlSelf->__PVT__Z81 = 0U;
        vlSelf->__PVT__Z72 = 0U;
        vlSelf->__PVT__Z63 = 0U;
        vlSelf->__PVT__Z54 = 0U;
        vlSelf->__PVT__Z45 = 0U;
        vlSelf->__PVT__Z36 = 0U;
        vlSelf->__PVT__Z27 = 0U;
        vlSelf->__PVT__Z18 = 0U;
        vlSelf->__PVT__Z28 = 0U;
        vlSelf->__PVT__Z37 = 0U;
        vlSelf->__PVT__Z46 = 0U;
        vlSelf->__PVT__Z55 = 0U;
        vlSelf->__PVT__Z64 = 0U;
        vlSelf->__PVT__Z73 = 0U;
        vlSelf->__PVT__Z82 = 0U;
        vlSelf->__PVT__Z83 = 0U;
        vlSelf->__PVT__Z74 = 0U;
        vlSelf->__PVT__Z65 = 0U;
        vlSelf->__PVT__Z56 = 0U;
        vlSelf->__PVT__Z47 = 0U;
        vlSelf->__PVT__Z38 = 0U;
        vlSelf->__PVT__Z48 = 0U;
        vlSelf->__PVT__Z57 = 0U;
        vlSelf->__PVT__Z66 = 0U;
        vlSelf->__PVT__Z75 = 0U;
        vlSelf->__PVT__Z84 = 0U;
        vlSelf->__PVT__Z85 = 0U;
        vlSelf->__PVT__Z76 = 0U;
        vlSelf->__PVT__Z67 = 0U;
        vlSelf->__PVT__Z58 = 0U;
        vlSelf->__PVT__Z68 = 0U;
        vlSelf->__PVT__Z77 = 0U;
        vlSelf->__PVT__Z86 = 0U;
        vlSelf->__PVT__Z87 = 0U;
        vlSelf->__PVT__Z78 = 0U;
        vlSelf->__PVT__Z88 = 0U;
        vlSelf->__PVT__count_10 = 0U;
        vlSelf->__PVT__count_9 = 0U;
        vlSelf->__PVT__count_8 = 0U;
        vlSelf->__PVT__count_7 = 0U;
        vlSelf->__PVT__count_6 = 0U;
        vlSelf->__PVT__count_5 = 0U;
        vlSelf->__PVT__count_4 = 0U;
        vlSelf->__PVT__count_3 = 0U;
        vlSelf->__PVT__count_1 = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__count_10) & (0U 
                                                 == (IData)(vlSelf->__PVT__count_of)))) {
            vlSelf->Z21_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z21)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z21 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z21 
                                                  >> 0x10U))));
            vlSelf->Z11_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z11)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z11 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z11 
                                                  >> 0x10U))));
            vlSelf->Z12_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z12)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z12 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z12 
                                                  >> 0x10U))));
            vlSelf->Z13_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z13)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z13 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z13 
                                                  >> 0x10U))));
            vlSelf->Z22_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z22)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z22 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z22 
                                                  >> 0x10U))));
            vlSelf->Z31_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z31)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z31 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z31 
                                                  >> 0x10U))));
            vlSelf->Z41_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z41)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z41 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z41 
                                                  >> 0x10U))));
            vlSelf->Z32_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z32)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z32 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z32 
                                                  >> 0x10U))));
            vlSelf->Z23_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z23)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z23 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z23 
                                                  >> 0x10U))));
            vlSelf->Z14_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z14)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z14 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z14 
                                                  >> 0x10U))));
            vlSelf->Z15_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z15)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z15 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z15 
                                                  >> 0x10U))));
            vlSelf->Z24_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z24)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z24 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z24 
                                                  >> 0x10U))));
            vlSelf->Z33_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z33)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z33 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z33 
                                                  >> 0x10U))));
            vlSelf->Z42_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z42)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z42 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z42 
                                                  >> 0x10U))));
            vlSelf->Z51_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z51)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z51 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z51 
                                                  >> 0x10U))));
            vlSelf->Z61_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z61)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z61 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z61 
                                                  >> 0x10U))));
            vlSelf->Z52_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z52)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z52 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z52 
                                                  >> 0x10U))));
            vlSelf->Z43_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z43)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z43 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z43 
                                                  >> 0x10U))));
            vlSelf->Z34_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z34)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z34 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z34 
                                                  >> 0x10U))));
            vlSelf->Z25_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z25)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z25 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z25 
                                                  >> 0x10U))));
            vlSelf->Z16_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z16)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z16 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z16 
                                                  >> 0x10U))));
            vlSelf->Z17_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z17)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z17 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z17 
                                                  >> 0x10U))));
            vlSelf->Z26_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z26)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z26 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z26 
                                                  >> 0x10U))));
            vlSelf->Z35_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z35)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z35 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z35 
                                                  >> 0x10U))));
            vlSelf->Z44_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z44)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z44 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z44 
                                                  >> 0x10U))));
            vlSelf->Z53_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z53)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z53 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z53 
                                                  >> 0x10U))));
            vlSelf->Z62_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z62)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z62 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z62 
                                                  >> 0x10U))));
            vlSelf->Z71_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z71)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z71 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z71 
                                                  >> 0x10U))));
            vlSelf->Z81_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z81)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z81 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z81 
                                                  >> 0x10U))));
            vlSelf->Z72_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z72)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z72 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z72 
                                                  >> 0x10U))));
            vlSelf->Z63_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z63)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z63 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z63 
                                                  >> 0x10U))));
            vlSelf->Z54_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z54)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z54 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z54 
                                                  >> 0x10U))));
            vlSelf->Z45_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z45)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z45 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z45 
                                                  >> 0x10U))));
            vlSelf->Z36_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z36)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z36 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z36 
                                                  >> 0x10U))));
            vlSelf->Z27_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z27)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z27 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z27 
                                                  >> 0x10U))));
            vlSelf->Z18_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z18)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z18 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z18 
                                                  >> 0x10U))));
            vlSelf->Z28_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z28)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z28 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z28 
                                                  >> 0x10U))));
            vlSelf->Z37_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z37)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z37 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z37 
                                                  >> 0x10U))));
            vlSelf->Z46_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z46)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z46 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z46 
                                                  >> 0x10U))));
            vlSelf->Z55_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z55)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z55 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z55 
                                                  >> 0x10U))));
            vlSelf->Z64_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z64)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z64 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z64 
                                                  >> 0x10U))));
            vlSelf->Z73_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z73)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z73 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z73 
                                                  >> 0x10U))));
            vlSelf->Z82_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z82)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z82 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z82 
                                                  >> 0x10U))));
            vlSelf->Z83_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z83)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z83 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z83 
                                                  >> 0x10U))));
            vlSelf->Z74_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z74)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z74 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z74 
                                                  >> 0x10U))));
            vlSelf->Z65_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z65)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z65 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z65 
                                                  >> 0x10U))));
            vlSelf->Z56_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z56)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z56 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z56 
                                                  >> 0x10U))));
            vlSelf->Z47_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z47)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z47 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z47 
                                                  >> 0x10U))));
            vlSelf->Z38_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z38)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z38 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z38 
                                                  >> 0x10U))));
            vlSelf->Z48_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z48)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z48 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z48 
                                                  >> 0x10U))));
            vlSelf->Z57_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z57)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z57 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z57 
                                                  >> 0x10U))));
            vlSelf->Z66_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z66)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z66 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z66 
                                                  >> 0x10U))));
            vlSelf->Z75_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z75)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z75 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z75 
                                                  >> 0x10U))));
            vlSelf->Z84_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z84)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z84 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z84 
                                                  >> 0x10U))));
            vlSelf->Z85_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z85)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z85 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z85 
                                                  >> 0x10U))));
            vlSelf->Z76_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z76)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z76 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z76 
                                                  >> 0x10U))));
            vlSelf->Z67_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z67)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z67 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z67 
                                                  >> 0x10U))));
            vlSelf->Z58_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z58)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z58 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z58 
                                                  >> 0x10U))));
            vlSelf->Z68_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z68)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z68 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z68 
                                                  >> 0x10U))));
            vlSelf->Z77_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z77)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z77 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z77 
                                                  >> 0x10U))));
            vlSelf->Z86_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z86)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z86 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z86 
                                                  >> 0x10U))));
            vlSelf->Z87_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z87)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z87 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z87 
                                                  >> 0x10U))));
            vlSelf->Z78_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z78)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z78 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z78 
                                                  >> 0x10U))));
            vlSelf->Z88_final = (0x7ffU & ((0x8000U 
                                            & vlSelf->__PVT__Z88)
                                            ? ((IData)(1U) 
                                               + (0x7ffU 
                                                  & (vlSelf->__PVT__Z88 
                                                     >> 0x10U)))
                                            : (0x7ffU 
                                               & (vlSelf->__PVT__Z88 
                                                  >> 0x10U))));
        }
        if (vlSelf->__PVT__enable_1) {
            if ((0U != ((1U & (~ (IData)(vlSelf->__PVT__count_10))) 
                        | (IData)(vlSelf->__PVT__count_of)))) {
                vlSelf->output_enable = 0U;
            } else if (((IData)(vlSelf->__PVT__count_10) 
                        & (0U == (IData)(vlSelf->__PVT__count_of)))) {
                vlSelf->output_enable = 1U;
            }
        } else {
            vlSelf->output_enable = 0U;
        }
        if (((IData)(vlSelf->__PVT__count_8) & (1U 
                                                == (IData)(vlSelf->__PVT__count_of)))) {
            vlSelf->__PVT__Z21 = 0U;
            vlSelf->__PVT__Z11 = 0U;
            vlSelf->__PVT__Z12 = 0U;
            vlSelf->__PVT__Z13 = 0U;
            vlSelf->__PVT__Z22 = 0U;
            vlSelf->__PVT__Z31 = 0U;
            vlSelf->__PVT__Z41 = 0U;
            vlSelf->__PVT__Z32 = 0U;
            vlSelf->__PVT__Z23 = 0U;
            vlSelf->__PVT__Z14 = 0U;
            vlSelf->__PVT__Z15 = 0U;
            vlSelf->__PVT__Z24 = 0U;
            vlSelf->__PVT__Z33 = 0U;
            vlSelf->__PVT__Z42 = 0U;
            vlSelf->__PVT__Z51 = 0U;
            vlSelf->__PVT__Z61 = 0U;
            vlSelf->__PVT__Z52 = 0U;
            vlSelf->__PVT__Z43 = 0U;
            vlSelf->__PVT__Z34 = 0U;
            vlSelf->__PVT__Z25 = 0U;
            vlSelf->__PVT__Z16 = 0U;
            vlSelf->__PVT__Z17 = 0U;
            vlSelf->__PVT__Z26 = 0U;
            vlSelf->__PVT__Z35 = 0U;
            vlSelf->__PVT__Z44 = 0U;
            vlSelf->__PVT__Z53 = 0U;
            vlSelf->__PVT__Z62 = 0U;
            vlSelf->__PVT__Z71 = 0U;
            vlSelf->__PVT__Z81 = 0U;
            vlSelf->__PVT__Z72 = 0U;
            vlSelf->__PVT__Z63 = 0U;
            vlSelf->__PVT__Z54 = 0U;
            vlSelf->__PVT__Z45 = 0U;
            vlSelf->__PVT__Z36 = 0U;
            vlSelf->__PVT__Z27 = 0U;
            vlSelf->__PVT__Z18 = 0U;
            vlSelf->__PVT__Z28 = 0U;
            vlSelf->__PVT__Z37 = 0U;
            vlSelf->__PVT__Z46 = 0U;
            vlSelf->__PVT__Z55 = 0U;
            vlSelf->__PVT__Z64 = 0U;
            vlSelf->__PVT__Z73 = 0U;
            vlSelf->__PVT__Z82 = 0U;
            vlSelf->__PVT__Z83 = 0U;
            vlSelf->__PVT__Z74 = 0U;
            vlSelf->__PVT__Z65 = 0U;
            vlSelf->__PVT__Z56 = 0U;
            vlSelf->__PVT__Z47 = 0U;
            vlSelf->__PVT__Z38 = 0U;
            vlSelf->__PVT__Z48 = 0U;
            vlSelf->__PVT__Z57 = 0U;
            vlSelf->__PVT__Z66 = 0U;
            vlSelf->__PVT__Z75 = 0U;
            vlSelf->__PVT__Z84 = 0U;
            vlSelf->__PVT__Z85 = 0U;
            vlSelf->__PVT__Z76 = 0U;
            vlSelf->__PVT__Z67 = 0U;
            vlSelf->__PVT__Z58 = 0U;
            vlSelf->__PVT__Z68 = 0U;
            vlSelf->__PVT__Z77 = 0U;
            vlSelf->__PVT__Z86 = 0U;
            vlSelf->__PVT__Z87 = 0U;
            vlSelf->__PVT__Z78 = 0U;
            vlSelf->__PVT__Z88 = 0U;
        } else if (((IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) 
                    & (IData)(vlSelf->__PVT__count_9))) {
            vlSelf->__PVT__Z21 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hce342946__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z11 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h699ee612__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z12 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h6bf621ff__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z13 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hd39562e0__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z22 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hef2ddb0f__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z31 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h300f26d1__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z41 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_ha424e38f__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z32 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h307c1d20__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z23 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h23bcb6bc__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z14 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h3abfe17c__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z15 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_he28f448c__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z24 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h621d0158__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z33 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h700c1868__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z42 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h4654ba34__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z51 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_ha9438fba__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z61 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_ha6501694__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z52 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h1f227ebf__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z43 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h0946b41d__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z34 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h8c7cdff7__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z25 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h35ee00a9__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z16 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h7e6e7e39__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z17 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h96069007__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z26 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hb24a7a86__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z35 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h94fb066c__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z44 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hf53972fa__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z53 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h25a87421__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z62 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hc82d2471__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z71 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hef99de00__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z81 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h633550a1__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z72 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hc7d640c2__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z63 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_ha717ac09__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z54 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h41ed2fcc__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z45 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_heae241ce__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z36 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h2e4ddfd6__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z27 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h9e289d25__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z18 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h51103576__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z28 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h38ed95f5__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z37 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h873ee2d3__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z46 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hf18e7547__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z55 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h501429e8__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z64 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h2668dbcd__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z73 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_ha7987387__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z82 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hbcf90ff7__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z83 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_he4b9ffc1__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z74 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hb987e504__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z65 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h13ce23bf__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z56 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h4ae5c0ab__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z47 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hf4a06db6__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z38 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h4da3985d__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z48 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h3d945834__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z57 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h442feb81__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z66 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h4806d930__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z75 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h3dcea630__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z84 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h09144a94__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z85 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h1be71dd9__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z76 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_he00a17c5__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z67 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hcd8ccebf__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z58 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h82fafc00__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z68 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h6391e70a__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z77 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hc13b2cb3__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z86 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h59f571be__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z87 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h785c1f33__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z78 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_hfb8a0050__0) 
                                                << 0xdU));
            vlSelf->__PVT__Z88 = (0x7ffe000U & ((IData)(vlSelf->__VdfgTmp_h3c7528a8__0) 
                                                << 0xdU));
        }
        if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            if (vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
                vlSelf->__PVT__count_10 = vlSelf->__PVT__count_9;
                vlSelf->__PVT__count_9 = vlSelf->__PVT__count_8;
                vlSelf->__PVT__count_8 = vlSelf->__PVT__count_7;
                vlSelf->__PVT__count_7 = vlSelf->__PVT__count_6;
                vlSelf->__PVT__count_6 = vlSelf->__PVT__count_5;
                vlSelf->__PVT__count_5 = vlSelf->__PVT__count_4;
                vlSelf->__PVT__count_4 = vlSelf->__PVT__count_3;
                vlSelf->__PVT__count_3 = vlSelf->__PVT__count_1;
            }
        } else {
            vlSelf->__PVT__count_10 = 0U;
            vlSelf->__PVT__count_9 = 0U;
            vlSelf->__PVT__count_8 = 0U;
            vlSelf->__PVT__count_7 = 0U;
            vlSelf->__PVT__count_6 = 0U;
            vlSelf->__PVT__count_5 = 0U;
            vlSelf->__PVT__count_4 = 0U;
            vlSelf->__PVT__count_3 = 0U;
        }
        if ((1U & ((7U != (IData)(vlSelf->__PVT__count)) 
                   | (~ (IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))))) {
            vlSelf->__PVT__count_1 = 0U;
        } else if ((7U == (IData)(vlSelf->__PVT__count))) {
            vlSelf->__PVT__count_1 = 1U;
        }
    }
    vlSelf->__PVT__enable_1 = ((~ (IData)(vlSymsp->TOP.rst)) 
                               & (IData)(vlSymsp->TOP.jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable));
    vlSelf->__PVT__count_of = vlSelf->__Vdly__count_of;
    vlSelf->__VdfgTmp_hce342946__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_21 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z21 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h699ee612__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_11 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z11 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h6bf621ff__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_12 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z12 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hd39562e0__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_13 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z13 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hef2ddb0f__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_22 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z22 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h300f26d1__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_31 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z31 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_ha424e38f__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_41 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z41 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h307c1d20__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_32 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z32 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h23bcb6bc__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_23 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z23 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h3abfe17c__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_14 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z14 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_he28f448c__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_15 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z15 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h621d0158__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_24 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z24 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h700c1868__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_33 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z33 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h4654ba34__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_42 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z42 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_ha9438fba__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_51 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z51 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_ha6501694__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_61 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z61 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h1f227ebf__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_52 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z52 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h0946b41d__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_43 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z43 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h8c7cdff7__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_34 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z34 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h35ee00a9__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_25 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z25 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h7e6e7e39__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_16 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z16 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h96069007__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_17 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z17 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hb24a7a86__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_26 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z26 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h94fb066c__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_35 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z35 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hf53972fa__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_44 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z44 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h25a87421__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_53 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z53 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hc82d2471__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_62 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z62 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hef99de00__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_71 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z71 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h633550a1__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_81 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z81 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hc7d640c2__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_72 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z72 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_ha717ac09__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_63 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z63 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h41ed2fcc__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_54 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z54 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_heae241ce__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_45 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z45 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h2e4ddfd6__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_36 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z36 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h9e289d25__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_27 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z27 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h51103576__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_18 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z18 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h38ed95f5__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_28 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z28 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h873ee2d3__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_37 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z37 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hf18e7547__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_46 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z46 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h501429e8__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_55 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z55 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h2668dbcd__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_64 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z64 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_ha7987387__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_73 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z73 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hbcf90ff7__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_82 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z82 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_he4b9ffc1__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_83 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z83 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hb987e504__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_74 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z74 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h13ce23bf__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_65 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z65 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h4ae5c0ab__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_56 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z56 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hf4a06db6__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_47 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z47 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h4da3985d__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_38 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z38 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h3d945834__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_48 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z48 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h442feb81__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_57 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z57 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h4806d930__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_66 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z66 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h3dcea630__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_75 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z75 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h09144a94__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_84 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z84 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h1be71dd9__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_85 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z85 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_he00a17c5__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_76 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z76 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hcd8ccebf__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_67 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z67 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h82fafc00__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_58 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z58 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h6391e70a__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_68 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z68 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hc13b2cb3__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_77 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z77 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h59f571be__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_86 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z86 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h785c1f33__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_87 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z87 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_hfb8a0050__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_78 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z78 
                                                     >> 0xdU))));
    vlSelf->__VdfgTmp_h3c7528a8__0 = (0x7fffU & ((0x3fffU 
                                                  & (vlSelf->__PVT__Z_temp_88 
                                                     >> 0xdU)) 
                                                 + 
                                                 (0x3fffU 
                                                  & (vlSelf->__PVT__Z88 
                                                     >> 0xdU))));
    vlSelf->__PVT__count = vlSelf->__Vdly__count;
}
