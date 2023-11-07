module alu(
		input [3:0] A,
		input [3:0] B,
		input big_up_mode,
		input big_down_mode,
		input small_up_mode,
		input small_down_mode,
		output reg [2:0] mode,
		output reg [3:0] result,
		output reg zf,
		output reg of,
		output reg cf
		);
		
		reg [2:0] mode_set = 3'b000;

		always @(big_down_mode or big_up_mode or small_down_mode or small_up_mode) begin
			if(big_down_mode) mode_set = mode_set - 3'b010;
			else if(big_up_mode) mode_set = mode_set + 3'b010;
			else if(small_up_mode) mode_set = mode_set + 3'b001;
			else if(small_down_mode) mode_set = mode_set - 3'b001;
			mode = mode_set;
		end

		always @(*) begin
			case (mode_set)
				3'b000:	result = A + B;	
				3'b001: result = A - B;
				3'b010: result = ~A;
				3'b011: result = A & B;
				3'b100: result = A | B;
				3'b101: result = A ^ B;
				3'b110: result = A < B ? 4'b0001 : 4'b0000;
				3'b111: result = A == B ? 4'b0001 : 4'b0000;
			endcase
		end

		always @(result) begin
			if(mode_set == 3'b000 || mode_set == 3'b001) begin
				zf = (result == 4'b0000);
				of = (A[3] == B[3]) && (A[3] != result[3]);	
				cf = of;
			end	
		end
endmodule
