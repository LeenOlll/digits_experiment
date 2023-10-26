module decoder38(
		input [2:0] in,
		output reg [7:0] out
		);

		always @(*)begin
			out = 8'b00000000;
			case(in)
				3'd0: out = 8'b00000001;
				3'd1: out = 8'b01001111;
				3'd2: out = 8'b00010010;
				3'd3: out = 8'b00000110;
				3'd4: out = 8'b01001100;
				3'd5: out = 8'b00100100;
				3'd6: out = 8'b00100000;
				3'd7: out = 8'b00001111;
			endcase
		end

endmodule
