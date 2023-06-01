// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_copyB_13_LOBA0_4.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_copyB_13_LOBA0_4__Syms.h"
#include "sub_LOBA0u.h"

void sub_LOBA0u___ctor_var_reset(sub_LOBA0u* vlSelf);

sub_LOBA0u::sub_LOBA0u(jpeg_top_copyB_13_LOBA0_4__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_LOBA0u___ctor_var_reset(this);
}

void sub_LOBA0u::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_LOBA0u::~sub_LOBA0u() {
}
