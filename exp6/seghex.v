module seghex(
		input [3:0] in,
		input clk,
		output reg [7:0] hex
		);

		always @(posedge clk) begin
			case (in)
				4'h0:hex = ~8'b11111100;
				4'h1:hex = ~8'b01100000;
				4'h2:hex = ~8'b11011010;
				4'h3:hex = ~8'b11110010;
				4'h4:hex = ~8'b01100110;
				4'h5:hex = ~8'b10110110;
				4'h6:hex = ~8'b10111110;
				4'h7:hex = ~8'b11100000;
				4'h8:hex = ~8'b11111110;
				4'h9:hex = ~8'b11110110;
				4'ha:hex = ~8'b11101110;
				4'hb:hex = ~8'b00111110;
				4'hc:hex = ~8'b10011100;
				4'hd:hex = ~8'b01111010;
				4'he:hex = ~8'b10011110;
				4'hf:hex = ~8'b10001110;
			endcase
		end

endmodule
