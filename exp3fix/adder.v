module adder(
	input [3:0] a,
	input [3:0] b,
	input Cin,

	output [3:0] result,
	output carry,
	output zero,
	output overflow
	);

	wire [3:0] t_add_Cin;
	wire [3:0] result0;

	assign t_add_Cin =( {4{Cin}}^b ) + {3'b000, Cin};  
	assign { carry, result0 } = a + t_add_Cin;
	//恢复原码
	assign result = result0[3]?{ result0[3], ~result0[2:0] } : result0;
	assign overflow = (a[3] == t_add_Cin[3]) && (result[3] != a[3]);
	assign zero = ~(|result[2:0]);
endmodule
