module mux41b(
		input [1:0] X [3:0],
		input [1:0] Y,
		output reg [1:0] F

		);
		MuxKey #(4, 2, 2) m1(F, Y, {
			2'b00, X[0],
			2'b01, X[1],
			2'b10, X[2],
			2'b11, X[3]
			});

endmodule
