// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_eta1_8_LOBA2_4.h for the primary calling header

#include "verilated.h"

#include "sub___024root.h"

VL_INLINE_OPT void sub___024root___act_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc76a3f5c__0;
    // Body
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD 
        = ((0x80U & ((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product))) 
           | (0x7fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD) 
                       >> 1U)));
    jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc76a3f5c__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD) 
                  >> 7U) | (0x7fffU & (((IData)(1U) 
                                        + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product)) 
                                       >> 7U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc76e2709__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD) 
                  >> 6U) | (0xffffU & (((IData)(1U) 
                                        + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product)) 
                                       >> 6U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc6939106__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD) 
                  >> 5U) | (0x1ffffU & (((IData)(1U) 
                                         + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product)) 
                                        >> 5U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc697b9d3__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD) 
                  >> 4U) | (0x3ffffU & (((IData)(1U) 
                                         + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product)) 
                                        >> 4U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc69a705b__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD) 
                  >> 3U) | (0x7ffffU & (((IData)(1U) 
                                         + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product)) 
                                        >> 3U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc69e38ae__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD) 
                  >> 2U) | (0xfffffU & (((IData)(1U) 
                                         + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product)) 
                                        >> 2U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc6c42181__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD) 
                  >> 1U) | (0x1fffffU & (((IData)(1U) 
                                          + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product)) 
                                         >> 1U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc6c108f4__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u3__DOT__genblk1__DOT__SET_CMD) 
                 | ((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hbd9f5bef__0 
        = (1U & ((IData)(jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc76a3f5c__0) 
                 ^ (0x7fffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)) 
                               >> 7U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hbaacdb2f__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc76e2709__0) 
                 ^ (0xffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)) 
                               >> 6U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_he168e7c6__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc6939106__0) 
                 ^ (0x1ffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)) 
                                >> 5U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_he1c83959__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc697b9d3__0) 
                 ^ (0x3ffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)) 
                                >> 4U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_he1bff56f__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc69a705b__0) 
                 ^ (0x7ffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)) 
                                >> 3U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hec611698__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc69e38ae__0) 
                 ^ (0xfffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)) 
                                >> 2U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_h99057765__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc6c42181__0) 
                 ^ (0x1fffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)) 
                                 >> 1U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_h969f8589__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc6c108f4__0) 
                 ^ ((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product))));
}

VL_INLINE_OPT void sub___024root___act_sequent__TOP__1(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___act_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc76a3f5c__0;
    // Body
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD 
        = ((0x80U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product) 
           | (0x7fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD) 
                       >> 1U)));
    jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc76a3f5c__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD) 
                  | vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product) 
                 >> 7U));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc76e2709__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD) 
                  | vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product) 
                 >> 6U));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc6939106__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD) 
                  | vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product) 
                 >> 5U));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc697b9d3__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD) 
                  | vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product) 
                 >> 4U));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc69a705b__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD) 
                  | vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product) 
                 >> 3U));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc69e38ae__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD) 
                  | vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product) 
                 >> 2U));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc6c42181__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD) 
                  | vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product) 
                 >> 1U));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc6c108f4__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u6__DOT__genblk1__DOT__SET_CMD) 
                 | vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hbd9f5bef__0 
        = (1U & ((IData)(jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc76a3f5c__0) 
                 ^ (0xffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)) 
                               >> 7U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hbaacdb2f__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc76e2709__0) 
                 ^ (0x1ffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)) 
                                >> 6U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_he168e7c6__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc6939106__0) 
                 ^ (0x3ffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)) 
                                >> 5U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_he1c83959__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc697b9d3__0) 
                 ^ (0x7ffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)) 
                                >> 4U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_he1bff56f__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc69a705b__0) 
                 ^ (0xfffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)) 
                                >> 3U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hec611698__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc69e38ae__0) 
                 ^ (0x1fffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)) 
                                 >> 2U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_h99057765__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc6c42181__0) 
                 ^ (0x3fffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)) 
                                 >> 1U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_h969f8589__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc6c108f4__0) 
                 ^ ((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product))));
}

