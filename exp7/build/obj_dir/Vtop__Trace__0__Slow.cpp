// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+25,"ps2_clk", false,-1);
    tracep->declBit(c+26,"ps2_data", false,-1);
    tracep->declBit(c+27,"clk", false,-1);
    tracep->declBit(c+28,"clrn", false,-1);
    tracep->declBit(c+29,"nextdata_n", false,-1);
    tracep->declBit(c+30,"ready", false,-1);
    tracep->declBit(c+31,"overflow", false,-1);
    tracep->declBus(c+32,"seg0", false,-1, 7,0);
    tracep->declBus(c+33,"seg1", false,-1, 7,0);
    tracep->declBus(c+34,"seg2", false,-1, 7,0);
    tracep->declBus(c+35,"seg3", false,-1, 7,0);
    tracep->declBus(c+36,"seg4", false,-1, 7,0);
    tracep->declBus(c+37,"seg5", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+25,"ps2_clk", false,-1);
    tracep->declBit(c+26,"ps2_data", false,-1);
    tracep->declBit(c+27,"clk", false,-1);
    tracep->declBit(c+28,"clrn", false,-1);
    tracep->declBit(c+29,"nextdata_n", false,-1);
    tracep->declBit(c+30,"ready", false,-1);
    tracep->declBit(c+31,"overflow", false,-1);
    tracep->declBus(c+32,"seg0", false,-1, 7,0);
    tracep->declBus(c+33,"seg1", false,-1, 7,0);
    tracep->declBus(c+34,"seg2", false,-1, 7,0);
    tracep->declBus(c+35,"seg3", false,-1, 7,0);
    tracep->declBus(c+36,"seg4", false,-1, 7,0);
    tracep->declBus(c+37,"seg5", false,-1, 7,0);
    tracep->declBus(c+19,"data", false,-1, 7,0);
    tracep->declBus(c+20,"rom_out", false,-1, 7,0);
    tracep->declBus(c+15,"count", false,-1, 7,0);
    tracep->declBus(c+16,"data_cmp", false,-1, 7,0);
    tracep->pushNamePrefix("ps2 ");
    tracep->declBit(c+27,"clk", false,-1);
    tracep->declBit(c+28,"clrn", false,-1);
    tracep->declBit(c+25,"ps2_clk", false,-1);
    tracep->declBit(c+26,"ps2_data", false,-1);
    tracep->declBit(c+29,"nextdata_n", false,-1);
    tracep->declBus(c+19,"data", false,-1, 7,0);
    tracep->declBit(c+30,"ready", false,-1);
    tracep->declBit(c+31,"overflow", false,-1);
    tracep->declBus(c+1,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+10,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+11,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+12,"count", false,-1, 3,0);
    tracep->declBus(c+13,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+14,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rom ");
    tracep->declBus(c+19,"key_value", false,-1, 7,0);
    tracep->declBus(c+20,"ascii_value", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shex0 ");
    tracep->declBus(c+21,"in", false,-1, 3,0);
    tracep->declBus(c+32,"seg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shex1 ");
    tracep->declBus(c+22,"in", false,-1, 3,0);
    tracep->declBus(c+33,"seg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shex2 ");
    tracep->declBus(c+23,"in", false,-1, 3,0);
    tracep->declBus(c+34,"seg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shex3 ");
    tracep->declBus(c+24,"in", false,-1, 3,0);
    tracep->declBus(c+35,"seg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shex4 ");
    tracep->declBus(c+17,"in", false,-1, 3,0);
    tracep->declBus(c+36,"seg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shex5 ");
    tracep->declBus(c+18,"in", false,-1, 3,0);
    tracep->declBus(c+37,"seg", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->top__DOT__ps2__DOT__buffer),10);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__ps2__DOT__fifo[0]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__ps2__DOT__fifo[1]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__ps2__DOT__fifo[2]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__ps2__DOT__fifo[3]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__ps2__DOT__fifo[4]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__ps2__DOT__fifo[5]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__ps2__DOT__fifo[6]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__ps2__DOT__fifo[7]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__ps2__DOT__w_ptr),3);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__ps2__DOT__r_ptr),3);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__ps2__DOT__count),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__ps2__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+14,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__ps2__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__count),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__data_cmp),8);
    bufp->fullCData(oldp+17,((0xfU & (IData)(vlSelf->top__DOT__count))),4);
    bufp->fullCData(oldp+18,((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__data),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__rom_out),8);
    bufp->fullCData(oldp+21,((0xfU & (IData)(vlSelf->top__DOT__data))),4);
    bufp->fullCData(oldp+22,((0xfU & ((IData)(vlSelf->top__DOT__data) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+23,((0xfU & (IData)(vlSelf->top__DOT__rom_out))),4);
    bufp->fullCData(oldp+24,((0xfU & ((IData)(vlSelf->top__DOT__rom_out) 
                                      >> 4U))),4);
    bufp->fullBit(oldp+25,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+26,(vlSelf->ps2_data));
    bufp->fullBit(oldp+27,(vlSelf->clk));
    bufp->fullBit(oldp+28,(vlSelf->clrn));
    bufp->fullBit(oldp+29,(vlSelf->nextdata_n));
    bufp->fullBit(oldp+30,(vlSelf->ready));
    bufp->fullBit(oldp+31,(vlSelf->overflow));
    bufp->fullCData(oldp+32,(vlSelf->seg0),8);
    bufp->fullCData(oldp+33,(vlSelf->seg1),8);
    bufp->fullCData(oldp+34,(vlSelf->seg2),8);
    bufp->fullCData(oldp+35,(vlSelf->seg3),8);
    bufp->fullCData(oldp+36,(vlSelf->seg4),8);
    bufp->fullCData(oldp+37,(vlSelf->seg5),8);
}
