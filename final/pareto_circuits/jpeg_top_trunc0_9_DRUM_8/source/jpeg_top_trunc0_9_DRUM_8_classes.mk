# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_trunc0_9_DRUM_8.mk for the caller.

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
	jpeg_top_trunc0_9_DRUM_8 \
	sub___024root__DepSet_h74d39435__0 \
	sub___024root__DepSet_h74d39435__1 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_hac0c8287__0 \
	sub_dct__DepSet_hac0c8287__1 \
	sub_dct__DepSet_h264a1c32__0 \
	sub_quantizer__DepSet_hb06f93e8__0 \
	sub_DRUMs__K8__DepSet_h6f8e4556__0 \
	sub_DRUMs__K8__DepSet_h6f8e4556__1 \
	sub_DRUMs__K8__DepSet_h6f8e4556__2 \
	sub_DRUMs__K8__DepSet_h6f8e4556__3 \
	sub_DRUMs__K8__DepSet_h6f8e4556__4 \
	sub_DRUMs__K8__DepSet_h6f8e4556__5 \
	sub_DRUMs__K8__DepSet_h6f8e4556__6 \
	sub_DRUMs__K8__DepSet_h6f8e4556__7 \
	sub_DRUMs__K8__DepSet_h6f8e4556__8 \
	sub_DRUMs__K8__DepSet_h6f8e4556__9 \
	sub_DRUMs__K8__DepSet_h6f8e4556__10 \
	sub_DRUMs__K8__DepSet_h6f8e4556__11 \
	sub_DRUMs__K8__DepSet_h6f8e4556__12 \
	sub_DRUMs__K8__DepSet_h6f8e4556__13 \
	sub_DRUMs__K8__DepSet_h6f8e4556__14 \
	sub_DRUMs__K8__DepSet_h6f8e4556__15 \
	sub_DRUMs__K8__DepSet_h6f8e4556__16 \
	sub_DRUMs__K8__DepSet_h6f8e4556__17 \
	sub_DRUMs__K8__DepSet_h6f8e4556__18 \
	sub_DRUMs__K8__DepSet_h6f8e4556__19 \
	sub_DRUMs__K8__DepSet_h6f8e4556__20 \
	sub_DRUMs__K8__DepSet_h6f8e4556__21 \
	sub_DRUMs__K8__DepSet_h6f8e4556__22 \
	sub_DRUMs__K8__DepSet_h7d520a60__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	jpeg_top_trunc0_9_DRUM_8__ConstPool_0 \
	sub___024root__Slow \
	sub___024root__DepSet_h74d39435__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_DRUMs__K8__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__0__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__1__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__2__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__3__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__4__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__5__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__6__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__7__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__8__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__9__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__10__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__11__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__12__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__13__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__14__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__15__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__16__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__17__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__18__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__19__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__20__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__21__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__22__Slow \
	sub_DRUMs__K8__DepSet_h6f8e4556__23__Slow \
	sub_DRUMs__K8__DepSet_h7d520a60__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_trunc0_9_DRUM_8__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
