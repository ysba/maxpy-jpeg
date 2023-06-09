// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "jpeg_top_exact__Syms.h"
#include "jpeg_top_exact.h"
#include "sub___024root.h"

// FUNCTIONS
jpeg_top_exact__Syms::~jpeg_top_exact__Syms()
{
}

jpeg_top_exact__Syms::jpeg_top_exact__Syms(VerilatedContext* contextp, const char* namep, jpeg_top_exact* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-10);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
