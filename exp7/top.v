module top(
	input ps2_clk,
	input ps2_data,
	input clk,
	input clrn,
	output overflow,
	output [7:0] seg0,
	output [7:0] seg1,
	output [7:0] seg2,
	output [7:0] seg3,
	output [7:0] seg4,
	output [7:0] seg5,
	output [7:0] seg6,
	output [7:0] seg7
	);

	reg nextdata_n;
	
	wire [7:0] data;
	reg [7:0] data_reg;
	wire [7:0] ascii;
	reg [1:0] ready_last;		//间接记录两个clk
	wire ready;

	parameter [2:0] idle = 3'b001;
	parameter [2:0] hold = 3'b010;
	parameter [2:0] htoi = 3'b100;	//断码分两帧发送

	reg [2:0] c_state;
	reg [2:0] n_state;

	reg [7:0] key_vo;
	reg [7:0] count;
	
	ps2_keyboard u0(
		.clk(clk),
		.clrn(clrn),
		.ps2_clk(ps2_clk),
		.ps2_data(ps2_data),
		.nextdata_n(nextdata_n),
		.data(data),		//out until end
		.ready(ready),
		.overflow(overflow)
		);

	always @(posedge clk or negedge clrn) begin		//记录ready
		if(!clrn) begin
			ready_last[0] <= 1'b0;
			ready_last[1] <= 1'b0;
		end
		else begin
			ready_last[0] <= ready;
			ready_last[1] <= ready_last[0];
		end
	end

	always @(posedge clk or negedge clrn) begin		//记录data
		if(!clrn) begin
			data_reg <= 8'h00;
			nextdata_n <= 1;
		end
		else if (ready && !ready_last[0]) begin
			nextdata_n <= 0;
			data_reg <= data;
		end
		else begin
			nextdata_n <= 1;
			data_reg <= 8'h00;
		end
	end

	always @(posedge clk or negedge clrn)begin		
		if (!clrn) begin 
			c_state <= idle;
		end
		else c_state <= n_state;
	end

	always @(posedge clk or negedge clrn)begin
		if(!clrn) begin
			count <= 0;
			n_state <= idle;			//n_state初始化为idle
			key_vo <= 8'h00;
		end
		else if(ready_last[0] && !ready_last[1]) begin
			case (c_state)
				idle: begin
					if(data != key_vo) begin
						n_state <= hold;
						key_vo <= data;
						data_reg <= data;
					end
					else begin
						n_state <= idle;
					end
				end
				hold: begin
					if(data == key_vo) begin
						n_state <= hold;
					end
					else if(data == 8'hf0) begin
						n_state <= htoi;
					end
				end
				htoi: begin
					if(data == data_reg) begin
						n_state <= idle;
						key_vo <= 8'h00;
						count <= count + 1;
					end
				end

				default: n_state <= idle;
			endcase
		end
	end

	rom rom1(
		.key_value(key_vo),
		.ascii_value(ascii)
		);

	byseg b0(
		.in(key_vo),
		.out1(seg0),
		.out2(seg1)
		);
	byseg b1(
		.in(ascii),
		.out1(seg3),
		.out2(seg4)
		);
	byseg b2(
		.in(count),
		.out1(seg6),
		.out2(seg7)
		);

	seghex s1(
		.in(0),
		.blank(1),
		.seg(seg2)
		);

	seghex s2(
		.in(0),
		.blank(1),
		.seg(seg5)
		);
endmodule
