// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_loa_13_LOBA0_4.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_loa_13_LOBA0_4__Syms.h"
#include "sub_LOBA0u.h"

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u11__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u11__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u12__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u12__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u12__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u13__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u13__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u13__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u14__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u14__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u14__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u15__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u15__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u15__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u16__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u16__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u16__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u17__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u17__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u17__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u18__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u18__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u18__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u21__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u21__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u21__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u22__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u22__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u22__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u23__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u23__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u23__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u24__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u24__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u24__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u25__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u25__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u25__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u26__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u26__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u26__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u27__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u27__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u27__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u28__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u28__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u28__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u31__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u31__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u31__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u32__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u32__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u32__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u33__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u33__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u33__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u34__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u34__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u34__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u35__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u35__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u35__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u36__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u36__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u36__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u37__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u37__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u37__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u38__DOT__u1__0(sub_LOBA0u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_loa_13_LOBA0_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA0u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u38__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobh))) {
        vlSelf->__PVT__k1a = 3U;
    }
    vlSelf->__PVT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u38__DOT__a_temp) 
                                     >> 0xcU));
    }
}
