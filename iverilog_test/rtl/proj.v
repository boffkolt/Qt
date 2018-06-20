
module pulsedemo_top (input CLOCK,
                     // output PULSE,
                      output PULSE2,
                      input [2:0] x,
                      input [2:0] x1,
                      output y,
                      output y1,
                      output [3:0] y2);


   logic [10:0] 		     counter = 'd0;
   //logic [15:0]                     tmp = 15'd100;
   //logic 			     pulse_int = 'b0;
   logic			     pulse2_int = 'b0;
 			     
   always @(posedge CLOCK) begin

      counter <= counter + 'd1;
      //pulse_int <= 'b1;

      if (counter > 'd6) begin

       // pulse_int <= 'b0;

      end

      if (counter > 800) begin

	 counter <= 'd0;
	 
      end

   end // always @ (posedge CLOCK)

   always @(posedge CLOCK) begin

      pulse2_int <= 'b0;

      if (counter > 500) begin

	 pulse2_int <= 1'b1;
	 
      end
      
   end

  // assign PULSE = pulse_int;
   assign PULSE2 = pulse2_int;   
    assign y = x[0];
    assign y1 = x1[0];
    assign y2 = x+x1;
endmodule
