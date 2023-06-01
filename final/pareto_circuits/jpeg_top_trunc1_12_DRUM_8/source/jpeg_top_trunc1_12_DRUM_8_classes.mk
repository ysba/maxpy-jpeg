# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_trunc1_12_DRUM_8.mk for the caller.

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
	jpeg_top_trunc1_12_DRUM_8 \
	sub___024root__DepSet_h031e694e__0 \
	sub___024root__DepSet_h031e694e__1 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_h68627a6a__0 \
	sub_dct__DepSet_h68627a6a__1 \
	sub_dct__DepSet_h7176f149__0 \
	sub_quantizer__DepSet_h4c9d6919__0 \
	sub_DRUMs__K8__DepSet_h3632d82d__0 \
	sub_DRUMs__K8__DepSet_h3632d82d__1 \
	sub_DRUMs__K8__DepSet_h3632d82d__2 \
	sub_DRUMs__K8__DepSet_h3632d82d__3 \
	sub_DRUMs__K8__DepSet_h3632d82d__4 \
	sub_DRUMs__K8__DepSet_h3632d82d__5 \
	sub_DRUMs__K8__DepSet_h3632d82d__6 \
	sub_DRUMs__K8__DepSet_h3632d82d__7 \
	sub_DRUMs__K8__DepSet_h3632d82d__8 \
	sub_DRUMs__K8__DepSet_h3632d82d__9 \
	sub_DRUMs__K8__DepSet_h3632d82d__10 \
	sub_DRUMs__K8__DepSet_h3632d82d__11 \
	sub_DRUMs__K8__DepSet_h3632d82d__12 \
	sub_DRUMs__K8__DepSet_h3632d82d__13 \
	sub_DRUMs__K8__DepSet_h3632d82d__14 \
	sub_DRUMs__K8__DepSet_h3632d82d__15 \
	sub_DRUMs__K8__DepSet_h3632d82d__16 \
	sub_DRUMs__K8__DepSet_h3632d82d__17 \
	sub_DRUMs__K8__DepSet_h3632d82d__18 \
	sub_DRUMs__K8__DepSet_h3632d82d__19 \
	sub_DRUMs__K8__DepSet_h3632d82d__20 \
	sub_DRUMs__K8__DepSet_h3632d82d__21 \
	sub_DRUMs__K8__DepSet_h3632d82d__22 \
	sub_DRUMs__K8__DepSet_h7d520a60__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	jpeg_top_trunc1_12_DRUM_8__ConstPool_0 \
	sub___024root__Slow \
	sub___024root__DepSet_h031e694e__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_DRUMs__K8__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__0__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__1__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__2__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__3__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__4__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__5__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__6__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__7__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__8__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__9__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__10__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__11__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__12__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__13__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__14__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__15__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__16__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__17__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__18__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__19__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__20__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__21__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__22__Slow \
	sub_DRUMs__K8__DepSet_h3632d82d__23__Slow \
	sub_DRUMs__K8__DepSet_h7d520a60__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_trunc1_12_DRUM_8__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
