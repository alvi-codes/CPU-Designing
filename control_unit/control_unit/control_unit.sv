/* verilator lint_off UNUSED */
module control_unit #(
    parameter DATA_WIDTH = 32
)(
    input   logic   [DATA_WIDTH-1:0]    instr,
    input   logic                       EQ,
    output  logic                       RegWrite,
    output  logic   [2:0]               ALUctrl,
    output  logic                       ALUsrc,
    output  logic   [11:0]              ImmSrc,
    output  logic                       PCsrc
);

    always_comb
        case ({instr[6:0],instr[14:12]})
            {7'b0010011, 3'b000}:   RegWrite = 1'b1;
            default: RegWrite = 1'b0;
        endcase

    always_comb
        case ({instr[6:0],instr[14:12]})
            {7'b0010011, 3'b000}:   ALUctrl = 3'b0;
            default: ALUctrl = 3'b111;
        endcase

    always_comb
        case ({instr[6:0],instr[14:12]})
            {7'b0010011, 3'b000}:   ALUsrc = 1'b1;
            default: ALUsrc = 1'b0;
        endcase

    always_comb
        begin
            if ({instr[6:0],instr[14:12]} == {7'b0010011, 3'b000})
                ImmSrc = {instr[31:20]};
            else if ({instr[6:0],instr[14:12]} == {7'b1100011,3'b001})
                ImmSrc = {instr[31],instr[7],instr[30:25],instr[11:8]};
            else
                ImmSrc = {instr[31:20]};
        end

    always_comb
        begin
            if (({instr[6:0],instr[14:12]} == {7'b1100011,3'b000}) && EQ)
                PCsrc = 1'b1;
            else if (({instr[6:0],instr[14:12]} == {7'b1100011,3'b001}) && ~EQ)
                PCsrc = 1'b1;
            else
                PCsrc = 1'b0;
        end

            

 
endmodule