VL_INLINE_OPT void sub___024root___act_comb__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc76a3f5c__0;
    CData/*31:0*/ __Vtemp_h252b51ef__0;
    // Body
    __Vtemp_h252b51ef__0 = (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hbd9f5bef__0) 
                             << 7U) | (0x7fU & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD) 
                                                 >> 1U) 
                                                | ((0x3fffc0U 
                                                    & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc76e2709__0) 
                                                        << 6U) 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)))) 
                                                   | ((0x3fffe0U 
                                                       & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc6939106__0) 
                                                           << 5U) 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)))) 
                                                      | ((0x3ffff0U 
                                                          & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc697b9d3__0) 
                                                              << 4U) 
                                                             & ((IData)(1U) 
                                                                + 
                                                                (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)))) 
                                                         | ((0x3ffff8U 
                                                             & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc69a705b__0) 
                                                                 << 3U) 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)))) 
                                                            | ((0x3ffffcU 
                                                                & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc69e38ae__0) 
                                                                    << 2U) 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)))) 
                                                               | ((0x3ffffeU 
                                                                   & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc6c42181__0) 
                                                                       << 1U) 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product)))) 
                                                                  | ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hc6c108f4__0) 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product))))))))))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD 
        = __Vtemp_h252b51ef__0;
    jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc76a3f5c__0 
        = (IData)((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD) 
                    >> 7U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hbd9f5bef__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc76e2709__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD) 
                  >> 6U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hbaacdb2f__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc6939106__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD) 
                  >> 5U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_he168e7c6__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc697b9d3__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD) 
                  >> 4U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_he1c83959__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc69a705b__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD) 
                  >> 3U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_he1bff56f__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc69e38ae__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD) 
                  >> 2U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_hec611698__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc6c42181__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD) 
                  >> 1U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_h99057765__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc6c108f4__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT__genblk1__DOT__SET_CMD) 
                 | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u4__DOT____VdfgTmp_h969f8589__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hbd9f5bef__0 
        = (1U & ((IData)(jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc76a3f5c__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product 
                    >> 7U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hbaacdb2f__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc76e2709__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product 
                    >> 6U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_he168e7c6__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc6939106__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product 
                    >> 5U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_he1c83959__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc697b9d3__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product 
                    >> 4U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_he1bff56f__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc69a705b__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product 
                    >> 3U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hec611698__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc69e38ae__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product 
                    >> 2U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_h99057765__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc6c42181__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product 
                    >> 1U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_h969f8589__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc6c108f4__0) 
                 ^ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product));
}

VL_INLINE_OPT void sub___024root___act_comb__TOP__1(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc76a3f5c__0;
    CData/*31:0*/ __Vtemp_h60435408__0;
    // Body
    __Vtemp_h60435408__0 = (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hbd9f5bef__0) 
                             << 7U) | (0x7fU & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD) 
                                                 >> 1U) 
                                                | ((0x7fffc0U 
                                                    & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc76e2709__0) 
                                                        << 6U) 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)))) 
                                                   | ((0x7fffe0U 
                                                       & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc6939106__0) 
                                                           << 5U) 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)))) 
                                                      | ((0x7ffff0U 
                                                          & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc697b9d3__0) 
                                                              << 4U) 
                                                             & ((IData)(1U) 
                                                                + 
                                                                (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)))) 
                                                         | ((0x7ffff8U 
                                                             & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc69a705b__0) 
                                                                 << 3U) 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)))) 
                                                            | ((0x7ffffcU 
                                                                & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc69e38ae__0) 
                                                                    << 2U) 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)))) 
                                                               | ((0x7ffffeU 
                                                                   & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc6c42181__0) 
                                                                       << 1U) 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product)))) 
                                                                  | ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hc6c108f4__0) 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product))))))))))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD 
        = __Vtemp_h60435408__0;
    jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc76a3f5c__0 
        = (IData)((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD) 
                    >> 7U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hbd9f5bef__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc76e2709__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD) 
                  >> 6U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hbaacdb2f__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc6939106__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD) 
                  >> 5U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_he168e7c6__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc697b9d3__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD) 
                  >> 4U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_he1c83959__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc69a705b__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD) 
                  >> 3U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_he1bff56f__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc69e38ae__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD) 
                  >> 2U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_hec611698__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc6c42181__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD) 
                  >> 1U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_h99057765__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc6c108f4__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT__genblk1__DOT__SET_CMD) 
                 | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u7__DOT____VdfgTmp_h969f8589__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hbd9f5bef__0 
        = (1U & ((IData)(jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc76a3f5c__0) 
                 ^ (0xffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)) 
                               >> 7U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hbaacdb2f__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc76e2709__0) 
                 ^ (0x1ffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)) 
                                >> 6U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_he168e7c6__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc6939106__0) 
                 ^ (0x3ffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)) 
                                >> 5U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_he1c83959__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc697b9d3__0) 
                 ^ (0x7ffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)) 
                                >> 4U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_he1bff56f__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc69a705b__0) 
                 ^ (0xfffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)) 
                                >> 3U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hec611698__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc69e38ae__0) 
                 ^ (0x1fffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)) 
                                 >> 2U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_h99057765__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc6c42181__0) 
                 ^ (0x3fffffU & (((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)) 
                                 >> 1U))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_h969f8589__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc6c108f4__0) 
                 ^ ((IData)(1U) + (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product))));
}

