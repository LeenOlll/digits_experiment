module shift_register(
		input x8,
		input clk,
		output reg [7:0] out
		);
		
		reg [7:0] data = 8'b00000001;

		always @(posedge clk) begin
			data <= {x8, data[7:1]};
			out <= data;
		end

endmodule
