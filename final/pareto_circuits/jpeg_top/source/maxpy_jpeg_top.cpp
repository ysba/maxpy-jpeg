#include "verilator_pybind_wrapper.h"

Instance* MAxPy_jpeg_top::maxpy_jpeg_top() {

    Instance *top, *pi;
	Net *pn;

	top = new Instance("jpeg_top");
	pi = top;

    return(top);
}