VL_INLINE_OPT void sub___024root___act_sequent__TOP__2(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___act_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc76a3f5c__0;
    // Body
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc76e2709__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD) 
                  >> 6U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT____VdfgTmp_hbaacdb2f__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc6939106__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD) 
                  >> 5U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT____VdfgTmp_he168e7c6__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc697b9d3__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD) 
                  >> 4U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT____VdfgTmp_he1c83959__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc69a705b__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD) 
                  >> 3U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT____VdfgTmp_he1bff56f__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc69e38ae__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD) 
                  >> 2U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT____VdfgTmp_hec611698__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc6c42181__0 
        = (1U & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD) 
                  >> 1U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT____VdfgTmp_h99057765__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc6c108f4__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD) 
                 | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT____VdfgTmp_h969f8589__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD 
        = (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT____VdfgTmp_hbd9f5bef__0) 
            << 7U) | (0x7fU & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD) 
                                >> 1U) | (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y1_product 
                                          & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y2_product))));
    jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc76a3f5c__0 
        = (IData)((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT__genblk1__DOT__SET_CMD) 
                    >> 7U) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u1__DOT____VdfgTmp_hbd9f5bef__0)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hbaacdb2f__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc76e2709__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product 
                    >> 6U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_he168e7c6__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc6939106__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product 
                    >> 5U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_he1c83959__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc697b9d3__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product 
                    >> 4U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_he1bff56f__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc69a705b__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product 
                    >> 3U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hec611698__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc69e38ae__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product 
                    >> 2U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_h99057765__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc6c42181__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product 
                    >> 1U)));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_h969f8589__0 
        = (1U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc6c108f4__0) 
                 ^ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hbd9f5bef__0 
        = (1U & ((IData)(jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc76a3f5c__0) 
                 ^ (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product 
                    >> 7U)));
}

VL_INLINE_OPT void sub___024root___act_comb__TOP__2(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT__genblk1__DOT__SET_CMD 
        = (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hbd9f5bef__0) 
            << 7U) | (0x7fU & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT__genblk1__DOT__SET_CMD) 
                                >> 1U) | ((0xffffffc0U 
                                           & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc76e2709__0) 
                                               << 6U) 
                                              & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product)) 
                                          | ((0xffffffe0U 
                                              & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc6939106__0) 
                                                  << 5U) 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product)) 
                                             | ((0xfffffff0U 
                                                 & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc697b9d3__0) 
                                                     << 4U) 
                                                    & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product)) 
                                                | ((0xfffffff8U 
                                                    & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc69a705b__0) 
                                                        << 3U) 
                                                       & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product)) 
                                                   | ((0xfffffffcU 
                                                       & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc69e38ae__0) 
                                                           << 2U) 
                                                          & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product)) 
                                                      | ((0xfffffffeU 
                                                          & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc6c42181__0) 
                                                              << 1U) 
                                                             & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product)) 
                                                         | ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u5__DOT____VdfgTmp_hc6c108f4__0) 
                                                            & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product))))))))));
}

