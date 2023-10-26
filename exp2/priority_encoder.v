module priority_encoder(
		input [7:0] data,
		output reg [2:0] out,
		output out_ins
		);
		
		integer i;
		always @(*) begin
			if(!data)
				out_ins = 0;
				out = 0;
			else begin
				out_ins = 1;
				out = 0;

				for(i = 0; i <= 7; i =i + 1)
					if(data[i]) begin
						out = i[2:0];
					end
			end
		end	


endmodule
