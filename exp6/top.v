module top(
		input clk,
		output reg [7:0] hex1,
		output reg [7:0] hex2
		);

		wire x8;
		wire [7:0] out;

		shift_register shifter(
				.x8(x8),
				.clk(clk),
				.out(out)
				);
		assign x8 = out[0] ^ out[2] ^ out[3] ^ out[4];

		seghex seg1(.in(out[3:0]), .clk(clk), .hex(hex1));
		seghex seg2(.in(out[7:4]), .clk(clk), .hex(hex2));

endmodule
