// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_copyB_11_DRUM_8.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_copyB_11_DRUM_8__Syms.h"
#include "sub_dct.h"

void sub_dct___ctor_var_reset(sub_dct* vlSelf);

sub_dct::sub_dct(jpeg_top_copyB_11_DRUM_8__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_dct___ctor_var_reset(this);
}

void sub_dct::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_dct::~sub_dct() {
}
