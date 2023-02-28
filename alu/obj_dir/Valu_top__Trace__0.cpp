// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_top__Syms.h"


void Valu_top___024root__trace_chg_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_chg_top_0\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Valu_top___024root__trace_chg_sub_0(Valu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->alu_top__DOT__reg_file__DOT__regfile[31]),32);
    }
    bufp->chgIData(oldp+32,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+33,(vlSelf->RegWrite));
    bufp->chgBit(oldp+34,(vlSelf->ALUsrc));
    bufp->chgBit(oldp+35,(vlSelf->clk));
    bufp->chgCData(oldp+36,(vlSelf->ALUctrl),3);
    bufp->chgIData(oldp+37,(vlSelf->rs1),32);
    bufp->chgIData(oldp+38,(vlSelf->rs2),32);
    bufp->chgIData(oldp+39,(vlSelf->rd),32);
    bufp->chgIData(oldp+40,(vlSelf->a0),32);
    bufp->chgBit(oldp+41,(vlSelf->EQ));
    bufp->chgIData(oldp+42,(vlSelf->alu_top__DOT__ALUop1),32);
    bufp->chgIData(oldp+43,(vlSelf->alu_top__DOT__ALUop2),32);
    bufp->chgIData(oldp+44,(vlSelf->alu_top__DOT__reg_file__DOT__regfile
                            [(0x1fU & vlSelf->rs2)]),32);
    bufp->chgIData(oldp+45,(((4U & (IData)(vlSelf->ALUctrl))
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
}

void Valu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_top___024root__trace_cleanup\n"); );
    // Init
    Valu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_top___024root*>(voidSelf);
    Valu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
