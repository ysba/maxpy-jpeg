// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc1_9_DRUM_8.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc1_9_DRUM_8__Syms.h"
#include "sub_dct.h"

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_9_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            vlSelf->__PVT__Z21 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hc490a8a4__0 
                                               << 9U)));
            vlSelf->__PVT__Z11 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h82ae5820__0 
                                               << 9U)));
            vlSelf->__PVT__Z12 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h2ba8e1bf__0 
                                               << 9U)));
            vlSelf->__PVT__Z13 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hee7f5940__0 
                                               << 9U)));
            vlSelf->__PVT__Z22 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hf2526520__0 
                                               << 9U)));
            vlSelf->__PVT__Z31 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h774fd7de__0 
                                               << 9U)));
            vlSelf->__PVT__Z41 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h823a02e5__0 
                                               << 9U)));
            vlSelf->__PVT__Z32 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h2c147f2c__0 
                                               << 9U)));
            vlSelf->__PVT__Z23 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h0ae85294__0 
                                               << 9U)));
            vlSelf->__PVT__Z14 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h1860e17b__0 
                                               << 9U)));
            vlSelf->__PVT__Z15 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hd3e173d8__0 
                                               << 9U)));
            vlSelf->__PVT__Z24 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h65498f8c__0 
                                               << 9U)));
            vlSelf->__PVT__Z33 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h145a2984__0 
                                               << 9U)));
            vlSelf->__PVT__Z42 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h596a6257__0 
                                               << 9U)));
            vlSelf->__PVT__Z51 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h9c5c722a__0 
                                               << 9U)));
            vlSelf->__PVT__Z61 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h6a8f227e__0 
                                               << 9U)));
            vlSelf->__PVT__Z52 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hea51f4d1__0 
                                               << 9U)));
            vlSelf->__PVT__Z43 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h303c8bf7__0 
                                               << 9U)));
            vlSelf->__PVT__Z34 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hb1975a95__0 
                                               << 9U)));
            vlSelf->__PVT__Z25 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h60236feb__0 
                                               << 9U)));
            vlSelf->__PVT__Z16 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h73d385d7__0 
                                               << 9U)));
            vlSelf->__PVT__Z17 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h91c1d9f1__0 
                                               << 9U)));
            vlSelf->__PVT__Z26 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h6cbab126__0 
                                               << 9U)));
            vlSelf->__PVT__Z35 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h93c21162__0 
                                               << 9U)));
            vlSelf->__PVT__Z44 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hfbd99ba4__0 
                                               << 9U)));
            vlSelf->__PVT__Z53 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h1ddb316b__0 
                                               << 9U)));
            vlSelf->__PVT__Z62 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hc380d25f__0 
                                               << 9U)));
            vlSelf->__PVT__Z71 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_haab94fd0__0 
                                               << 9U)));
            vlSelf->__PVT__Z81 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h6fe5e7c7__0 
                                               << 9U)));
            vlSelf->__PVT__Z72 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hd22707f6__0 
                                               << 9U)));
            vlSelf->__PVT__Z63 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hb9d944ce__0 
                                               << 9U)));
            vlSelf->__PVT__Z54 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h4edee46c__0 
                                               << 9U)));
            vlSelf->__PVT__Z45 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h21ea27ea__0 
                                               << 9U)));
            vlSelf->__PVT__Z36 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h3333df9e__0 
                                               << 9U)));
            vlSelf->__PVT__Z27 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h99f1518d__0 
                                               << 9U)));
            vlSelf->__PVT__Z18 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_ha466835a__0 
                                               << 9U)));
            vlSelf->__PVT__Z28 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h2dd97361__0 
                                               << 9U)));
            vlSelf->__PVT__Z37 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h8e6271a0__0 
                                               << 9U)));
            vlSelf->__PVT__Z46 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h25286244__0 
                                               << 9U)));
            vlSelf->__PVT__Z55 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_ha8bd461b__0 
                                               << 9U)));
            vlSelf->__PVT__Z64 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hcace26be__0 
                                               << 9U)));
            vlSelf->__PVT__Z73 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_habf7fa85__0 
                                               << 9U)));
            vlSelf->__PVT__Z82 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hd13c88c0__0 
                                               << 9U)));
            vlSelf->__PVT__Z83 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_he378ab2f__0 
                                               << 9U)));
            vlSelf->__PVT__Z74 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hb1008253__0 
                                               << 9U)));
            vlSelf->__PVT__Z65 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h0c8ca029__0 
                                               << 9U)));
            vlSelf->__PVT__Z56 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h25f07c53__0 
                                               << 9U)));
            vlSelf->__PVT__Z47 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hf10f1742__0 
                                               << 9U)));
            vlSelf->__PVT__Z38 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h41f65d33__0 
                                               << 9U)));
            vlSelf->__PVT__Z48 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h0ae25c77__0 
                                               << 9U)));
            vlSelf->__PVT__Z57 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h68bb9951__0 
                                               << 9U)));
            vlSelf->__PVT__Z66 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hff89479c__0 
                                               << 9U)));
            vlSelf->__PVT__Z75 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h3fa9f454__0 
                                               << 9U)));
            vlSelf->__PVT__Z84 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h0882aaca__0 
                                               << 9U)));
            vlSelf->__PVT__Z85 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h30922ee5__0 
                                               << 9U)));
            vlSelf->__PVT__Z76 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_he9d5fc6a__0 
                                               << 9U)));
            vlSelf->__PVT__Z67 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hc3e51ed4__0 
                                               << 9U)));
            vlSelf->__PVT__Z58 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h12185318__0 
                                               << 9U)));
            vlSelf->__PVT__Z68 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h5a641026__0 
                                               << 9U)));
            vlSelf->__PVT__Z77 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hc5428598__0 
                                               << 9U)));
            vlSelf->__PVT__Z86 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h7c84fd95__0 
                                               << 9U)));
            vlSelf->__PVT__Z87 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h64636844__0 
                                               << 9U)));
            vlSelf->__PVT__Z78 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_hf690795e__0 
                                               << 9U)));
            vlSelf->__PVT__Z88 = (0x1ffU | (0x7fffe00U 
                                            & (vlSelf->__VdfgTmp_h31b10304__0 
                                               << 9U)));
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
    vlSelf->__VdfgTmp_hc490a8a4__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_21 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z21 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h82ae5820__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_11 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z11 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h2ba8e1bf__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_12 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z12 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hee7f5940__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_13 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z13 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hf2526520__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_22 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z22 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h774fd7de__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_31 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z31 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h823a02e5__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_41 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z41 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h2c147f2c__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_32 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z32 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h0ae85294__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_23 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z23 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h1860e17b__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_14 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z14 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hd3e173d8__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_15 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z15 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h65498f8c__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_24 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z24 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h145a2984__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_33 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z33 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h596a6257__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_42 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z42 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h9c5c722a__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_51 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z51 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h6a8f227e__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_61 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z61 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hea51f4d1__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_52 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z52 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h303c8bf7__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_43 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z43 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hb1975a95__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_34 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z34 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h60236feb__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_25 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z25 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h73d385d7__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_16 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z16 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h91c1d9f1__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_17 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z17 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h6cbab126__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_26 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z26 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h93c21162__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_35 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z35 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hfbd99ba4__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_44 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z44 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h1ddb316b__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_53 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z53 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hc380d25f__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_62 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z62 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_haab94fd0__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_71 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z71 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h6fe5e7c7__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_81 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z81 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hd22707f6__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_72 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z72 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hb9d944ce__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_63 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z63 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h4edee46c__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_54 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z54 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h21ea27ea__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_45 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z45 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h3333df9e__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_36 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z36 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h99f1518d__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_27 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z27 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_ha466835a__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_18 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z18 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h2dd97361__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_28 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z28 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h8e6271a0__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_37 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z37 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h25286244__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_46 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z46 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_ha8bd461b__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_55 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z55 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hcace26be__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_64 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z64 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_habf7fa85__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_73 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z73 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hd13c88c0__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_82 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z82 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_he378ab2f__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_83 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z83 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hb1008253__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_74 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z74 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h0c8ca029__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_65 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z65 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h25f07c53__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_56 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z56 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hf10f1742__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_47 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z47 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h41f65d33__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_38 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z38 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h0ae25c77__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_48 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z48 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h68bb9951__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_57 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z57 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hff89479c__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_66 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z66 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h3fa9f454__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_75 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z75 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h0882aaca__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_84 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z84 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h30922ee5__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_85 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z85 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_he9d5fc6a__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_76 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z76 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hc3e51ed4__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_67 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z67 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h12185318__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_58 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z58 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h5a641026__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_68 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z68 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hc5428598__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_77 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z77 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h7c84fd95__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_86 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z86 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h64636844__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_87 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z87 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_hf690795e__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_78 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z78 
                                                      >> 9U))));
    vlSelf->__VdfgTmp_h31b10304__0 = (0x7ffffU & ((0x3ffffU 
                                                   & (vlSelf->__PVT__Z_temp_88 
                                                      >> 9U)) 
                                                  + 
                                                  (0x3ffffU 
                                                   & (vlSelf->__PVT__Z88 
                                                      >> 9U))));
    vlSelf->__PVT__count = vlSelf->__Vdly__count;
}
