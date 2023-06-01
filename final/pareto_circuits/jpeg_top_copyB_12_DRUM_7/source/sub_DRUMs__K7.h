// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See jpeg_top_copyB_12_DRUM_7.h for the primary calling header

#ifndef VERILATED_SUB_DRUMS__K7_H_
#define VERILATED_SUB_DRUMS__K7_H_  // guard

#include "verilated.h"

class jpeg_top_copyB_12_DRUM_7__Syms;

class sub_DRUMs__K7 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__U1__DOT__k1;
    CData/*3:0*/ __PVT__U1__DOT__k2;
    CData/*4:0*/ __PVT__U1__DOT__m;
    CData/*4:0*/ __PVT__U1__DOT__n;
    VL_IN16(__PVT__a,15,0);
    VL_IN16(__PVT__b,15,0);
    SData/*15:0*/ __PVT__U1__DOT__l1;
    SData/*15:0*/ __PVT__U1__DOT__l2;
    SData/*15:0*/ __PVT__U1__DOT__u1__DOT__w;
    SData/*15:0*/ __PVT__U1__DOT__u2__DOT__w;
    VL_OUT(__PVT__r,31,0);
    IData/*31:0*/ __PVT__r_temp;
    IData/*31:0*/ __VdfgTmp_h738ccf79__0;

    // INTERNAL VARIABLES
    jpeg_top_copyB_12_DRUM_7__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub_DRUMs__K7(jpeg_top_copyB_12_DRUM_7__Syms* symsp, const char* name);
    ~sub_DRUMs__K7();
    VL_UNCOPYABLE(sub_DRUMs__K7);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
