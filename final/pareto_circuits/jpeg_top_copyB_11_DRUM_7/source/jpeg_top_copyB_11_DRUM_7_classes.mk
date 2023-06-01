# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_copyB_11_DRUM_7.mk for the caller.

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
	jpeg_top_copyB_11_DRUM_7 \
	sub___024root__DepSet_h0a98a267__0 \
	sub___024root__DepSet_h0a98a267__1 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_hd45fcfb9__0 \
	sub_dct__DepSet_hd45fcfb9__1 \
	sub_dct__DepSet_hfb712a60__0 \
	sub_quantizer__DepSet_hc8be3c94__0 \
	sub_DRUMs__K7__DepSet_hd41cb99b__0 \
	sub_DRUMs__K7__DepSet_hd41cb99b__1 \
	sub_DRUMs__K7__DepSet_hd41cb99b__2 \
	sub_DRUMs__K7__DepSet_hd41cb99b__3 \
	sub_DRUMs__K7__DepSet_hd41cb99b__4 \
	sub_DRUMs__K7__DepSet_hd41cb99b__5 \
	sub_DRUMs__K7__DepSet_hd41cb99b__6 \
	sub_DRUMs__K7__DepSet_hd41cb99b__7 \
	sub_DRUMs__K7__DepSet_hd41cb99b__8 \
	sub_DRUMs__K7__DepSet_hd41cb99b__9 \
	sub_DRUMs__K7__DepSet_hd41cb99b__10 \
	sub_DRUMs__K7__DepSet_hd41cb99b__11 \
	sub_DRUMs__K7__DepSet_hd41cb99b__12 \
	sub_DRUMs__K7__DepSet_hd41cb99b__13 \
	sub_DRUMs__K7__DepSet_hd41cb99b__14 \
	sub_DRUMs__K7__DepSet_hd41cb99b__15 \
	sub_DRUMs__K7__DepSet_hd41cb99b__16 \
	sub_DRUMs__K7__DepSet_hd41cb99b__17 \
	sub_DRUMs__K7__DepSet_hd41cb99b__18 \
	sub_DRUMs__K7__DepSet_hd41cb99b__19 \
	sub_DRUMs__K7__DepSet_hd41cb99b__20 \
	sub_DRUMs__K7__DepSet_hd41cb99b__21 \
	sub_DRUMs__K7__DepSet_hd41cb99b__22 \
	sub_DRUMs__K7__DepSet_hd41cb99b__23 \
	sub_DRUMs__K7__DepSet_ha4f974c3__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	jpeg_top_copyB_11_DRUM_7__ConstPool_0 \
	sub___024root__Slow \
	sub___024root__DepSet_h0a98a267__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_DRUMs__K7__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__0__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__1__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__2__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__3__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__4__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__5__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__6__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__7__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__8__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__9__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__10__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__11__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__12__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__13__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__14__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__15__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__16__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__17__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__18__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__19__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__20__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__21__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__22__Slow \
	sub_DRUMs__K7__DepSet_hd41cb99b__23__Slow \
	sub_DRUMs__K7__DepSet_ha4f974c3__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_copyB_11_DRUM_7__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
