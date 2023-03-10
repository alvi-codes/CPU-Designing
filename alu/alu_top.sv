module alu_top #(
    ADDRESS_WIDTH = 32,
    OPERAND_WIDTH = 32,
    CONTROL_WIDTH = 3
) (
    input logic         [OPERAND_WIDTH-1:0]     ImmOp,
    input logic                                 RegWrite,
    input logic                                 ALUsrc,
    input logic                                 clk,
    input logic         [CONTROL_WIDTH-1:0]     ALUctrl,
    input logic         [ADDRESS_WIDTH-1:0]     rs1,
    input logic         [ADDRESS_WIDTH-1:0]     rs2,
    input logic         [ADDRESS_WIDTH-1:0]     rd,
    output logic        [ADDRESS_WIDTH-1:0]     a0,
    output logic                                EQ // EQ checks if ALUOp1 and ALUOp2 are equal. This is important for BNE operations
);
    
logic [ADDRESS_WIDTH-1:0] ALUop1, ALUop2, regOp2, ALUout;

reg_file reg_file (
    .clk (clk),
    .AD1 (rs1),
    .AD2 (rs2),
    .AD3 (rd),
    .WE3 (RegWrite),
    .WD3 (ALUout),
    .RD1 (ALUop1),
    .RD2 (regOp2),
    .a0 (a0)
);

alusrc alusrc (
    .regOp2 (regOp2),
    .ImmOp (ImmOp),
    .ALUsrc (ALUsrc),
    .ALUop2 (ALUop2)
);

alu alu (
    .ALUop1 (ALUop1),
    .ALUop2 (ALUop2),
    .ALUctrl (ALUctrl),
    .ALUout (ALUout),
    .EQ (EQ)
);

endmodule
