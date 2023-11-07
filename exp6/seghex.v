module seghex(
		input [3:0] in,
		input clk,
		output reg [7:0] hex
		);

		always @(clk) begin
			case (in)
				4'd0: hex = 8'b10000001;
				4'd1: hex = 8'b11001111;
				4'd2: hex = 8'b10010010;
				4'd3: hex = 8'b10000110;
				4'd4: hex = 8'b11001100;
				4'd5: hex = 8'b10100100;
				4'd6: hex = 8'b10100000;
				4'd7: hex = 8'b10001111;
				4'd8: hex = 8'b10000000;
				4'd9: hex = 8'b10000100;
				4'd10: hex = 8'b10001000;
				4'd11: hex = 8'b11100000;
				4'd12: hex = 8'b10110001;
				4'd13: hex = 8'b11000010;
				4'd14: hex = 8'b10110000;
				4'd15: hex = 8'b10111000;
			endcase
		end

endmodule
