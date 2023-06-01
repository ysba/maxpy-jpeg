// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top.h for the primary calling header

#include "verilated.h"

#include "jpeg_top__Syms.h"
#include "sub___024root.h"

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__2(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->jpeg_top__DOT__u19__DOT__enable_1 = ((~ (IData)(vlSelf->rst)) 
                                                 & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__end_of_block_output));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr37_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb37_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb37_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb37_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y37_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y37_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y37_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__end_of_block_output = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_msb = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.out_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr37_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q73) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q75)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q82) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q82;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q82) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q84)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q83) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q83;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q83) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q85)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q74) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q74;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q74) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q76)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q65) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q65;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q65) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q67)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q56) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q56;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q56) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q58)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q47) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q47;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q47) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q68)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q38) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q38;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q38) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q77)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q48) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q48;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q48) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q86)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q57) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q57;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q57) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q87)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q66) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q66;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q66) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q78)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q75) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q75;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q75) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q88)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q84) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q84;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q84) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q85) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q85;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q85) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q76) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q76;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q76) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q67) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q67;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q67) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q58) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q58;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q58) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q68) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q68;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q68) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q77) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q77;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q77) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q86) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q86;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q86) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q87) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q87;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q87) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q78) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q78;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q78) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q88) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q88;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.Q88) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module = 1U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr37_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_et_zero = 1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_neg = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_pos = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_msb = 0U;
        }
        if (vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.out_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb37_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q73) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb37_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q73;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb37_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q73) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q75)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q82) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q82;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q82) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q84)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q83) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q83;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q83) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q85)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q74) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q74;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q74) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q76)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q65) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q65;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q65) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q67)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q56) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q56;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q56) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q58)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q47) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q47;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q47) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q68)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q38) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q38;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q38) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q77)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q48) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q48;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q48) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q86)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q57) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q57;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q57) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q87)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q66) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q66;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q66) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q78)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q75) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q75;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q75) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q88)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q84) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q84;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q84) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q85) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q85;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q85) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q76) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q76;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q76) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q67) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q67;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q67) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q58) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q58;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q58) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q68) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q68;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q68) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q77) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q77;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q77) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q86) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q86;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q86) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q87) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q87;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q87) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q78) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q78;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q78) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q88) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q88;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.Q88) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module = 1U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb37_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb37_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb37_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_et_zero = 1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_neg = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_pos = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_msb = 0U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__end_of_block_output 
                = (0x4dU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter));
        }
        if (vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.out_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y37_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q73) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y37_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q73;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y37_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q73) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q75)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q82) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q82;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q82) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q84)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q83) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q83;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q83) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q85)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q74) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q74;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q74) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q76)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q65) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q65;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q65) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q67)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q56) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q56;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q56) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q58)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q47) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q47;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q47) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q68)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q38) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q38;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q38) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q77)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q48) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q48;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q48) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q86)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q57) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q57;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q57) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q87)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q66) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q66;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q66) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q78)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q75) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q75;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q75) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q88)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q84) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q84;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q84) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q85) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q85;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q85) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q76) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q76;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q76) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q67) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q67;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q67) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q58) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q58;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q58) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q68) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q68;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q68) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q77) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q77;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q77) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q86) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q86;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q86) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q87) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q87;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q87) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q78) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q78;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q78) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_neg 
                = (0x7ffU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q88) 
                             - (IData)(1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_pos 
                = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q88;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_msb 
                = (1U & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.Q88) 
                         >> 0xaU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module = 1U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y37_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y37_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y37_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_et_zero = 1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_neg 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_neg;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_pos 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_pos;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_msb 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_msb;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_neg = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_pos = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_msb = 0U;
        }
    }
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter 
        = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter;
}

void sub___024root___nba_sequent__TOP__0(sub___024root* vlSelf);
void sub___024root___nba_sequent__TOP__1(sub___024root* vlSelf);
void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__0(sub_dct* vlSelf);
void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__0(sub_dct* vlSelf);
void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__0(sub_dct* vlSelf);
void sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__0(sub_quantizer* vlSelf);
void sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__0(sub_quantizer* vlSelf);
void sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2__0(sub_quantizer* vlSelf);
void sub___024root___nba_sequent__TOP__3(sub___024root* vlSelf);
void sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1(sub_dct* vlSelf);
void sub___024root___nba_sequent__TOP__4(sub___024root* vlSelf);

void sub___024root___eval_nba(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        sub___024root___nba_sequent__TOP__0(vlSelf);
        sub___024root___nba_sequent__TOP__1(vlSelf);
        sub___024root___nba_sequent__TOP__2(vlSelf);
        sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__0((&vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8));
        sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__0((&vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5));
        sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__0((&vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1));
        sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__0((&vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9));
        sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6__0((&vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6));
        sub_quantizer___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2__0((&vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2));
        sub___024root___nba_sequent__TOP__3(vlSelf);
        sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1((&vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8));
        sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1((&vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5));
        sub_dct___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__1((&vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1));
        sub___024root___nba_sequent__TOP__4(vlSelf);
    }
}
