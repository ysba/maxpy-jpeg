# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_copyB_13_LOBA0_4.mk for the caller.

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
	jpeg_top_copyB_13_LOBA0_4 \
	sub___024root__DepSet_h54756c73__0 \
	sub___024root__DepSet_h54756c73__1 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_h6d5b5e9f__0 \
	sub_dct__DepSet_h059ee476__0 \
	sub_quantizer__DepSet_h113a4d8a__0 \
	sub_LOBA0u__DepSet_h5d529ce9__0 \
	sub_LOBA0u__DepSet_h5d529ce9__1 \
	sub_LOBA0u__DepSet_h5d529ce9__2 \
	sub_LOBA0u__DepSet_h5d529ce9__3 \
	sub_LOBA0u__DepSet_h5d529ce9__4 \
	sub_LOBA0u__DepSet_h5d529ce9__5 \
	sub_LOBA0u__DepSet_h5d529ce9__6 \
	sub_LOBA0u__DepSet_h5d529ce9__7 \
	sub_LOBA0u__DepSet_h5d529ce9__8 \
	sub_LOBA0u__DepSet_h5d529ce9__9 \
	sub_LOBA0u__DepSet_h5d529ce9__10 \
	sub_LOBA0u__DepSet_h5d529ce9__11 \
	sub_LOBA0u__DepSet_h5d529ce9__12 \
	sub_LOBA0u__DepSet_h5d529ce9__13 \
	sub_LOBA0u__DepSet_h5d529ce9__14 \
	sub_LOBA0u__DepSet_h5d529ce9__15 \
	sub_LOBA0u__DepSet_h5d529ce9__16 \
	sub_LOBA0u__DepSet_h5d529ce9__17 \
	sub_LOBA0u__DepSet_h5d529ce9__18 \
	sub_LOBA0u__DepSet_h5d529ce9__19 \
	sub_LOBA0u__DepSet_h5d529ce9__20 \
	sub_LOBA0u__DepSet_h5d529ce9__21 \
	sub_LOBA0u__DepSet_h5d529ce9__22 \
	sub_LOBA0u__DepSet_h5d529ce9__23 \
	sub_LOBA0u__DepSet_h5d529ce9__24 \
	sub_LOBA0u__DepSet_h5d529ce9__25 \
	sub_LOBA0u__DepSet_h7b51e899__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	sub___024root__Slow \
	sub___024root__DepSet_h54756c73__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_LOBA0u__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__0__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__1__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__2__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__3__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__4__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__5__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__6__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__7__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__8__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__9__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__10__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__11__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__12__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__13__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__14__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__15__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__16__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__17__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__18__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__19__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__20__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__21__Slow \
	sub_LOBA0u__DepSet_h5d529ce9__22__Slow \
	sub_LOBA0u__DepSet_h7b51e899__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_copyB_13_LOBA0_4__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
