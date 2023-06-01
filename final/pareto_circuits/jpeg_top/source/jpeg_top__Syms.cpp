// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "jpeg_top__Syms.h"
#include "jpeg_top.h"
#include "sub___024root.h"
#include "sub_dct.h"
#include "sub_quantizer.h"

// FUNCTIONS
jpeg_top__Syms::~jpeg_top__Syms()
{
}

jpeg_top__Syms::jpeg_top__Syms(VerilatedContext* contextp, const char* namep, jpeg_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8{this, Verilated::catName(namep, "jpeg_top.u19.u14.u11.u8")}
    , TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9{this, Verilated::catName(namep, "jpeg_top.u19.u14.u11.u9")}
    , TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5{this, Verilated::catName(namep, "jpeg_top.u19.u14.u12.u5")}
    , TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6{this, Verilated::catName(namep, "jpeg_top.u19.u14.u12.u6")}
    , TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1{this, Verilated::catName(namep, "jpeg_top.u19.u14.u13.u1")}
    , TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2{this, Verilated::catName(namep, "jpeg_top.u19.u14.u13.u2")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-10);
    // Setup each module's pointers to their submodules
    TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8 = &TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8;
    TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9 = &TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9;
    TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5 = &TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5;
    TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6 = &TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6;
    TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1 = &TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1;
    TOP.__PVT__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2 = &TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u8.__Vconfigure(true);
    TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u11__DOT__u9.__Vconfigure(true);
    TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u5.__Vconfigure(false);
    TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u12__DOT__u6.__Vconfigure(false);
    TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u1.__Vconfigure(false);
    TOP__jpeg_top__DOT__u19__DOT__u14__DOT__u13__DOT__u2.__Vconfigure(false);
}
