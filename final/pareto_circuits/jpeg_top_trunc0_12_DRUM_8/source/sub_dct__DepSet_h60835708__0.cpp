// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc0_12_DRUM_8.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc0_12_DRUM_8__Syms.h"
#include "sub_dct.h"

VL_INLINE_OPT void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1(sub_dct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc0_12_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            vlSelf->__PVT__Z21 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h392734fe__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z11 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h6e9bbc28__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z12 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h68fe8c47__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z13 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hdcb347c0__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z22 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h9495f437__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z31 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h33f3f859__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z41 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_ha7331f0f__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z32 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hc750b5fa__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z23 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h248e883e__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z14 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h37fa126a__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z15 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hb75a01fc__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z24 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h652a99b8__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z33 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h0b7dd282__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z42 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h53805d32__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z51 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h767de872__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z61 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h5b49cd8a__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z52 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h1ee81097__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z43 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h0c466a1f__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z34 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h9385f441__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z25 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h00f78acb__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z16 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h40cbdc71__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z17 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h962c433f__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z26 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hbdfb1890__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z35 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h98f933e4__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z44 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hc028f072__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z53 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h71d89aeb__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z62 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hf375aeab__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z71 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hec69649a__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z81 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h1ee4ce71__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z72 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hcefb1a5a__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z63 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h5c6506e7__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z54 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h44f245b4__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z45 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h4579bb76__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z36 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h3b8cd846__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z27 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h9b771323__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z18 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h501d22c6__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z28 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h31a044fd__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z37 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hb3f72921__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z46 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hf2adfe0d__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z55 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h500f6cc6__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z64 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hf9238cfd__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z73 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_ha800273f__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z82 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hbbc98315__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z83 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_he555ca8b__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z74 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hb282e512__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z65 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h2a0dbea9__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z56 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h4129b7d9__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z47 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hfde848de__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z38 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h50f5bad7__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z48 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h3dfe6262__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z57 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h4478dac1__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z66 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h83a136c8__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z75 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h3b247ba8__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z84 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h1610fc92__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z85 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h1c80a867__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z76 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_he4a0b2ab__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z67 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hcb7fab77__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z58 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h5cf5a080__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z68 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hbe23f29a__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z77 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hc4eae243__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z86 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h64c8172e__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z87 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h657cf3eb__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z78 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_hf04b4d1e__0) 
                                                << 0xcU));
            vlSelf->__PVT__Z88 = (0x7fff000U & ((IData)(vlSelf->__VdfgTmp_h3b6a3ed2__0) 
                                                << 0xcU));
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
    vlSelf->__VdfgTmp_h392734fe__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_21 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z21 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h6e9bbc28__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_11 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z11 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h68fe8c47__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_12 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z12 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hdcb347c0__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_13 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z13 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h9495f437__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_22 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z22 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h33f3f859__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_31 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z31 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_ha7331f0f__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_41 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z41 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hc750b5fa__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_32 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z32 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h248e883e__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_23 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z23 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h37fa126a__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_14 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z14 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hb75a01fc__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_15 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z15 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h652a99b8__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_24 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z24 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h0b7dd282__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_33 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z33 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h53805d32__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_42 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z42 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h767de872__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_51 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z51 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h5b49cd8a__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_61 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z61 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h1ee81097__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_52 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z52 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h0c466a1f__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_43 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z43 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h9385f441__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_34 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z34 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h00f78acb__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_25 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z25 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h40cbdc71__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_16 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z16 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h962c433f__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_17 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z17 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hbdfb1890__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_26 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z26 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h98f933e4__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_35 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z35 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hc028f072__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_44 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z44 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h71d89aeb__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_53 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z53 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hf375aeab__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_62 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z62 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hec69649a__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_71 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z71 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h1ee4ce71__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_81 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z81 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hcefb1a5a__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_72 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z72 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h5c6506e7__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_63 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z63 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h44f245b4__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_54 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z54 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h4579bb76__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_45 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z45 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h3b8cd846__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_36 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z36 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h9b771323__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_27 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z27 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h501d22c6__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_18 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z18 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h31a044fd__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_28 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z28 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hb3f72921__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_37 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z37 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hf2adfe0d__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_46 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z46 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h500f6cc6__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_55 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z55 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hf9238cfd__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_64 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z64 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_ha800273f__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_73 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z73 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hbbc98315__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_82 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z82 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_he555ca8b__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_83 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z83 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hb282e512__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_74 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z74 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h2a0dbea9__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_65 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z65 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h4129b7d9__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_56 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z56 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hfde848de__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_47 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z47 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h50f5bad7__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_38 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z38 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h3dfe6262__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_48 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z48 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h4478dac1__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_57 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z57 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h83a136c8__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_66 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z66 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h3b247ba8__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_75 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z75 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h1610fc92__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_84 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z84 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h1c80a867__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_85 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z85 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_he4a0b2ab__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_76 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z76 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hcb7fab77__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_67 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z67 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h5cf5a080__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_58 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z58 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hbe23f29a__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_68 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z68 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hc4eae243__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_77 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z77 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h64c8172e__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_86 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z86 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h657cf3eb__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_87 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z87 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_hf04b4d1e__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_78 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z78 
                                                     >> 0xcU))));
    vlSelf->__VdfgTmp_h3b6a3ed2__0 = (0xffffU & ((0x7fffU 
                                                  & (vlSelf->__PVT__Z_temp_88 
                                                     >> 0xcU)) 
                                                 + 
                                                 (0x7fffU 
                                                  & (vlSelf->__PVT__Z88 
                                                     >> 0xcU))));
    vlSelf->__PVT__count = vlSelf->__Vdly__count;
}
