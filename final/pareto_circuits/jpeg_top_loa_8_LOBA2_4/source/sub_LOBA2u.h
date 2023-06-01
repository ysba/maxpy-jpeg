// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See jpeg_top_loa_8_LOBA2_4.h for the primary calling header

#ifndef VERILATED_SUB_LOBA2U_H_
#define VERILATED_SUB_LOBA2U_H_  // guard

#include "verilated.h"

class jpeg_top_loa_8_LOBA2_4__Syms;

class sub_LOBA2u final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__Ah;
    CData/*3:0*/ __PVT__Al;
    CData/*3:0*/ __PVT__k1a;
    CData/*3:0*/ __PVT__k2a;
    CData/*3:0*/ __PVT__Bh;
    CData/*3:0*/ __PVT__Bl;
    CData/*3:0*/ __PVT__k1b;
    CData/*3:0*/ __PVT__k2b;
    VL_IN16(a,15,0);
    VL_IN16(b,15,0);
    SData/*15:0*/ __PVT__u1__DOT__lobh;
    SData/*15:0*/ __PVT__u1__DOT__lobl;
    SData/*15:0*/ __PVT__u1__DOT__lower;
    SData/*15:0*/ __PVT__u1__DOT__u1__DOT__w;
    SData/*15:0*/ __PVT__u1__DOT__u2__DOT__w;
    SData/*15:0*/ __PVT__u2__DOT__lobh;
    SData/*15:0*/ __PVT__u2__DOT__lobl;
    SData/*15:0*/ __PVT__u2__DOT__lower;
    SData/*15:0*/ __PVT__u2__DOT__u1__DOT__w;
    SData/*15:0*/ __PVT__u2__DOT__u2__DOT__w;
    VL_OUT(r,31,0);

    // INTERNAL VARIABLES
    jpeg_top_loa_8_LOBA2_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub_LOBA2u(jpeg_top_loa_8_LOBA2_4__Syms* symsp, const char* name);
    ~sub_LOBA2u();
    VL_UNCOPYABLE(sub_LOBA2u);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
