module top(
		input [7:0] data,
		output reg [2:0] led,
		output reg [7:0] hex,
		output reg inst_led
		);

		reg [2:0] coding_result;
		
		priority_encoder pe(
				.data(data),
				.out(coding_result),
				.out_ins(inst_led)
				);

		decoder38 de(
				.in(coding_result),
				.out(hex)
				);

		always @(*)
			led = coding_result;

endmodule
