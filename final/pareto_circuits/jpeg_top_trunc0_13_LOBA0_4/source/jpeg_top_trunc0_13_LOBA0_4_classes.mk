# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_trunc0_13_LOBA0_4.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	jpeg_top_trunc0_13_LOBA0_4 \
	sub___024root__DepSet_h087b3167__0 \
	sub___024root__DepSet_h087b3167__1 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_headc63a7__0 \
	sub_dct__DepSet_h79d3b96a__0 \
	sub_quantizer__DepSet_h063b7292__0 \
	sub_LOBA0u__DepSet_h009840c9__0 \
	sub_LOBA0u__DepSet_h009840c9__1 \
	sub_LOBA0u__DepSet_h009840c9__2 \
	sub_LOBA0u__DepSet_h009840c9__3 \
	sub_LOBA0u__DepSet_h009840c9__4 \
	sub_LOBA0u__DepSet_h009840c9__5 \
	sub_LOBA0u__DepSet_h009840c9__6 \
	sub_LOBA0u__DepSet_h009840c9__7 \
	sub_LOBA0u__DepSet_h009840c9__8 \
	sub_LOBA0u__DepSet_h009840c9__9 \
	sub_LOBA0u__DepSet_h009840c9__10 \
	sub_LOBA0u__DepSet_h009840c9__11 \
	sub_LOBA0u__DepSet_h009840c9__12 \
	sub_LOBA0u__DepSet_h009840c9__13 \
	sub_LOBA0u__DepSet_h009840c9__14 \
	sub_LOBA0u__DepSet_h009840c9__15 \
	sub_LOBA0u__DepSet_h009840c9__16 \
	sub_LOBA0u__DepSet_h009840c9__17 \
	sub_LOBA0u__DepSet_h009840c9__18 \
	sub_LOBA0u__DepSet_h009840c9__19 \
	sub_LOBA0u__DepSet_h009840c9__20 \
	sub_LOBA0u__DepSet_h009840c9__21 \
	sub_LOBA0u__DepSet_h009840c9__22 \
	sub_LOBA0u__DepSet_h009840c9__23 \
	sub_LOBA0u__DepSet_h009840c9__24 \
	sub_LOBA0u__DepSet_h009840c9__25 \
	sub_LOBA0u__DepSet_h7b51e899__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	sub___024root__Slow \
	sub___024root__DepSet_h087b3167__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_LOBA0u__Slow \
	sub_LOBA0u__DepSet_h009840c9__0__Slow \
	sub_LOBA0u__DepSet_h009840c9__1__Slow \
	sub_LOBA0u__DepSet_h009840c9__2__Slow \
	sub_LOBA0u__DepSet_h009840c9__3__Slow \
	sub_LOBA0u__DepSet_h009840c9__4__Slow \
	sub_LOBA0u__DepSet_h009840c9__5__Slow \
	sub_LOBA0u__DepSet_h009840c9__6__Slow \
	sub_LOBA0u__DepSet_h009840c9__7__Slow \
	sub_LOBA0u__DepSet_h009840c9__8__Slow \
	sub_LOBA0u__DepSet_h009840c9__9__Slow \
	sub_LOBA0u__DepSet_h009840c9__10__Slow \
	sub_LOBA0u__DepSet_h009840c9__11__Slow \
	sub_LOBA0u__DepSet_h009840c9__12__Slow \
	sub_LOBA0u__DepSet_h009840c9__13__Slow \
	sub_LOBA0u__DepSet_h009840c9__14__Slow \
	sub_LOBA0u__DepSet_h009840c9__15__Slow \
	sub_LOBA0u__DepSet_h009840c9__16__Slow \
	sub_LOBA0u__DepSet_h009840c9__17__Slow \
	sub_LOBA0u__DepSet_h009840c9__18__Slow \
	sub_LOBA0u__DepSet_h009840c9__19__Slow \
	sub_LOBA0u__DepSet_h009840c9__20__Slow \
	sub_LOBA0u__DepSet_h009840c9__21__Slow \
	sub_LOBA0u__DepSet_h009840c9__22__Slow \
	sub_LOBA0u__DepSet_h7b51e899__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_trunc0_13_LOBA0_4__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
