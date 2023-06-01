/////////////////////////////////////////////////////////////////////
////                                                             ////
////  JPEG Encoder Core - Verilog                                ////
////                                                             ////
////  Author: David Lundgren                                     ////
////          davidklun@gmail.com                                ////
////                                                             ////
/////////////////////////////////////////////////////////////////////
////                                                             ////
//// Copyright (C) 2009 David Lundgren                           ////
////                  davidklun@gmail.com                        ////
////                                                             ////
//// This source file may be used and distributed without        ////
//// restriction provided that this copyright statement is not   ////
//// removed from the file and that any derivative work contains ////
//// the original copyright notice and the associated disclaimer.////
////                                                             ////
////     THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY     ////
//// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED   ////
//// TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS   ////
//// FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL THE AUTHOR      ////
//// OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,         ////
//// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES    ////
//// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE   ////
//// GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR        ////
//// BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF  ////
//// LIABILITY, WHETHER IN  CONTRACT, STRICT LIABILITY, OR TORT  ////
//// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  ////
//// OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE         ////
//// POSSIBILITY OF SUCH DAMAGE.                                 ////
////                                                             ////
/////////////////////////////////////////////////////////////////////

/* This module converts the incoming Red, Green, and Blue 8-bit pixel data
into Y, Cb, and Cr 8-bit values.  The output values will be unsigned
in the range of 0 to 255. 
data_in contains the Red pixel value in bits [7:0], Green in bits [15:8],
and Blue in bits [23:16].
data_out contains the Y value in bits [7:0], Cb value in bits [15:8],
and Cr balue in bits [23:16].*/

