// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_eta1_8_LOBA2_4.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_eta1_8_LOBA2_4__Syms.h"
#include "sub_LOBA2u.h"

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u67__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u67__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp))));
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
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 0xcU));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xffU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (7U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (3U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp)));
    }
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u67__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u68__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u68__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp))));
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
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 0xcU));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xffU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (7U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (3U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp)));
    }
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u68__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u71__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u71__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp))));
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
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 0xcU));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xffU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (7U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (3U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp)));
    }
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u71__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u72__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u72__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp))));
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
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 0xcU));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xffU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (7U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (3U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp)));
    }
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u72__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u73__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u73__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp))));
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
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 0xcU));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xffU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (7U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (3U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp)));
    }
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u73__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u74__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u74__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp))));
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
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 0xcU));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xffU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (7U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (3U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp)));
    }
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u74__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u75__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u75__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp))));
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
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 0xcU));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xffU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (7U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (3U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp)));
    }
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u75__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u76__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u76__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp))));
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
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 0xcU));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xffU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (7U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (3U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp)));
    }
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u76__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u77__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u77__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp))));
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
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 0xcU));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xffU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (7U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (3U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp)));
    }
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u77__DOT__a_temp) 
                                     >> 0xcU));
    }
}

VL_INLINE_OPT void sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u78__DOT__u1__0(sub_LOBA2u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_eta1_8_LOBA2_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  sub_LOBA2u___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9__u78__DOT__u1__0\n"); );
    // Body
    vlSelf->__PVT__u1__DOT__lobh = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((8U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((4U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | (((2U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w)) 
                                          | ((1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobh = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobh)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp))));
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
        vlSelf->__PVT__Ah = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k1a))) {
        vlSelf->__PVT__Ah = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 0xcU));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xc000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xe000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf000U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                          - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xf800U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1ffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfc00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xffU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfe00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1ffU 
                                            & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x7fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff00U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xffU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x3fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xff80U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x7fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0x1fU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffc0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x3fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (0xfU & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xffe0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0x1fU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (7U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff0U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (3U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfff8U & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (7U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = (1U & (IData)(vlSelf->__PVT__u1__DOT__lower));
        vlSelf->__PVT__u1__DOT__lower = ((0xfffcU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (3U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__k1a) 
                        - (IData)(4U))))) {
        vlSelf->__PVT__u1__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__lower = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lower)) 
                                         | (1U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp)));
    }
    vlSelf->__PVT__u1__DOT__lobl = ((0x7fffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xbfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | ((IData)((((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->__PVT__u1__DOT__lower) 
                                                   >> 0xeU))) 
                                       << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xdfffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x2000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xefffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x1000U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                   >> 1U) 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xf7ffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x800U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfbffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x400U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfdffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x200U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfeffU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x100U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xff7fU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x80U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffbfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x40U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffdfU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x20U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xffefU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (0x10U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((8U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfff7U & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (8U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((4U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffbU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (4U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | (((2U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffdU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (2U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w)) 
                                          | ((1U & (IData)(vlSelf->__PVT__u1__DOT__lower))
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__u1__DOT__lobl = ((0xfffeU & (IData)(vlSelf->__PVT__u1__DOT__lobl)) 
                                    | (1U & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__w) 
                                              >> 1U) 
                                             & (IData)(vlSelf->__PVT__u1__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__lobl))) {
        vlSelf->__PVT__k2a = 3U;
    }
    vlSelf->__PVT__Al = 0U;
    if ((3U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 4U));
    }
    if ((8U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 5U));
    }
    if ((9U == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 6U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 7U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 8U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 9U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 0xaU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 0xbU));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__k2a))) {
        vlSelf->__PVT__Al = (0xfU & ((IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__PVT__u78__DOT__a_temp) 
                                     >> 0xcU));
    }
}