VL_INLINE_OPT void sub___024root___act_comb__TOP__3(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___act_comb__TOP__3\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hf26359c8__0;
    // Body
    __Vtemp_hf26359c8__0 = (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hbd9f5bef__0) 
                             << 7U) | (0x7fU & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT__genblk1__DOT__SET_CMD) 
                                                 >> 1U) 
                                                | ((0x7fffc0U 
                                                    & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc76e2709__0) 
                                                        << 6U) 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)))) 
                                                   | ((0x7fffe0U 
                                                       & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc6939106__0) 
                                                           << 5U) 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)))) 
                                                      | ((0x7ffff0U 
                                                          & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc697b9d3__0) 
                                                              << 4U) 
                                                             & ((IData)(1U) 
                                                                + 
                                                                (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)))) 
                                                         | ((0x7ffff8U 
                                                             & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc69a705b__0) 
                                                                 << 3U) 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)))) 
                                                            | ((0x7ffffcU 
                                                                & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc69e38ae__0) 
                                                                    << 2U) 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)))) 
                                                               | ((0x7ffffeU 
                                                                   & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc6c42181__0) 
                                                                       << 1U) 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product)))) 
                                                                  | ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT____VdfgTmp_hc6c108f4__0) 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (~ vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product))))))))))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u8__DOT__genblk1__DOT__SET_CMD 
        = __Vtemp_hf26359c8__0;
}

VL_INLINE_OPT void sub___024root___act_comb__TOP__4(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT__genblk1__DOT__SET_CMD 
        = (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hbd9f5bef__0) 
            << 7U) | (0x7fU & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT__genblk1__DOT__SET_CMD) 
                                >> 1U) | ((0xffffffc0U 
                                           & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc76e2709__0) 
                                               << 6U) 
                                              & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product)) 
                                          | ((0xffffffe0U 
                                              & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc6939106__0) 
                                                  << 5U) 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product)) 
                                             | ((0xfffffff0U 
                                                 & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc697b9d3__0) 
                                                     << 4U) 
                                                    & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product)) 
                                                | ((0xfffffff8U 
                                                    & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc69a705b__0) 
                                                        << 3U) 
                                                       & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product)) 
                                                   | ((0xfffffffcU 
                                                       & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc69e38ae__0) 
                                                           << 2U) 
                                                          & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product)) 
                                                      | ((0xfffffffeU 
                                                          & (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc6c42181__0) 
                                                              << 1U) 
                                                             & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product)) 
                                                         | ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__u2__DOT____VdfgTmp_hc6c108f4__0) 
                                                            & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product))))))))));
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__4(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__enable_2));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__enable_2 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__enable_1));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__enable_1 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->enable));
}

void sub___024root___eval_triggers__ico(sub___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__ico(sub___024root* vlSelf);
#endif  // VL_DEBUG
void sub___024root___eval_ico(sub___024root* vlSelf);
void sub___024root___eval_triggers__act(sub___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf);
#endif  // VL_DEBUG
void sub___024root___eval_act(sub___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__nba(sub___024root* vlSelf);
#endif  // VL_DEBUG
void sub___024root___eval_nba(sub___024root* vlSelf);

void sub___024root___eval(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<243> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        sub___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if ((0x64U < vlSelf->__VicoIterCount)) {
#ifdef VL_DEBUG
                sub___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("results_b/jpeg_top_eta1_8_LOBA2_4/rtl/jpeg_top.v", 50, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            sub___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            sub___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if ((0x64U < vlSelf->__VactIterCount)) {
#ifdef VL_DEBUG
                    sub___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("results_b/jpeg_top_eta1_8_LOBA2_4/rtl/jpeg_top.v", 50, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                sub___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if ((0x64U < __VnbaIterCount)) {
#ifdef VL_DEBUG
                sub___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("results_b/jpeg_top_eta1_8_LOBA2_4/rtl/jpeg_top.v", 50, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            sub___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void sub___024root___eval_debug_assertions(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->end_of_file_signal & 0xfeU))) {
        Verilated::overWidthError("end_of_file_signal");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((vlSelf->data_in & 0xff000000U))) {
        Verilated::overWidthError("data_in");}
}
#endif  // VL_DEBUG
