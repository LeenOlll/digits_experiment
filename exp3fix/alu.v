module alu(
	input [2:0] Op,
	input [3:0] A,
	input [3:0] B,
	output [3:0] Result,
	output Overflow,
	output Zero,
	output Carry
	);

	wire [3:0] result_adder, result_adder0, result_less, result_not, result_and, result_or, result_xor, result_equ, result_o;

	wire [3:0] out_less;
        wire overflow_less;

	wire [3:0] B_Com, A_Com;
	assign A_Com = A[3]?({A[3], ~A[2:0]} + 1'b1) : A;
	assign B_Com = B[3]?({B[3], ~B[2:0]} + 1'b1) : B;

	//有溢出时结果不显示
	assign Result = Overflow?4'h0:result_o;

	//add and sub
	adder adder0(
		.a(A_Com),
		.b(B_Com),
		.Cin(Op[0]),

		.result(result_adder),
		.carry(Carry),
		.zero(Zero),
		.overflow(Overflow)
		);


	//less
	adder adder1(
		.a(A_Com),
		.b(B_Com),
		.Cin(1'b1),

		.result(out_less),
		.carry(),
		.zero(),
		.overflow(overflow_less)
		);
	assign result_less ={3'b000, out_less[3] ^ overflow_less};

	//not
	nor(result_not, A);

	//and
	and(result_and, A, B);

	//or
	or(result_or, A, B);

	//xor
	xor(result_xor, A, B);

	//equ
	assign result_equ = (A == B) ? 4'b0001 : 4'b0000;


    	MuxKey #(8,3,4) i0(result_o, Op, {
        3'b000, result_adder,
        3'b001, result_adder,
        3'b010, result_not,
        3'b011, result_and,
        3'b100, result_or,
        3'b101, result_xor,
        3'b110, result_less,
        3'b111, result_equ
    });
endmodule
