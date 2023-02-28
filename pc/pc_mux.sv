module pc_mux #(
    parameter WIDTH = 32
)(
    // interface signals
    input logic PCsrc,
    input logic clk,
    input logic [WIDTH-1:0] pc ,
    input logic [WIDTH-1:0] ImmOp,
    output logic [WIDTH-1:0] next_PC
);

always_ff @ (posedge clk)
    if (PCsrc) next_PC <= pc + ImmOp;
    else next_PC <= pc + 32'd4;

    // assign next_PC = PCsrc ? pc_ImmOp : pc+WIDTH'b4

endmodule
