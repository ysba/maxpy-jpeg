// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc1_8_DRUM_8.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc1_8_DRUM_8__Syms.h"
#include "sub_dct.h"

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_8_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            vlSelf->__PVT__Z21 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hfacb1acd__0 
                                              << 8U)));
            vlSelf->__PVT__Z11 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h895eb57d__0 
                                              << 8U)));
            vlSelf->__PVT__Z12 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h5ca32564__0 
                                              << 8U)));
            vlSelf->__PVT__Z13 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_heb06cd7f__0 
                                              << 8U)));
            vlSelf->__PVT__Z22 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hf9439c84__0 
                                              << 8U)));
            vlSelf->__PVT__Z31 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h70954b96__0 
                                              << 8U)));
            vlSelf->__PVT__Z41 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_ha9e9ceee__0 
                                              << 8U)));
            vlSelf->__PVT__Z32 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h23caa823__0 
                                              << 8U)));
            vlSelf->__PVT__Z23 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h0531a5f9__0 
                                              << 8U)));
            vlSelf->__PVT__Z14 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h18cdc88b__0 
                                              << 8U)));
            vlSelf->__PVT__Z15 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hdcb74df7__0 
                                              << 8U)));
            vlSelf->__PVT__Z24 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h6baeb8f3__0 
                                              << 8U)));
            vlSelf->__PVT__Z33 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h146aafdb__0 
                                              << 8U)));
            vlSelf->__PVT__Z42 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h5a6bec27__0 
                                              << 8U)));
            vlSelf->__PVT__Z51 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h98896ff5__0 
                                              << 8U)));
            vlSelf->__PVT__Z61 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_ha2a14d4b__0 
                                              << 8U)));
            vlSelf->__PVT__Z52 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_he970161a__0 
                                              << 8U)));
            vlSelf->__PVT__Z43 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h377e60ba__0 
                                              << 8U)));
            vlSelf->__PVT__Z34 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h94552b1c__0 
                                              << 8U)));
            vlSelf->__PVT__Z25 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h6ceca4d6__0 
                                              << 8U)));
            vlSelf->__PVT__Z16 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h73488aa2__0 
                                              << 8U)));
            vlSelf->__PVT__Z17 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hcb3d4a88__0 
                                              << 8U)));
            vlSelf->__PVT__Z26 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h959c0293__0 
                                              << 8U)));
            vlSelf->__PVT__Z35 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_heb395003__0 
                                              << 8U)));
            vlSelf->__PVT__Z44 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hfac3ba4d__0 
                                              << 8U)));
            vlSelf->__PVT__Z53 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h7d996638__0 
                                              << 8U)));
            vlSelf->__PVT__Z62 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hc2a690ba__0 
                                              << 8U)));
            vlSelf->__PVT__Z71 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_haac2aea7__0 
                                              << 8U)));
            vlSelf->__PVT__Z81 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h690149e8__0 
                                              << 8U)));
            vlSelf->__PVT__Z72 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hc518a9df__0 
                                              << 8U)));
            vlSelf->__PVT__Z63 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h5ef203be__0 
                                              << 8U)));
            vlSelf->__PVT__Z54 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h4fbc99c5__0 
                                              << 8U)));
            vlSelf->__PVT__Z45 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h1c3485bb__0 
                                              << 8U)));
            vlSelf->__PVT__Z36 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h3231baf1__0 
                                              << 8U)));
            vlSelf->__PVT__Z27 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h914a6a8e__0 
                                              << 8U)));
            vlSelf->__PVT__Z18 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_ha5466a65__0 
                                              << 8U)));
            vlSelf->__PVT__Z28 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h7e687d86__0 
                                              << 8U)));
            vlSelf->__PVT__Z37 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h8907717c__0 
                                              << 8U)));
            vlSelf->__PVT__Z46 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h2c212360__0 
                                              << 8U)));
            vlSelf->__PVT__Z55 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_haba5e3fb__0 
                                              << 8U)));
            vlSelf->__PVT__Z64 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hcde3deee__0 
                                              << 8U)));
            vlSelf->__PVT__Z73 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hbcc67f14__0 
                                              << 8U)));
            vlSelf->__PVT__Z82 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_ha9bb193c__0 
                                              << 8U)));
            vlSelf->__PVT__Z83 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hea214d5c__0 
                                              << 8U)));
            vlSelf->__PVT__Z74 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hb994f223__0 
                                              << 8U)));
            vlSelf->__PVT__Z65 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_he6c7c370__0 
                                              << 8U)));
            vlSelf->__PVT__Z56 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h20a39bac__0 
                                              << 8U)));
            vlSelf->__PVT__Z47 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hf3382763__0 
                                              << 8U)));
            vlSelf->__PVT__Z38 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h54dabb16__0 
                                              << 8U)));
            vlSelf->__PVT__Z48 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h0fc09707__0 
                                              << 8U)));
            vlSelf->__PVT__Z57 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h6bbca96e__0 
                                              << 8U)));
            vlSelf->__PVT__Z66 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h8413b2f5__0 
                                              << 8U)));
            vlSelf->__PVT__Z75 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h29cc1ecb__0 
                                              << 8U)));
            vlSelf->__PVT__Z84 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h05a24e1f__0 
                                              << 8U)));
            vlSelf->__PVT__Z85 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h30665b1e__0 
                                              << 8U)));
            vlSelf->__PVT__Z76 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_heefb45da__0 
                                              << 8U)));
            vlSelf->__PVT__Z67 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h34f195a0__0 
                                              << 8U)));
            vlSelf->__PVT__Z58 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h45d93d79__0 
                                              << 8U)));
            vlSelf->__PVT__Z68 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hf33fbec9__0 
                                              << 8U)));
            vlSelf->__PVT__Z77 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hfff18c44__0 
                                              << 8U)));
            vlSelf->__PVT__Z86 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h6bd1c179__0 
                                              << 8U)));
            vlSelf->__PVT__Z87 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h712a86c8__0 
                                              << 8U)));
            vlSelf->__PVT__Z78 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_hf6be61eb__0 
                                              << 8U)));
            vlSelf->__PVT__Z88 = (0xffU | (0x7ffff00U 
                                           & (vlSelf->__VdfgTmp_h34db8e89__0 
                                              << 8U)));
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
    vlSelf->__VdfgTmp_hfacb1acd__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_21 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z21 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h895eb57d__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_11 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z11 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h5ca32564__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_12 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z12 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_heb06cd7f__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_13 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z13 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hf9439c84__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_22 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z22 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h70954b96__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_31 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z31 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_ha9e9ceee__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_41 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z41 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h23caa823__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_32 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z32 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h0531a5f9__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_23 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z23 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h18cdc88b__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_14 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z14 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hdcb74df7__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_15 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z15 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h6baeb8f3__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_24 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z24 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h146aafdb__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_33 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z33 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h5a6bec27__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_42 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z42 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h98896ff5__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_51 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z51 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_ha2a14d4b__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_61 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z61 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_he970161a__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_52 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z52 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h377e60ba__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_43 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z43 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h94552b1c__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_34 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z34 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h6ceca4d6__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_25 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z25 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h73488aa2__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_16 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z16 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hcb3d4a88__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_17 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z17 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h959c0293__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_26 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z26 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_heb395003__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_35 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z35 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hfac3ba4d__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_44 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z44 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h7d996638__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_53 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z53 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hc2a690ba__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_62 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z62 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_haac2aea7__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_71 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z71 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h690149e8__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_81 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z81 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hc518a9df__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_72 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z72 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h5ef203be__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_63 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z63 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h4fbc99c5__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_54 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z54 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h1c3485bb__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_45 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z45 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h3231baf1__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_36 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z36 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h914a6a8e__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_27 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z27 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_ha5466a65__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_18 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z18 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h7e687d86__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_28 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z28 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h8907717c__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_37 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z37 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h2c212360__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_46 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z46 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_haba5e3fb__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_55 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z55 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hcde3deee__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_64 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z64 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hbcc67f14__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_73 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z73 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_ha9bb193c__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_82 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z82 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hea214d5c__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_83 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z83 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hb994f223__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_74 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z74 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_he6c7c370__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_65 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z65 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h20a39bac__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_56 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z56 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hf3382763__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_47 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z47 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h54dabb16__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_38 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z38 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h0fc09707__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_48 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z48 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h6bbca96e__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_57 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z57 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h8413b2f5__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_66 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z66 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h29cc1ecb__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_75 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z75 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h05a24e1f__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_84 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z84 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h30665b1e__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_85 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z85 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_heefb45da__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_76 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z76 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h34f195a0__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_67 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z67 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h45d93d79__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_58 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z58 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hf33fbec9__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_68 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z68 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hfff18c44__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_77 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z77 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h6bd1c179__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_86 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z86 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h712a86c8__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_87 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z87 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_hf6be61eb__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_78 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z78 
                                                      >> 8U))));
    vlSelf->__VdfgTmp_h34db8e89__0 = (0xfffffU & ((0x7ffffU 
                                                   & (vlSelf->__PVT__Z_temp_88 
                                                      >> 8U)) 
                                                  + 
                                                  (0x7ffffU 
                                                   & (vlSelf->__PVT__Z88 
                                                      >> 8U))));
    vlSelf->__PVT__count = vlSelf->__Vdly__count;
}
