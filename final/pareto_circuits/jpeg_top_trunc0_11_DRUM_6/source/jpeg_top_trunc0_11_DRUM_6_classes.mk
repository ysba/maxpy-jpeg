# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_trunc0_11_DRUM_6.mk for the caller.

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
	jpeg_top_trunc0_11_DRUM_6 \
	sub___024root__DepSet_hbf51aefc__0 \
	sub___024root__DepSet_hbf51aefc__1 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_hf810e636__0 \
	sub_dct__DepSet_hf810e636__1 \
	sub_dct__DepSet_h113926ff__0 \
	sub_quantizer__DepSet_h95f39723__0 \
	sub_DRUMs__K6__DepSet_hd0c25108__0 \
	sub_DRUMs__K6__DepSet_hd0c25108__1 \
	sub_DRUMs__K6__DepSet_hd0c25108__2 \
	sub_DRUMs__K6__DepSet_hd0c25108__3 \
	sub_DRUMs__K6__DepSet_hd0c25108__4 \
	sub_DRUMs__K6__DepSet_hd0c25108__5 \
	sub_DRUMs__K6__DepSet_hd0c25108__6 \
	sub_DRUMs__K6__DepSet_hd0c25108__7 \
	sub_DRUMs__K6__DepSet_hd0c25108__8 \
	sub_DRUMs__K6__DepSet_hd0c25108__9 \
	sub_DRUMs__K6__DepSet_hd0c25108__10 \
	sub_DRUMs__K6__DepSet_hd0c25108__11 \
	sub_DRUMs__K6__DepSet_hd0c25108__12 \
	sub_DRUMs__K6__DepSet_hd0c25108__13 \
	sub_DRUMs__K6__DepSet_hd0c25108__14 \
	sub_DRUMs__K6__DepSet_hd0c25108__15 \
	sub_DRUMs__K6__DepSet_hd0c25108__16 \
	sub_DRUMs__K6__DepSet_hd0c25108__17 \
	sub_DRUMs__K6__DepSet_hd0c25108__18 \
	sub_DRUMs__K6__DepSet_hd0c25108__19 \
	sub_DRUMs__K6__DepSet_hd0c25108__20 \
	sub_DRUMs__K6__DepSet_hd0c25108__21 \
	sub_DRUMs__K6__DepSet_hd0c25108__22 \
	sub_DRUMs__K6__DepSet_hd0c25108__23 \
	sub_DRUMs__K6__DepSet_h85e2a90b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	jpeg_top_trunc0_11_DRUM_6__ConstPool_0 \
	sub___024root__Slow \
	sub___024root__DepSet_hbf51aefc__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_DRUMs__K6__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__0__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__1__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__2__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__3__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__4__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__5__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__6__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__7__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__8__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__9__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__10__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__11__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__12__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__13__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__14__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__15__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__16__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__17__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__18__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__19__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__20__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__21__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__22__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__23__Slow \
	sub_DRUMs__K6__DepSet_hd0c25108__24__Slow \
	sub_DRUMs__K6__DepSet_h85e2a90b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_trunc0_11_DRUM_6__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
