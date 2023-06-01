// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc1_12_DRUM_8.h for the primary calling header

#include "verilated.h"

#include "sub_DRUMs__K8.h"

VL_INLINE_OPT void sub_DRUMs__K8___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11__1(sub_DRUMs__K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K8___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11__1\n"); );
    // Body
    vlSelf->__PVT__r_temp = ((0xffffU & ((0xffU & (
                                                   (7U 
                                                    < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x81U 
                                                    | ((IData)(vlSelf->__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : vlSelf->__VdfgTmp_h738ccf79__0)) 
                                         * ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                             ? (0x81U 
                                                | ((IData)(vlSelf->__PVT__U1__DOT__m) 
                                                   << 1U))
                                             : 0U))) 
                             << (0x1fU & (((7U < (IData)(vlSelf->__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k1) 
                                                  - (IData)(7U)))
                                            : 0U) + 
                                          ((7U < (IData)(vlSelf->__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(vlSelf->__PVT__U1__DOT__k2) 
                                                  - (IData)(7U)))
                                            : 0U))));
}
