// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_exact.h for the primary calling header

#include "verilated.h"

#include "sub___024root.h"

void sub___024root___eval_act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_exact__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_act\n"); );
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_exact__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__T1;
    IData/*31:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1;
    IData/*31:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__T1;
    IData/*31:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1;
    IData/*31:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__T1;
    IData/*31:0*/ jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1;
    CData/*4:0*/ __Vdly__jpeg_top__DOT__u19__DOT__u15__DOT__write_ptr;
    CData/*4:0*/ __Vdly__jpeg_top__DOT__u19__DOT__u25__DOT__write_ptr;
    CData/*4:0*/ __Vdly__jpeg_top__DOT__u19__DOT__u16__DOT__write_ptr;
    CData/*4:0*/ __Vdly__jpeg_top__DOT__u19__DOT__u24__DOT__write_ptr;
    CData/*4:0*/ __Vdly__jpeg_top__DOT__u19__DOT__u17__DOT__write_ptr;
    CData/*4:0*/ __Vdly__jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr;
    VlWide<3>/*95:0*/ __Vtemp_h7a151020__0;
    // Body
    __Vdly__jpeg_top__DOT__u19__DOT__u17__DOT__write_ptr 
        = vlSelf->jpeg_top__DOT__u19__DOT__u17__DOT__write_ptr;
    vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr 
        = vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u17__DOT__read_ptr 
        = vlSelf->jpeg_top__DOT__u19__DOT__u17__DOT__read_ptr;
    __Vdly__jpeg_top__DOT__u19__DOT__u24__DOT__write_ptr 
        = vlSelf->jpeg_top__DOT__u19__DOT__u24__DOT__write_ptr;
    __Vdly__jpeg_top__DOT__u19__DOT__u16__DOT__write_ptr 
        = vlSelf->jpeg_top__DOT__u19__DOT__u16__DOT__write_ptr;
    __Vdly__jpeg_top__DOT__u19__DOT__u25__DOT__write_ptr 
        = vlSelf->jpeg_top__DOT__u19__DOT__u25__DOT__write_ptr;
    __Vdly__jpeg_top__DOT__u19__DOT__u15__DOT__write_ptr 
        = vlSelf->jpeg_top__DOT__u19__DOT__u15__DOT__write_ptr;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u24__DOT__read_ptr 
        = vlSelf->jpeg_top__DOT__u19__DOT__u24__DOT__read_ptr;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u16__DOT__read_ptr 
        = vlSelf->jpeg_top__DOT__u19__DOT__u16__DOT__read_ptr;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u25__DOT__read_ptr 
        = vlSelf->jpeg_top__DOT__u19__DOT__u25__DOT__read_ptr;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u15__DOT__read_ptr 
        = vlSelf->jpeg_top__DOT__u19__DOT__u15__DOT__read_ptr;
    vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__eof_count 
        = vlSelf->jpeg_top__DOT__u20__DOT__eof_count;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count;
    vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__rpf_1 
        = vlSelf->jpeg_top__DOT__u20__DOT__rpf_1;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__fifo_mux 
        = vlSelf->jpeg_top__DOT__u19__DOT__fifo_mux;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z11 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z11;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z11 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z11;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z11 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z11;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z13 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z13;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z17 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z17;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z13 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z13;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z17 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z17;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z13 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z13;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z17 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z17;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z15 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z15;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z15 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z15;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z15 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z15;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z12 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z12;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z14 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z14;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z16 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z16;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z18 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z18;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z12 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z12;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z14 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z14;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z16 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z16;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z18 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z18;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z12 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z12;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z14 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z14;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z16 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z16;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z18 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z18;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z41 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z41;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z31 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z31;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z21 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z21;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z51 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z51;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z61 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z61;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z71 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z71;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z81 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z81;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z41 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z41;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z31 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z31;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z21 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z21;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z51 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z51;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z61 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z61;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z71 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z71;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z81 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z81;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z41 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z41;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z31 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z31;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z21 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z21;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z51 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z51;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z61 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z61;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z71 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z71;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z81 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z81;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z87 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z87;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z83 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z83;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z43 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z43;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z37 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z37;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z33 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z33;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z27 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z27;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z23 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z23;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z47 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z47;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z53 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z53;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z57 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z57;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z63 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z63;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z67 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z67;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z73 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z73;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z77 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z77;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z87 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z87;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z83 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z83;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z43 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z43;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z37 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z37;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z33 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z33;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z27 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z27;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z23 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z23;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z47 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z47;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z53 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z53;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z57 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z57;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z63 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z63;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z67 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z67;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z73 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z73;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z77 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z77;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z87 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z87;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z83 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z83;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z43 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z43;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z37 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z37;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z33 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z33;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z27 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z27;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z23 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z23;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z47 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z47;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z53 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z53;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z57 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z57;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z63 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z63;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z67 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z67;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z73 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z73;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z77 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z77;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z85 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z85;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z35 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z35;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z25 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z25;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z45 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z45;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z55 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z55;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z65 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z65;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z75 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z75;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z85 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z85;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z35 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z35;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z25 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z25;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z45 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z45;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z55 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z55;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z65 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z65;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z75 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z75;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z85 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z85;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z35 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z35;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z25 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z25;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z45 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z45;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z55 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z55;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z65 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z65;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z75 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z75;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z88 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z88;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z86 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z86;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z84 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z84;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z44 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z44;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z42 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z42;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z38 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z38;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z36 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z36;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z34 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z34;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z32 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z32;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z28 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z28;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z26 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z26;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z22 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z22;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z24 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z24;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z46 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z46;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z48 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z48;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z52 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z52;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z54 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z54;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z56 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z56;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z58 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z58;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z62 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z62;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z64 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z64;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z66 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z66;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z68 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z68;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z72 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z72;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z74 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z74;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z76 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z76;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z78 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z78;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z82 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z82;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z88 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z88;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z86 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z86;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z84 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z84;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z44 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z44;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z42 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z42;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z38 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z38;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z36 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z36;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z34 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z34;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z32 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z32;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z28 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z28;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z26 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z26;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z22 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z22;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z24 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z24;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z46 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z46;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z48 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z48;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z52 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z52;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z54 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z54;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z56 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z56;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z58 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z58;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z62 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z62;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z64 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z64;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z66 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z66;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z68 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z68;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z72 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z72;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z74 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z74;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z76 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z76;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z78 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z78;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z82 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z82;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z88 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z88;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z86 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z86;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z84 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z84;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z44 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z44;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z42 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z42;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z38 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z38;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z36 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z36;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z34 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z34;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z32 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z32;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z28 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z28;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z26 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z26;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z22 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z22;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z24 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z24;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z46 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z46;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z48 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z48;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z52 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z52;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z54 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z54;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z56 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z56;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z58 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z58;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z62 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z62;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z64 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z64;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z66 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z66;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z68 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z68;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z72 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z72;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z74 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z74;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z76 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z76;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z78 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z78;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z82 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z82;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__orc = vlSelf->jpeg_top__DOT__u19__DOT__orc;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length 
        = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cb_orc 
        = vlSelf->jpeg_top__DOT__u19__DOT__cb_orc;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cr_orc 
        = vlSelf->jpeg_top__DOT__u19__DOT__cr_orc;
    vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__y_orc 
        = vlSelf->jpeg_top__DOT__u19__DOT__y_orc;
    vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__second_2bytes_eof 
        = vlSelf->jpeg_top__DOT__u20__DOT__second_2bytes_eof;
    vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__third_2bytes_eof 
        = vlSelf->jpeg_top__DOT__u20__DOT__third_2bytes_eof;
    vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__fourth_2bytes_eof 
        = vlSelf->jpeg_top__DOT__u20__DOT__fourth_2bytes_eof;
    vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__fifth_2bytes_eof 
        = vlSelf->jpeg_top__DOT__u20__DOT__fifth_2bytes_eof;
    vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__JPEG_eof_5_1 
        = vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_5_1;
    vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__FF_count 
        = vlSelf->jpeg_top__DOT__u20__DOT__FF_count;
    vlSelf->__Vdlyvset__jpeg_top__DOT__u19__DOT__u24__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__jpeg_top__DOT__u19__DOT__u16__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__jpeg_top__DOT__u19__DOT__u25__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__jpeg_top__DOT__u19__DOT__u15__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__jpeg_top__DOT__u19__DOT__u17__DOT__mem__v0 = 0U;
    __Vdly__jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr 
        = vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr;
    vlSelf->__Vdlyvset__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0 = 0U;
    jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__T1 = 0x16a1U;
    jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1 = 0x16a1U;
    jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__T1 = 0x16a1U;
    jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1 = 0x16a1U;
    jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__T1 = 0x16a1U;
    jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1 = 0x16a1U;
    if (vlSelf->jpeg_top__DOT__u19__DOT__cr_write_enable2) {
        vlSelf->__Vdlyvval__jpeg_top__DOT__u19__DOT__u24__DOT__mem__v0 
            = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__fifo_mux)
                ? 0U : vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->__Vdlyvset__jpeg_top__DOT__u19__DOT__u24__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__jpeg_top__DOT__u19__DOT__u24__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u24__DOT__write_ptr));
    }
    if (vlSelf->jpeg_top__DOT__u19__DOT__cr_write_enable1) {
        vlSelf->__Vdlyvval__jpeg_top__DOT__u19__DOT__u16__DOT__mem__v0 
            = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__fifo_mux)
                ? vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream
                : 0U);
        vlSelf->__Vdlyvset__jpeg_top__DOT__u19__DOT__u16__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__jpeg_top__DOT__u19__DOT__u16__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u16__DOT__write_ptr));
    }
    if (vlSelf->jpeg_top__DOT__u19__DOT__cb_write_enable2) {
        vlSelf->__Vdlyvval__jpeg_top__DOT__u19__DOT__u25__DOT__mem__v0 
            = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__fifo_mux)
                ? 0U : vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->__Vdlyvset__jpeg_top__DOT__u19__DOT__u25__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__jpeg_top__DOT__u19__DOT__u25__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u25__DOT__write_ptr));
    }
    if (vlSelf->jpeg_top__DOT__u19__DOT__cb_write_enable1) {
        vlSelf->__Vdlyvval__jpeg_top__DOT__u19__DOT__u15__DOT__mem__v0 
            = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__fifo_mux)
                ? vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream
                : 0U);
        vlSelf->__Vdlyvset__jpeg_top__DOT__u19__DOT__u15__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__jpeg_top__DOT__u19__DOT__u15__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u15__DOT__write_ptr));
    }
    if (vlSelf->jpeg_top__DOT__u19__DOT__y_write_enable) {
        vlSelf->__Vdlyvval__jpeg_top__DOT__u19__DOT__u17__DOT__mem__v0 
            = vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream;
        vlSelf->__Vdlyvset__jpeg_top__DOT__u19__DOT__u17__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__jpeg_top__DOT__u19__DOT__u17__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u17__DOT__write_ptr));
    }
    if (vlSelf->jpeg_top__DOT__u20__DOT__write_enable) {
        vlSelf->__Vdlyvval__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0[0U] 
            = ((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[0U] 
                << 3U) | (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__ffc_7) 
                           << 1U) | (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rollover_5)));
        vlSelf->__Vdlyvval__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0[1U] 
            = ((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[0U] 
                >> 0x1dU) | (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[1U] 
                             << 3U));
        vlSelf->__Vdlyvval__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0[2U] 
            = ((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[1U] 
                >> 0x1dU) | (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[2U] 
                             << 3U));
        vlSelf->__Vdlyvset__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr));
    }
    if (vlSelf->jpeg_top__DOT__u20__DOT__fifo_empty) {
        vlSelf->jpeg_top__DOT__u20__DOT__read_req = 0U;
    } else if ((1U & (~ (IData)(vlSelf->jpeg_top__DOT__u20__DOT__fifo_empty)))) {
        vlSelf->jpeg_top__DOT__u20__DOT__read_req = 1U;
    }
    vlSelf->jpeg_top__DOT__u19__DOT__cr_out_enable2 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u24__DOT__read_enable));
    vlSelf->jpeg_top__DOT__u19__DOT__cr_out_enable1 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u16__DOT__read_enable));
    vlSelf->jpeg_top__DOT__u19__DOT__cb_out_enable2 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u25__DOT__read_enable));
    vlSelf->jpeg_top__DOT__u19__DOT__cb_out_enable1 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u15__DOT__read_enable));
    if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__y_fifo_empty) 
         | (1U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__read_mux)))) {
        vlSelf->jpeg_top__DOT__u19__DOT__y_read_req = 0U;
    } else if (((~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__y_fifo_empty)) 
                & (1U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__read_mux)))) {
        vlSelf->jpeg_top__DOT__u19__DOT__y_read_req = 1U;
    }
    if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__cr_fifo_empty) 
         | (4U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__read_mux)))) {
        vlSelf->jpeg_top__DOT__u19__DOT__cr_read_req = 0U;
    } else if (((~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cr_fifo_empty)) 
                & (4U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__read_mux)))) {
        vlSelf->jpeg_top__DOT__u19__DOT__cr_read_req = 1U;
    }
    if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__cb_fifo_empty) 
         | (2U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__read_mux)))) {
        vlSelf->jpeg_top__DOT__u19__DOT__cb_read_req = 0U;
    } else if (((~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cb_fifo_empty)) 
                & (2U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__read_mux)))) {
        vlSelf->jpeg_top__DOT__u19__DOT__cb_read_req = 1U;
    }
    vlSelf->data_ready = ((~ (IData)(vlSelf->rst)) 
                          & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__data_ready) 
                             | (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_data_ready_1)));
    if (vlSelf->rst) {
        __Vdly__jpeg_top__DOT__u19__DOT__u17__DOT__write_ptr = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u17__DOT__read_ptr = 0U;
        __Vdly__jpeg_top__DOT__u19__DOT__u24__DOT__write_ptr = 0U;
        __Vdly__jpeg_top__DOT__u19__DOT__u16__DOT__write_ptr = 0U;
        __Vdly__jpeg_top__DOT__u19__DOT__u25__DOT__write_ptr = 0U;
        __Vdly__jpeg_top__DOT__u19__DOT__u15__DOT__write_ptr = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u24__DOT__read_ptr = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u16__DOT__read_ptr = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u25__DOT__read_ptr = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u15__DOT__read_ptr = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__eof_count = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__fifo_mux = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z11 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z11 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z11 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z13 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z17 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z13 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z17 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z13 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z17 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z15 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z15 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z15 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z12 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z14 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z16 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z18 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z12 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z14 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z16 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z18 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z12 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z14 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z16 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z18 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z41 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z31 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z21 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z51 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z61 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z71 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z81 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z41 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z31 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z21 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z51 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z61 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z71 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z81 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z41 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z31 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z21 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z51 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z61 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z71 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z81 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z87 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z83 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z43 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z37 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z33 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z27 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z23 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z47 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z53 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z57 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z63 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z67 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z73 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z77 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z87 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z83 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z43 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z37 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z33 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z27 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z23 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z47 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z53 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z57 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z63 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z67 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z73 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z77 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z87 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z83 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z43 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z37 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z33 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z27 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z23 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z47 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z53 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z57 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z63 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z67 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z73 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z77 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z85 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z35 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z25 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z45 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z55 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z65 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z75 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z85 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z35 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z25 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z45 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z55 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z65 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z75 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z85 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z35 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z25 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z45 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z55 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z65 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z75 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z88 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z86 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z84 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z44 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z42 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z38 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z36 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z34 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z32 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z28 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z26 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z22 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z24 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z46 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z48 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z52 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z54 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z56 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z58 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z62 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z64 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z66 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z68 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z72 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z74 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z76 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z78 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z82 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z88 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z86 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z84 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z44 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z42 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z38 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z36 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z34 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z32 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z28 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z26 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z22 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z24 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z46 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z48 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z52 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z54 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z56 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z58 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z62 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z64 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z66 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z68 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z72 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z74 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z76 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z78 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z82 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z88 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z86 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z84 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z44 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z42 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z38 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z36 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z34 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z32 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z28 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z26 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z22 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z24 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z46 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z48 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z52 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z54 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z56 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z58 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z62 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z64 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z66 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z68 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z72 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z74 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z76 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z78 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z82 = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__orc = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cb_orc = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cr_orc = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__y_orc = 0U;
        __Vdly__jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__cb_eob_empty = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__cr_eob_empty = 0U;
        vlSelf->end_of_file_bitstream_count = 0U;
        vlSelf->JPEG_bitstream = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__eof_count_enable = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_11 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_11 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_11 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_51 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_51 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_51 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_71 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_31 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_71 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_31 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_71 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_31 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_81 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_61 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_41 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_21 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_81 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_61 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_41 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_21 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_81 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_61 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_41 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_21 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_11 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_11 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_11 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_13 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_17 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_13 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_17 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_13 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_17 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_15 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_15 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_15 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_12 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_14 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_16 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_18 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_12 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_14 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_16 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_18 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_12 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_14 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_16 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_18 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_41 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_31 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_21 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_51 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_61 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_71 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_81 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_41 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_31 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_21 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_51 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_61 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_71 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_81 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_41 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_31 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_21 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_51 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_61 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_71 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_81 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_87 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_83 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_43 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_37 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_33 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_27 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_23 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_47 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_53 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_57 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_63 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_67 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_73 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_77 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_87 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_83 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_43 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_37 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_33 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_27 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_23 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_47 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_53 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_57 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_63 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_67 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_73 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_77 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_87 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_83 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_43 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_37 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_33 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_27 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_23 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_47 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_53 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_57 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_63 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_67 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_73 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_77 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_85 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_35 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_25 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_45 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_55 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_65 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_75 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_85 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_35 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_25 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_45 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_55 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_65 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_75 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_85 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_35 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_25 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_45 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_55 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_65 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_75 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_88 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_86 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_84 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_44 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_42 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_38 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_36 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_34 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_32 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_28 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_26 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_22 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_24 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_46 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_48 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_52 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_54 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_56 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_58 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_62 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_64 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_66 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_68 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_72 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_74 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_76 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_78 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_82 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_88 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_86 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_84 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_44 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_42 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_38 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_36 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_34 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_32 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_28 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_26 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_22 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_24 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_46 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_48 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_52 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_54 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_56 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_58 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_62 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_64 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_66 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_68 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_72 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_74 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_76 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_78 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_82 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_88 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_86 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_84 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_44 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_42 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_38 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_36 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_34 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_32 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_28 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_26 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_22 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_24 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_46 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_48 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_52 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_54 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_56 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_58 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_62 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_64 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_66 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_68 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_72 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_74 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_76 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_78 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_82 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__cr_orc_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_latch_7 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_output_count = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_oc_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_latch_7 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_output_count = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_oc_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_latch_7 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_output_count = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_oc_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
            = (0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
            = (0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
            = (0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u20__DOT__ffc_7 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[0U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[1U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[2U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__read_mux = 1U;
        vlSelf->jpeg_top__DOT__u20__DOT__data_ready = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__rpf_1 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__eof_data_ready_1 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
            = (0xffffff00U & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
            = (0xffffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
            = (0xff00ffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
            = (0xffff00ffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream);
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream_eof = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__end_of_file_enable_hold = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__data_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__data_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__data_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_count_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__code_15_0 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_count_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__code_15_0 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_count_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__code_15_0 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_7 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__cr_data_ready = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_7 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__cb_data_ready = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__y_write_enable) {
            __Vdly__jpeg_top__DOT__u19__DOT__u17__DOT__write_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u17__DOT__write_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__read_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u17__DOT__read_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u17__DOT__read_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u17__DOT__read_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__cr_write_enable2) {
            __Vdly__jpeg_top__DOT__u19__DOT__u24__DOT__write_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u24__DOT__write_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__cr_write_enable1) {
            __Vdly__jpeg_top__DOT__u19__DOT__u16__DOT__write_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u16__DOT__write_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__cb_write_enable2) {
            __Vdly__jpeg_top__DOT__u19__DOT__u25__DOT__write_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u25__DOT__write_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__cb_write_enable1) {
            __Vdly__jpeg_top__DOT__u19__DOT__u15__DOT__write_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u15__DOT__write_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u24__DOT__read_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u24__DOT__read_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u24__DOT__read_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u16__DOT__read_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u16__DOT__read_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u16__DOT__read_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u25__DOT__read_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u25__DOT__read_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u25__DOT__read_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u15__DOT__read_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u15__DOT__read_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u15__DOT__read_ptr)));
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__eof_count_enable) {
            if (vlSelf->jpeg_top__DOT__u20__DOT__eof_count_enable) {
                vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__eof_count 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_count)));
            }
        } else {
            vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__eof_count = 0U;
        }
        if (((1U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count)) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_11;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_11 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11));
        }
        if (((1U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count)) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_11;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_11 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11));
        }
        if (((1U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count)) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable))) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_11;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_11 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__enable_1) {
            if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__enable_1) {
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_51 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_71 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_31 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_81 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_61 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_41 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_21 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_51 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y5_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_71 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y7_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_31 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y3_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_81 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y8_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_61 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y6_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_41 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y4_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_21 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y2_mul_input);
            }
        } else {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_51 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_71 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_31 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_81 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_61 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_41 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_21 = 0U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__enable_1) {
            if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__enable_1) {
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_51 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_71 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_31 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_81 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_61 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_41 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_21 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_51 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb5_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_71 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb7_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_31 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb3_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_81 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb8_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_61 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb6_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_41 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb4_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_21 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb2_mul_input);
            }
        } else {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_51 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_71 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_31 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_81 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_61 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_41 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_21 = 0U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__enable_1) {
            if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__enable_1) {
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_51 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_71 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_31 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_81 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_61 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_41 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21 
                    = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_21 
                                     + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_51 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb5_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_71 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb7_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_31 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb3_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_81 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb8_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_61 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb6_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_41 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb4_mul_input);
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_21 
                    = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__data_1) 
                       * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb2_mul_input);
            }
        } else {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_51 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_71 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_31 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_81 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_61 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_41 = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_21 = 0U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__quantizer_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length = 0U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter)));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero)
                    ? (0xfU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length)))
                    : 0U);
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__quantizer_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length = 0U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter)));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero)
                    ? (0xfU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length)))
                    : 0U);
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__quantizer_enable) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length = 0U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter)));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero)
                    ? (0xfU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length)))
                    : 0U);
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_8) 
             & (1U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of)))) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z11 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z13 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z17 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z15 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z12 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z14 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z16 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z18 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z41 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z31 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z21 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z51 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z61 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z71 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z81 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z87 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z83 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z43 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z37 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z33 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z27 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z23 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z47 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z53 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z57 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z63 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z67 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z73 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z77 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z85 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z35 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z25 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z45 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z55 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z65 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z75 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z88 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z86 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z84 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z44 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z42 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z38 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z36 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z34 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z32 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z28 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z26 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z22 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z24 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z46 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z48 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z52 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z54 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z56 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z58 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z62 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z64 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z66 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z68 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z72 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z74 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z76 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z78 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z82 = 0U;
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_9))) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z11 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_11 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z11));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z13 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_13 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z13));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z17 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_17 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z17));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z15 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_15 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z15));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z12 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_12 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z12));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z14 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_14 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z14));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z16 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_16 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z16));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z18 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_18 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z18));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z41 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_41 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z41));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z31 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_31 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z31));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z21 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_21 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z21));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z51 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_51 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z51));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z61 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_61 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z61));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z71 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_71 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z71));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z81 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_81 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z81));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z87 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_87 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z87));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z83 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_83 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z83));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z43 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_43 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z43));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z37 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_37 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z37));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z33 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_33 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z33));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z27 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_27 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z27));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z23 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_23 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z23));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z47 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_47 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z47));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z53 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_53 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z53));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z57 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_57 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z57));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z63 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_63 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z63));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z67 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_67 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z67));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z73 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_73 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z73));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z77 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_77 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z77));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z85 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_85 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z85));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z35 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_35 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z35));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z25 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_25 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z25));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z45 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_45 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z45));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z55 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_55 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z55));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z65 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_65 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z65));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z75 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_75 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z75));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z88 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_88 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z88));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z86 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_86 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z86));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z84 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_84 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z84));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z44 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_44 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z44));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z42 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_42 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z42));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z38 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_38 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z38));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z36 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_36 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z36));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z34 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_34 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z34));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z32 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_32 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z32));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z28 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_28 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z28));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z26 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_26 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z26));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z22 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_22 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z22));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z24 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_24 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z24));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z46 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_46 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z46));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z48 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_48 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z48));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z52 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_52 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z52));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z54 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_54 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z54));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z56 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_56 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z56));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z58 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_58 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z58));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z62 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_62 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z62));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z64 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_64 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z64));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z66 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_66 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z66));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z68 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_68 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z68));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z72 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_72 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z72));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z74 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_74 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z74));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z76 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_76 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z76));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z78 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_78 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z78));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z82 
                = (0x7ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_82 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z82));
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_8) 
             & (1U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of)))) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z11 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z13 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z17 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z15 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z12 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z14 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z16 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z18 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z41 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z31 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z21 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z51 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z61 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z71 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z81 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z87 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z83 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z43 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z37 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z33 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z27 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z23 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z47 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z53 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z57 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z63 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z67 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z73 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z77 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z85 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z35 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z25 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z45 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z55 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z65 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z75 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z88 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z86 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z84 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z44 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z42 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z38 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z36 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z34 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z32 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z28 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z26 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z22 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z24 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z46 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z48 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z52 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z54 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z56 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z58 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z62 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z64 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z66 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z68 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z72 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z74 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z76 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z78 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z82 = 0U;
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_9))) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z11 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_11 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z11));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z13 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_13 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z13));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z17 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_17 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z17));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z15 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_15 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z15));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z12 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_12 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z12));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z14 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_14 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z14));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z16 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_16 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z16));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z18 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_18 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z18));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z41 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_41 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z41));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z31 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_31 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z31));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z21 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_21 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z21));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z51 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_51 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z51));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z61 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_61 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z61));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z71 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_71 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z71));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z81 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_81 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z81));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z87 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_87 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z87));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z83 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_83 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z83));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z43 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_43 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z43));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z37 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_37 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z37));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z33 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_33 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z33));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z27 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_27 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z27));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z23 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_23 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z23));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z47 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_47 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z47));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z53 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_53 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z53));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z57 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_57 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z57));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z63 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_63 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z63));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z67 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_67 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z67));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z73 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_73 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z73));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z77 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_77 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z77));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z85 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_85 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z85));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z35 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_35 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z35));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z25 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_25 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z25));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z45 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_45 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z45));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z55 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_55 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z55));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z65 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_65 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z65));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z75 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_75 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z75));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z88 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_88 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z88));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z86 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_86 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z86));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z84 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_84 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z84));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z44 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_44 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z44));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z42 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_42 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z42));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z38 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_38 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z38));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z36 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_36 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z36));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z34 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_34 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z34));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z32 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_32 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z32));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z28 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_28 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z28));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z26 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_26 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z26));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z22 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_22 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z22));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z24 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_24 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z24));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z46 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_46 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z46));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z48 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_48 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z48));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z52 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_52 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z52));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z54 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_54 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z54));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z56 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_56 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z56));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z58 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_58 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z58));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z62 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_62 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z62));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z64 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_64 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z64));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z66 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_66 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z66));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z68 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_68 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z68));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z72 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_72 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z72));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z74 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_74 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z74));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z76 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_76 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z76));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z78 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_78 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z78));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z82 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_82 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z82));
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_8) 
             & (1U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of)))) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z11 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z13 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z17 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z15 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z12 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z14 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z16 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z18 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z41 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z31 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z21 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z51 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z61 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z71 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z81 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z87 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z83 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z43 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z37 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z33 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z27 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z23 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z47 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z53 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z57 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z63 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z67 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z73 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z77 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z85 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z35 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z25 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z45 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z55 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z65 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z75 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z88 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z86 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z84 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z44 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z42 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z38 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z36 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z34 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z32 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z28 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z26 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z22 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z24 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z46 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z48 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z52 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z54 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z56 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z58 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z62 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z64 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z66 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z68 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z72 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z74 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z76 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z78 = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z82 = 0U;
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_9))) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z11 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_11 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z11));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z13 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_13 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z13));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z17 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_17 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z17));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z15 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_15 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z15));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z12 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_12 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z12));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z14 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_14 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z14));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z16 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_16 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z16));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z18 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_18 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z18));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z41 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_41 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z41));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z31 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_31 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z31));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z21 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_21 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z21));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z51 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_51 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z51));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z61 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_61 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z61));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z71 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_71 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z71));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z81 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_81 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z81));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z87 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_87 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z87));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z83 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_83 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z83));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z43 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_43 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z43));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z37 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_37 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z37));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z33 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_33 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z33));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z27 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_27 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z27));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z23 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_23 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z23));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z47 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_47 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z47));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z53 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_53 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z53));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z57 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_57 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z57));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z63 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_63 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z63));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z67 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_67 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z67));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z73 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_73 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z73));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z77 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_77 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z77));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z85 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_85 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z85));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z35 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_35 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z35));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z25 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_25 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z25));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z45 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_45 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z45));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z55 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_55 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z55));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z65 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_65 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z65));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z75 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_75 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z75));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z88 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_88 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z88));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z86 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_86 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z86));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z84 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_84 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z84));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z44 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_44 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z44));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z42 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_42 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z42));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z38 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_38 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z38));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z36 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_36 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z36));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z34 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_34 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z34));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z32 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_32 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z32));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z28 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_28 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z28));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z26 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_26 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z26));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z22 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_22 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z22));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z24 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_24 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z24));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z46 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_46 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z46));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z48 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_48 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z48));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z52 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_52 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z52));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z54 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_54 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z54));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z56 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_56 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z56));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z58 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_58 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z58));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z62 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_62 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z62));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z64 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_64 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z64));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z66 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_66 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z66));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z68 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_68 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z68));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z72 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_72 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z72));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z74 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_74 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z74));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z76 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_76 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z76));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z78 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_78 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z78));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z82 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_82 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z82));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__enable_20) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__orc 
                = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__orc_cr) 
                            + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cr_orc_1)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__end_of_block_output) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__fifo_mux 
                = (1U & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__fifo_mux)));
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__y_orc = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__cr_orc_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__cr_orc;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_6) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__y_orc 
                = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__y_orc) 
                            + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_output_count)));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_latch_7) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__y_orc 
                = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__y_orc) 
                            + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_oc_1)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block_output) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cb_orc = 0U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_6) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cb_orc 
                = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__cb_orc) 
                            + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_output_count)));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_latch_7) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cb_orc 
                = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__cb_orc) 
                            + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_oc_1)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block_output) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cr_orc = 0U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_6) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cr_orc 
                = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__cr_orc) 
                            + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_output_count)));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_latch_7) {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cr_orc 
                = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__cr_orc) 
                            + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_oc_1)));
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__write_enable) 
             & (~ (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rollover_5)))) {
            __Vdly__jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr)));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__write_enable) 
                    & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rollover_5))) {
            __Vdly__jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr 
                = (0x1fU & ((IData)(2U) + (IData)(vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr)));
        }
        vlSelf->end_of_file_bitstream_count = (0x1fU 
                                               & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof_1));
        vlSelf->JPEG_bitstream = ((((IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_1) 
                                    | (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_2)) 
                                   | (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_3))
                                   ? vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream_eof
                                   : vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream);
        if (vlSelf->jpeg_top__DOT__u20__DOT__end_of_file_enable_hold) {
            vlSelf->jpeg_top__DOT__u20__DOT__eof_count_enable = 0U;
        } else if (vlSelf->end_of_file_signal) {
            vlSelf->jpeg_top__DOT__u20__DOT__eof_count_enable = 1U;
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__enable_1) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_8))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_11 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_4 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_13 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_17 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_15 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_12 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_14 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_16 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_18 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_41 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_31 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_21 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_51 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_61 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_71 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_81 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_87 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_83 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_43 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_37 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_33 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_27 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_23 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_47 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_53 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_57 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_63 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_67 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_73 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_77 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_85 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_35 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_25 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_45 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_55 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_65 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_75 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_88 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_86 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_84 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_44 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_42 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_38 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_36 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_34 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_32 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_28 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_26 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_22 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_24 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_46 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_48 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_52 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_54 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_56 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_58 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_62 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_64 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_66 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_68 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_72 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_74 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_76 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_78 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Z_temp_82 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input);
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__enable_1) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_8))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_11 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_4 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_13 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_17 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_15 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_12 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_14 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_16 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_18 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_41 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_31 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_21 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_51 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_61 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_71 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_81 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_87 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_83 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_43 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_37 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_33 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_27 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_23 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_47 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_53 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_57 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_63 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_67 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_73 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_77 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_85 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_35 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_25 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_45 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_55 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_65 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_75 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_88 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_86 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_84 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_44 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_42 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_38 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_36 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_34 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_32 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_28 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_26 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_22 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_24 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_46 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_48 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_52 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_54 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_56 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_58 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_62 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_64 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_66 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_68 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_72 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_74 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_76 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_78 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Z_temp_82 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input);
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__enable_1) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_8))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_11 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_4 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_13 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_17 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_15 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_12 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_14 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_16 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_18 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_4 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_41 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_31 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_21 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_51 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_61 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_71 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_81 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_2 
                   * jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_87 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_83 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_43 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_37 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_33 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_27 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_23 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_47 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_53 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_57 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_63 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_67 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_73 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_77 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_85 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_35 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_25 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_45 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_55 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_65 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_75 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_88 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_86 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_84 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_44 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_42 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_38 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_36 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_34 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_32 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_28 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_26 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_22 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_24 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_46 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_48 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_52 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_54 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_56 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_58 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_62 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_64 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_66 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_68 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_72 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_74 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_76 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_78 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Z_temp_82 
                = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_2 
                   * vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input);
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count)));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count)));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count)));
            }
            if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_1) {
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy)));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of)));
            }
            if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_1) {
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy)));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of)));
            }
            if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_1) {
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy)));
                vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of)));
            }
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y_temp_11 
                = (0x1ffffffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y) 
                                 * jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__T1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb_temp_11 
                = (0x1ffffffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB) 
                                 * jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__T1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb_temp_11 
                = (0x1ffffffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR) 
                                 * jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__T1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__data_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__data_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__data_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_3;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_3;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_3;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 
                = ((0x1fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2) 
                   | (((0x1000U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_1))
                        ? 0x7ffffU : 0U) << 0xdU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2 
                = ((0xffffe000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_2) 
                   | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 
                = ((0x1fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2) 
                   | (((0x1000U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_1))
                        ? 0x7ffffU : 0U) << 0xdU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2 
                = ((0xffffe000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_2) 
                   | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 
                = ((0x1fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2) 
                   | (((0x1000U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_1))
                        ? 0x7ffffU : 0U) << 0xdU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2 
                = ((0xffffe000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_2) 
                   | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 
                = ((0x1fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2) 
                   | (((0x1000U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_1))
                        ? 0x7ffffU : 0U) << 0xdU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2 
                = ((0xffffe000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_2) 
                   | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 
                = ((0x1fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2) 
                   | (((0x1000U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_1))
                        ? 0x7ffffU : 0U) << 0xdU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2 
                = ((0xffffe000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_2) 
                   | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 
                = ((0x1fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2) 
                   | (((0x1000U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_1))
                        ? 0x7ffffU : 0U) << 0xdU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2 
                = ((0xffffe000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_2) 
                   | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 
                = ((0x1fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2) 
                   | (((0x1000U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_1))
                        ? 0x7ffffU : 0U) << 0xdU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2 
                = ((0xffffe000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_2) 
                   | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_1));
        } else {
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of = 0U;
            vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of = 0U;
        }
        if ((0x44U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_latch_7 = 0U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_6) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_latch_7 = 1U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_5) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_output_count 
                = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits_1) 
                            + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_count)));
        }
        if ((0x44U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_latch_7 = 0U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_6) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_latch_7 = 1U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_5) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_output_count 
                = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits_1) 
                            + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_count)));
        }
        if ((0x44U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_latch_7 = 0U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_6) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_latch_7 = 1U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_5) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_output_count 
                = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits_1) 
                            + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_count)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_oc_1 
                = ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_5) 
                     & (~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__code_15_0))) 
                    & (0x43U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter)))
                    ? 0U : (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits_3) 
                                     + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_count_1))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_count_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_count;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_5 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_4;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__code_15_0 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_et_15) 
                   & (~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__end_of_block)));
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_7))) {
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (1U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x80000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x40000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x20000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x10000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x8000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x4000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x2000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x1000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x800000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x400000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x200000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x100000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x80000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x40000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x20000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x10000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x8000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x4000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x1000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x400U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x200U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x100U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x80U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x40U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x20U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (0x10U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (8U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (4U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                = ((0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                   | (2U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
        } else {
            if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (1U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x80000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x40000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (2U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x20000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (3U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x10000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (4U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x8000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (5U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x4000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (6U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x2000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (7U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x1000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (8U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x800000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (9U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x400000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0xaU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x200000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0xbU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x100000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0xcU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x80000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0xdU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x40000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0xeU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x20000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0xfU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x10000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x10U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x8000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x11U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x4000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x12U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x13U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x1000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x14U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x15U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x400U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x16U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x200U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x17U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x100U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x18U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x80U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x19U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x40U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x1aU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x20U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x1bU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (0x10U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x1cU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (8U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x1dU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (4U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                 & (0x1eU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream 
                    = ((0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__cr_JPEG_bitstream) 
                       | (2U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5));
            }
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__cr_eob_empty 
                = (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_7) 
                    & (0x4dU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter))) 
                   & (0U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cr_orc)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_oc_1 
                = ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_5) 
                     & (~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__code_15_0))) 
                    & (0x43U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter)))
                    ? 0U : (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits_3) 
                                     + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_count_1))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_count_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_count;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_5 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_4;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__code_15_0 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_et_15) 
                   & (~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_8 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_7 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6;
            vlSelf->jpeg_top__DOT__u19__DOT__cr_data_ready 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                   | (0x4dU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                        & (0U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                           >> 0x1fU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                        >> 0x1fU)) 
                      << 0x1fU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x40000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                       & (1U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                          >> 0x1eU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                          >> 0x1eU)) 
                                     << 0x1eU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x20000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                       & (2U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                          >> 0x1dU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                          >> 0x1dU)) 
                                     << 0x1dU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x10000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                       & (3U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                          >> 0x1cU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                          >> 0x1cU)) 
                                     << 0x1cU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x8000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                      & (4U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                         >> 0x1bU) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                      >> 0x1bU)) << 0x1bU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x4000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                      & (5U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                         >> 0x1aU) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                      >> 0x1aU)) << 0x1aU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x2000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                      & (6U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                         >> 0x19U) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                      >> 0x19U)) << 0x19U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x1000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                      & (7U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                         >> 0x18U) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                      >> 0x18U)) << 0x18U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x800000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                     & (8U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                        >> 0x17U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                     >> 0x17U)) << 0x17U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x400000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                     & (9U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                        >> 0x16U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                     >> 0x16U)) << 0x16U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x200000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                     & (0xaU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                        >> 0x15U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                     >> 0x15U)) << 0x15U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x100000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                     & (0xbU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                        >> 0x14U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                     >> 0x14U)) << 0x14U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x80000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                    & (0xcU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                       >> 0x13U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                    >> 0x13U)) << 0x13U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x40000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                    & (0xdU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                       >> 0x12U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                    >> 0x12U)) << 0x12U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x20000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                    & (0xeU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                       >> 0x11U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                    >> 0x11U)) << 0x11U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x10000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                    & (0xfU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                       >> 0x10U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                    >> 0x10U)) << 0x10U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x8000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                   & (0x10U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                      >> 0xfU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                                  >> 0xfU)) 
                                 << 0xfU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x4000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                   & (0x11U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                      >> 0xeU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                                  >> 0xeU)) 
                                 << 0xeU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x2000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                   & (0x12U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                      >> 0xdU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                                  >> 0xdU)) 
                                 << 0xdU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x1000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                   & (0x13U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                      >> 0xcU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                                  >> 0xcU)) 
                                 << 0xcU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x800U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                  & (0x14U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                     >> 0xbU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                                 >> 0xbU)) 
                                << 0xbU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x400U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                  & (0x15U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                     >> 0xaU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                                 >> 0xaU)) 
                                << 0xaU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x200U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                  & (0x16U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                     >> 9U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                               >> 9U)) 
                                << 9U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x100U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                  & (0x17U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                     >> 8U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                               >> 8U)) 
                                << 8U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x80U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                 & (0x18U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                    >> 7U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                              >> 7U)) 
                               << 7U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x40U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                 & (0x19U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                    >> 6U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                              >> 6U)) 
                               << 6U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x20U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                 & (0x1aU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                    >> 5U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                              >> 5U)) 
                               << 5U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (0x10U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                                 & (0x1bU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                    >> 4U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                              >> 4U)) 
                               << 4U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (8U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                              & (0x1cU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                 >> 3U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                           >> 3U)) 
                            << 3U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (4U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                              & (0x1dU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                 >> 2U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                           >> 2U)) 
                            << 2U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (2U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6) 
                              & (0x1eU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                                 >> 1U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                                           >> 1U)) 
                            << 1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5 
                = ((0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_5) 
                   | (1U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4));
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_7))) {
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (1U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x80000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x40000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x20000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x10000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x8000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x4000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x2000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x1000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x800000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x400000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x200000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x100000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x80000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x40000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x20000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x10000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x8000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x4000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x1000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x400U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x200U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x100U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x80U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x40U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x20U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (0x10U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (8U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (4U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                = ((0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                   | (2U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
        } else {
            if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (1U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x80000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x40000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (2U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x20000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (3U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x10000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (4U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x8000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (5U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x4000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (6U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x2000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (7U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x1000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (8U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x800000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (9U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x400000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0xaU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x200000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0xbU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x100000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0xcU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x80000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0xdU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x40000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0xeU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x20000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0xfU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x10000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x10U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x8000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x11U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x4000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x12U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x13U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x1000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x14U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x15U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x400U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x16U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x200U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x17U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x100U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x18U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x80U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x19U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x40U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x1aU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x20U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x1bU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (0x10U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x1cU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (8U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x1dU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (4U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                 & (0x1eU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream 
                    = ((0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__cb_JPEG_bitstream) 
                       | (2U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5));
            }
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__cb_eob_empty 
                = (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_7) 
                    & (0x4dU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter))) 
                   & (0U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cb_orc)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_oc_1 
                = ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_5) 
                     & (~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__code_15_0))) 
                    & (0x43U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter)))
                    ? 0U : (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits_3) 
                                     + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_count_1))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_count_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_count;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_5 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_4;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__code_15_0 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_et_15) 
                   & (~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_8 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_7 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6;
            vlSelf->jpeg_top__DOT__u19__DOT__cb_data_ready 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                   | (0x4dU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                        & (0U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                           >> 0x1fU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                        >> 0x1fU)) 
                      << 0x1fU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x40000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                       & (1U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                          >> 0x1eU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                          >> 0x1eU)) 
                                     << 0x1eU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x20000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                       & (2U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                          >> 0x1dU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                          >> 0x1dU)) 
                                     << 0x1dU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x10000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                       & (3U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                          >> 0x1cU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                          >> 0x1cU)) 
                                     << 0x1cU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x8000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                      & (4U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                         >> 0x1bU) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                      >> 0x1bU)) << 0x1bU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x4000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                      & (5U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                         >> 0x1aU) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                      >> 0x1aU)) << 0x1aU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x2000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                      & (6U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                         >> 0x19U) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                      >> 0x19U)) << 0x19U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x1000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                      & (7U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                         >> 0x18U) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                      >> 0x18U)) << 0x18U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x800000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                     & (8U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                        >> 0x17U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                     >> 0x17U)) << 0x17U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x400000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                     & (9U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                        >> 0x16U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                     >> 0x16U)) << 0x16U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x200000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                     & (0xaU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                        >> 0x15U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                     >> 0x15U)) << 0x15U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x100000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                     & (0xbU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                        >> 0x14U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                     >> 0x14U)) << 0x14U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x80000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                    & (0xcU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                       >> 0x13U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                    >> 0x13U)) << 0x13U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x40000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                    & (0xdU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                       >> 0x12U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                    >> 0x12U)) << 0x12U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x20000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                    & (0xeU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                       >> 0x11U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                    >> 0x11U)) << 0x11U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x10000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                    & (0xfU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                       >> 0x10U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                    >> 0x10U)) << 0x10U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x8000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                   & (0x10U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                      >> 0xfU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                                  >> 0xfU)) 
                                 << 0xfU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x4000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                   & (0x11U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                      >> 0xeU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                                  >> 0xeU)) 
                                 << 0xeU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x2000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                   & (0x12U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                      >> 0xdU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                                  >> 0xdU)) 
                                 << 0xdU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x1000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                   & (0x13U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                      >> 0xcU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                                  >> 0xcU)) 
                                 << 0xcU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x800U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                  & (0x14U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                     >> 0xbU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                                 >> 0xbU)) 
                                << 0xbU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x400U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                  & (0x15U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                     >> 0xaU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                                 >> 0xaU)) 
                                << 0xaU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x200U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                  & (0x16U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                     >> 9U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                               >> 9U)) 
                                << 9U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x100U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                  & (0x17U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                     >> 8U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                               >> 8U)) 
                                << 8U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x80U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                 & (0x18U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                    >> 7U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                              >> 7U)) 
                               << 7U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x40U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                 & (0x19U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                    >> 6U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                              >> 6U)) 
                               << 6U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x20U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                 & (0x1aU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                    >> 5U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                              >> 5U)) 
                               << 5U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (0x10U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                                 & (0x1bU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                    >> 4U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                              >> 4U)) 
                               << 4U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (8U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                              & (0x1cU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                 >> 3U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                           >> 3U)) 
                            << 3U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (4U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                              & (0x1dU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                 >> 2U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                           >> 2U)) 
                            << 2U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (2U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6) 
                              & (0x1eU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                                 >> 1U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                                           >> 1U)) 
                            << 1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5 
                = ((0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_5) 
                   | (1U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4));
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_7))) {
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (1U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x80000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x40000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x20000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x10000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x8000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x4000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x2000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x1000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x800000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x400000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x200000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x100000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x80000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x40000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x20000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x10000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x8000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x4000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x1000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x400U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x200U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x100U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x80U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x40U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x20U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (0x10U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (8U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (4U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                = ((0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                   | (2U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
        } else {
            if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (1U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x80000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x40000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (2U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x20000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (3U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x10000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (4U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x8000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (5U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x4000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (6U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x2000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (7U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x1000000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (8U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x800000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (9U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x400000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0xaU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x200000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0xbU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x100000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0xcU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x80000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0xdU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x40000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0xeU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x20000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0xfU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x10000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x10U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x8000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x11U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x4000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x12U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x13U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x1000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x14U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x15U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x400U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x16U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x200U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x17U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x100U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x18U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x80U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x19U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x40U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x1aU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x20U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x1bU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (0x10U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x1cU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (8U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x1dU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (4U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                 & (0x1eU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8)))) {
                vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream 
                    = ((0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__y_JPEG_bitstream) 
                       | (2U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5));
            }
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_8) {
            vlSelf->jpeg_top__DOT__u20__DOT__ffc_7 
                = vlSelf->jpeg_top__DOT__u20__DOT__ffc_6;
            VL_SHIFTL_WWI(88,88,32, __Vtemp_h7a151020__0, vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out, 8U);
            if ((1U & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__ffc_6))) {
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[0U] 
                    = vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[0U];
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[1U] 
                    = vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[1U];
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[2U] 
                    = (0xffffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[2U]);
            } else {
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[0U] 
                    = __Vtemp_h7a151020__0[0U];
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[1U] 
                    = __Vtemp_h7a151020__0[1U];
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out_1[2U] 
                    = (0xffffffU & __Vtemp_h7a151020__0[2U]);
            }
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__enable_1) {
            vlSelf->jpeg_top__DOT__u19__DOT__read_mux = 2U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__enable_17) {
            vlSelf->jpeg_top__DOT__u19__DOT__read_mux = 4U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__enable_33) {
            vlSelf->jpeg_top__DOT__u19__DOT__read_mux = 1U;
        }
        vlSelf->jpeg_top__DOT__u20__DOT__data_ready 
            = ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rdv_1) 
               | (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rpf_1));
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__rpf_1 
            = ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rollover_pf) 
               & (~ (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rpf_1)));
        if (vlSelf->jpeg_top__DOT__u20__DOT__end_of_file_enable) {
            vlSelf->jpeg_top__DOT__u20__DOT__eof_data_ready_1 
                = (0x1fU < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof_1));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream_eof 
                = ((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[2U] 
                    << 0x10U) | (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[1U] 
                                 >> 0x10U));
            vlSelf->jpeg_top__DOT__u20__DOT__end_of_file_enable_hold = 1U;
        } else if (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_1) 
                    | (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_2))) {
            vlSelf->jpeg_top__DOT__u20__DOT__eof_data_ready_1 
                = vlSelf->jpeg_top__DOT__u20__DOT__eof_data_ready;
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream_eof 
                = vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_ro;
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rdv_1) 
             & (~ (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rpf_1)))) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
                = ((0xffffff00U & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream) 
                   | (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[1U] 
                      >> 0x18U));
        } else if (vlSelf->jpeg_top__DOT__u20__DOT__rpf_1) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
                = ((0xffffff00U & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream) 
                   | (0xffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro));
        }
        if ((((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rdv_1) 
              & (0U == (IData)(vlSelf->jpeg_top__DOT__u20__DOT__ffc_postfifo))) 
             & (~ (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rpf_1)))) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
                = ((0xffffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream) 
                   | (0xff000000U & (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[2U] 
                                     << 8U)));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rpf_1) 
                    | ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rdv_1) 
                       & (0U < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__ffc_postfifo))))) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
                = ((0xffffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream) 
                   | (0xff000000U & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro));
        }
        if ((((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rdv_1) 
              & (2U > (IData)(vlSelf->jpeg_top__DOT__u20__DOT__ffc_postfifo))) 
             & (~ (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rpf_1)))) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
                = ((0xff00ffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream) 
                   | (0xff0000U & (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[2U] 
                                   << 8U)));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rpf_1) 
                    | ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rdv_1) 
                       & (1U < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__ffc_postfifo))))) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
                = ((0xff00ffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream) 
                   | (0xff0000U & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro));
        }
        if ((((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rdv_1) 
              & (3U > (IData)(vlSelf->jpeg_top__DOT__u20__DOT__ffc_postfifo))) 
             & (~ (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rpf_1)))) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
                = ((0xffff00ffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream) 
                   | (0xff00U & (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[2U] 
                                 << 8U)));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rpf_1) 
                    | ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rdv_1) 
                       & (3U == (IData)(vlSelf->jpeg_top__DOT__u20__DOT__ffc_postfifo))))) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream 
                = ((0xffff00ffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_bitstream) 
                   | (0xff00U & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_4) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_4) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_4) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits;
        }
    }
    vlSelf->eof_data_partial_ready = ((~ (IData)(vlSelf->rst)) 
                                      & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_1)
                                          ? ((0U < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof_1)) 
                                             & (0x20U 
                                                > (IData)(vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof_1)))
                                          : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_dpr_1)));
    vlSelf->jpeg_top__DOT__u19__DOT__u24__DOT__write_ptr 
        = __Vdly__jpeg_top__DOT__u19__DOT__u24__DOT__write_ptr;
    vlSelf->jpeg_top__DOT__u19__DOT__u16__DOT__write_ptr 
        = __Vdly__jpeg_top__DOT__u19__DOT__u16__DOT__write_ptr;
    vlSelf->jpeg_top__DOT__u19__DOT__u25__DOT__write_ptr 
        = __Vdly__jpeg_top__DOT__u19__DOT__u25__DOT__write_ptr;
    vlSelf->jpeg_top__DOT__u19__DOT__u15__DOT__write_ptr 
        = __Vdly__jpeg_top__DOT__u19__DOT__u15__DOT__write_ptr;
    vlSelf->jpeg_top__DOT__u19__DOT__u17__DOT__write_ptr 
        = __Vdly__jpeg_top__DOT__u19__DOT__u17__DOT__write_ptr;
    vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr 
        = __Vdly__jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr;
    if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_8) {
        if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_8) {
            vlSelf->jpeg_top__DOT__u20__DOT__write_enable = 1U;
        }
    } else {
        vlSelf->jpeg_top__DOT__u20__DOT__write_enable = 0U;
    }
    vlSelf->jpeg_top__DOT__u20__DOT__rollover_5 = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rollover_4));
    vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_3 = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_2));
    vlSelf->jpeg_top__DOT__u20__DOT__eof_dpr_1 = ((~ (IData)(vlSelf->rst)) 
                                                  & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_1)
                                                      ? 
                                                     ((0x20U 
                                                       < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof_1)) 
                                                      & (0x40U 
                                                         > (IData)(vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof_1)))
                                                      : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_dpr_2)));
    if ((4U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count))) {
        if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count))) {
            if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y5_mul_input 
                    = jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__T1;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y7_mul_input = 0xc3fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y3_mul_input = 0x1d90U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y8_mul_input = 0xfffff9c2U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y6_mul_input = 0xffffee39U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y4_mul_input = 0xffffe565U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y2_mul_input = 0xffffe09dU;
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y5_mul_input = 0xffffe95fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y7_mul_input = 0xffffe270U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y3_mul_input = 0xc3fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y8_mul_input = 0x11c7U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y6_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y4_mul_input = 0x63eU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y2_mul_input = 0xffffe565U;
            }
        } else if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y5_mul_input = 0xffffe95fU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y7_mul_input = 0x1d90U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y3_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y8_mul_input = 0xffffe565U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y6_mul_input = 0xfffff9c2U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y4_mul_input = 0x1f63U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y2_mul_input = 0xffffee39U;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y5_mul_input 
                = jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__T1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y7_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y3_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y8_mul_input = 0x1f63U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y6_mul_input = 0xffffe565U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y4_mul_input = 0x11c7U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y2_mul_input = 0xfffff9c2U;
        }
    } else if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count))) {
        if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y5_mul_input 
                = jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__T1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y7_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y3_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y8_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y6_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y4_mul_input = 0xffffee39U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y2_mul_input = 0x63eU;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y5_mul_input = 0xffffe95fU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y7_mul_input = 0x1d90U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y3_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y8_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y6_mul_input = 0x63eU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y4_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y2_mul_input = 0x11c7U;
        }
    } else if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count))) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y5_mul_input = 0xffffe95fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y7_mul_input = 0xffffe270U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y3_mul_input = 0xc3fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y8_mul_input = 0xffffee39U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y6_mul_input = 0xffffe09dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y4_mul_input = 0xfffff9c2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y2_mul_input = 0x1a9bU;
    } else {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y5_mul_input 
            = jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__T1;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y7_mul_input = 0xc3fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y3_mul_input = 0x1d90U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y8_mul_input = 0x63eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y6_mul_input = 0x11c7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y4_mul_input = 0x1a9bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y2_mul_input = 0x1f63U;
    }
    if ((4U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count))) {
        if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count))) {
            if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb5_mul_input 
                    = jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__T1;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb7_mul_input = 0xc3fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb3_mul_input = 0x1d90U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb8_mul_input = 0xfffff9c2U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb6_mul_input = 0xffffee39U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb4_mul_input = 0xffffe565U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb2_mul_input = 0xffffe09dU;
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb5_mul_input = 0xffffe95fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb7_mul_input = 0xffffe270U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb3_mul_input = 0xc3fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb8_mul_input = 0x11c7U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb6_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb4_mul_input = 0x63eU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb2_mul_input = 0xffffe565U;
            }
        } else if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb5_mul_input = 0xffffe95fU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb7_mul_input = 0x1d90U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb3_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb8_mul_input = 0xffffe565U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb6_mul_input = 0xfffff9c2U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb4_mul_input = 0x1f63U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb2_mul_input = 0xffffee39U;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb5_mul_input 
                = jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__T1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb7_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb3_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb8_mul_input = 0x1f63U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb6_mul_input = 0xffffe565U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb4_mul_input = 0x11c7U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb2_mul_input = 0xfffff9c2U;
        }
    } else if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count))) {
        if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb5_mul_input 
                = jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__T1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb7_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb3_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb8_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb6_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb4_mul_input = 0xffffee39U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb2_mul_input = 0x63eU;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb5_mul_input = 0xffffe95fU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb7_mul_input = 0x1d90U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb3_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb8_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb6_mul_input = 0x63eU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb4_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb2_mul_input = 0x11c7U;
        }
    } else if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count))) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb5_mul_input = 0xffffe95fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb7_mul_input = 0xffffe270U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb3_mul_input = 0xc3fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb8_mul_input = 0xffffee39U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb6_mul_input = 0xffffe09dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb4_mul_input = 0xfffff9c2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb2_mul_input = 0x1a9bU;
    } else {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb5_mul_input 
            = jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__T1;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb7_mul_input = 0xc3fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb3_mul_input = 0x1d90U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb8_mul_input = 0x63eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb6_mul_input = 0x11c7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb4_mul_input = 0x1a9bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb2_mul_input = 0x1f63U;
    }
    if ((4U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count))) {
        if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count))) {
            if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb5_mul_input 
                    = jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__T1;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb7_mul_input = 0xc3fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb3_mul_input = 0x1d90U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb8_mul_input = 0xfffff9c2U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb6_mul_input = 0xffffee39U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb4_mul_input = 0xffffe565U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb2_mul_input = 0xffffe09dU;
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb5_mul_input = 0xffffe95fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb7_mul_input = 0xffffe270U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb3_mul_input = 0xc3fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb8_mul_input = 0x11c7U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb6_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb4_mul_input = 0x63eU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb2_mul_input = 0xffffe565U;
            }
        } else if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb5_mul_input = 0xffffe95fU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb7_mul_input = 0x1d90U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb3_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb8_mul_input = 0xffffe565U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb6_mul_input = 0xfffff9c2U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb4_mul_input = 0x1f63U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb2_mul_input = 0xffffee39U;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb5_mul_input 
                = jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__T1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb7_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb3_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb8_mul_input = 0x1f63U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb6_mul_input = 0xffffe565U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb4_mul_input = 0x11c7U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb2_mul_input = 0xfffff9c2U;
        }
    } else if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count))) {
        if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb5_mul_input 
                = jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__T1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb7_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb3_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb8_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb6_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb4_mul_input = 0xffffee39U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb2_mul_input = 0x63eU;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb5_mul_input = 0xffffe95fU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb7_mul_input = 0x1d90U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb3_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb8_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb6_mul_input = 0x63eU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb4_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb2_mul_input = 0x11c7U;
        }
    } else if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count))) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb5_mul_input = 0xffffe95fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb7_mul_input = 0xffffe270U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb3_mul_input = 0xc3fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb8_mul_input = 0xffffee39U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb6_mul_input = 0xffffe09dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb4_mul_input = 0xfffff9c2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb2_mul_input = 0x1a9bU;
    } else {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb5_mul_input 
            = jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__T1;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb7_mul_input = 0xc3fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb3_mul_input = 0x1d90U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb8_mul_input = 0x63eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb6_mul_input = 0x11c7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb4_mul_input = 0x1a9bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb2_mul_input = 0x1f63U;
    }
    if ((4U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy))) {
        if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy))) {
            if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input = 0xc3fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input = 0xffffe270U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input = 0x63eU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input = 0x11c7U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input = 0xffffe565U;
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input = 0xfffff3c1U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input = 0x1d90U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input = 0xfffff9c2U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input = 0xffffe565U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input = 0xffffee39U;
            }
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input = 0xffffe95fU;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input 
                = jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1;
            if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input = 0x11c7U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input = 0xffffe565U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input = 0xfffff9c2U;
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input = 0xffffee39U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input = 0x1a9bU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input = 0xffffe09dU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input = 0x63eU;
            }
        }
    } else if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy))) {
        if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input = 0x1d90U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input = 0x63eU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input = 0x11c7U;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input = 0xc3fU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input = 0xfffff9c2U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input = 0xffffee39U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input = 0x1a9bU;
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input = 0xffffe95fU;
    } else {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti3_mul_input = 0x1d90U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti7_mul_input = 0xc3fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti5_mul_input 
            = jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti1;
        if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input = 0x11c7U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input = 0x63eU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input = 0x1f63U;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti4_mul_input = 0xffffe565U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti6_mul_input = 0xffffee39U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti8_mul_input = 0xfffff9c2U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Ti2_mul_input = 0xffffe09dU;
        }
    }
    if ((4U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy))) {
        if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy))) {
            if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input = 0xc3fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input = 0xffffe270U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input = 0x63eU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input = 0x11c7U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input = 0xffffe565U;
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input = 0xfffff3c1U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input = 0x1d90U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input = 0xfffff9c2U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input = 0xffffe565U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input = 0xffffee39U;
            }
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input = 0xffffe95fU;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input 
                = jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1;
            if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input = 0x11c7U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input = 0xffffe565U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input = 0xfffff9c2U;
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input = 0xffffee39U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input = 0x1a9bU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input = 0xffffe09dU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input = 0x63eU;
            }
        }
    } else if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy))) {
        if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input = 0x1d90U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input = 0x63eU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input = 0x11c7U;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input = 0xc3fU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input = 0xfffff9c2U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input = 0xffffee39U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input = 0x1a9bU;
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input = 0xffffe95fU;
    } else {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti3_mul_input = 0x1d90U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti7_mul_input = 0xc3fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti5_mul_input 
            = jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti1;
        if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input = 0x11c7U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input = 0x63eU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input = 0x1f63U;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti4_mul_input = 0xffffe565U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti6_mul_input = 0xffffee39U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti8_mul_input = 0xfffff9c2U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Ti2_mul_input = 0xffffe09dU;
        }
    }
    if ((4U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy))) {
        if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy))) {
            if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input = 0xc3fU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input = 0xffffe270U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input = 0x63eU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input = 0x11c7U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input = 0xffffe565U;
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input = 0xfffff3c1U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input = 0x1d90U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input = 0xfffff9c2U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input = 0xffffe565U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input = 0xffffee39U;
            }
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input = 0xffffe95fU;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input 
                = jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1;
            if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input = 0x11c7U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input = 0xffffe565U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input = 0x1f63U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input = 0xfffff9c2U;
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input = 0xffffee39U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input = 0x1a9bU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input = 0xffffe09dU;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input = 0x63eU;
            }
        }
    } else if ((2U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy))) {
        if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input = 0xfffff3c1U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input = 0x1d90U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input = 0x63eU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input = 0x11c7U;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input = 0xc3fU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input = 0xffffe270U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input = 0xfffff9c2U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input = 0xffffe09dU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input = 0xffffee39U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input = 0x1a9bU;
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input = 0xffffe95fU;
    } else {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti3_mul_input = 0x1d90U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti7_mul_input = 0xc3fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti5_mul_input 
            = jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti1;
        if ((1U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input = 0x1a9bU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input = 0x11c7U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input = 0x63eU;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input = 0x1f63U;
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti4_mul_input = 0xffffe565U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti6_mul_input = 0xffffee39U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti8_mul_input = 0xfffff9c2U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Ti2_mul_input = 0xffffe09dU;
        }
    }
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__1(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    jpeg_top_exact__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb6e2b6ec__0;
    VlWide<3>/*95:0*/ __Vtemp_hb6e2b6ec__1;
    VlWide<3>/*95:0*/ __Vtemp_hbf34fa58__0;
    VlWide<3>/*95:0*/ __Vtemp_h39007b46__0;
    VlWide<3>/*95:0*/ __Vtemp_he178089d__0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->jpeg_top__DOT__u20__DOT__rollover_4 = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rollover_3));
    vlSelf->jpeg_top__DOT__u20__DOT__dr_in_8 = ((~ (IData)(vlSelf->rst)) 
                                                & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__dr_in_7));
    vlSelf->jpeg_top__DOT__u20__DOT__eof_dpr_2 = ((~ (IData)(vlSelf->rst)) 
                                                  & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_1) 
                                                     & (0x40U 
                                                        < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof_1))));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy 
        = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_of_copy;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy 
        = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_of_copy;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy 
        = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_of_copy;
    vlSelf->jpeg_top__DOT__u19__DOT__cr_write_enable 
        = ((~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cr_eob_empty)) 
           & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cr_data_ready));
    vlSelf->jpeg_top__DOT__u19__DOT__cb_write_enable 
        = ((~ (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cb_eob_empty)) 
           & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cb_data_ready));
    vlSelf->jpeg_top__DOT__u20__DOT__rollover_3 = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rollover_2));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__ffc_6 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[0U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[1U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[2U] = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_8 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                        & (0U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                           >> 0x1fU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                        >> 0x1fU)) 
                      << 0x1fU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x40000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                       & (1U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                          >> 0x1eU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                          >> 0x1eU)) 
                                     << 0x1eU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x20000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                       & (2U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                          >> 0x1dU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                          >> 0x1dU)) 
                                     << 0x1dU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x10000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                       & (3U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                          >> 0x1cU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                          >> 0x1cU)) 
                                     << 0x1cU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x8000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                      & (4U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                         >> 0x1bU) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                      >> 0x1bU)) << 0x1bU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x4000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                      & (5U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                         >> 0x1aU) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                      >> 0x1aU)) << 0x1aU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x2000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                      & (6U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                         >> 0x19U) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                      >> 0x19U)) << 0x19U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x1000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                      & (7U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                         >> 0x18U) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                      >> 0x18U)) << 0x18U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x800000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                     & (8U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                        >> 0x17U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                     >> 0x17U)) << 0x17U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x400000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                     & (9U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                        >> 0x16U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                     >> 0x16U)) << 0x16U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x200000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                     & (0xaU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                        >> 0x15U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                     >> 0x15U)) << 0x15U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x100000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                     & (0xbU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                        >> 0x14U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                     >> 0x14U)) << 0x14U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x80000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                    & (0xcU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                       >> 0x13U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                    >> 0x13U)) << 0x13U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x40000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                    & (0xdU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                       >> 0x12U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                    >> 0x12U)) << 0x12U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x20000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                    & (0xeU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                       >> 0x11U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                    >> 0x11U)) << 0x11U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x10000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                    & (0xfU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                       >> 0x10U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                    >> 0x10U)) << 0x10U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x8000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                   & (0x10U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                      >> 0xfU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                                  >> 0xfU)) 
                                 << 0xfU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x4000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                   & (0x11U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                      >> 0xeU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                                  >> 0xeU)) 
                                 << 0xeU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x2000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                   & (0x12U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                      >> 0xdU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                                  >> 0xdU)) 
                                 << 0xdU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x1000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                   & (0x13U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                      >> 0xcU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                                  >> 0xcU)) 
                                 << 0xcU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x800U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                  & (0x14U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                     >> 0xbU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                                 >> 0xbU)) 
                                << 0xbU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x400U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                  & (0x15U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                     >> 0xaU) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                                 >> 0xaU)) 
                                << 0xaU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x200U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                  & (0x16U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                     >> 9U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                               >> 9U)) 
                                << 9U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x100U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                  & (0x17U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                     >> 8U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                               >> 8U)) 
                                << 8U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x80U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                 & (0x18U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                    >> 7U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                              >> 7U)) 
                               << 7U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x40U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                 & (0x19U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                    >> 6U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                              >> 6U)) 
                               << 6U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x20U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                 & (0x1aU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                    >> 5U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                              >> 5U)) 
                               << 5U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (0x10U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                                 & (0x1bU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                    >> 4U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                              >> 4U)) 
                               << 4U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (8U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                              & (0x1cU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                 >> 3U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                           >> 3U)) 
                            << 3U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (4U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                              & (0x1dU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                 >> 2U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                           >> 2U)) 
                            << 2U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (2U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__rollover_6) 
                              & (0x1eU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                                 >> 1U) : (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                                           >> 1U)) 
                            << 1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5 
                = ((0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_5) 
                   | (1U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4));
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_7) {
            vlSelf->jpeg_top__DOT__u20__DOT__ffc_6 
                = vlSelf->jpeg_top__DOT__u20__DOT__ffc_5;
            VL_EXTEND_WQ(88,64, __Vtemp_hb6e2b6ec__0, vlSelf->jpeg_top__DOT__u20__DOT__JPEG_7);
            VL_EXTEND_WQ(88,64, __Vtemp_hb6e2b6ec__1, vlSelf->jpeg_top__DOT__u20__DOT__JPEG_7);
            VL_SHIFTL_WWI(88,88,32, __Vtemp_hbf34fa58__0, __Vtemp_hb6e2b6ec__1, 0x10U);
            if ((2U & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__ffc_5))) {
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[0U] 
                    = __Vtemp_hb6e2b6ec__0[0U];
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[1U] 
                    = __Vtemp_hb6e2b6ec__0[1U];
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[2U] 
                    = (0xffffffU & __Vtemp_hb6e2b6ec__0[2U]);
            } else {
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[0U] 
                    = __Vtemp_hbf34fa58__0[0U];
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[1U] 
                    = __Vtemp_hbf34fa58__0[1U];
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_out[2U] 
                    = (0xffffffU & __Vtemp_hbf34fa58__0[2U]);
            }
        }
    }
    vlSelf->jpeg_top__DOT__u20__DOT__dr_in_7 = ((~ (IData)(vlSelf->rst)) 
                                                & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__dr_in_6));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u20__DOT__rollover_pf = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__eof_data_ready = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__ffc_postfifo = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_ro = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u20__DOT__rdata_valid) {
            if (vlSelf->jpeg_top__DOT__u20__DOT__rdata_valid) {
                vlSelf->jpeg_top__DOT__u20__DOT__rollover_pf 
                    = (1U & vlSelf->jpeg_top__DOT__u20__DOT__read_data[0U]);
            }
            vlSelf->jpeg_top__DOT__u20__DOT__ffc_postfifo 
                = (3U & (vlSelf->jpeg_top__DOT__u20__DOT__read_data[0U] 
                         >> 1U));
        } else {
            vlSelf->jpeg_top__DOT__u20__DOT__rollover_pf = 0U;
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__end_of_file_enable) {
            vlSelf->jpeg_top__DOT__u20__DOT__eof_data_ready 
                = (0x3fU < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof_1));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_ro 
                = ((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[1U] 
                    << 0x10U) | (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[0U] 
                                 >> 0x10U));
        } else {
            if (vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_1) {
                vlSelf->jpeg_top__DOT__u20__DOT__eof_data_ready = 0U;
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_1) 
                 | (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_2))) {
                vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_ro 
                    = ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_ro_ro) 
                       << 0x10U);
            }
        }
    }
    vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_2 = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_1));
    vlSelf->jpeg_top__DOT__u20__DOT__rollover_2 = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rollover_1));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_et_15 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_et_15 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_et_15 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__end_of_block = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_7 = 0ULL;
        vlSelf->jpeg_top__DOT__u20__DOT__ffc_5 = 0U;
    } else {
        if (vlSelf->enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y 
                = (0xffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y_temp)
                             ? ((IData)(1U) + (0xffU 
                                               & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y_temp 
                                                  >> 0xeU)))
                             : (0xffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y_temp 
                                         >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB 
                = (0xffU & (((vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB_temp 
                              >> 0xdU) & (0xffU != 
                                          (0xffU & 
                                           (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB_temp 
                                            >> 0xeU))))
                             ? ((IData)(1U) + (0xffU 
                                               & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB_temp 
                                                  >> 0xeU)))
                             : (0xffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB_temp 
                                         >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR 
                = (0xffU & (((vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR_temp 
                              >> 0xdU) & (0xffU != 
                                          (0xffU & 
                                           (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR_temp 
                                            >> 0xeU))))
                             ? ((IData)(1U) + (0xffU 
                                               & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR_temp 
                                                  >> 0xeU)))
                             : (0xffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR_temp 
                                         >> 0xeU))));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_1 
                = (0x1fffU & ((0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_diff)
                               ? ((IData)(1U) + (0x1fffU 
                                                 & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_diff 
                                                    >> 0xcU)))
                               : (0x1fffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_diff 
                                             >> 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_1 
                = (0x1fffU & ((0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_diff)
                               ? ((IData)(1U) + (0x1fffU 
                                                 & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_diff 
                                                    >> 0xcU)))
                               : (0x1fffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_diff 
                                             >> 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_1 
                = (0x1fffU & ((0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_diff)
                               ? ((IData)(1U) + (0x1fffU 
                                                 & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_diff 
                                                    >> 0xcU)))
                               : (0x1fffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_diff 
                                             >> 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_1 
                = (0x1fffU & ((0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_diff)
                               ? ((IData)(1U) + (0x1fffU 
                                                 & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_diff 
                                                    >> 0xcU)))
                               : (0x1fffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_diff 
                                             >> 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_1 
                = (0x1fffU & ((0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_diff)
                               ? ((IData)(1U) + (0x1fffU 
                                                 & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_diff 
                                                    >> 0xcU)))
                               : (0x1fffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_diff 
                                             >> 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_1 
                = (0x1fffU & ((0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_diff)
                               ? ((IData)(1U) + (0x1fffU 
                                                 & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_diff 
                                                    >> 0xcU)))
                               : (0x1fffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_diff 
                                             >> 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_1 
                = (0x1fffU & ((0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_diff)
                               ? ((IData)(1U) + (0x1fffU 
                                                 & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_diff 
                                                    >> 0xcU)))
                               : (0x1fffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_diff 
                                             >> 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_diff 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_diff)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_diff 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_diff 
                                           >> 0xeU))));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_3;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_et_15 
                = (0xfU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_3));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_7 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_6;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_6 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_5;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_4 
                = ((1U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_6))
                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_3 
                       >> 1U) : vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_3);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_4 
                = ((1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_4))
                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_3 
                       << 1U) : vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_3);
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block = 0U;
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                    & (0x20U > (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block 
                = ((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__third_8_all_0s) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__fourth_8_all_0s)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__fifth_8_all_0s)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__sixth_8_all_0s)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__seventh_8_all_0s)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__eighth_8_all_0s));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                    & (0x30U > (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block 
                = ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__fifth_8_all_0s) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__sixth_8_all_0s)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__seventh_8_all_0s)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__eighth_8_all_0s));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                    & (0x40U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__seventh_8_all_0s) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__eighth_8_all_0s));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) 
                    & (0x40U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block = 1U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_3;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_et_15 
                = (0xfU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_3));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_7 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_6;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_6 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_5;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_4 
                = ((1U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_6))
                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_3 
                       >> 1U) : vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_3);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_4 
                = ((1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_4))
                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_3 
                       << 1U) : vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_3);
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block = 0U;
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                    & (0x20U > (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block 
                = ((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__third_8_all_0s) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__fourth_8_all_0s)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__fifth_8_all_0s)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__sixth_8_all_0s)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__seventh_8_all_0s)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__eighth_8_all_0s));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                    & (0x30U > (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block 
                = ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__fifth_8_all_0s) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__sixth_8_all_0s)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__seventh_8_all_0s)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__eighth_8_all_0s));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                    & (0x40U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__seventh_8_all_0s) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__eighth_8_all_0s));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) 
                    & (0x40U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block = 1U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_3;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_et_15 
                = (0xfU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_3));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_7 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_6;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_4 
                = ((1U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_6))
                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_3 
                       >> 1U) : vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_3);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_4 
                = ((1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_4))
                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_3 
                       << 1U) : vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_3);
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__end_of_block = 0U;
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                    & (0x20U > (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__end_of_block 
                = ((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__third_8_all_0s) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__fourth_8_all_0s)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__fifth_8_all_0s)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__sixth_8_all_0s)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__seventh_8_all_0s)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__eighth_8_all_0s));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                    & (0x30U > (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__end_of_block 
                = ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__fifth_8_all_0s) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__sixth_8_all_0s)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__seventh_8_all_0s)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__eighth_8_all_0s));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                    & (0x40U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__end_of_block 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__seventh_8_all_0s) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__eighth_8_all_0s));
        } else if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) 
                    & (0x40U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter)))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__end_of_block = 1U;
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_6) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_7 
                = ((0xffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_7) 
                   | (0xffffffffffff0000ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_7 
                = ((0xffffffffffff00ffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_7) 
                   | ((QData)((IData)(((0xffU == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6 
                                                             >> 0x10U))))
                                        ? 0U : (0xffU 
                                                & (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6 
                                                           >> 8U)))))) 
                      << 8U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_7 
                = ((0xffffffffffffff00ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_7) 
                   | (IData)((IData)((0xffU & ((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6 
                                                            >> 0x10U))))
                                                ? (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6 
                                                           >> 8U))
                                                : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6))))));
            vlSelf->jpeg_top__DOT__u20__DOT__ffc_5 
                = vlSelf->jpeg_top__DOT__u20__DOT__ffc_4;
        }
    }
    vlSelf->jpeg_top__DOT__u20__DOT__dr_in_6 = ((~ (IData)(vlSelf->rst)) 
                                                & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__dr_in_5));
    vlSelf->jpeg_top__DOT__u20__DOT__eof_bits_1 = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__end_of_file_enable));
    vlSelf->jpeg_top__DOT__u20__DOT__rollover_1 = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rollover));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_ro_ro = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y_temp = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB_temp = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR_temp = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_diff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__eighth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__seventh_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__sixth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__fifth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__fourth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__third_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__eighth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__seventh_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__sixth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__fifth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__fourth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__third_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__eighth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__seventh_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__sixth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__fifth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__fourth_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__third_8_all_0s = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_6 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_6 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_6 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_6 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_6 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_6 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_3 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6 = 0ULL;
        vlSelf->jpeg_top__DOT__u20__DOT__ffc_4 = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u20__DOT__end_of_file_enable) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_ro_ro 
                = (0xffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[0U]);
        }
        vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof_1 
            = (0x7fU & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof) 
                        + ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__count_total_eof) 
                           << 3U)));
        if (vlSelf->enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y_temp 
                = (0x3fffffU & ((vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y1_product 
                                 + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y2_product) 
                                + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB_temp 
                = (0x3fffffU & ((((IData)(0x200000U) 
                                  - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product) 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product) 
                                + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR_temp 
                = (0x3fffffU & ((((IData)(0x200000U) 
                                  + vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product) 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product) 
                                - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_2 
                = ((0x1fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_2) 
                   | (((0x1000U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_1))
                        ? 0x7ffffU : 0U) << 0xdU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_2 
                = ((0xffffe000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_2) 
                   | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_1));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_2 
                = ((((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_1))
                      ? 0x1fffffU : 0U) << 0xbU) | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_1));
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_5) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__enable_1))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_prev));
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_5) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__enable_1))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_prev));
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_5) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__enable_1))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_prev));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_diff 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final 
                                 - vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_prev));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_6 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_5;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_5 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_4;
            if ((2U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_5))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_6 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_5) 
                                - (IData)(2U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_3 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_2 
                       >> 2U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_6 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_5));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_3 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_2;
            }
            if ((2U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_3))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_4 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_3));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_3 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_2 
                       << 2U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_4 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_3) 
                                - (IData)(2U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_3 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_2;
            }
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_1) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__eighth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb76_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb85_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb86_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb77_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb68_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb78_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb87_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb88_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__seventh_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb83_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb84_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb75_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb66_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb57_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb48_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb58_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb67_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__sixth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb46_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb37_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb28_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb38_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb47_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb56_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb65_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb74_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__fifth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb54_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb63_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb72_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb81_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb82_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb73_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb64_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb55_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__fourth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb44_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb35_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb26_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb17_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb18_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb27_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb36_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb45_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__third_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb25_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb34_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb43_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb52_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb61_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb71_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb62_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb53_et_zero));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_6 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_5;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_5 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_4;
            if ((2U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_5))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_6 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_5) 
                                - (IData)(2U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_3 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_2 
                       >> 2U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_6 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_5));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_3 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_2;
            }
            if ((2U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_3))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_4 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_3));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_3 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_2 
                       << 2U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_4 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_3) 
                                - (IData)(2U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_3 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_2;
            }
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_1) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__eighth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr76_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr85_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr86_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr77_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr68_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr78_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr87_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr88_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__seventh_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr83_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr84_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr75_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr66_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr57_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr48_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr58_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr67_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__sixth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr46_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr37_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr28_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr38_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr47_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr56_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr65_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr74_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__fifth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr54_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr63_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr72_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr81_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr82_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr73_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr64_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr55_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__fourth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr44_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr35_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr26_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr17_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr18_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr27_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr36_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr45_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__third_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr25_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr34_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr43_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr52_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr61_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr71_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr62_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr53_et_zero));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_6 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_5;
            if ((2U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_5))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_6 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_5) 
                                - (IData)(2U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_3 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_2 
                       >> 2U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_6 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_5));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_3 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_2;
            }
            if ((2U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_3))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_4 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_3));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_3 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_2 
                       << 2U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_4 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_3) 
                                - (IData)(2U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_3 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_2;
            }
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_1) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__eighth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y76_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y85_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y86_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y77_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y68_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y78_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y87_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y88_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__seventh_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y83_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y84_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y75_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y66_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y57_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y48_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y58_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y67_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__sixth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y46_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y37_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y28_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y38_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y47_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y56_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y65_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y74_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__fifth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y54_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y63_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y72_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y81_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y82_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y73_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y64_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y55_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__fourth_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y44_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y35_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y26_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y17_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y18_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y27_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y36_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y45_et_zero));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__third_8_all_0s 
                = ((((((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y25_et_zero) 
                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y34_et_zero)) 
                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y43_et_zero)) 
                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y52_et_zero)) 
                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y61_et_zero)) 
                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y71_et_zero)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y62_et_zero)) 
                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y53_et_zero));
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_5) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6 
                = ((0xffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6) 
                   | (0xffffffffff000000ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6 
                = ((0xffffffffff00ffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6) 
                   | ((QData)((IData)(((0xffU == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                                                             >> 0x18U))))
                                        ? 0U : (0xffU 
                                                & (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                                                           >> 0x10U)))))) 
                      << 0x10U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6 
                = ((0xffffffffffff00ffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6) 
                   | ((QData)((IData)((0xffU & ((0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                                                             >> 0x18U))))
                                                 ? (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                                                            >> 0x10U))
                                                 : (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                                                            >> 8U)))))) 
                      << 8U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6 
                = ((0xffffffffffffff00ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_6) 
                   | (IData)((IData)((0xffU & ((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                                                            >> 0x18U))))
                                                ? (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                                                           >> 8U))
                                                : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5))))));
            vlSelf->jpeg_top__DOT__u20__DOT__ffc_4 
                = vlSelf->jpeg_top__DOT__u20__DOT__ffc_3;
        }
    }
    vlSelf->jpeg_top__DOT__u20__DOT__dr_in_5 = ((~ (IData)(vlSelf->rst)) 
                                                & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__dr_in_4));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[0U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[1U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[2U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y1_product = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y2_product = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_prev = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_5 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_2 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 = 0ULL;
        vlSelf->jpeg_top__DOT__u20__DOT__ffc_3 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__end_of_file_enable = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__eof_count 
            = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__eof_count;
        vlSelf->jpeg_top__DOT__u20__DOT__FF_count_1 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__rpf_1 = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__rpf_1;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[0U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[1U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[2U] = 0U;
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__JPEG_eof_5_1 = 0ULL;
    } else {
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[2U] 
            = (0xffffU & ((0xff00U & (((0U < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__FF_count_1))
                                        ? (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro 
                                           >> 0x18U)
                                        : ((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[2U] 
                                            << 0x18U) 
                                           | (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[2U] 
                                              >> 8U))) 
                                      << 8U)) | (0xffU 
                                                 & ((1U 
                                                     < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__FF_count_1))
                                                     ? 
                                                    (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro 
                                                     >> 0x10U)
                                                     : 
                                                    vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[2U]))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[0U] 
            = (IData)((((QData)((IData)((0xffU & ((2U 
                                                   < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__FF_count_1))
                                                   ? 
                                                  (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro 
                                                   >> 8U)
                                                   : 
                                                  ((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[1U] 
                                                    << 8U) 
                                                   | (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[1U] 
                                                      >> 0x18U)))))) 
                        << 0x38U) | (0xffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[0U]))))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_7[1U] 
            = (IData)(((((QData)((IData)((0xffU & (
                                                   (2U 
                                                    < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__FF_count_1))
                                                    ? 
                                                   (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro 
                                                    >> 8U)
                                                    : 
                                                   ((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[1U] 
                                                     << 8U) 
                                                    | (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[1U] 
                                                       >> 0x18U)))))) 
                         << 0x38U) | (0xffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[0U]))))) 
                       >> 0x20U));
        vlSelf->jpeg_top__DOT__u20__DOT__extra_bits_eof 
            = (0x7fU & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__orc_input) 
                        + ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__FF_count) 
                           << 3U)));
        if (vlSelf->enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y1_product 
                = (0x3fffffU & ((IData)(0x1323U) * 
                                (0xffU & vlSelf->data_in)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y2_product 
                = (0x3fffffU & ((IData)(0x2591U) * 
                                (0xffU & (vlSelf->data_in 
                                          >> 8U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__Y3_product 
                = (0x3fffffU & ((IData)(0x74cU) * (0xffU 
                                                   & (vlSelf->data_in 
                                                      >> 0x10U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB1_product 
                = (0x3fffffU & ((IData)(0xaccU) * (0xffU 
                                                   & vlSelf->data_in)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB2_product 
                = (0x3fffffU & ((IData)(0x1534U) * 
                                (0xffU & (vlSelf->data_in 
                                          >> 8U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CB3_product 
                = (0x1fe000U & (vlSelf->data_in >> 3U));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR1_product 
                = (0x1fe000U & (vlSelf->data_in << 0xdU));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR2_product 
                = (0x3fffffU & ((IData)(0x1accU) * 
                                (0xffU & (vlSelf->data_in 
                                          >> 8U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u4__DOT__CR3_product 
                = (0x3fffffU & ((IData)(0x534U) * (0xffU 
                                                   & (vlSelf->data_in 
                                                      >> 0x10U))));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__rgb_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final_1 
                = (0x1fffU & ((0x800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final)
                               ? ((IData)(1U) + (0x1fffU 
                                                 & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final 
                                                    >> 0xcU)))
                               : (0x1fffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final 
                                             >> 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final 
                                           >> 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final_1 
                = (0x7ffU & ((0x2000U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final)
                              ? ((IData)(1U) + (0x7ffU 
                                                & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final 
                                                   >> 0xeU)))
                              : (0x7ffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final 
                                           >> 0xeU))));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__enable_1) {
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_4) 
                 & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__enable_1))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final;
            }
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final_prev = 0U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__enable_1) {
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_4) 
                 & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__enable_1))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final;
            }
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final_prev = 0U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__enable_1) {
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_4) 
                 & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__enable_1))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_prev 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final;
            }
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final_prev = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final_prev = 0U;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_5 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_4;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_3;
            if ((4U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_4))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_5 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_4) 
                                - (IData)(4U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_2 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_1 
                       >> 4U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_5 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_4));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_2 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_1;
            }
            if ((4U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_2))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_3 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_2));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_2 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_1 
                       << 4U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_3 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_2) 
                                - (IData)(4U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_2 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_1;
            }
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_5 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_4;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_3;
            if ((4U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_4))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_5 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_4) 
                                - (IData)(4U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_2 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_1 
                       >> 4U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_5 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_4));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_2 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_1;
            }
            if ((4U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_2))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_3 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_2));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_2 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_1 
                       << 4U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_3 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_2) 
                                - (IData)(4U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_2 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_1;
            }
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_5 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_4;
            if ((4U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_4))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_5 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_4) 
                                - (IData)(4U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_2 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_1 
                       >> 4U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_5 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_4));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_2 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_1;
            }
            if ((4U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_2))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_3 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_2));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_2 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_1 
                       << 4U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_3 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_2) 
                                - (IData)(4U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_2 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_1;
            }
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_4) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                = ((0xffffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5) 
                   | ((QData)((IData)((IData)((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                                               >> 0x18U)))) 
                      << 0x20U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                = ((0xffffffff00ffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5) 
                   | ((QData)((IData)(((0xffU == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                                                             >> 0x18U))))
                                        ? 0U : (0xffU 
                                                & (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                                                           >> 0x10U)))))) 
                      << 0x18U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                = ((0xffffffffff00ffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5) 
                   | ((QData)((IData)((0xffU & ((0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                                                             >> 0x18U))))
                                                 ? (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                                                            >> 0x10U))
                                                 : (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                                                            >> 8U)))))) 
                      << 0x10U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                = ((0xffffffffffff00ffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5) 
                   | ((QData)((IData)((0xffU & ((0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                                                             >> 0x18U))))
                                                 ? (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                                                            >> 8U))
                                                 : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4))))) 
                      << 8U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5 
                = ((0xffffffffffffff00ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_5) 
                   | (IData)((IData)(((0xffU == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                                                            >> 0x18U))))
                                       ? (0xffU & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4))
                                       : 0U))));
            vlSelf->jpeg_top__DOT__u20__DOT__ffc_3 
                = vlSelf->jpeg_top__DOT__u20__DOT__ffc_2;
        }
        if ((0xf0U != (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_count))) {
            vlSelf->jpeg_top__DOT__u20__DOT__end_of_file_enable = 0U;
        } else if ((0xf0U == (IData)(vlSelf->jpeg_top__DOT__u20__DOT__eof_count))) {
            vlSelf->jpeg_top__DOT__u20__DOT__end_of_file_enable = 1U;
        }
        vlSelf->jpeg_top__DOT__u20__DOT__eof_count 
            = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__eof_count;
        vlSelf->jpeg_top__DOT__u20__DOT__FF_count_1 
            = vlSelf->jpeg_top__DOT__u20__DOT__FF_count;
        if (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__rdv_1) 
             & (~ (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rpf_1)))) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro 
                = ((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[1U] 
                    << 8U) | (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[0U] 
                              >> 0x18U));
        } else if (vlSelf->jpeg_top__DOT__u20__DOT__rpf_1) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro 
                = ((0xffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro) 
                   | (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro_ro 
                      << 8U));
        }
        vlSelf->jpeg_top__DOT__u20__DOT__rpf_1 = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__rpf_1;
        VL_EXTEND_WQ(80,64, __Vtemp_h39007b46__0, vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_5_1);
        VL_SHIFTL_WWI(80,80,5, __Vtemp_he178089d__0, __Vtemp_h39007b46__0, 
                      (0x10U & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__FF_eof_shift) 
                                << 3U)));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[0U] 
            = __Vtemp_he178089d__0[0U];
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[1U] 
            = __Vtemp_he178089d__0[1U];
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_6[2U] 
            = (0xffffU & __Vtemp_he178089d__0[2U]);
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__JPEG_eof_5_1 
            = (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_5 
               << (8U & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__FF_eof_shift) 
                         << 3U)));
    }
    vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_5_1 = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__JPEG_eof_5_1;
    vlSelf->jpeg_top__DOT__u20__DOT__dr_in_4 = ((~ (IData)(vlSelf->rst)) 
                                                & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__dr_in_3));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u20__DOT__orc_input = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_1 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__rollover = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 = 0ULL;
        vlSelf->jpeg_top__DOT__u20__DOT__ffc_2 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro_ro = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__FF_eof_shift = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_5 = 0ULL;
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__fifth_2bytes_eof = 0U;
    } else {
        vlSelf->jpeg_top__DOT__u20__DOT__orc_input 
            = vlSelf->jpeg_top__DOT__orc_reg_in;
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_3) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__enable_1))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11_final 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11 
                                 - (IData)(0x5a8400U)));
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y11;
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_3) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__enable_1))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11_final 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11 
                                 - (IData)(0x5a8400U)));
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb11;
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_3) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__enable_1))) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11_final 
                = (0x1ffffffU & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11 
                                 - (IData)(0x5a8400U)));
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb11;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__enable_1) {
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__count_4) 
                 & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__enable_1))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81;
            }
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81_final = 0U;
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y31;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y21;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y41;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y51;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y61;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y71;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1__DOT__Y81;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__enable_1) {
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__count_4) 
                 & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__enable_1))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81;
            }
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81_final = 0U;
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb31;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb21;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb41;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb51;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb61;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb71;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5__DOT__Cb81;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__enable_1) {
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__count_4) 
                 & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__enable_1))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81;
            }
        } else {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71_final = 0U;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81_final = 0U;
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb31;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb21;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb41;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb51;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb61;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb71;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8__DOT__Cb81;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zrl_1 
                = (((0x3eU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero))
                    ? 0U : (0xfU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_3;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_2;
            if ((8U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_3))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_4 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_3) 
                                - (IData)(8U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_1 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs 
                       >> 8U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_4 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_3));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs_1 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs;
            }
            if ((8U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_1))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_2 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_1));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_1 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs 
                       << 8U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_2 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_1) 
                                - (IData)(8U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs_1 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs;
            }
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__zero_run_length;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zrl_1 
                = (((0x3eU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero))
                    ? 0U : (0xfU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_3;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_2;
            if ((8U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_3))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_4 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_3) 
                                - (IData)(8U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_1 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs 
                       >> 8U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_4 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_3));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs_1 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs;
            }
            if ((8U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_1))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_2 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_1));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_1 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs 
                       << 8U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_2 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_1) 
                                - (IData)(8U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs_1 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs;
            }
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__zero_run_length;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zrl_1 
                = (((0x3eU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__block_counter)) 
                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero))
                    ? 0U : (0xfU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_4 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_3;
            if ((8U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_3))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_4 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_3) 
                                - (IData)(8U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_1 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs 
                       >> 8U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_4 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_3));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs_1 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs;
            }
            if ((8U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_1))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_2 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_1));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_1 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs 
                       << 8U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_2 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_1) 
                                - (IData)(8U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs_1 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs;
            }
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__zero_run_length;
        if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_3) {
            if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_3) {
                vlSelf->jpeg_top__DOT__u20__DOT__rollover 
                    = (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__FF_count) 
                        < (IData)(vlSelf->jpeg_top__DOT__u20__DOT__ffc_1)) 
                       | (4U == (IData)(vlSelf->jpeg_top__DOT__u20__DOT__ct_1)));
            }
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                = ((0xffffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4) 
                   | ((QData)((IData)((0xffffffU & (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                                                            >> 0x18U))))) 
                      << 0x20U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                = ((0xffffff00ffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4) 
                   | ((QData)((IData)(((0xffU == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                                                             >> 0x18U))))
                                        ? 0U : (0xffU 
                                                & (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                                                           >> 0x10U)))))) 
                      << 0x18U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                = ((0xffffffff00ffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4) 
                   | ((QData)((IData)((0xffU & ((0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                                                             >> 0x18U))))
                                                 ? (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                                                            >> 0x10U))
                                                 : (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                                                            >> 8U)))))) 
                      << 0x10U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                = ((0xffffffffff00ffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4) 
                   | ((QData)((IData)((0xffU & ((0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                                                             >> 0x18U))))
                                                 ? (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                                                            >> 8U))
                                                 : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3))))) 
                      << 8U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4 
                = ((0xffffffffffff00ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_4) 
                   | (IData)((IData)(((0xffU == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                                                            >> 0x18U))))
                                       ? (0xffU & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3))
                                       : 0U))));
            vlSelf->jpeg_top__DOT__u20__DOT__ffc_2 
                = vlSelf->jpeg_top__DOT__u20__DOT__ffc_1;
        } else {
            vlSelf->jpeg_top__DOT__u20__DOT__rollover = 0U;
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__rdv_1) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_ro_ro 
                = (0xffffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[0U]);
        }
        vlSelf->jpeg_top__DOT__u20__DOT__FF_eof_shift 
            = (3U & ((IData)(3U) - (IData)(vlSelf->jpeg_top__DOT__u20__DOT__FF_count)));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_5 
            = ((0xffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_5) 
               | ((0xffffffffff0000ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_4) 
                  | ((QData)((IData)(((IData)(vlSelf->jpeg_top__DOT__u20__DOT__fifth_2bytes_eof)
                                       ? 0U : (0xffU 
                                               & (IData)(
                                                         (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_4 
                                                          >> 8U)))))) 
                     << 8U)));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_5 
            = ((0xffffffffffff00ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_5) 
               | (IData)((IData)((0xffU & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__fifth_2bytes_eof)
                                            ? (IData)(
                                                      (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_4 
                                                       >> 8U))
                                            : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_4))))));
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__fifth_2bytes_eof 
            = (0xffU == (0xffU & (IData)((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_4 
                                          >> 0x10U))));
    }
    vlSelf->jpeg_top__DOT__u20__DOT__fifth_2bytes_eof 
        = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__fifth_2bytes_eof;
    vlSelf->jpeg_top__DOT__u20__DOT__dr_in_3 = ((~ (IData)(vlSelf->rst)) 
                                                & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__dr_in_2));
    vlSelf->jpeg_top__DOT__u20__DOT__rdv_1 = ((~ (IData)(vlSelf->rst)) 
                                              & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__rdata_valid));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__ct_1 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 = 0ULL;
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__FF_count = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__ffc_1 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__FF_count = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__FF_count;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[0U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[1U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[2U] = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_4 = 0ULL;
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__fourth_2bytes_eof = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__Q21)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb21_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__Q21)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr21_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__Q21)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y21_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__orc_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_1;
            if ((0x10U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_2))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_3 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_2) 
                                - (IData)(0x10U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits 
                       >> 0xaU);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_3 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_2));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_bs 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits 
                       << 6U);
            }
            if ((0x10U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_1 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits_1 
                       << 0x10U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge_1 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge) 
                                - (IData)(0x10U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__JPEG_ro_bs 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits_1;
            }
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__orc_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_2;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_1;
            if ((0x10U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_2))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_3 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_2) 
                                - (IData)(0x10U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits 
                       >> 0xaU);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_3 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_2));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_bs 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits 
                       << 6U);
            }
            if ((0x10U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_1 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits_1 
                       << 0x10U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge_1 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge) 
                                - (IData)(0x10U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__JPEG_ro_bs 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits_1;
            }
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__orc_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_2;
            if ((0x10U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_2))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_3 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_2) 
                                - (IData)(0x10U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits 
                       >> 0xaU);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_3 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_2));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_bs 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits 
                       << 6U);
            }
            if ((0x10U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_1 
                    = (0x1fU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs 
                    = (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits_1 
                       << 0x10U);
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge_1 
                    = (0x1fU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge) 
                                - (IData)(0x10U)));
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__JPEG_ro_bs 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits_1;
            }
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_2) {
            vlSelf->jpeg_top__DOT__u20__DOT__ct_1 = vlSelf->jpeg_top__DOT__u20__DOT__count_total;
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                = ((0xffffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3) 
                   | ((QData)((IData)((0xffffU & (IData)(
                                                         (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                                                          >> 0x18U))))) 
                      << 0x20U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                = ((0xffff00ffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3) 
                   | ((QData)((IData)(((0xffU == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                                                             >> 0x18U))))
                                        ? 0U : (0xffU 
                                                & (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                                                           >> 0x10U)))))) 
                      << 0x18U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                = ((0xffffff00ffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3) 
                   | ((QData)((IData)((0xffU & ((0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                                                             >> 0x18U))))
                                                 ? (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                                                            >> 0x10U))
                                                 : (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                                                            >> 8U)))))) 
                      << 0x10U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                = ((0xffffffff00ffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3) 
                   | ((QData)((IData)((0xffU & ((0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                                                             >> 0x18U))))
                                                 ? (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                                                            >> 8U))
                                                 : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2))))) 
                      << 8U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3 
                = ((0xffffffffff00ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_3) 
                   | (IData)((IData)(((0xffU == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                                                            >> 0x18U))))
                                       ? (0xffU & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2))
                                       : 0U))));
            vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__FF_count 
                = (3U & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__FF_count) 
                         + (IData)(vlSelf->jpeg_top__DOT__u20__DOT__count_total)));
            vlSelf->jpeg_top__DOT__u20__DOT__ffc_1 
                = vlSelf->jpeg_top__DOT__u20__DOT__FF_count;
        }
        vlSelf->jpeg_top__DOT__u20__DOT__FF_count = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__FF_count;
        if (vlSelf->jpeg_top__DOT__u20__DOT__rdata_valid) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[0U] 
                = ((vlSelf->jpeg_top__DOT__u20__DOT__read_data[1U] 
                    << 0x1dU) | (vlSelf->jpeg_top__DOT__u20__DOT__read_data[0U] 
                                 >> 3U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[1U] 
                = ((vlSelf->jpeg_top__DOT__u20__DOT__read_data[2U] 
                    << 0x1dU) | (vlSelf->jpeg_top__DOT__u20__DOT__read_data[1U] 
                                 >> 3U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_pf[2U] 
                = (0xffffffU & (vlSelf->jpeg_top__DOT__u20__DOT__read_data[2U] 
                                >> 3U));
        }
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_4 
            = ((0xffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_4) 
               | (((QData)((IData)((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3 
                                    >> 0x18U))) << 0x18U) 
                  | ((QData)((IData)(((IData)(vlSelf->jpeg_top__DOT__u20__DOT__fourth_2bytes_eof)
                                       ? 0U : (0xffU 
                                               & (IData)(
                                                         (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3 
                                                          >> 0x10U)))))) 
                     << 0x10U)));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_4 
            = ((0xffffffffff0000ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_4) 
               | (IData)((IData)(((0xff00U & (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__fourth_2bytes_eof)
                                                ? (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3 
                                                           >> 0x10U))
                                                : (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3 
                                                           >> 8U))) 
                                              << 8U)) 
                                  | (0xffU & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__fourth_2bytes_eof)
                                               ? (IData)(
                                                         (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3 
                                                          >> 8U))
                                               : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3)))))));
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__fourth_2bytes_eof 
            = (0xffU == (0xffU & (IData)((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3 
                                          >> 0x18U))));
    }
    vlSelf->jpeg_top__DOT__u20__DOT__fourth_2bytes_eof 
        = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__fourth_2bytes_eof;
    vlSelf->jpeg_top__DOT__u20__DOT__dr_in_2 = ((~ (IData)(vlSelf->rst)) 
                                                & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__dr_in_1));
    if (vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__read_enable) {
        vlSelf->jpeg_top__DOT__u20__DOT__read_data[0U] 
            = vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__mem
            [(0xfU & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr))][0U];
        vlSelf->jpeg_top__DOT__u20__DOT__read_data[1U] 
            = vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__mem
            [(0xfU & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr))][1U];
        vlSelf->jpeg_top__DOT__u20__DOT__read_data[2U] 
            = vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__mem
            [(0xfU & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr))][2U];
        vlSelf->jpeg_top__DOT__u20__DOT__rdata_valid 
            = (1U & (~ (IData)(vlSelf->rst)));
    } else {
        vlSelf->jpeg_top__DOT__u20__DOT__rdata_valid = 0U;
    }
    if (vlSelf->__Vdlyvset__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0) {
        vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__mem[vlSelf->__Vdlyvdim0__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0][0U] 
            = vlSelf->__Vdlyvval__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0[0U];
        vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__mem[vlSelf->__Vdlyvdim0__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0][1U] 
            = vlSelf->__Vdlyvval__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0[1U];
        vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__mem[vlSelf->__Vdlyvdim0__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0][2U] 
            = vlSelf->__Vdlyvval__jpeg_top__DOT__u20__DOT__u18__DOT__mem__v0[2U];
    }
    vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr 
        = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr;
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb21_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr21_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y21_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits_1 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 = 0ULL;
        vlSelf->jpeg_top__DOT__u20__DOT__count_total = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3 = 0ULL;
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__third_2bytes_eof = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb21_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__Q12)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb21_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb31_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr21_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__Q12)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr21_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr31_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y21_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__Q12)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y21_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y31_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_edge 
                = (0x1fU & ((IData)(0x1aU) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_2)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_edge 
                = (0x1fU & ((IData)(0x1aU) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_2)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_edge 
                = (0x1fU & ((IData)(0x1aU) + (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_2)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits;
        }
        if (vlSelf->jpeg_top__DOT__u20__DOT__dr_in_1) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                = ((0xffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2) 
                   | ((QData)((IData)(((0xff00U & (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_1 
                                                   >> 0x10U)) 
                                       | ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes)
                                           ? 0U : (0xffU 
                                                   & (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_1 
                                                      >> 0x10U)))))) 
                      << 0x18U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                = ((0xffff0000ffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2) 
                   | ((QData)((IData)(((0xff00U & (
                                                   ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes)
                                                     ? 
                                                    (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_1 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_1 
                                                     >> 8U)) 
                                                   << 8U)) 
                                       | (0xffU & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes)
                                                    ? 
                                                   (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_1 
                                                    >> 8U)
                                                    : vlSelf->jpeg_top__DOT__u20__DOT__JPEG_1))))) 
                      << 8U));
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2 
                = ((0xffffffff00ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_2) 
                   | (IData)((IData)(((IData)(vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes)
                                       ? (0xffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_1)
                                       : 0U))));
            vlSelf->jpeg_top__DOT__u20__DOT__count_total 
                = (7U & ((((IData)(vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes) 
                           + (IData)(vlSelf->jpeg_top__DOT__u20__DOT__second_2bytes)) 
                          + (IData)(vlSelf->jpeg_top__DOT__u20__DOT__third_2bytes)) 
                         + (IData)(vlSelf->jpeg_top__DOT__u20__DOT__fourth_2bytes)));
        }
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3 
            = ((0xffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3) 
               | ((QData)((IData)((((IData)((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2 
                                             >> 0x18U)) 
                                    << 8U) | ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__third_2bytes_eof)
                                               ? 0U
                                               : (0xffU 
                                                  & (IData)(
                                                            (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2 
                                                             >> 0x10U))))))) 
                  << 0x18U));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3 
            = ((0xffffffff0000ffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3) 
               | ((QData)((IData)(((0xff00U & (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__third_2bytes_eof)
                                                 ? (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2 
                                                            >> 0x10U))
                                                 : (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2 
                                                            >> 8U))) 
                                               << 8U)) 
                                   | (0xffU & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__third_2bytes_eof)
                                                ? (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2 
                                                           >> 8U))
                                                : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2)))))) 
                  << 8U));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3 
            = ((0xffffffffffff00ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_3) 
               | (IData)((IData)(((IData)(vlSelf->jpeg_top__DOT__u20__DOT__third_2bytes_eof)
                                   ? (0xffU & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2))
                                   : 0U))));
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__third_2bytes_eof 
            = (0xffU == (0xffU & (IData)((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2 
                                          >> 0x18U))));
    }
    vlSelf->jpeg_top__DOT__u20__DOT__third_2bytes_eof 
        = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__third_2bytes_eof;
    vlSelf->jpeg_top__DOT__u20__DOT__dr_in_1 = ((~ (IData)(vlSelf->rst)) 
                                                & (IData)(vlSelf->jpeg_top__DOT__data_ready_FF));
    vlSelf->jpeg_top__DOT__u20__DOT__fifo_empty = ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__read_ptr) 
                                                   == (IData)(vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__write_ptr));
    vlSelf->jpeg_top__DOT__u20__DOT__u18__DOT__read_enable 
        = ((~ (IData)(vlSelf->jpeg_top__DOT__u20__DOT__fifo_empty)) 
           & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__read_req));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb31_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr31_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y31_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_1 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__second_2bytes = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__third_2bytes = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__fourth_2bytes = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2 = 0ULL;
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__second_2bytes_eof = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__second_2bytes_eof 
            = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__second_2bytes_eof;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb22_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr22_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y22_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__cr_orc = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cr_orc;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_latch_8 = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb31_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__Q13)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb22_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__Q22)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb31_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb22_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb22_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb13_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr31_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__Q13)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr22_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__Q22)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr31_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr22_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr22_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr13_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y31_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__Q13)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y22_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__Q22)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y31_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y22_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y22_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y13_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__rollover 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_1) 
                   > (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cr_orc));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_1;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_7) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits 
                = ((0xffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits) 
                   | ((0x2000000U & (((0xbU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                          >> 0x15U)
                                       : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2) 
                                          >> 0xaU)) 
                                     << 0x19U)) | (0x1000000U 
                                                   & (((0xaU 
                                                        <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                                        ? 
                                                       (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                                        >> 0x14U)
                                                        : 
                                                       ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2) 
                                                        >> 9U)) 
                                                      << 0x18U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits 
                = ((0x33fffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits) 
                   | ((0x800000U & (((9U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                         >> 0x13U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2) 
                                      >> 8U)) << 0x17U)) 
                      | (0x400000U & (((8U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                           >> 0x12U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2) 
                                           >> 7U)) 
                                      << 0x16U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits 
                = ((0x3cfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits) 
                   | ((0x200000U & (((7U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                         >> 0x11U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2) 
                                      >> 6U)) << 0x15U)) 
                      | (0x100000U & (((6U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                           >> 0x10U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2) 
                                           >> 5U)) 
                                      << 0x14U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits 
                = ((0x3f3ffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits) 
                   | ((0x80000U & (((5U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                        >> 0xfU) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2) 
                                     >> 4U)) << 0x13U)) 
                      | (0x40000U & (((4U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                          >> 0xeU) : 
                                      ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2) 
                                       >> 3U)) << 0x12U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits 
                = ((0x3fcffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits) 
                   | ((0x20000U & (((3U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                        >> 0xdU) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2) 
                                     >> 2U)) << 0x11U)) 
                      | (0x10000U & (((2U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                          >> 0xcU) : 
                                      ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2) 
                                       >> 1U)) << 0x10U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits 
                = ((0x3ff000fU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits) 
                   | ((0x8000U & (((1U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                       >> 0xbU) : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2)) 
                                  << 0xfU)) | (0x7ff0U 
                                               & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                                                  << 4U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_latch_8 = 1U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_latch_8) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_bits 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__rollover 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_1) 
                   > (IData)(vlSelf->jpeg_top__DOT__u19__DOT__cb_orc));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_1;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_7) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits 
                = ((0xffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits) 
                   | ((0x2000000U & (((0xbU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                          >> 0x15U)
                                       : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2) 
                                          >> 0xaU)) 
                                     << 0x19U)) | (0x1000000U 
                                                   & (((0xaU 
                                                        <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                                        ? 
                                                       (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                                        >> 0x14U)
                                                        : 
                                                       ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2) 
                                                        >> 9U)) 
                                                      << 0x18U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits 
                = ((0x33fffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits) 
                   | ((0x800000U & (((9U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                         >> 0x13U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2) 
                                      >> 8U)) << 0x17U)) 
                      | (0x400000U & (((8U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                           >> 0x12U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2) 
                                           >> 7U)) 
                                      << 0x16U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits 
                = ((0x3cfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits) 
                   | ((0x200000U & (((7U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                         >> 0x11U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2) 
                                      >> 6U)) << 0x15U)) 
                      | (0x100000U & (((6U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                           >> 0x10U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2) 
                                           >> 5U)) 
                                      << 0x14U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits 
                = ((0x3f3ffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits) 
                   | ((0x80000U & (((5U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                        >> 0xfU) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2) 
                                     >> 4U)) << 0x13U)) 
                      | (0x40000U & (((4U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                          >> 0xeU) : 
                                      ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2) 
                                       >> 3U)) << 0x12U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits 
                = ((0x3fcffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits) 
                   | ((0x20000U & (((3U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                        >> 0xdU) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2) 
                                     >> 2U)) << 0x11U)) 
                      | (0x10000U & (((2U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                          >> 0xcU) : 
                                      ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2) 
                                       >> 1U)) << 0x10U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits 
                = ((0x3ff000fU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits) 
                   | ((0x8000U & (((1U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                       >> 0xbU) : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2)) 
                                  << 0xfU)) | (0x7ff0U 
                                               & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                                                  << 4U))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_latch_8) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_bits 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__old_orc_1;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_7) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits 
                = ((0xffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits) 
                   | ((0x2000000U & (((0xbU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                          >> 0x15U)
                                       : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2) 
                                          >> 0xaU)) 
                                     << 0x19U)) | (0x1000000U 
                                                   & (((0xaU 
                                                        <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                                        ? 
                                                       (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                                        >> 0x14U)
                                                        : 
                                                       ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2) 
                                                        >> 9U)) 
                                                      << 0x18U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits 
                = ((0x33fffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits) 
                   | ((0x800000U & (((9U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                         >> 0x13U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2) 
                                      >> 8U)) << 0x17U)) 
                      | (0x400000U & (((8U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                           >> 0x12U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2) 
                                           >> 7U)) 
                                      << 0x16U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits 
                = ((0x3cfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits) 
                   | ((0x200000U & (((7U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                         >> 0x11U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2) 
                                      >> 6U)) << 0x15U)) 
                      | (0x100000U & (((6U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                           >> 0x10U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2) 
                                           >> 5U)) 
                                      << 0x14U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits 
                = ((0x3f3ffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits) 
                   | ((0x80000U & (((5U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                        >> 0xfU) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2) 
                                     >> 4U)) << 0x13U)) 
                      | (0x40000U & (((4U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                          >> 0xeU) : 
                                      ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2) 
                                       >> 3U)) << 0x12U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits 
                = ((0x3fcffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits) 
                   | ((0x20000U & (((3U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                        >> 0xdU) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2) 
                                     >> 2U)) << 0x11U)) 
                      | (0x10000U & (((2U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                          >> 0xcU) : 
                                      ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2) 
                                       >> 1U)) << 0x10U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits 
                = ((0x3ff000fU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits) 
                   | ((0x8000U & (((1U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                       >> 0xbU) : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2)) 
                                  << 0xfU)) | (0x7ff0U 
                                               & (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                                                  << 4U))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_latch_8) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_bits 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits;
        }
        if (vlSelf->jpeg_top__DOT__data_ready_FF) {
            vlSelf->jpeg_top__DOT__u20__DOT__JPEG_1 
                = vlSelf->jpeg_top__DOT__JPEG_FF;
            vlSelf->jpeg_top__DOT__u20__DOT__second_2bytes 
                = (0xffU == (0xffU & (vlSelf->jpeg_top__DOT__JPEG_FF 
                                      >> 0x10U)));
            vlSelf->jpeg_top__DOT__u20__DOT__third_2bytes 
                = (0xffU == (0xffU & (vlSelf->jpeg_top__DOT__JPEG_FF 
                                      >> 8U)));
            vlSelf->jpeg_top__DOT__u20__DOT__fourth_2bytes 
                = (0xffU == (0xffU & vlSelf->jpeg_top__DOT__JPEG_FF));
            vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes 
                = (0xffU == (vlSelf->jpeg_top__DOT__JPEG_FF 
                             >> 0x18U));
        }
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2 
            = ((0xffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2) 
               | ((QData)((IData)(((0xffff00U & ((IData)(
                                                         (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1 
                                                          >> 0x18U)) 
                                                 << 8U)) 
                                   | ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__second_2bytes_eof)
                                       ? 0U : (0xffU 
                                               & (IData)(
                                                         (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1 
                                                          >> 0x10U))))))) 
                  << 0x18U));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2 
            = ((0xffffff0000ffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2) 
               | ((QData)((IData)(((0xff00U & (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__second_2bytes_eof)
                                                 ? (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1 
                                                            >> 0x10U))
                                                 : (IData)(
                                                           (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1 
                                                            >> 8U))) 
                                               << 8U)) 
                                   | (0xffU & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__second_2bytes_eof)
                                                ? (IData)(
                                                          (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1 
                                                           >> 8U))
                                                : (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1)))))) 
                  << 8U));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2 
            = ((0xffffffffff00ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_2) 
               | (IData)((IData)(((IData)(vlSelf->jpeg_top__DOT__u20__DOT__second_2bytes_eof)
                                   ? (0xffU & (IData)(vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1))
                                   : 0U))));
        vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__second_2bytes_eof 
            = (0xffU == (0xffU & (IData)((vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1 
                                          >> 0x18U))));
        vlSelf->jpeg_top__DOT__u20__DOT__second_2bytes_eof 
            = vlSelf->__Vdly__jpeg_top__DOT__u20__DOT__second_2bytes_eof;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block_output) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_1 = 0U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__old_orc_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__cr_orc;
        }
        vlSelf->jpeg_top__DOT__u19__DOT__cr_orc = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__cr_orc;
    }
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_7 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_6));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_latch_8 = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_6) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_3 
                = (0x3fffffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_2) 
                                << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits 
                = ((0xffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits) 
                   | ((0x2000000U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                     << 0xaU)) | (0x1000000U 
                                                  & (((0xfU 
                                                       <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                                       ? 
                                                      (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                                       >> 0x18U)
                                                       : 
                                                      ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                                       >> 0xeU)) 
                                                     << 0x18U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits 
                = ((0x33fffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits) 
                   | ((0x800000U & (((0xeU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                         >> 0x17U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                      >> 0xdU)) << 0x17U)) 
                      | (0x400000U & (((0xdU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                           >> 0x16U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                           >> 0xcU)) 
                                      << 0x16U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits 
                = ((0x3cfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits) 
                   | ((0x200000U & (((0xcU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                         >> 0x15U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                      >> 0xbU)) << 0x15U)) 
                      | (0x100000U & (((0xbU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                           >> 0x14U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                           >> 0xaU)) 
                                      << 0x14U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits 
                = ((0x3f3ffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits) 
                   | ((0x80000U & (((0xaU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                        >> 0x13U) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                     >> 9U)) << 0x13U)) 
                      | (0x40000U & (((9U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                          >> 0x12U)
                                       : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                          >> 8U)) << 0x12U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits 
                = ((0x3fcffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits) 
                   | ((0x20000U & (((8U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                        >> 0x11U) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                     >> 7U)) << 0x11U)) 
                      | (0x10000U & (((7U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                          >> 0x10U)
                                       : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                          >> 6U)) << 0x10U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits 
                = ((0x3ff3fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits) 
                   | ((0x8000U & (((6U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                       >> 0xfU) : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                                   >> 5U)) 
                                  << 0xfU)) | (0x4000U 
                                               & (((5U 
                                                    <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                                    ? 
                                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                                    >> 0xeU)
                                                    : 
                                                   ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                                    >> 4U)) 
                                                  << 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits 
                = ((0x3ffcfffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits) 
                   | ((0x2000U & (((4U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                       >> 0xdU) : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                                   >> 3U)) 
                                  << 0xdU)) | (0x1000U 
                                               & (((3U 
                                                    <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                                    ? 
                                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                                    >> 0xcU)
                                                    : 
                                                   ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                                    >> 2U)) 
                                                  << 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits 
                = ((0x3fff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits) 
                   | (0x800U & (((2U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                     >> 0xbU) : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2) 
                                                 >> 1U)) 
                                << 0xbU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits 
                = ((0x3fff800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_bits) 
                   | ((0x400U & (((1U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                                      >> 0xaU) : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2)) 
                                 << 0xaU)) | (0x3ffU 
                                              & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block_output) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_1 = 0U;
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__old_orc_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__cb_orc;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_7) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_latch_8 = 1U;
        }
    }
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_7 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_6));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_latch_8 = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_6) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_3 
                = (0x3fffffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_2) 
                                << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits 
                = ((0xffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits) 
                   | ((0x2000000U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                     << 0xaU)) | (0x1000000U 
                                                  & (((0xfU 
                                                       <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                                       ? 
                                                      (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                                       >> 0x18U)
                                                       : 
                                                      ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                                       >> 0xeU)) 
                                                     << 0x18U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits 
                = ((0x33fffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits) 
                   | ((0x800000U & (((0xeU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                         >> 0x17U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                      >> 0xdU)) << 0x17U)) 
                      | (0x400000U & (((0xdU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                           >> 0x16U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                           >> 0xcU)) 
                                      << 0x16U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits 
                = ((0x3cfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits) 
                   | ((0x200000U & (((0xcU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                         >> 0x15U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                      >> 0xbU)) << 0x15U)) 
                      | (0x100000U & (((0xbU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                           >> 0x14U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                           >> 0xaU)) 
                                      << 0x14U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits 
                = ((0x3f3ffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits) 
                   | ((0x80000U & (((0xaU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                        >> 0x13U) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                     >> 9U)) << 0x13U)) 
                      | (0x40000U & (((9U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                          >> 0x12U)
                                       : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                          >> 8U)) << 0x12U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits 
                = ((0x3fcffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits) 
                   | ((0x20000U & (((8U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                        >> 0x11U) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                     >> 7U)) << 0x11U)) 
                      | (0x10000U & (((7U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                          >> 0x10U)
                                       : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                          >> 6U)) << 0x10U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits 
                = ((0x3ff3fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits) 
                   | ((0x8000U & (((6U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                       >> 0xfU) : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                                   >> 5U)) 
                                  << 0xfU)) | (0x4000U 
                                               & (((5U 
                                                    <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                                    ? 
                                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                                    >> 0xeU)
                                                    : 
                                                   ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                                    >> 4U)) 
                                                  << 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits 
                = ((0x3ffcfffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits) 
                   | ((0x2000U & (((4U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                       >> 0xdU) : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                                   >> 3U)) 
                                  << 0xdU)) | (0x1000U 
                                               & (((3U 
                                                    <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                                    ? 
                                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                                    >> 0xcU)
                                                    : 
                                                   ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                                    >> 2U)) 
                                                  << 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits 
                = ((0x3fff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits) 
                   | (0x800U & (((2U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                     >> 0xbU) : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2) 
                                                 >> 1U)) 
                                << 0xbU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits 
                = ((0x3fff800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_bits) 
                   | ((0x400U & (((1U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                                      >> 0xaU) : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2)) 
                                 << 0xaU)) | (0x3ffU 
                                              & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_7) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_latch_8 = 1U;
        }
    }
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_7 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_6));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__count_total_eof = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1 = 0ULL;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_6) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_3 
                = (0x3fffffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_2) 
                                << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits 
                = ((0xffffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits) 
                   | ((0x2000000U & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                     << 0xaU)) | (0x1000000U 
                                                  & (((0xfU 
                                                       <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                                       ? 
                                                      (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                                       >> 0x18U)
                                                       : 
                                                      ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                                       >> 0xeU)) 
                                                     << 0x18U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits 
                = ((0x33fffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits) 
                   | ((0x800000U & (((0xeU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                         >> 0x17U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                      >> 0xdU)) << 0x17U)) 
                      | (0x400000U & (((0xdU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                           >> 0x16U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                           >> 0xcU)) 
                                      << 0x16U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits 
                = ((0x3cfffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits) 
                   | ((0x200000U & (((0xcU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                         >> 0x15U) : 
                                     ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                      >> 0xbU)) << 0x15U)) 
                      | (0x100000U & (((0xbU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                        ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                           >> 0x14U)
                                        : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                           >> 0xaU)) 
                                      << 0x14U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits 
                = ((0x3f3ffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits) 
                   | ((0x80000U & (((0xaU <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                        >> 0x13U) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                     >> 9U)) << 0x13U)) 
                      | (0x40000U & (((9U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                          >> 0x12U)
                                       : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                          >> 8U)) << 0x12U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits 
                = ((0x3fcffffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits) 
                   | ((0x20000U & (((8U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                        >> 0x11U) : 
                                    ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                     >> 7U)) << 0x11U)) 
                      | (0x10000U & (((7U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                          >> 0x10U)
                                       : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                          >> 6U)) << 0x10U))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits 
                = ((0x3ff3fffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits) 
                   | ((0x8000U & (((6U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                       >> 0xfU) : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                                   >> 5U)) 
                                  << 0xfU)) | (0x4000U 
                                               & (((5U 
                                                    <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                                    ? 
                                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                                    >> 0xeU)
                                                    : 
                                                   ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                                    >> 4U)) 
                                                  << 0xeU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits 
                = ((0x3ffcfffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits) 
                   | ((0x2000U & (((4U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                       >> 0xdU) : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                                   >> 3U)) 
                                  << 0xdU)) | (0x1000U 
                                               & (((3U 
                                                    <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                                    ? 
                                                   (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                                    >> 0xcU)
                                                    : 
                                                   ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                                    >> 2U)) 
                                                  << 0xcU))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits 
                = ((0x3fff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits) 
                   | (0x800U & (((2U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                     >> 0xbU) : ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2) 
                                                 >> 1U)) 
                                << 0xbU)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits 
                = ((0x3fff800U & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_bits) 
                   | ((0x400U & (((1U <= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                                      >> 0xaU) : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2)) 
                                 << 0xaU)) | (0x3ffU 
                                              & vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4)));
        }
        vlSelf->jpeg_top__DOT__u20__DOT__count_total_eof 
            = (3U & (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes_eof) 
                      + (IData)(vlSelf->jpeg_top__DOT__u20__DOT__s2b)) 
                     + (IData)(vlSelf->jpeg_top__DOT__u20__DOT__t2b)));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1 
            = ((0xffffffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1) 
               | ((QData)((IData)(((0xff00U & (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof 
                                               >> 0x10U)) 
                                   | ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes_eof)
                                       ? 0U : (0xffU 
                                               & (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof 
                                                  >> 0x10U)))))) 
                  << 0x18U));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1 
            = ((0xffff0000ffULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1) 
               | ((QData)((IData)(((0xff00U & (((IData)(vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes_eof)
                                                 ? 
                                                (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof 
                                                 >> 8U)) 
                                               << 8U)) 
                                   | (0xffU & ((IData)(vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes_eof)
                                                ? (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof 
                                                   >> 8U)
                                                : vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof))))) 
                  << 8U));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1 
            = ((0xffffffff00ULL & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof_1) 
               | (IData)((IData)(((IData)(vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes_eof)
                                   ? (0xffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof)
                                   : 0U))));
    }
    vlSelf->jpeg_top__DOT__u20__DOT__first_2bytes_eof 
        = ((~ (IData)(vlSelf->rst)) & (0xffU == (vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof 
                                                 >> 0x18U)));
    vlSelf->jpeg_top__DOT__u20__DOT__s2b = ((~ (IData)(vlSelf->rst)) 
                                            & (0xff0000U 
                                               == (0xff0000U 
                                                   & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof)));
    vlSelf->jpeg_top__DOT__u20__DOT__t2b = ((~ (IData)(vlSelf->rst)) 
                                            & (0xff00U 
                                               == (0xff00U 
                                                   & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof)));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb13_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr13_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y13_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block_output = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block_output = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb13_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__Q31)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb13_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb14_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr13_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__Q31)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr13_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr14_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y13_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__Q31)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y13_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y14_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__end_of_block_output 
                = (0x4dU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_4 
                = (0x3ffffffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_3) 
                                 << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift)));
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter 
            = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__block_counter;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_5) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_shift 
                = (0xfU & ((IData)(0xbU) - (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_count)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_2 
                = (0x7ffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_1) 
                             << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_amp_shift)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__end_of_block_output 
                = (0x4dU == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter));
        }
    }
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter 
        = vlSelf->__Vdly__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__block_counter;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_6 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_5));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_6 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_5));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_6 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_5));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb14_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr14_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y14_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[0U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[1U] = 0x200U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[2U] = 0x400U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[3U] = 0x600U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[4U] = 0x700U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[5U] = 0x780U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[6U] = 0x7c0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[7U] = 0x7e0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[8U] = 0x7f0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[9U] = 0x7f8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[0xaU] = 0x7fcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[0xbU] = 0x7feU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_count = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[0U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[1U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[2U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[3U] = 3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[4U] = 4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[5U] = 5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[6U] = 6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[7U] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[8U] = 8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[9U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[0xaU] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[0xbU] = 0xbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_amp_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[0U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[1U] = 0x200U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[2U] = 0x400U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[3U] = 0x600U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[4U] = 0x700U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[5U] = 0x780U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[6U] = 0x7c0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[7U] = 0x7e0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[8U] = 0x7f0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[9U] = 0x7f8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[0xaU] = 0x7fcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[0xbU] = 0x7feU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_count = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[0U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[1U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[2U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[3U] = 3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[4U] = 4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[5U] = 5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[6U] = 6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[7U] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[8U] = 8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[9U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[0xaU] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[0xbU] = 0xbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_amp_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_3 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[0U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[1U] = 0x200U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[2U] = 0x400U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[3U] = 0x600U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[4U] = 0x700U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[5U] = 0x780U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[6U] = 0x7c0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[7U] = 0x7e0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[8U] = 0x7f0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[9U] = 0x7f8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[0xaU] = 0x7fcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[0xbU] = 0x7feU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_count = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_5) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_shift 
                = (0xfU & ((IData)(0xbU) - (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_count)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_2 
                = (0x7ffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_1) 
                             << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_amp_shift)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_4 
                = (0x3ffffffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_3) 
                                 << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_shift 
                = (0xfU & (- (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_count)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_2;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_5) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_shift 
                = (0xfU & ((IData)(0xbU) - (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_count)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_2 
                = (0x7ffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_1) 
                             << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_amp_shift)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_2 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_1;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_4 
                = (0x3ffffffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_3) 
                                 << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift)));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb14_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__Q41)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb14_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb23_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr14_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__Q41)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr14_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr23_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y14_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__Q41)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y14_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y23_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_4) {
            if ((0xbU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC
                    [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits];
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_count 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length
                    [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits];
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff = 0U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_Huff_count = 0U;
            }
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_amp_shift 
                = (0xfU & ((IData)(0xbU) - (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs;
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[0U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[1U] = 0x200U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[2U] = 0x400U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[3U] = 0x600U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[4U] = 0x700U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[5U] = 0x780U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[6U] = 0x7c0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[7U] = 0x7e0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[8U] = 0x7f0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[9U] = 0x7f8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[0xaU] = 0x7fcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC[0xbU] = 0x7feU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[0U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[1U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[2U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[3U] = 3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[4U] = 4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[5U] = 5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[6U] = 6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[7U] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[8U] = 8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[9U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[0xaU] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_DC_code_length[0xbU] = 0xbU;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_shift 
                = (0xfU & (- (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_count)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_2;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_4) {
            if ((0xbU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC
                    [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits];
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_count 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length
                    [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits];
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff = 0U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_Huff_count = 0U;
            }
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_amp_shift 
                = (0xfU & ((IData)(0xbU) - (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs;
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[0U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[1U] = 0x200U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[2U] = 0x400U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[3U] = 0x600U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[4U] = 0x700U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[5U] = 0x780U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[6U] = 0x7c0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[7U] = 0x7e0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[8U] = 0x7f0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[9U] = 0x7f8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[0xaU] = 0x7fcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC[0xbU] = 0x7feU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[0U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[1U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[2U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[3U] = 3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[4U] = 4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[5U] = 5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[6U] = 6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[7U] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[8U] = 8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[9U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[0xaU] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_DC_code_length[0xbU] = 0xbU;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_4) {
            if ((0xbU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC
                    [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits];
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_count 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length
                    [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits];
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff = 0U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_Huff_count = 0U;
            }
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[0U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[1U] = 0x200U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[2U] = 0x400U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[3U] = 0x600U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[4U] = 0x700U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[5U] = 0x780U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[6U] = 0x7c0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[7U] = 0x7e0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[8U] = 0x7f0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[9U] = 0x7f8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[0xaU] = 0x7fcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC[0xbU] = 0x7feU;
    }
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[0U] = 2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[1U] = 2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[2U] = 2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[3U] = 3U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[4U] = 4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[5U] = 5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[6U] = 6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[7U] = 7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[8U] = 8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[9U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[0xaU] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_DC_code_length[0xbU] = 0xbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_5 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_4));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_5 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_4));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_5 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_4));
    if (vlSelf->rst) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_amp_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_3 = 0U;
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb23_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr23_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y23_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[1U] = 0x4000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[2U] = 0x8000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[3U] = 0xa000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[4U] = 0xb000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[5U] = 0xc000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[6U] = 0xd000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[7U] = 0xd800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[8U] = 0xe000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[9U] = 0xe800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xaU] = 0xec00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xbU] = 0xf000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xcU] = 0xf200U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xdU] = 0xf400U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xeU] = 0xf600U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xfU] = 0xf800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x10U] = 0xf900U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x11U] = 0xfa00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x12U] = 0xfb00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x13U] = 0xfb80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x14U] = 0xfc00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x15U] = 0xfc80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x16U] = 0xfd00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x17U] = 0xfd80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x18U] = 0xfdc0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x19U] = 0xfe00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1aU] = 0xfe40U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1bU] = 0xfe80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1cU] = 0xfec0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1dU] = 0xfee0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1eU] = 0xff00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1fU] = 0xff20U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x20U] = 0xff40U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x21U] = 0xff50U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x22U] = 0xff60U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x23U] = 0xff70U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x24U] = 0xff80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x25U] = 0xff82U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x26U] = 0xff83U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x27U] = 0xff84U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x28U] = 0xff85U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x29U] = 0xff86U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2aU] = 0xff87U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2bU] = 0xff88U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2cU] = 0xff89U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2dU] = 0xff8aU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2eU] = 0xff8bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2fU] = 0xff8cU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x30U] = 0xff8dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x31U] = 0xff8eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x32U] = 0xff8fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x33U] = 0xff90U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x34U] = 0xff91U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x35U] = 0xff92U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x36U] = 0xff93U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x37U] = 0xff94U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x38U] = 0xff95U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x39U] = 0xff96U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3aU] = 0xff97U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3bU] = 0xff98U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3cU] = 0xff99U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3dU] = 0xff9aU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3eU] = 0xff9bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3fU] = 0xff9cU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x40U] = 0xff9dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x41U] = 0xff9eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x42U] = 0xff9fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x43U] = 0xffa0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x44U] = 0xffa1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x45U] = 0xffa2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x46U] = 0xffa3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x47U] = 0xffa4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x48U] = 0xffa5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x49U] = 0xffa6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4aU] = 0xffa7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4bU] = 0xffa8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4cU] = 0xffa9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4dU] = 0xffaaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4eU] = 0xffabU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4fU] = 0xffacU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x50U] = 0xffadU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x51U] = 0xffaeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x52U] = 0xffafU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x53U] = 0xffb0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x54U] = 0xffb1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x55U] = 0xffb2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x56U] = 0xffb3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x57U] = 0xffb4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x58U] = 0xffb5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x59U] = 0xffb6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5aU] = 0xffb7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5bU] = 0xffb8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5cU] = 0xffb9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5dU] = 0xffbaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5eU] = 0xffbbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5fU] = 0xffbcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x60U] = 0xffbdU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x61U] = 0xffbeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x62U] = 0xffbfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x63U] = 0xffc0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x64U] = 0xffc1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x65U] = 0xffc2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x66U] = 0xffc3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x67U] = 0xffc4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x68U] = 0xffc5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x69U] = 0xffc6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6aU] = 0xffc7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6bU] = 0xffc8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6cU] = 0xffc9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6dU] = 0xffcaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6eU] = 0xffcbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6fU] = 0xffccU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x70U] = 0xffcdU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x71U] = 0xffceU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x72U] = 0xffcfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x73U] = 0xffd0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x74U] = 0xffd1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x75U] = 0xffd2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x76U] = 0xffd3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x77U] = 0xffd4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x78U] = 0xffd5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x79U] = 0xffd6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7aU] = 0xffd7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7bU] = 0xffd8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7cU] = 0xffd9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7dU] = 0xffdaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7eU] = 0xffdbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7fU] = 0xffdcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x80U] = 0xffddU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x81U] = 0xffdeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x82U] = 0xffdfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x83U] = 0xffe0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x84U] = 0xffe1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x85U] = 0xffe2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x86U] = 0xffe3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x87U] = 0xffe4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x88U] = 0xffe5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x89U] = 0xffe6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8aU] = 0xffe7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8bU] = 0xffe8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8cU] = 0xffe9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8dU] = 0xffeaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8eU] = 0xffebU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8fU] = 0xffecU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x90U] = 0xffedU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x91U] = 0xffeeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x92U] = 0xffefU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x93U] = 0xfff0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x94U] = 0xfff1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x95U] = 0xfff2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x96U] = 0xfff3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x97U] = 0xfff4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x98U] = 0xfff5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x99U] = 0xfff6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9aU] = 0xfff7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9bU] = 0xfff8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9cU] = 0xfff9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9dU] = 0xfffaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9eU] = 0xfffbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9fU] = 0xfffcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xa0U] = 0xfffdU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xa1U] = 0xfffeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_count = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[1U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[2U] = 3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[3U] = 4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[4U] = 4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[5U] = 4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[6U] = 5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[7U] = 5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[8U] = 5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[9U] = 6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xaU] = 6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xbU] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xcU] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xdU] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xeU] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xfU] = 8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x10U] = 8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x11U] = 8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x12U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x13U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x14U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x15U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x16U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x17U] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x18U] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x19U] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1aU] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1bU] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1cU] = 0xbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1dU] = 0xbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1eU] = 0xbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1fU] = 0xbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x20U] = 0xcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x21U] = 0xcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x22U] = 0xcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x23U] = 0xcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x24U] = 0xfU;
        __Vilp = 0x25U;
        while ((__Vilp <= 0xa1U)) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[__Vilp] = 0x10U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[1U] = 0x4000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[2U] = 0x8000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[3U] = 0xa000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[4U] = 0xb000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[5U] = 0xc000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[6U] = 0xd000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[7U] = 0xd800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[8U] = 0xe000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[9U] = 0xe800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xaU] = 0xec00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xbU] = 0xf000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xcU] = 0xf200U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xdU] = 0xf400U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xeU] = 0xf600U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xfU] = 0xf800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x10U] = 0xf900U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x11U] = 0xfa00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x12U] = 0xfb00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x13U] = 0xfb80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x14U] = 0xfc00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x15U] = 0xfc80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x16U] = 0xfd00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x17U] = 0xfd80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x18U] = 0xfdc0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x19U] = 0xfe00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1aU] = 0xfe40U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1bU] = 0xfe80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1cU] = 0xfec0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1dU] = 0xfee0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1eU] = 0xff00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1fU] = 0xff20U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x20U] = 0xff40U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x21U] = 0xff50U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x22U] = 0xff60U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x23U] = 0xff70U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x24U] = 0xff80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x25U] = 0xff82U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x26U] = 0xff83U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x27U] = 0xff84U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x28U] = 0xff85U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x29U] = 0xff86U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2aU] = 0xff87U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2bU] = 0xff88U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2cU] = 0xff89U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2dU] = 0xff8aU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2eU] = 0xff8bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2fU] = 0xff8cU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x30U] = 0xff8dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x31U] = 0xff8eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x32U] = 0xff8fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x33U] = 0xff90U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x34U] = 0xff91U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x35U] = 0xff92U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x36U] = 0xff93U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x37U] = 0xff94U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x38U] = 0xff95U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x39U] = 0xff96U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3aU] = 0xff97U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3bU] = 0xff98U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3cU] = 0xff99U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3dU] = 0xff9aU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3eU] = 0xff9bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3fU] = 0xff9cU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x40U] = 0xff9dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x41U] = 0xff9eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x42U] = 0xff9fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x43U] = 0xffa0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x44U] = 0xffa1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x45U] = 0xffa2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x46U] = 0xffa3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x47U] = 0xffa4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x48U] = 0xffa5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x49U] = 0xffa6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4aU] = 0xffa7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4bU] = 0xffa8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4cU] = 0xffa9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4dU] = 0xffaaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4eU] = 0xffabU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4fU] = 0xffacU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x50U] = 0xffadU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x51U] = 0xffaeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x52U] = 0xffafU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x53U] = 0xffb0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x54U] = 0xffb1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x55U] = 0xffb2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x56U] = 0xffb3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x57U] = 0xffb4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x58U] = 0xffb5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x59U] = 0xffb6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5aU] = 0xffb7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5bU] = 0xffb8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5cU] = 0xffb9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5dU] = 0xffbaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5eU] = 0xffbbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5fU] = 0xffbcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x60U] = 0xffbdU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x61U] = 0xffbeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x62U] = 0xffbfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x63U] = 0xffc0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x64U] = 0xffc1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x65U] = 0xffc2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x66U] = 0xffc3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x67U] = 0xffc4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x68U] = 0xffc5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x69U] = 0xffc6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6aU] = 0xffc7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6bU] = 0xffc8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6cU] = 0xffc9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6dU] = 0xffcaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6eU] = 0xffcbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6fU] = 0xffccU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x70U] = 0xffcdU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x71U] = 0xffceU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x72U] = 0xffcfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x73U] = 0xffd0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x74U] = 0xffd1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x75U] = 0xffd2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x76U] = 0xffd3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x77U] = 0xffd4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x78U] = 0xffd5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x79U] = 0xffd6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7aU] = 0xffd7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7bU] = 0xffd8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7cU] = 0xffd9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7dU] = 0xffdaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7eU] = 0xffdbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7fU] = 0xffdcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x80U] = 0xffddU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x81U] = 0xffdeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x82U] = 0xffdfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x83U] = 0xffe0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x84U] = 0xffe1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x85U] = 0xffe2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x86U] = 0xffe3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x87U] = 0xffe4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x88U] = 0xffe5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x89U] = 0xffe6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8aU] = 0xffe7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8bU] = 0xffe8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8cU] = 0xffe9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8dU] = 0xffeaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8eU] = 0xffebU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8fU] = 0xffecU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x90U] = 0xffedU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x91U] = 0xffeeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x92U] = 0xffefU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x93U] = 0xfff0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x94U] = 0xfff1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x95U] = 0xfff2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x96U] = 0xfff3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x97U] = 0xfff4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_count = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_2 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_count = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_2 = 0U;
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffffffeU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0x7fffffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xbfffffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xdfffffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xefffffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xf7ffffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfbffffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfdffffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfeffffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xff7fffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffbfffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffdfffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffefffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfff7ffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffbffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffdffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffeffffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffff7fffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffffbfffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffffdfffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffffefffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffff7ffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffffbffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffffdffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffffeffU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffffff7fU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffffffbfU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffffffdfU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xffffffefU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffffff7U 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffffffbU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__JPEG_FF = (0xfffffffdU 
                                          & vlSelf->jpeg_top__DOT__JPEG_FF);
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb32_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr32_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y32_et_zero = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_amp = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_code_entry = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_amp_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_amp = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_code_entry = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_amp_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits_neg = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits_pos = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_amp = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_code_entry = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_1 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_amp_shift = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6 = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__br_7 = 0U;
        vlSelf->jpeg_top__DOT__data_ready_FF = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 = 0U;
    } else {
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_4) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_amp_shift 
                = (0xfU & ((IData)(0xbU) - (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs;
        }
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0x3fffffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0x80000000U & (((0U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0x1fU) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xc0000000U & (((1U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0x1eU) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xcfffffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xe0000000U & (((2U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0x1dU) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xf0000000U & (((3U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0x1cU) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xf3ffffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xf8000000U & (((4U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0x1bU) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xfc000000U & (((5U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0x1aU) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xfcffffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xfe000000U & (((6U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0x19U) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xff000000U & (((7U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0x18U) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xff3fffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xff800000U & (((8U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0x17U) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xffc00000U & (((9U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0x16U) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xffcfffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xffe00000U & (((0xaU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0x15U) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xfff00000U & (((0xbU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0x14U) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xfff3ffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xfff80000U & (((0xcU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0x13U) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xfffc0000U & (((0xdU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0x12U) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xfffcffffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xfffe0000U & (((0xeU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0x11U) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xffff0000U & (((0xfU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0x10U) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xffff3fffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xffff8000U & (((0x10U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0xfU) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xffffc000U & (((0x11U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0xeU) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xffffcfffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xffffe000U & (((0x12U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0xdU) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xfffff000U & (((0x13U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0xcU) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xfffff3ffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xfffff800U & (((0x14U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 0xbU) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xfffffc00U & (((0x15U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 0xaU) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xfffffcffU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xfffffe00U & (((0x16U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 9U) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xffffff00U & (((0x17U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 8U) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xffffff3fU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xffffff80U & (((0x18U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 7U) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xffffffc0U & (((0x19U < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 6U) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xffffffcfU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xffffffe0U & (((0x1aU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 5U) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xfffffff0U & (((0x1bU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 4U) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xfffffff3U & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | ((0xfffffff8U & (((0x1cU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                 << 3U) & vlSelf->jpeg_top__DOT__JPEG_FF)) 
                | (0xfffffffcU & (((0x1dU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                   << 2U) & vlSelf->jpeg_top__DOT__JPEG_FF))));
        vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof = 
            ((0xfffffffcU & vlSelf->jpeg_top__DOT__u20__DOT__JPEG_eof) 
             | (0xfffffffeU & (((0x1eU < (IData)(vlSelf->jpeg_top__DOT__orc_reg_in)) 
                                << 1U) & vlSelf->jpeg_top__DOT__JPEG_FF)));
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_3) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_msb)
                    ? (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits_neg)
                    : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits_pos));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_JPEG_LSBs 
                = (0x7ffU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_amp));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff 
                = ((0xa1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_code_entry))
                    ? vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC
                   [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_code_entry]
                    : 0U);
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[1U] = 0x4000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[2U] = 0x8000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[3U] = 0xa000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[4U] = 0xb000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[5U] = 0xc000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[6U] = 0xd000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[7U] = 0xd800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[8U] = 0xe000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[9U] = 0xe800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xaU] = 0xec00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xbU] = 0xf000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xcU] = 0xf200U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xdU] = 0xf400U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xeU] = 0xf600U;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb23_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__Q32)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb32_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__Q23)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb23_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb32_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb32_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb41_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr23_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__Q32)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr32_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__Q23)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr23_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr32_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr32_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr41_et_zero;
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__quantizer_enable) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y23_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__Q32)))));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y32_et_zero 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__Q23)))));
        } else if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y23_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y32_et_zero;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y32_et_zero 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y41_et_zero;
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xfU] = 0xf800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x10U] = 0xf900U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x11U] = 0xfa00U;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_Huff_count 
                = ((0xa1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_code_entry))
                    ? vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length
                   [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_code_entry]
                    : 0U);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_2 
                = (0x3ffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_1) 
                             << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_amp_shift)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_code_entry 
                = ((0xfaU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__code_index))
                    ? vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_run_code
                   [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__code_index]
                    : 0U);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_JPEG_LSBs;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_amp_shift 
                = (0xfU & ((IData)(0xaU) - (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr12_bits)));
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x12U] = 0xfb00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x13U] = 0xfb80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x14U] = 0xfc00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x15U] = 0xfc80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x16U] = 0xfd00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x17U] = 0xfd80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x18U] = 0xfdc0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x19U] = 0xfe00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1aU] = 0xfe40U;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_module) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_shift 
                = (0xfU & (- (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_count)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_3 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_2;
            if ((0xa1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_code_entry))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC
                    [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_code_entry];
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_count 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length
                    [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_code_entry];
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff = 0U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_Huff_count = 0U;
            }
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_2 
                = (0x3ffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_1) 
                             << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_amp_shift)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_code_entry 
                = ((0xfaU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__code_index))
                    ? vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_run_code
                   [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__code_index]
                    : 0U);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_JPEG_LSBs;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_amp_shift 
                = (0xfU & ((IData)(0xaU) - (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y12_bits)));
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1bU] = 0xfe80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1cU] = 0xfec0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1dU] = 0xfee0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1eU] = 0xff00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x1fU] = 0xff20U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x20U] = 0xff40U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x21U] = 0xff50U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x22U] = 0xff60U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x23U] = 0xff70U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x24U] = 0xff80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x25U] = 0xff82U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x26U] = 0xff83U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x27U] = 0xff84U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x28U] = 0xff85U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x29U] = 0xff86U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2aU] = 0xff87U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2bU] = 0xff88U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2cU] = 0xff89U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2dU] = 0xff8aU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2eU] = 0xff8bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x2fU] = 0xff8cU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x30U] = 0xff8dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x31U] = 0xff8eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x32U] = 0xff8fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x33U] = 0xff90U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x34U] = 0xff91U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x35U] = 0xff92U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x36U] = 0xff93U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x37U] = 0xff94U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x38U] = 0xff95U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x39U] = 0xff96U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3aU] = 0xff97U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3bU] = 0xff98U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3cU] = 0xff99U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3dU] = 0xff9aU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3eU] = 0xff9bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x3fU] = 0xff9cU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x40U] = 0xff9dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x41U] = 0xff9eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x42U] = 0xff9fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x43U] = 0xffa0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x44U] = 0xffa1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x45U] = 0xffa2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x46U] = 0xffa3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x47U] = 0xffa4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x48U] = 0xffa5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x49U] = 0xffa6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4aU] = 0xffa7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4bU] = 0xffa8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4cU] = 0xffa9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4dU] = 0xffaaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4eU] = 0xffabU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x4fU] = 0xffacU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x50U] = 0xffadU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x51U] = 0xffaeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x52U] = 0xffafU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x53U] = 0xffb0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x54U] = 0xffb1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x55U] = 0xffb2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x56U] = 0xffb3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x57U] = 0xffb4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x58U] = 0xffb5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x59U] = 0xffb6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5aU] = 0xffb7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5bU] = 0xffb8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5cU] = 0xffb9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5dU] = 0xffbaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5eU] = 0xffbbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x5fU] = 0xffbcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x60U] = 0xffbdU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x61U] = 0xffbeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x62U] = 0xffbfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x63U] = 0xffc0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x64U] = 0xffc1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x65U] = 0xffc2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x66U] = 0xffc3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x67U] = 0xffc4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x68U] = 0xffc5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x69U] = 0xffc6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6aU] = 0xffc7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6bU] = 0xffc8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6cU] = 0xffc9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6dU] = 0xffcaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6eU] = 0xffcbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x6fU] = 0xffccU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x70U] = 0xffcdU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x71U] = 0xffceU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x72U] = 0xffcfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x73U] = 0xffd0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x74U] = 0xffd1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x75U] = 0xffd2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x76U] = 0xffd3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x77U] = 0xffd4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x78U] = 0xffd5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x79U] = 0xffd6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7aU] = 0xffd7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7bU] = 0xffd8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7cU] = 0xffd9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7dU] = 0xffdaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7eU] = 0xffdbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x7fU] = 0xffdcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x80U] = 0xffddU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x81U] = 0xffdeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x82U] = 0xffdfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x83U] = 0xffe0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x84U] = 0xffe1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x85U] = 0xffe2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x86U] = 0xffe3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x87U] = 0xffe4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x88U] = 0xffe5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x89U] = 0xffe6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8aU] = 0xffe7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8bU] = 0xffe8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8cU] = 0xffe9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8dU] = 0xffeaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8eU] = 0xffebU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x8fU] = 0xffecU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x90U] = 0xffedU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x91U] = 0xffeeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x92U] = 0xffefU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x93U] = 0xfff0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x94U] = 0xfff1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x95U] = 0xfff2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x96U] = 0xfff3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x97U] = 0xfff4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x98U] = 0xfff5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x99U] = 0xfff6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9aU] = 0xfff7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9bU] = 0xfff8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9cU] = 0xfff9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9dU] = 0xfffaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9eU] = 0xfffbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0x9fU] = 0xfffcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xa0U] = 0xfffdU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC[0xa1U] = 0xfffeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[1U] = 2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[2U] = 3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[3U] = 4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[4U] = 4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[5U] = 4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[6U] = 5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[7U] = 5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[8U] = 5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[9U] = 6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xaU] = 6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xbU] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xcU] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xdU] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xeU] = 7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0xfU] = 8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x10U] = 8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x11U] = 8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x12U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x13U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x14U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x15U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x16U] = 9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x17U] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x18U] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x19U] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1aU] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1bU] = 0xaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1cU] = 0xbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1dU] = 0xbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1eU] = 0xbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x1fU] = 0xbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x20U] = 0xcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x21U] = 0xcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x22U] = 0xcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x23U] = 0xcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[0x24U] = 0xfU;
        __Vilp = 0x25U;
        while ((__Vilp <= 0xa1U)) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr_AC_code_length[__Vilp] = 0x10U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_3) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_msb)
                    ? (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits_neg)
                    : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits_pos));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_JPEG_LSBs 
                = (0x7ffU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_amp));
        }
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_module) {
            if ((0xa1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_code_entry))) {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC
                    [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_code_entry];
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_count 
                    = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length
                    [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_code_entry];
            } else {
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff = 0U;
                vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_Huff_count = 0U;
            }
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_2 
                = (0x3ffU & ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_1) 
                             << (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_amp_shift)));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_code_entry 
                = ((0xfaU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__code_index))
                    ? vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_run_code
                   [vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__code_index]
                    : 0U);
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs_1 
                = vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_JPEG_LSBs;
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_amp_shift 
                = (0xfU & ((IData)(0xaU) - (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb12_bits)));
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0U] = 0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[1U] = 0x4000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[2U] = 0x8000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[3U] = 0xa000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[4U] = 0xb000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[5U] = 0xc000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[6U] = 0xd000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[7U] = 0xd800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[8U] = 0xe000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[9U] = 0xe800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xaU] = 0xec00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xbU] = 0xf000U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xcU] = 0xf200U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xdU] = 0xf400U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xeU] = 0xf600U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xfU] = 0xf800U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x10U] = 0xf900U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x11U] = 0xfa00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x12U] = 0xfb00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x13U] = 0xfb80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x14U] = 0xfc00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x15U] = 0xfc80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x16U] = 0xfd00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x17U] = 0xfd80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x18U] = 0xfdc0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x19U] = 0xfe00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1aU] = 0xfe40U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1bU] = 0xfe80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1cU] = 0xfec0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1dU] = 0xfee0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1eU] = 0xff00U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x1fU] = 0xff20U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x20U] = 0xff40U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x21U] = 0xff50U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x22U] = 0xff60U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x23U] = 0xff70U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x24U] = 0xff80U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x25U] = 0xff82U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x26U] = 0xff83U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x27U] = 0xff84U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x28U] = 0xff85U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x29U] = 0xff86U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2aU] = 0xff87U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2bU] = 0xff88U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2cU] = 0xff89U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2dU] = 0xff8aU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2eU] = 0xff8bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x2fU] = 0xff8cU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x30U] = 0xff8dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x31U] = 0xff8eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x32U] = 0xff8fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x33U] = 0xff90U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x34U] = 0xff91U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x35U] = 0xff92U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x36U] = 0xff93U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x37U] = 0xff94U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x38U] = 0xff95U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x39U] = 0xff96U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3aU] = 0xff97U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3bU] = 0xff98U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3cU] = 0xff99U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3dU] = 0xff9aU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3eU] = 0xff9bU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x3fU] = 0xff9cU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x40U] = 0xff9dU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x41U] = 0xff9eU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x42U] = 0xff9fU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x43U] = 0xffa0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x44U] = 0xffa1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x45U] = 0xffa2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x46U] = 0xffa3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x47U] = 0xffa4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x48U] = 0xffa5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x49U] = 0xffa6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4aU] = 0xffa7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4bU] = 0xffa8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4cU] = 0xffa9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4dU] = 0xffaaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4eU] = 0xffabU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x4fU] = 0xffacU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x50U] = 0xffadU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x51U] = 0xffaeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x52U] = 0xffafU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x53U] = 0xffb0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x54U] = 0xffb1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x55U] = 0xffb2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x56U] = 0xffb3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x57U] = 0xffb4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x58U] = 0xffb5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x59U] = 0xffb6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5aU] = 0xffb7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5bU] = 0xffb8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5cU] = 0xffb9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5dU] = 0xffbaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5eU] = 0xffbbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x5fU] = 0xffbcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x60U] = 0xffbdU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x61U] = 0xffbeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x62U] = 0xffbfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x63U] = 0xffc0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x64U] = 0xffc1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x65U] = 0xffc2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x66U] = 0xffc3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x67U] = 0xffc4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x68U] = 0xffc5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x69U] = 0xffc6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6aU] = 0xffc7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6bU] = 0xffc8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6cU] = 0xffc9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6dU] = 0xffcaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6eU] = 0xffcbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x6fU] = 0xffccU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x70U] = 0xffcdU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x71U] = 0xffceU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x72U] = 0xffcfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x73U] = 0xffd0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x74U] = 0xffd1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x75U] = 0xffd2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x76U] = 0xffd3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x77U] = 0xffd4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x78U] = 0xffd5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x79U] = 0xffd6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7aU] = 0xffd7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7bU] = 0xffd8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7cU] = 0xffd9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7dU] = 0xffdaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7eU] = 0xffdbU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x7fU] = 0xffdcU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x80U] = 0xffddU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x81U] = 0xffdeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x82U] = 0xffdfU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x83U] = 0xffe0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x84U] = 0xffe1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x85U] = 0xffe2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x86U] = 0xffe3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x87U] = 0xffe4U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x88U] = 0xffe5U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x89U] = 0xffe6U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8aU] = 0xffe7U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8bU] = 0xffe8U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8cU] = 0xffe9U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8dU] = 0xffeaU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8eU] = 0xffebU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x8fU] = 0xffecU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x90U] = 0xffedU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x91U] = 0xffeeU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x92U] = 0xffefU;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x93U] = 0xfff0U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x94U] = 0xfff1U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x95U] = 0xfff2U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x96U] = 0xfff3U;
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x97U] = 0xfff4U;
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_3) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_msb)
                    ? (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits_neg)
                    : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits_pos));
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_JPEG_LSBs 
                = (0x7ffU & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_amp));
        }
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_7) 
             & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_6))) {
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffffeU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (1U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0x7fffffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x80000000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xbfffffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x40000000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xdfffffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x20000000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xefffffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x10000000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xf7ffffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x8000000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfbffffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x4000000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfdffffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x2000000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfeffffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x1000000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xff7fffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x800000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffbfffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x400000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffdfffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x200000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffefffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x100000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfff7ffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x80000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffbffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x40000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffdffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x20000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffeffffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x10000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffff7fffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x8000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffbfffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x4000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffdfffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x2000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffefffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x1000U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffff7ffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x800U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffbffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x400U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffdffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x200U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffeffU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x100U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffff7fU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x80U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffffbfU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x40U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffffdfU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x20U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffffefU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (0x10U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffff7U 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (8U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffffbU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (4U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffffdU 
                                               & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                              | (2U 
                                                 & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
        } else {
            if (vlSelf->jpeg_top__DOT__u19__DOT__br_6) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffffeU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (1U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0U == (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0x7fffffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x80000000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (1U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xbfffffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x40000000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (2U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xdfffffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x20000000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (3U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xefffffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x10000000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (4U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xf7ffffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x8000000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (5U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfbffffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x4000000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (6U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfdffffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x2000000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (7U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfeffffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x1000000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (8U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xff7fffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x800000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (9U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffbfffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x400000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0xaU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffdfffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x200000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0xbU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffefffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x100000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0xcU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfff7ffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x80000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0xdU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffbffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x40000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0xeU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffdffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x20000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0xfU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffeffffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x10000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x10U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffff7fffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x8000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x11U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffbfffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x4000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x12U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffdfffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x2000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x13U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffefffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x1000U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x14U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffff7ffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x800U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x15U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffbffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x400U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x16U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffdffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x200U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x17U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffeffU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x100U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x18U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffff7fU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x80U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x19U >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffffbfU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x40U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x1aU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffffdfU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x20U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x1bU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xffffffefU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (0x10U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x1cU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffff7U 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (8U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x1dU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffffbU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (4U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
            if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                 & (0x1eU >= (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6)))) {
                vlSelf->jpeg_top__DOT__JPEG_FF = ((0xfffffffdU 
                                                   & vlSelf->jpeg_top__DOT__JPEG_FF) 
                                                  | (2U 
                                                     & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6));
            }
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits_neg 
            = ((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                ? ((0x200U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                    ? ((0x100U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                        ? ((0x80U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                            ? ((0x40U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                                ? ((0x20U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                                    ? ((0x10U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                                        ? ((8U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                                            ? ((4U 
                                                & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg))
                                                     ? 0U
                                                     : 1U)
                                                    : 2U)
                                                : 3U)
                                            : 4U) : 5U)
                                    : 6U) : 7U) : 8U)
                        : 9U) : 0xaU) : 0xbU);
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_bits_pos 
            = ((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                ? 0xbU : ((0x200U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                           ? 0xaU : ((0x100U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                                      ? 9U : ((0x80U 
                                               & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                                               ? 8U
                                               : ((0x40U 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                                                   ? 7U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                                                    ? 6U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                                                     ? 5U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                                                      ? 4U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                                                       ? 3U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                                                        ? 2U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos))
                                                         ? 1U
                                                         : 0U)))))))))));
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_2) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_amp 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_msb)
                    ? (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_neg)
                    : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__Cr11_1_pos));
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits_neg 
            = ((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                ? ((0x200U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                    ? ((0x100U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                        ? ((0x80U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                            ? ((0x40U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                                ? ((0x20U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                                    ? ((0x10U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                                        ? ((8U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                                            ? ((4U 
                                                & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg))
                                                     ? 0U
                                                     : 1U)
                                                    : 2U)
                                                : 3U)
                                            : 4U) : 5U)
                                    : 6U) : 7U) : 8U)
                        : 9U) : 0xaU) : 0xbU);
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_bits_pos 
            = ((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                ? 0xbU : ((0x200U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                           ? 0xaU : ((0x100U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                                      ? 9U : ((0x80U 
                                               & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                                               ? 8U
                                               : ((0x40U 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                                                   ? 7U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                                                    ? 6U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                                                     ? 5U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                                                      ? 4U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                                                       ? 3U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                                                        ? 2U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos))
                                                         ? 1U
                                                         : 0U)))))))))));
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_2) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_amp 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_msb)
                    ? (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_neg)
                    : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb11_1_pos));
        }
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits_neg 
            = ((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                ? ((0x200U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                    ? ((0x100U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                        ? ((0x80U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                            ? ((0x40U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                                ? ((0x20U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                                    ? ((0x10U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                                        ? ((8U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                                            ? ((4U 
                                                & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg))
                                                     ? 0U
                                                     : 1U)
                                                    : 2U)
                                                : 3U)
                                            : 4U) : 5U)
                                    : 6U) : 7U) : 8U)
                        : 9U) : 0xaU) : 0xbU);
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_bits_pos 
            = ((0x400U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                ? 0xbU : ((0x200U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                           ? 0xaU : ((0x100U & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                                      ? 9U : ((0x80U 
                                               & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                                               ? 8U
                                               : ((0x40U 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                                                   ? 7U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                                                    ? 6U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                                                     ? 5U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                                                      ? 4U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                                                       ? 3U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                                                        ? 2U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos))
                                                         ? 1U
                                                         : 0U)))))))))));
        if (vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_2) {
            vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_amp 
                = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_msb)
                    ? (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_neg)
                    : (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y11_1_pos));
        }
        vlSelf->jpeg_top__DOT__u19__DOT__static_orc_6 
            = vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5;
        vlSelf->jpeg_top__DOT__u19__DOT__br_7 = vlSelf->jpeg_top__DOT__u19__DOT__br_6;
        vlSelf->jpeg_top__DOT__data_ready_FF = ((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6) 
                                                & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5));
        if (((IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_5) 
             | (IData)(vlSelf->jpeg_top__DOT__u19__DOT__br_6))) {
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0x7fffffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                        & (0U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                        ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                           >> 0x1fU) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                        >> 0x1fU)) 
                      << 0x1fU));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xbfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x40000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                       & (1U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                          >> 0x1eU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                          >> 0x1eU)) 
                                     << 0x1eU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xdfffffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x20000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                       & (2U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                          >> 0x1dU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                          >> 0x1dU)) 
                                     << 0x1dU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xefffffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x10000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                       & (3U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                       ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                          >> 0x1cU)
                                       : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                          >> 0x1cU)) 
                                     << 0x1cU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xf7ffffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x8000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                      & (4U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                         >> 0x1bU) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                      >> 0x1bU)) << 0x1bU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfbffffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x4000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                      & (5U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                         >> 0x1aU) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                      >> 0x1aU)) << 0x1aU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfdffffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x2000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                      & (6U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                         >> 0x19U) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                      >> 0x19U)) << 0x19U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfeffffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x1000000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                      & (7U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                      ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                         >> 0x18U) : 
                                     (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                      >> 0x18U)) << 0x18U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xff7fffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x800000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                     & (8U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                        >> 0x17U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                     >> 0x17U)) << 0x17U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffbfffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x400000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                     & (9U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                        >> 0x16U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                     >> 0x16U)) << 0x16U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffdfffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x200000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                     & (0xaU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                        >> 0x15U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                     >> 0x15U)) << 0x15U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffefffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x100000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                     & (0xbU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                     ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                        >> 0x14U) : 
                                    (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                     >> 0x14U)) << 0x14U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfff7ffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x80000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                    & (0xcU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                       >> 0x13U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                    >> 0x13U)) << 0x13U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffbffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x40000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                    & (0xdU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                       >> 0x12U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                    >> 0x12U)) << 0x12U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffdffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x20000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                    & (0xeU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                       >> 0x11U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                    >> 0x11U)) << 0x11U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffeffffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x10000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                    & (0xfU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                    ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                       >> 0x10U) : 
                                   (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                    >> 0x10U)) << 0x10U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffff7fffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x8000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                   & (0x10U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                      >> 0xfU) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                                  >> 0xfU)) 
                                 << 0xfU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffffbfffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x4000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                   & (0x11U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                      >> 0xeU) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                                  >> 0xeU)) 
                                 << 0xeU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffffdfffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x2000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                   & (0x12U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                      >> 0xdU) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                                  >> 0xdU)) 
                                 << 0xdU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffffefffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x1000U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                   & (0x13U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                   ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                      >> 0xcU) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                                  >> 0xcU)) 
                                 << 0xcU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffff7ffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x800U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                  & (0x14U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                     >> 0xbU) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                                 >> 0xbU)) 
                                << 0xbU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffffbffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x400U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                  & (0x15U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                     >> 0xaU) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                                 >> 0xaU)) 
                                << 0xaU)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffffdffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x200U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                  & (0x16U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                     >> 9U) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                               >> 9U)) 
                                << 9U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffffeffU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x100U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                  & (0x17U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                  ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                     >> 8U) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                               >> 8U)) 
                                << 8U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffffff7fU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x80U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                 & (0x18U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                    >> 7U) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                              >> 7U)) 
                               << 7U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffffffbfU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x40U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                 & (0x19U < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                    >> 6U) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                              >> 6U)) 
                               << 6U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffffffdfU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x20U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                 & (0x1aU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                    >> 5U) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                              >> 5U)) 
                               << 5U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xffffffefU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (0x10U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                                 & (0x1bU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                                 ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                    >> 4U) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                              >> 4U)) 
                               << 4U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffffff7U & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (8U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                              & (0x1cU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                 >> 3U) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                           >> 3U)) 
                            << 3U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffffffbU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (4U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                              & (0x1dU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                 >> 2U) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                           >> 2U)) 
                            << 2U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffffffdU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (2U & ((((IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5) 
                              & (0x1eU < (IData)(vlSelf->jpeg_top__DOT__u19__DOT__static_orc_5)))
                              ? (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_ro_5 
                                 >> 1U) : (vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5 
                                           >> 1U)) 
                            << 1U)));
            vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6 
                = ((0xfffffffeU & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_6) 
                   | (1U & vlSelf->jpeg_top__DOT__u19__DOT__jpeg_5));
        }
    }
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x98U] = 0xfff5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x99U] = 0xfff6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x9aU] = 0xfff7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x9bU] = 0xfff8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x9cU] = 0xfff9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x9dU] = 0xfffaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x9eU] = 0xfffbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0x9fU] = 0xfffcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xa0U] = 0xfffdU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC[0xa1U] = 0xfffeU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0U] = 2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[1U] = 2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[2U] = 3U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[3U] = 4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[4U] = 4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[5U] = 4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[6U] = 5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[7U] = 5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[8U] = 5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[9U] = 6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0xaU] = 6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0xbU] = 7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0xcU] = 7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0xdU] = 7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0xeU] = 7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0xfU] = 8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x10U] = 8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x11U] = 8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x12U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x13U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x14U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x15U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x16U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x17U] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x18U] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x19U] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x1aU] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x1bU] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x1cU] = 0xbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x1dU] = 0xbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x1eU] = 0xbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x1fU] = 0xbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x20U] = 0xcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x21U] = 0xcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x22U] = 0xcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x23U] = 0xcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[0x24U] = 0xfU;
    __Vilp = 0x25U;
    while ((__Vilp <= 0xa1U)) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__Cb_AC_code_length[__Vilp] = 0x10U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0U] = 0U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[1U] = 0x4000U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[2U] = 0x8000U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[3U] = 0xa000U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[4U] = 0xb000U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[5U] = 0xc000U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[6U] = 0xd000U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[7U] = 0xd800U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[8U] = 0xe000U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[9U] = 0xe800U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0xaU] = 0xec00U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0xbU] = 0xf000U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0xcU] = 0xf200U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0xdU] = 0xf400U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0xeU] = 0xf600U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0xfU] = 0xf800U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x10U] = 0xf900U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x11U] = 0xfa00U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x12U] = 0xfb00U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x13U] = 0xfb80U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x14U] = 0xfc00U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x15U] = 0xfc80U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x16U] = 0xfd00U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x17U] = 0xfd80U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x18U] = 0xfdc0U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x19U] = 0xfe00U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x1aU] = 0xfe40U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x1bU] = 0xfe80U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x1cU] = 0xfec0U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x1dU] = 0xfee0U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x1eU] = 0xff00U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x1fU] = 0xff20U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x20U] = 0xff40U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x21U] = 0xff50U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x22U] = 0xff60U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x23U] = 0xff70U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x24U] = 0xff80U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x25U] = 0xff82U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x26U] = 0xff83U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x27U] = 0xff84U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x28U] = 0xff85U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x29U] = 0xff86U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x2aU] = 0xff87U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x2bU] = 0xff88U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x2cU] = 0xff89U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x2dU] = 0xff8aU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x2eU] = 0xff8bU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x2fU] = 0xff8cU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x30U] = 0xff8dU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x31U] = 0xff8eU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x32U] = 0xff8fU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x33U] = 0xff90U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x34U] = 0xff91U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x35U] = 0xff92U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x36U] = 0xff93U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x37U] = 0xff94U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x38U] = 0xff95U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x39U] = 0xff96U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x3aU] = 0xff97U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x3bU] = 0xff98U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x3cU] = 0xff99U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x3dU] = 0xff9aU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x3eU] = 0xff9bU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x3fU] = 0xff9cU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x40U] = 0xff9dU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x41U] = 0xff9eU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x42U] = 0xff9fU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x43U] = 0xffa0U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x44U] = 0xffa1U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x45U] = 0xffa2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x46U] = 0xffa3U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x47U] = 0xffa4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x48U] = 0xffa5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x49U] = 0xffa6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x4aU] = 0xffa7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x4bU] = 0xffa8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x4cU] = 0xffa9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x4dU] = 0xffaaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x4eU] = 0xffabU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x4fU] = 0xffacU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x50U] = 0xffadU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x51U] = 0xffaeU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x52U] = 0xffafU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x53U] = 0xffb0U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x54U] = 0xffb1U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x55U] = 0xffb2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x56U] = 0xffb3U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x57U] = 0xffb4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x58U] = 0xffb5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x59U] = 0xffb6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x5aU] = 0xffb7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x5bU] = 0xffb8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x5cU] = 0xffb9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x5dU] = 0xffbaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x5eU] = 0xffbbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x5fU] = 0xffbcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x60U] = 0xffbdU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x61U] = 0xffbeU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x62U] = 0xffbfU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x63U] = 0xffc0U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x64U] = 0xffc1U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x65U] = 0xffc2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x66U] = 0xffc3U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x67U] = 0xffc4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x68U] = 0xffc5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x69U] = 0xffc6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x6aU] = 0xffc7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x6bU] = 0xffc8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x6cU] = 0xffc9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x6dU] = 0xffcaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x6eU] = 0xffcbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x6fU] = 0xffccU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x70U] = 0xffcdU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x71U] = 0xffceU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x72U] = 0xffcfU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x73U] = 0xffd0U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x74U] = 0xffd1U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x75U] = 0xffd2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x76U] = 0xffd3U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x77U] = 0xffd4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x78U] = 0xffd5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x79U] = 0xffd6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x7aU] = 0xffd7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x7bU] = 0xffd8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x7cU] = 0xffd9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x7dU] = 0xffdaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x7eU] = 0xffdbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x7fU] = 0xffdcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x80U] = 0xffddU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x81U] = 0xffdeU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x82U] = 0xffdfU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x83U] = 0xffe0U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x84U] = 0xffe1U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x85U] = 0xffe2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x86U] = 0xffe3U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x87U] = 0xffe4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x88U] = 0xffe5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x89U] = 0xffe6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x8aU] = 0xffe7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x8bU] = 0xffe8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x8cU] = 0xffe9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x8dU] = 0xffeaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x8eU] = 0xffebU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x8fU] = 0xffecU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x90U] = 0xffedU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x91U] = 0xffeeU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x92U] = 0xffefU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x93U] = 0xfff0U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x94U] = 0xfff1U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x95U] = 0xfff2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x96U] = 0xfff3U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x97U] = 0xfff4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x98U] = 0xfff5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x99U] = 0xfff6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x9aU] = 0xfff7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x9bU] = 0xfff8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x9cU] = 0xfff9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x9dU] = 0xfffaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x9eU] = 0xfffbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0x9fU] = 0xfffcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0xa0U] = 0xfffdU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC[0xa1U] = 0xfffeU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0U] = 2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[1U] = 2U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[2U] = 3U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[3U] = 4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[4U] = 4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[5U] = 4U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[6U] = 5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[7U] = 5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[8U] = 5U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[9U] = 6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0xaU] = 6U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0xbU] = 7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0xcU] = 7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0xdU] = 7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0xeU] = 7U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0xfU] = 8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x10U] = 8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x11U] = 8U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x12U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x13U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x14U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x15U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x16U] = 9U;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x17U] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x18U] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x19U] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x1aU] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x1bU] = 0xaU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x1cU] = 0xbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x1dU] = 0xbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x1eU] = 0xbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x1fU] = 0xbU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x20U] = 0xcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x21U] = 0xcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x22U] = 0xcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x23U] = 0xcU;
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[0x24U] = 0xfU;
    __Vilp = 0x25U;
    while ((__Vilp <= 0xa1U)) {
        vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__Y_AC_code_length[__Vilp] = 0x10U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_4 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u10__DOT__enable_3));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_4 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u7__DOT__enable_3));
    vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_4 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u3__DOT__enable_3));
    vlSelf->jpeg_top__DOT__u19__DOT__rollover_6 = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->jpeg_top__DOT__u19__DOT__rollover_5));
}
