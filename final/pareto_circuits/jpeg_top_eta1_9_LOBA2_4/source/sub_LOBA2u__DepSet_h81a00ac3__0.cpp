// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_eta1_9_LOBA2_4.h for the primary calling header

#include "verilated.h"

#include "sub_LOBA2u.h"

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11__DOT__u1__1(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_9_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11__DOT__u1__1\n"); );
    // Body
    vlSelf->r = (((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                              + (IData)(vlSelf->__PVT__k1b)) 
                             - (IData)(6U))) ? (((IData)(vlSelf->__PVT__Ah) 
                                                 * (IData)(vlSelf->__PVT__Bh)) 
                                                << 
                                                (((IData)(vlSelf->__PVT__k1a) 
                                                  + (IData)(vlSelf->__PVT__k1b)) 
                                                 - (IData)(6U)))
                   : 0U) + (((0x1fU >= (((IData)(vlSelf->__PVT__k1a) 
                                         + (IData)(vlSelf->__PVT__k2b)) 
                                        - (IData)(6U)))
                              ? (((IData)(vlSelf->__PVT__Ah) 
                                  * (IData)(vlSelf->__PVT__Bl)) 
                                 << (((IData)(vlSelf->__PVT__k1a) 
                                      + (IData)(vlSelf->__PVT__k2b)) 
                                     - (IData)(6U)))
                              : 0U) + ((0x1fU >= (((IData)(vlSelf->__PVT__k2a) 
                                                   + (IData)(vlSelf->__PVT__k1b)) 
                                                  - (IData)(6U)))
                                        ? (((IData)(vlSelf->__PVT__Al) 
                                            * (IData)(vlSelf->__PVT__Bh)) 
                                           << (((IData)(vlSelf->__PVT__k2a) 
                                                + (IData)(vlSelf->__PVT__k1b)) 
                                               - (IData)(6U)))
                                        : 0U)));
}
