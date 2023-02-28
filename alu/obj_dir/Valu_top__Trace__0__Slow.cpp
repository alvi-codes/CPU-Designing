// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_top__Syms.h"


VL_ATTR_COLD void Valu_top___024root__trace_init_sub__TOP__0(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+33,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+34,"RegWrite", false,-1);
    tracep->declBit(c+35,"ALUsrc", false,-1);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBus(c+37,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+38,"rs1", false,-1, 31,0);
    tracep->declBus(c+39,"rs2", false,-1, 31,0);
    tracep->declBus(c+40,"rd", false,-1, 31,0);
    tracep->declBus(c+41,"a0", false,-1, 31,0);
    tracep->declBit(c+42,"EQ", false,-1);
    tracep->pushNamePrefix("alu_top ");
    tracep->declBus(c+47,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"OPERAND_WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+34,"RegWrite", false,-1);
    tracep->declBit(c+35,"ALUsrc", false,-1);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBus(c+37,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+38,"rs1", false,-1, 31,0);
    tracep->declBus(c+39,"rs2", false,-1, 31,0);
    tracep->declBus(c+40,"rd", false,-1, 31,0);
    tracep->declBus(c+41,"a0", false,-1, 31,0);
    tracep->declBit(c+42,"EQ", false,-1);
    tracep->declBus(c+43,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+44,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+45,"regOp2", false,-1, 31,0);
    tracep->declBus(c+46,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+48,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+43,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+44,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+37,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+46,"ALUout", false,-1, 31,0);
    tracep->declBit(c+42,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alusrc ");
    tracep->declBus(c+47,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"regOp2", false,-1, 31,0);
    tracep->declBus(c+33,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+35,"ALUsrc", false,-1);
    tracep->declBus(c+44,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+47,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"REGISTER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+34,"WE3", false,-1);
    tracep->declBus(c+38,"AD1", false,-1, 31,0);
    tracep->declBus(c+39,"AD2", false,-1, 31,0);
    tracep->declBus(c+40,"AD3", false,-1, 31,0);
    tracep->declBus(c+46,"WD3", false,-1, 31,0);
    tracep->declBus(c+43,"RD1", false,-1, 31,0);
    tracep->declBus(c+45,"RD2", false,-1, 31,0);
    tracep->declBus(c+41,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"regfile", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valu_top___024root__trace_init_top(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_init_top\n"); );
    // Body
    Valu_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu_top___024root__trace_register(Valu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_full_top_0\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_top___024root__trace_full_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+34,(vlSelf->RegWrite));
    bufp->fullBit(oldp+35,(vlSelf->ALUsrc));
    bufp->fullBit(oldp+36,(vlSelf->clk));
    bufp->fullCData(oldp+37,(vlSelf->ALUctrl),3);
    bufp->fullIData(oldp+38,(vlSelf->rs1),32);
    bufp->fullIData(oldp+39,(vlSelf->rs2),32);
    bufp->fullIData(oldp+40,(vlSelf->rd),32);
    bufp->fullIData(oldp+41,(vlSelf->a0),32);
    bufp->fullBit(oldp+42,(vlSelf->EQ));
    bufp->fullIData(oldp+43,(vlSelf->alu_top__DOT__ALUop1),32);
    bufp->fullIData(oldp+44,(vlSelf->alu_top__DOT__ALUop2),32);
    bufp->fullIData(oldp+45,(vlSelf->alu_top__DOT__reg_file__DOT__regfile
                             [(0x1fU & vlSelf->rs2)]),32);
    bufp->fullIData(oldp+46,(((4U & (IData)(vlSelf->ALUctrl))
                               ? ((2U & (IData)(vlSelf->ALUctrl))
                                   ? 0U : ((1U & (IData)(vlSelf->ALUctrl))
                                            ? ((vlSelf->alu_top__DOT__ALUop1 
                                                < vlSelf->alu_top__DOT__ALUop2)
                                                ? 1U
                                                : 0U)
                                            : 0U)) : 
                              ((2U & (IData)(vlSelf->ALUctrl))
                                ? ((1U & (IData)(vlSelf->ALUctrl))
                                    ? (vlSelf->alu_top__DOT__ALUop1 
                                       | vlSelf->alu_top__DOT__ALUop2)
                                    : (vlSelf->alu_top__DOT__ALUop1 
                                       & vlSelf->alu_top__DOT__ALUop2))
                                : ((1U & (IData)(vlSelf->ALUctrl))
                                    ? (vlSelf->alu_top__DOT__ALUop1 
                                       - vlSelf->alu_top__DOT__ALUop2)
                                    : (vlSelf->alu_top__DOT__ALUop1 
                                       + vlSelf->alu_top__DOT__ALUop2))))),32);
    bufp->fullIData(oldp+47,(0x20U),32);
    bufp->fullIData(oldp+48,(3U),32);
}
