# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_trunc0_12_DRUM_6.mk for the caller.

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
	jpeg_top_trunc0_12_DRUM_6 \
	sub___024root__DepSet_h73f5c4e3__0 \
	sub___024root__DepSet_h73f5c4e3__1 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_h95ca8f26__0 \
	sub_dct__DepSet_h95ca8f26__1 \
	sub_dct__DepSet_h224d4ce6__0 \
	sub_quantizer__DepSet_h726dbe09__0 \
	sub_DRUMs__K6__DepSet_h606614d7__0 \
	sub_DRUMs__K6__DepSet_h606614d7__1 \
	sub_DRUMs__K6__DepSet_h606614d7__2 \
	sub_DRUMs__K6__DepSet_h606614d7__3 \
	sub_DRUMs__K6__DepSet_h606614d7__4 \
	sub_DRUMs__K6__DepSet_h606614d7__5 \
	sub_DRUMs__K6__DepSet_h606614d7__6 \
	sub_DRUMs__K6__DepSet_h606614d7__7 \
	sub_DRUMs__K6__DepSet_h606614d7__8 \
	sub_DRUMs__K6__DepSet_h606614d7__9 \
	sub_DRUMs__K6__DepSet_h606614d7__10 \
	sub_DRUMs__K6__DepSet_h606614d7__11 \
	sub_DRUMs__K6__DepSet_h606614d7__12 \
	sub_DRUMs__K6__DepSet_h606614d7__13 \
	sub_DRUMs__K6__DepSet_h606614d7__14 \
	sub_DRUMs__K6__DepSet_h606614d7__15 \
	sub_DRUMs__K6__DepSet_h606614d7__16 \
	sub_DRUMs__K6__DepSet_h606614d7__17 \
	sub_DRUMs__K6__DepSet_h606614d7__18 \
	sub_DRUMs__K6__DepSet_h606614d7__19 \
	sub_DRUMs__K6__DepSet_h606614d7__20 \
	sub_DRUMs__K6__DepSet_h606614d7__21 \
	sub_DRUMs__K6__DepSet_h606614d7__22 \
	sub_DRUMs__K6__DepSet_h606614d7__23 \
	sub_DRUMs__K6__DepSet_h85e2a90b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	jpeg_top_trunc0_12_DRUM_6__ConstPool_0 \
	sub___024root__Slow \
	sub___024root__DepSet_h73f5c4e3__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_DRUMs__K6__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__0__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__1__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__2__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__3__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__4__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__5__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__6__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__7__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__8__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__9__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__10__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__11__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__12__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__13__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__14__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__15__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__16__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__17__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__18__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__19__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__20__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__21__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__22__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__23__Slow \
	sub_DRUMs__K6__DepSet_h606614d7__24__Slow \
	sub_DRUMs__K6__DepSet_h85e2a90b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_trunc0_12_DRUM_6__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
