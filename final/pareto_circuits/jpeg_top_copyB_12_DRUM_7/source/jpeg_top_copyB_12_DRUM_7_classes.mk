# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_copyB_12_DRUM_7.mk for the caller.

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
	jpeg_top_copyB_12_DRUM_7 \
	sub___024root__DepSet_h2f771eb0__0 \
	sub___024root__DepSet_h2f771eb0__1 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_he57bc0fb__0 \
	sub_dct__DepSet_he57bc0fb__1 \
	sub_dct__DepSet_h9d9e96b5__0 \
	sub_quantizer__DepSet_hc11ab3e8__0 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__0 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__1 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__2 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__3 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__4 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__5 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__6 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__7 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__8 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__9 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__10 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__11 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__12 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__13 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__14 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__15 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__16 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__17 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__18 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__19 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__20 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__21 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__22 \
	sub_DRUMs__K7__DepSet_h7af2fa6c__23 \
	sub_DRUMs__K7__DepSet_ha4f974c3__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	jpeg_top_copyB_12_DRUM_7__ConstPool_0 \
	sub___024root__Slow \
	sub___024root__DepSet_h2f771eb0__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_DRUMs__K7__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__0__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__1__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__2__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__3__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__4__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__5__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__6__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__7__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__8__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__9__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__10__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__11__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__12__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__13__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__14__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__15__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__16__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__17__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__18__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__19__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__20__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__21__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__22__Slow \
	sub_DRUMs__K7__DepSet_h7af2fa6c__23__Slow \
	sub_DRUMs__K7__DepSet_ha4f974c3__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_copyB_12_DRUM_7__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
