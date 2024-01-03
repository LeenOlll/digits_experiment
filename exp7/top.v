module top(
		input ps2_clk,
		input ps2_data,
		input clk,
		input clrn,
		input nextdata_n,
		output ready,
		output overflow,
		output [7:0] seg0,
		output [7:0] seg1,
		output [7:0] seg2,
		output [7:0] seg3,
		output [7:0] seg4,
		output [7:0] seg5);

	wire [7:0] data;
	wire [7:0] rom_out;

	reg [7:0] count;
	reg [7:0] data_cmp;
	
	ps2_keyboard ps2(
			.clk(clk),
			.clrn(clrn),
			.ps2_clk(ps2_clk),
			.ps2_data(ps2_data),
			.nextdata_n(nextdata_n),	//一次生效取一次数据
			.data(data),
			.ready(ready),
			.overflow(overflow)
			);
	rom rom(
			.key_value(data),
			.ascii_value(rom_out)
		   );

	seghex shex0(
			.in(data[3:0]),
			.seg(seg0)
			);
	seghex shex1(
			.in(data[7:4]),
			.seg(seg1)
			);
	seghex shex2(
			.in(rom_out[3:0]),
			.seg(seg2)
			);
	seghex shex3(
			.in(rom_out[7:4]),
			.seg(seg3)
			);
	seghex shex4(
			.in(count[3:0]),
			.seg(seg4)
			);
	seghex shex5(
			.in(count[7:4]),
			.seg(seg5)
			);


	always @(posedge ps2_clk or negedge clrn) begin
		if(!clrn) count = 0;
		else if((data_cmp != data)&&(data_cmp == 8'hf0)) count = count + 1;
		data_cmp = data;
	end

endmodule
