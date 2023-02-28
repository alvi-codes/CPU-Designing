// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_control_unit__Syms.h"


VL_ATTR_COLD void Vtop_control_unit___024root__trace_init_sub__TOP__0(Vtop_control_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"PC", false,-1, 7,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBit(c+6,"PCsrc", false,-1);
    tracep->declBus(c+7,"rs1", false,-1, 4,0);
    tracep->declBus(c+8,"rs2", false,-1, 4,0);
    tracep->declBus(c+9,"rd", false,-1, 4,0);
    tracep->declBus(c+10,"ImmOp", false,-1, 31,0);
    tracep->pushNamePrefix("top_control_unit ");
    tracep->declBus(c+13,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 7,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBit(c+6,"PCsrc", false,-1);
    tracep->declBus(c+7,"rs1", false,-1, 4,0);
    tracep->declBus(c+8,"rs2", false,-1, 4,0);
    tracep->declBus(c+9,"rd", false,-1, 4,0);
    tracep->declBus(c+10,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+11,"instr", false,-1, 31,0);
    tracep->declBus(c+12,"ImmSrc", false,-1, 11,0);
    tracep->pushNamePrefix("my_control_unit ");
    tracep->declBus(c+14,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"instr", false,-1, 31,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+12,"ImmSrc", false,-1, 11,0);
    tracep->declBit(c+6,"PCsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_instr_mem ");
    tracep->declBus(c+13,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 7,0);
    tracep->declBus(c+11,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_sign_extend ");
    tracep->declBus(c+14,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"instr", false,-1, 31,0);
    tracep->declBus(c+12,"ImmSrc", false,-1, 11,0);
    tracep->declBus(c+10,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_control_unit___024root__trace_init_top(Vtop_control_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root__trace_init_top\n"); );
    // Body
    Vtop_control_unit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_control_unit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_control_unit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_control_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_control_unit___024root__trace_register(Vtop_control_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_control_unit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_control_unit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_control_unit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_control_unit___024root__trace_full_sub_0(Vtop_control_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_control_unit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root__trace_full_top_0\n"); );
    // Init
    Vtop_control_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_control_unit___024root*>(voidSelf);
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_control_unit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_control_unit___024root__trace_full_sub_0(Vtop_control_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_unit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->PC),8);
    bufp->fullBit(oldp+2,(vlSelf->EQ));
    bufp->fullBit(oldp+3,(vlSelf->RegWrite));
    bufp->fullCData(oldp+4,(vlSelf->ALUctrl),3);
    bufp->fullBit(oldp+5,(vlSelf->ALUsrc));
    bufp->fullBit(oldp+6,(vlSelf->PCsrc));
    bufp->fullCData(oldp+7,(vlSelf->rs1),5);
    bufp->fullCData(oldp+8,(vlSelf->rs2),5);
    bufp->fullCData(oldp+9,(vlSelf->rd),5);
    bufp->fullIData(oldp+10,(vlSelf->ImmOp),32);
    bufp->fullIData(oldp+11,(vlSelf->top_control_unit__DOT__instr),32);
    bufp->fullSData(oldp+12,(vlSelf->top_control_unit__DOT__ImmSrc),12);
    bufp->fullIData(oldp+13,(8U),32);
    bufp->fullIData(oldp+14,(0x20U),32);
    bufp->fullIData(oldp+15,(0xcU),32);
}
