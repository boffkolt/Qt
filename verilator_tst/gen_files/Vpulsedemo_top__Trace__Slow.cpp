// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpulsedemo_top__Syms.h"


//======================

void Vpulsedemo_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vpulsedemo_top::traceInit, &Vpulsedemo_top::traceFull, &Vpulsedemo_top::traceChg, this);
}
void Vpulsedemo_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vpulsedemo_top* t=(Vpulsedemo_top*)userthis;
    Vpulsedemo_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vpulsedemo_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vpulsedemo_top* t=(Vpulsedemo_top*)userthis;
    Vpulsedemo_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vpulsedemo_top::traceInitThis(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vpulsedemo_top::traceFullThis(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vpulsedemo_top::traceInitThis__1(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+3,"CLOCK",-1);
	vcdp->declBit  (c+4,"PULSE2",-1);
	vcdp->declBus  (c+5,"x",-1,2,0);
	vcdp->declBus  (c+6,"x1",-1,2,0);
	vcdp->declBit  (c+7,"y",-1);
	vcdp->declBit  (c+8,"y1",-1);
	vcdp->declBus  (c+9,"y2",-1,3,0);
	vcdp->declBit  (c+3,"pulsedemo_top CLOCK",-1);
	vcdp->declBit  (c+4,"pulsedemo_top PULSE2",-1);
	vcdp->declBus  (c+5,"pulsedemo_top x",-1,2,0);
	vcdp->declBus  (c+6,"pulsedemo_top x1",-1,2,0);
	vcdp->declBit  (c+7,"pulsedemo_top y",-1);
	vcdp->declBit  (c+8,"pulsedemo_top y1",-1);
	vcdp->declBus  (c+9,"pulsedemo_top y2",-1,3,0);
	vcdp->declBus  (c+1,"pulsedemo_top counter",-1,10,0);
	vcdp->declBit  (c+2,"pulsedemo_top pulse2_int",-1);
    }
}

void Vpulsedemo_top::traceFullThis__1(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->pulsedemo_top__DOT__counter),11);
	vcdp->fullBit  (c+2,(vlTOPp->pulsedemo_top__DOT__pulse2_int));
	vcdp->fullBit  (c+3,(vlTOPp->CLOCK));
	vcdp->fullBit  (c+4,(vlTOPp->PULSE2));
	vcdp->fullBus  (c+5,(vlTOPp->x),3);
	vcdp->fullBus  (c+6,(vlTOPp->x1),3);
	vcdp->fullBit  (c+7,(vlTOPp->y));
	vcdp->fullBit  (c+8,(vlTOPp->y1));
	vcdp->fullBus  (c+9,(vlTOPp->y2),4);
    }
}
