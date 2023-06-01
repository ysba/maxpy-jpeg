// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_copyB_9_DRUM_8.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_copyB_9_DRUM_8__Syms.h"
#include "sub_quantizer.h"

void sub_quantizer___ctor_var_reset(sub_quantizer* vlSelf);

sub_quantizer::sub_quantizer(jpeg_top_copyB_9_DRUM_8__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_quantizer___ctor_var_reset(this);
}

void sub_quantizer::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_quantizer::~sub_quantizer() {
}