`timescale 1ns / 100ps

module RGB2YCBCR(clk, rst, enable, data_in, data_out,
enable_out);
input		clk;
input		rst;
input		enable;
input	[23:0]	data_in;
output	[23:0]	data_out;
output	enable_out;


wire [13:0] Y1 = 14'd4899;
wire [13:0] Y2 = 14'd9617;
wire [13:0] Y3 = 14'd1868;
wire [13:0] CB1 = 14'd2764;
wire [13:0] CB2 = 14'd5428;
wire [13:0] CB3 = 14'd8192;
wire [13:0] CR1 = 14'd8192;
reg [13:0] CR2 = 14'd6860;
wire [13:0] CR3 = 14'd1332;
reg [23:0] Y_temp, CB_temp, CR_temp;
reg [21:0] Y1_product, Y2_product, Y3_product;
wire [22:0] Y12_product;
reg [21:0] CB1_product, CB2_product, CB3_product;
wire [21:0] CBc1_product;
wire [22:0]CBc12_product;
reg [21:0] CR1_product, CR2_product, CR3_product;
wire [22:0] CRc1_product;
wire [22:0] CRc12_product;
reg [7:0] Y, CB, CR;
reg	enable_1, enable_2, enable_out;
wire [23:0] data_out = {CR, CB, Y};

wire [23:0] buf_Y_temp, buf_CB_temp, buf_CR_temp;
wire [31:0] buf_Y1_product, buf_Y2_product, buf_Y3_product;
wire [31:0] buf_CB1_product, buf_CB2_product, buf_CB3_product;
wire [31:0] buf_CR1_product, buf_CR2_product, buf_CR3_product;

copyB #(22, 12) u1 (Y1_product, Y2_product, Y12_product);
copyB #(23, 12) u2 (Y12_product, {1'b0, Y3_product}, buf_Y_temp);

copyB #(22, 12) u3 (22'd2097152, ~CB1_product + 1, CBc1_product);
copyB #(22, 12) u4 (CBc1_product, ~CB2_product + 1, CBc12_product);
copyB #(23, 12) u5 (CBc12_product, {1'b0, CB3_product}, buf_CB_temp);

copyB #(22, 12) u6 (22'd2097152, CR1_product, CRc1_product);
copyB #(23, 12) u7 (CRc1_product, ~{1'b0,CR2_product} + 1, CRc12_product);
copyB #(23, 12) u8 (CRc12_product, ~{1'b0,CR3_product} + 1, buf_CR_temp);


DRUMu #(.N(16)) u9  ({2'h0,Y1}, {8'h0,data_in[7:0]}, buf_Y1_product);
DRUMu #(.N(16)) u10 ({2'h0,Y2}, {8'h0,data_in[15:8]}, buf_Y2_product);
DRUMu #(.N(16)) u11 ({2'h0,Y3}, {8'h0,data_in[23:16]}, buf_Y3_product);

DRUMu #(.N(16)) u12 ({2'h0,CB1}, {8'h0,data_in[7:0]}, buf_CB1_product);
DRUMu #(.N(16)) u13 ({2'h0,CB2}, {8'h0,data_in[15:8]}, buf_CB2_product);
DRUMu #(.N(16)) u14 ({2'h0,CB3}, {8'h0,data_in[23:16]}, buf_CB3_product);

DRUMu #(.N(16)) u15 ({2'h0,CR1}, {8'h0,data_in[7:0]}, buf_CR1_product);
DRUMu #(.N(16)) u16 ({2'h0,CR2}, {8'h0,data_in[15:8]}, buf_CR2_product);
DRUMu #(.N(16)) u17 ({2'h0,CR3}, {8'h0,data_in[23:16]}, buf_CR3_product);



always @(posedge clk)
begin
	if (rst) begin
		Y1_product <= 0;
		Y2_product <= 0;
		Y3_product <= 0;   
		CB1_product <= 0;
		CB2_product <= 0;
		CB3_product <= 0;
		CR1_product <= 0;
		CR2_product <= 0;
		CR3_product <= 0;
		Y_temp <= 0;
		CB_temp <= 0;
		CR_temp <= 0;
		end
	else if (enable) begin
		//Y1_product <= Y1 * data_in[7:0];
		// Y2_product <= Y2 * data_in[15:8];
		// Y3_product <= Y3 * data_in[23:16];
		// CB1_product <= CB1 * data_in[7:0];
		// CB2_product <= CB2 * data_in[15:8];
		// CB3_product <= CB3 * data_in[23:16];
		// CR1_product <= CR1 * data_in[7:0];
		// CR2_product <= CR2 * data_in[15:8];
		// CR3_product <= CR3 * data_in[23:16];
		//Y_temp <= Y1_product + Y2_product + Y3_product;
		//CB_temp <= 22'd2097152 - CB1_product - CB2_product + CB3_product;
		//CR_temp <= 22'd2097152 + CR1_product - CR2_product - CR3_product;

		Y1_product <= buf_Y1_product[21:0];
		Y2_product <= buf_Y2_product[21:0];
		Y3_product <= buf_Y3_product[21:0];
		CB1_product <= buf_CB1_product[21:0];
		CB2_product <= buf_CB2_product[21:0];
		CB3_product <= buf_CB3_product[21:0];
		CR1_product <= buf_CR1_product[21:0];
		CR2_product <= buf_CR2_product[21:0];
		CR3_product <= buf_CR3_product[21:0];
		Y_temp <= buf_Y_temp;
		CB_temp <= buf_CB_temp;
		CR_temp <= buf_CR_temp;
		end
end 
 
/* Rounding of Y, CB, CR requires looking at bit 13.  If there is a '1' in bit 13,
then the value in bits [21:14] needs to be rounded up by adding 1 to the value
in those bits */

always @(posedge clk)
begin
	if (rst) begin
		Y <= 0;
		CB <= 0;
		CR <= 0;   
		end
	else if (enable) begin
		Y <= Y_temp[13] ? Y_temp[21:14] + 1: Y_temp[21:14];
		CB <= CB_temp[13] & (CB_temp[21:14] != 8'd255) ? CB_temp[21:14] + 1: CB_temp[21:14];
		CR <= CR_temp[13] & (CR_temp[21:14] != 8'd255) ? CR_temp[21:14] + 1: CR_temp[21:14]; 
		// Need to avoid rounding if the value in the top 8 bits is 255, otherwise
		// the value would rollover from 255 to 0
		end
end


always @(posedge clk)
begin
	if (rst) begin
		enable_1 <= 0;
		enable_2 <= 0;
		enable_out <= 0;   
		end
	else begin
		enable_1 <= enable;
		enable_2 <= enable_1;
		enable_out <= enable_2;
		end
end
endmodule
