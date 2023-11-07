module decoder38(
		input [2:0] in,
		output reg [7:0] out
		);

		always @(*)begin
			out = 8'b00000000;
			case(in)
				3'd0: out = 8'b10000001;
				3'd1: out = 8'b11001111;
				3'd2: out = 8'b10010010;
				3'd3: out = 8'b10000110;
				3'd4: out = 8'b11001100;
				3'd5: out = 8'b10100100;
				3'd6: out = 8'b10100000;
				3'd7: out = 8'b10001111;
			endcase
		end

endmodule
