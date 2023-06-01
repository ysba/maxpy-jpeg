// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_loa_8_LOBA2_4.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_loa_8_LOBA2_4__Syms.h"
#include "sub_LOBA2u.h"

void sub_LOBA2u___ctor_var_reset(sub_LOBA2u* vlSelf);

sub_LOBA2u::sub_LOBA2u(jpeg_top_loa_8_LOBA2_4__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_LOBA2u___ctor_var_reset(this);
}

void sub_LOBA2u::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_LOBA2u::~sub_LOBA2u() {
}
