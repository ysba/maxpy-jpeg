# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_eta1_9_LOBA2_4.mk for the caller.

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
	jpeg_top_eta1_9_LOBA2_4 \
	sub___024root__DepSet_hc5baf145__0 \
	sub___024root__DepSet_hc5baf145__1 \
	sub___024root__DepSet_hc5baf145__2 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_hca09aafd__0 \
	sub_dct__DepSet_h2a038938__0 \
	sub_dct__DepSet_hc40de0fc__0 \
	sub_quantizer__DepSet_hee6ebbe8__0 \
	sub_LOBA2u__DepSet_hd495a301__0 \
	sub_LOBA2u__DepSet_hd495a301__1 \
	sub_LOBA2u__DepSet_hd495a301__2 \
	sub_LOBA2u__DepSet_hd495a301__3 \
	sub_LOBA2u__DepSet_hd495a301__4 \
	sub_LOBA2u__DepSet_hd495a301__5 \
	sub_LOBA2u__DepSet_hd495a301__6 \
	sub_LOBA2u__DepSet_hd495a301__7 \
	sub_LOBA2u__DepSet_hd495a301__8 \
	sub_LOBA2u__DepSet_hd495a301__9 \
	sub_LOBA2u__DepSet_hd495a301__10 \
	sub_LOBA2u__DepSet_hd495a301__11 \
	sub_LOBA2u__DepSet_hd495a301__12 \
	sub_LOBA2u__DepSet_hd495a301__13 \
	sub_LOBA2u__DepSet_hd495a301__14 \
	sub_LOBA2u__DepSet_hd495a301__15 \
	sub_LOBA2u__DepSet_hd495a301__16 \
	sub_LOBA2u__DepSet_hd495a301__17 \
	sub_LOBA2u__DepSet_hd495a301__18 \
	sub_LOBA2u__DepSet_hd495a301__19 \
	sub_LOBA2u__DepSet_hd495a301__20 \
	sub_LOBA2u__DepSet_hd495a301__21 \
	sub_LOBA2u__DepSet_hd495a301__22 \
	sub_LOBA2u__DepSet_hd495a301__23 \
	sub_LOBA2u__DepSet_hd495a301__24 \
	sub_LOBA2u__DepSet_hd495a301__25 \
	sub_LOBA2u__DepSet_hd495a301__26 \
	sub_LOBA2u__DepSet_hd495a301__27 \
	sub_LOBA2u__DepSet_hd495a301__28 \
	sub_LOBA2u__DepSet_hd495a301__29 \
	sub_LOBA2u__DepSet_hd495a301__30 \
	sub_LOBA2u__DepSet_hd495a301__31 \
	sub_LOBA2u__DepSet_hd495a301__32 \
	sub_LOBA2u__DepSet_hd495a301__33 \
	sub_LOBA2u__DepSet_hd495a301__34 \
	sub_LOBA2u__DepSet_hd495a301__35 \
	sub_LOBA2u__DepSet_hd495a301__36 \
	sub_LOBA2u__DepSet_hd495a301__37 \
	sub_LOBA2u__DepSet_hd495a301__38 \
	sub_LOBA2u__DepSet_hd495a301__39 \
	sub_LOBA2u__DepSet_hd495a301__40 \
	sub_LOBA2u__DepSet_hd495a301__41 \
	sub_LOBA2u__DepSet_hd495a301__42 \
	sub_LOBA2u__DepSet_hd495a301__43 \
	sub_LOBA2u__DepSet_hd495a301__44 \
	sub_LOBA2u__DepSet_hd495a301__45 \
	sub_LOBA2u__DepSet_hd495a301__46 \
	sub_LOBA2u__DepSet_hd495a301__47 \
	sub_LOBA2u__DepSet_hd495a301__48 \
	sub_LOBA2u__DepSet_hd495a301__49 \
	sub_LOBA2u__DepSet_hd495a301__50 \
	sub_LOBA2u__DepSet_hd495a301__51 \
	sub_LOBA2u__DepSet_hd495a301__52 \
	sub_LOBA2u__DepSet_hd495a301__53 \
	sub_LOBA2u__DepSet_hd495a301__54 \
	sub_LOBA2u__DepSet_hd495a301__55 \
	sub_LOBA2u__DepSet_hd495a301__56 \
	sub_LOBA2u__DepSet_hd495a301__57 \
	sub_LOBA2u__DepSet_hd495a301__58 \
	sub_LOBA2u__DepSet_hd495a301__59 \
	sub_LOBA2u__DepSet_hd495a301__60 \
	sub_LOBA2u__DepSet_hd495a301__61 \
	sub_LOBA2u__DepSet_h81a00ac3__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	sub___024root__Slow \
	sub___024root__DepSet_hc5baf145__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_LOBA2u__Slow \
	sub_LOBA2u__DepSet_hd495a301__0__Slow \
	sub_LOBA2u__DepSet_hd495a301__1__Slow \
	sub_LOBA2u__DepSet_hd495a301__2__Slow \
	sub_LOBA2u__DepSet_hd495a301__3__Slow \
	sub_LOBA2u__DepSet_hd495a301__4__Slow \
	sub_LOBA2u__DepSet_hd495a301__5__Slow \
	sub_LOBA2u__DepSet_hd495a301__6__Slow \
	sub_LOBA2u__DepSet_hd495a301__7__Slow \
	sub_LOBA2u__DepSet_hd495a301__8__Slow \
	sub_LOBA2u__DepSet_hd495a301__9__Slow \
	sub_LOBA2u__DepSet_hd495a301__10__Slow \
	sub_LOBA2u__DepSet_hd495a301__11__Slow \
	sub_LOBA2u__DepSet_hd495a301__12__Slow \
	sub_LOBA2u__DepSet_hd495a301__13__Slow \
	sub_LOBA2u__DepSet_hd495a301__14__Slow \
	sub_LOBA2u__DepSet_hd495a301__15__Slow \
	sub_LOBA2u__DepSet_hd495a301__16__Slow \
	sub_LOBA2u__DepSet_hd495a301__17__Slow \
	sub_LOBA2u__DepSet_hd495a301__18__Slow \
	sub_LOBA2u__DepSet_hd495a301__19__Slow \
	sub_LOBA2u__DepSet_hd495a301__20__Slow \
	sub_LOBA2u__DepSet_hd495a301__21__Slow \
	sub_LOBA2u__DepSet_hd495a301__22__Slow \
	sub_LOBA2u__DepSet_hd495a301__23__Slow \
	sub_LOBA2u__DepSet_hd495a301__24__Slow \
	sub_LOBA2u__DepSet_hd495a301__25__Slow \
	sub_LOBA2u__DepSet_hd495a301__26__Slow \
	sub_LOBA2u__DepSet_hd495a301__27__Slow \
	sub_LOBA2u__DepSet_hd495a301__28__Slow \
	sub_LOBA2u__DepSet_hd495a301__29__Slow \
	sub_LOBA2u__DepSet_hd495a301__30__Slow \
	sub_LOBA2u__DepSet_hd495a301__31__Slow \
	sub_LOBA2u__DepSet_hd495a301__32__Slow \
	sub_LOBA2u__DepSet_hd495a301__33__Slow \
	sub_LOBA2u__DepSet_hd495a301__34__Slow \
	sub_LOBA2u__DepSet_hd495a301__35__Slow \
	sub_LOBA2u__DepSet_hd495a301__36__Slow \
	sub_LOBA2u__DepSet_hd495a301__37__Slow \
	sub_LOBA2u__DepSet_hd495a301__38__Slow \
	sub_LOBA2u__DepSet_hd495a301__39__Slow \
	sub_LOBA2u__DepSet_hd495a301__40__Slow \
	sub_LOBA2u__DepSet_hd495a301__41__Slow \
	sub_LOBA2u__DepSet_hd495a301__42__Slow \
	sub_LOBA2u__DepSet_hd495a301__43__Slow \
	sub_LOBA2u__DepSet_hd495a301__44__Slow \
	sub_LOBA2u__DepSet_hd495a301__45__Slow \
	sub_LOBA2u__DepSet_hd495a301__46__Slow \
	sub_LOBA2u__DepSet_hd495a301__47__Slow \
	sub_LOBA2u__DepSet_hd495a301__48__Slow \
	sub_LOBA2u__DepSet_hd495a301__49__Slow \
	sub_LOBA2u__DepSet_hd495a301__50__Slow \
	sub_LOBA2u__DepSet_hd495a301__51__Slow \
	sub_LOBA2u__DepSet_hd495a301__52__Slow \
	sub_LOBA2u__DepSet_hd495a301__53__Slow \
	sub_LOBA2u__DepSet_h81a00ac3__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_eta1_9_LOBA2_4__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
