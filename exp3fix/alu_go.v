module alu_go(
		input [3:0] A,
		input [3:0] B,
		input big_up_mode,
		input big_down_mode,
		input small_up_mode,
		input small_down_mode,
		output [2:0] mode,
		output [3:0] result,
		output zf,
		output of,
		output cf
		);
		
		reg [2:0] mode_set = 3'b000;

		always @(big_down_mode or big_up_mode or small_down_mode or small_up_mode) begin
			if(big_down_mode) mode_set = mode_set - 3'b010;
			else if(big_up_mode) mode_set = mode_set + 3'b010;
			else if(small_up_mode) mode_set = mode_set + 3'b001;
			else if(small_down_mode) mode_set = mode_set - 3'b001;
		end

		assign mode = mode_set;

		alu alu0(
			.Op(mode_set),
			.A(A),
			.B(B),
			.Result(result),
			.Overflow(of),
			.Zero(zf),
			.Carry(cf)
		);
endmodule
