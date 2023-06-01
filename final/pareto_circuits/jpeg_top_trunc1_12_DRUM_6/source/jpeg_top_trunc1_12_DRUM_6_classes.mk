# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_trunc1_12_DRUM_6.mk for the caller.

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
	jpeg_top_trunc1_12_DRUM_6 \
	sub___024root__DepSet_h88e5514a__0 \
	sub___024root__DepSet_h88e5514a__1 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_h616831f5__0 \
	sub_dct__DepSet_h616831f5__1 \
	sub_dct__DepSet_hde9cc94f__0 \
	sub_quantizer__DepSet_h85373e86__0 \
	sub_DRUMs__K6__DepSet_h9c48013e__0 \
	sub_DRUMs__K6__DepSet_h9c48013e__1 \
	sub_DRUMs__K6__DepSet_h9c48013e__2 \
	sub_DRUMs__K6__DepSet_h9c48013e__3 \
	sub_DRUMs__K6__DepSet_h9c48013e__4 \
	sub_DRUMs__K6__DepSet_h9c48013e__5 \
	sub_DRUMs__K6__DepSet_h9c48013e__6 \
	sub_DRUMs__K6__DepSet_h9c48013e__7 \
	sub_DRUMs__K6__DepSet_h9c48013e__8 \
	sub_DRUMs__K6__DepSet_h9c48013e__9 \
	sub_DRUMs__K6__DepSet_h9c48013e__10 \
	sub_DRUMs__K6__DepSet_h9c48013e__11 \
	sub_DRUMs__K6__DepSet_h9c48013e__12 \
	sub_DRUMs__K6__DepSet_h9c48013e__13 \
	sub_DRUMs__K6__DepSet_h9c48013e__14 \
	sub_DRUMs__K6__DepSet_h9c48013e__15 \
	sub_DRUMs__K6__DepSet_h9c48013e__16 \
	sub_DRUMs__K6__DepSet_h9c48013e__17 \
	sub_DRUMs__K6__DepSet_h9c48013e__18 \
	sub_DRUMs__K6__DepSet_h9c48013e__19 \
	sub_DRUMs__K6__DepSet_h9c48013e__20 \
	sub_DRUMs__K6__DepSet_h9c48013e__21 \
	sub_DRUMs__K6__DepSet_h9c48013e__22 \
	sub_DRUMs__K6__DepSet_h9c48013e__23 \
	sub_DRUMs__K6__DepSet_h85e2a90b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	jpeg_top_trunc1_12_DRUM_6__ConstPool_0 \
	sub___024root__Slow \
	sub___024root__DepSet_h88e5514a__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_DRUMs__K6__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__0__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__1__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__2__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__3__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__4__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__5__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__6__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__7__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__8__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__9__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__10__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__11__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__12__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__13__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__14__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__15__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__16__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__17__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__18__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__19__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__20__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__21__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__22__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__23__Slow \
	sub_DRUMs__K6__DepSet_h9c48013e__24__Slow \
	sub_DRUMs__K6__DepSet_h85e2a90b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_trunc1_12_DRUM_6__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
