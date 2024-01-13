module byseg(
	input [7:0] in,
	output [7:0] out1,
	output [7:0] out2
	);

	reg blank;
	
	always @(*) begin
		if(in == 8'h00) blank = 1;
		else blank = 0;
	end

	seghex s1(in[3:0], blank, out1);
	seghex s2(in[7:4], blank, out2);
endmodule
