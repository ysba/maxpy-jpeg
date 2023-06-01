// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc1_12_DRUM_7.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc1_12_DRUM_7__Syms.h"
#include "sub_DRUMs__K7.h"

void sub_DRUMs__K7___ctor_var_reset(sub_DRUMs__K7* vlSelf);

sub_DRUMs__K7::sub_DRUMs__K7(jpeg_top_trunc1_12_DRUM_7__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_DRUMs__K7___ctor_var_reset(this);
}

void sub_DRUMs__K7::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_DRUMs__K7::~sub_DRUMs__K7() {
}
