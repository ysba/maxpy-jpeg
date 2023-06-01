// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See jpeg_top_trunc0_11_DRUM_6.h for the primary calling header

#include "verilated.h"

#include "jpeg_top_trunc0_11_DRUM_6__Syms.h"
#include "sub_DRUMs__K6.h"

void sub_DRUMs__K6___ctor_var_reset(sub_DRUMs__K6* vlSelf);

sub_DRUMs__K6::sub_DRUMs__K6(jpeg_top_trunc0_11_DRUM_6__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_DRUMs__K6___ctor_var_reset(this);
}

void sub_DRUMs__K6::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_DRUMs__K6::~sub_DRUMs__K6() {
}
