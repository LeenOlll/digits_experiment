module decoder38(
		input [2:0] in,
		output reg [7:0] out
		);

		always @(*)begin
			out = 8'b00000000;
			case(in)
				3'h0:out = ~8'b11111100;
				3'h1:out = ~8'b01100000;
				3'h2:out = ~8'b11011010;
				3'h3:out = ~8'b11110010;
				3'h4:out = ~8'b01100110;
				3'h5:out = ~8'b10110110;
				3'h6:out = ~8'b10111110;
				3'h7:out = ~8'b11100000;
			endcase
		end

endmodule
