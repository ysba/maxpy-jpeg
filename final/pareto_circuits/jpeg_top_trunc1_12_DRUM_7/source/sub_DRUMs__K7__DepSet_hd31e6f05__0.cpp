// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc1_12_DRUM_7.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc1_12_DRUM_7__Syms.h"
#include "sub_DRUMs__K7.h"

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u86__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u86__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4));
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u102____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u102____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u102____pinNumber2));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u87__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u87__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u103____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u103____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u103____pinNumber2));
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u88__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u88__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u104____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u104____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u104____pinNumber2));
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u89__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u89__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u105____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u105____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u105____pinNumber2));
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u90__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u90__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u106____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u106____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u106____pinNumber2));
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u91__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u91__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u107____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u107____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u107____pinNumber2));
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u92__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u92__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u100____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u100____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u100____pinNumber2));
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u93__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u93__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u101____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u101____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u101____pinNumber2));
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y11_final_4));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u94__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u94__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2));
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u102____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u102____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u102____pinNumber2));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u95__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u95__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u103____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u103____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u103____pinNumber2));
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u96__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u96__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u104____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u104____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u104____pinNumber2));
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}

VL_INLINE_OPT void sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u97__0(sub_DRUMs__K7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_trunc1_12_DRUM_7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                sub_DRUMs__K7___nba_sequent__TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__u97__0\n"); );
    // Init
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;
    IData/*31:0*/ __VdfgTmp_h0a3844f6__0;
    // Body
    __VdfgTmp_h0a3844f6__0 = ((0x8000U & (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u105____pinNumber2))
                               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u105____pinNumber2)))
                               : (IData)(vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vcellinp__u105____pinNumber2));
    __VdfgTmp_h738ccf79__0 = ((0x8000U & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2)
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2)))
                               : (0xffffU & vlSymsp->TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__PVT__Y21_final_2));
    vlSelf->__PVT__U1__DOT__l2 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x8000U & __VdfgTmp_h0a3844f6__0));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h0a3844f6__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((8U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((4U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | (((2U & __VdfgTmp_h0a3844f6__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__u2__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w)) 
                                          | ((1U & __VdfgTmp_h0a3844f6__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l2 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l2)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u2__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h0a3844f6__0)));
    vlSelf->__PVT__U1__DOT__l1 = ((0x7fffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x8000U & __VdfgTmp_h738ccf79__0));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0x7fffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x8000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : 1U) 
                                             << 0xfU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xbfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x4000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xfU))) 
                                             << 0xeU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xbfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | ((IData)((((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 0xfU) 
                                              & (__VdfgTmp_h738ccf79__0 
                                                 >> 0xeU))) 
                                     << 0xeU));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xdfffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x2000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xeU))) 
                                             << 0xdU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xdfffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x2000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xefffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x1000U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xdU))) 
                                             << 0xcU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xefffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x1000U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                 >> 1U) 
                                                & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xf7ffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x800U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xcU))) 
                                             << 0xbU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xf7ffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x800U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfbffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x400U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xbU))) 
                                             << 0xaU));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfbffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x400U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfdffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x200U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 0xaU))) 
                                             << 9U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfdffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x200U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfeffU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x100U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 9U))) 
                                             << 8U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfeffU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x100U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                >> 1U) 
                                               & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xff7fU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x80U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 8U))) 
                                             << 7U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xff7fU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x80U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffbfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x40U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 7U))) 
                                             << 6U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffbfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x40U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffdfU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x20U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 6U))) 
                                             << 5U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffdfU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x20U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xffefU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((0x10U 
                                               & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 5U))) 
                                             << 4U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xffefU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (0x10U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U) 
                                              & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfff7U 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((8U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 4U))) 
                                             << 3U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfff7U & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (8U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffbU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((4U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 3U))) 
                                             << 2U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffbU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (4U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffdU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | (((2U & __VdfgTmp_h738ccf79__0)
                                               ? 0U
                                               : (1U 
                                                  & ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                                     >> 2U))) 
                                             << 1U));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffdU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (2U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    vlSelf->__PVT__U1__DOT__u1__DOT__w = ((0xfffeU 
                                           & (IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w)) 
                                          | ((1U & __VdfgTmp_h738ccf79__0)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                               >> 1U))));
    vlSelf->__PVT__U1__DOT__l1 = ((0xfffeU & (IData)(vlSelf->__PVT__U1__DOT__l1)) 
                                  | (1U & (((IData)(vlSelf->__PVT__U1__DOT__u1__DOT__w) 
                                            >> 1U) 
                                           & __VdfgTmp_h738ccf79__0)));
    __PVT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l2))) {
        __PVT__U1__DOT__k2 = 0U;
    }
    __PVT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__U1__DOT__l1))) {
        __PVT__U1__DOT__k1 = 0U;
    }
    __PVT__U1__DOT__m = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k2))) {
        __PVT__U1__DOT__m = (0x1fU & (__VdfgTmp_h0a3844f6__0 
                                      >> 0xaU));
    }
    __PVT__U1__DOT__n = 0U;
    if ((7U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 2U));
    }
    if ((8U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 3U));
    }
    if ((9U == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 4U));
    }
    if ((0xaU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 5U));
    }
    if ((0xbU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 6U));
    }
    if ((0xcU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 7U));
    }
    if ((0xdU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 8U));
    }
    if ((0xeU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 9U));
    }
    if ((0xfU == (IData)(__PVT__U1__DOT__k1))) {
        __PVT__U1__DOT__n = (0x1fU & (__VdfgTmp_h738ccf79__0 
                                      >> 0xaU));
    }
    vlSelf->__PVT__r_temp = ((0x3fffU & ((0x7fU & (
                                                   (6U 
                                                    < (IData)(__PVT__U1__DOT__k1))
                                                    ? 
                                                   (0x41U 
                                                    | ((IData)(__PVT__U1__DOT__n) 
                                                       << 1U))
                                                    : __VdfgTmp_h738ccf79__0)) 
                                         * (0x7fU & 
                                            ((6U < (IData)(__PVT__U1__DOT__k2))
                                              ? (0x41U 
                                                 | ((IData)(__PVT__U1__DOT__m) 
                                                    << 1U))
                                              : __VdfgTmp_h0a3844f6__0)))) 
                             << (0x1fU & (((6U < (IData)(__PVT__U1__DOT__k1))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k1) 
                                                  - (IData)(6U)))
                                            : 0U) + 
                                          ((6U < (IData)(__PVT__U1__DOT__k2))
                                            ? (0xfU 
                                               & ((IData)(__PVT__U1__DOT__k2) 
                                                  - (IData)(6U)))
                                            : 0U))));
}
