// MAxPy 0.1.2-dev

#ifndef __MAXPY_WRAPPER__
#define __MAXPY_WRAPPER__

#include <pybind11/pybind11.h>
/* #include "/home/ysba/verilator/include/verilated_vcd_c.h" */

#include "verilated.h"
#include "jpeg_top_copyB_20.h"
#include "sub___024root.h"

namespace py = pybind11;

//---------------------------------------------------------------------------------------------------------------------
// "Net" class


class Net {
	public:
		Net(const char* name_in, void *p_val, unsigned int bit_mask_in);
		void eval();
		void reset();
		unsigned int get_val();

		const char* name;
		int t0;
		int t1;
		int tc;
		int tx;
		int ig;
		float perc_high;
		float perc_low;
		unsigned int *val;
		unsigned int last_val;
		unsigned int bit_mask;
		bool first;
		Net *next;
};
//---------------------------------------------------------------------------------------------------------------------
// "Instance" class

class Instance {
	public:
		Instance(const char* name_in);
		const char* name;
		Instance *head_instance;
		Instance *next;
		Net *head_net;
};
//---------------------------------------------------------------------------------------------------------------------
// "MAxPy_Vjpeg_top_copyB_20" class

#pragma GCC visibility push(hidden)
class MAxPy_jpeg_top_copyB_20 : public jpeg_top_copyB_20 {
	public:
		MAxPy_jpeg_top_copyB_20(const char* name);
		~MAxPy_jpeg_top_copyB_20();
		void eval();

		// saif public methods
		void eval_nets(Instance *pi);
		void reset_nets(Instance *pi);
        void saif_on_the_fly(int reset);
		void saif_print_instance(FILE *file_handler, Instance *pi, int level);
		void clear_memory();
        void enable_saif_output();
		
		// vcd public methods
		/* void trace(const char* vcd_path); */

		//void show_nets(Instance *pi);

		Instance* maxpy_jpeg_top();

	private:
		// saif private properties
		vluint64_t main_time;
		vluint64_t last_main_time;
		Instance *top_instance;
        bool saif_output;
		
		// vcd private properties
		/* VerilatedVcdC* tfp; */
	public:
		float area;
		float power;
		float timing;
		std::string parameters;

		// saif public properties
		std::string saif_path;
		py::list node_info;

		// getters and setters
		int get_clk();
		void set_clk(int val);

		int get_rst();
		void set_rst(int val);

		int get_end_of_file_signal();
		void set_end_of_file_signal(int val);

		int get_enable();
		void set_enable(int val);

		int get_data_ready();
		void set_data_ready(int val);

		int get_end_of_file_bitstream_count();
		void set_end_of_file_bitstream_count(int val);

		int get_eof_data_partial_ready();
		void set_eof_data_partial_ready(int val);

		int get_data_in();
		void set_data_in(int val);

		int get_JPEG_bitstream();
		void set_JPEG_bitstream(int val);

};
#pragma GCC visibility pop

//---------------------------------------------------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------------------------------------------------
//  EOF
//---------------------------------------------------------------------------------------------------------------------
