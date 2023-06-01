# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See jpeg_top_copyB_12_DRUM_8.mk for the caller.

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
	jpeg_top_copyB_12_DRUM_8 \
	sub___024root__DepSet_ha8e3bb66__0 \
	sub___024root__DepSet_ha8e3bb66__1 \
	sub___024root__DepSet_h727558ff__0 \
	sub_dct__DepSet_h7ec08fda__0 \
	sub_dct__DepSet_h7ec08fda__1 \
	sub_dct__DepSet_hda7c336b__0 \
	sub_quantizer__DepSet_h5a9f9ecd__0 \
	sub_DRUMs__K8__DepSet_ha3c00a87__0 \
	sub_DRUMs__K8__DepSet_ha3c00a87__1 \
	sub_DRUMs__K8__DepSet_ha3c00a87__2 \
	sub_DRUMs__K8__DepSet_ha3c00a87__3 \
	sub_DRUMs__K8__DepSet_ha3c00a87__4 \
	sub_DRUMs__K8__DepSet_ha3c00a87__5 \
	sub_DRUMs__K8__DepSet_ha3c00a87__6 \
	sub_DRUMs__K8__DepSet_ha3c00a87__7 \
	sub_DRUMs__K8__DepSet_ha3c00a87__8 \
	sub_DRUMs__K8__DepSet_ha3c00a87__9 \
	sub_DRUMs__K8__DepSet_ha3c00a87__10 \
	sub_DRUMs__K8__DepSet_ha3c00a87__11 \
	sub_DRUMs__K8__DepSet_ha3c00a87__12 \
	sub_DRUMs__K8__DepSet_ha3c00a87__13 \
	sub_DRUMs__K8__DepSet_ha3c00a87__14 \
	sub_DRUMs__K8__DepSet_ha3c00a87__15 \
	sub_DRUMs__K8__DepSet_ha3c00a87__16 \
	sub_DRUMs__K8__DepSet_ha3c00a87__17 \
	sub_DRUMs__K8__DepSet_ha3c00a87__18 \
	sub_DRUMs__K8__DepSet_ha3c00a87__19 \
	sub_DRUMs__K8__DepSet_ha3c00a87__20 \
	sub_DRUMs__K8__DepSet_ha3c00a87__21 \
	sub_DRUMs__K8__DepSet_ha3c00a87__22 \
	sub_DRUMs__K8__DepSet_h7d520a60__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	jpeg_top_copyB_12_DRUM_8__ConstPool_0 \
	sub___024root__Slow \
	sub___024root__DepSet_ha8e3bb66__0__Slow \
	sub___024root__DepSet_h727558ff__0__Slow \
	sub_dct__Slow \
	sub_dct__DepSet_hc40de0fc__0__Slow \
	sub_quantizer__Slow \
	sub_quantizer__DepSet_he06cefe9__0__Slow \
	sub_DRUMs__K8__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__0__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__1__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__2__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__3__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__4__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__5__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__6__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__7__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__8__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__9__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__10__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__11__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__12__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__13__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__14__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__15__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__16__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__17__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__18__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__19__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__20__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__21__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__22__Slow \
	sub_DRUMs__K8__DepSet_ha3c00a87__23__Slow \
	sub_DRUMs__K8__DepSet_h7d520a60__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	jpeg_top_copyB_12_DRUM_8__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
