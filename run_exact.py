from MAxPy import maxpy
from testbench import testbench_run

circuit = maxpy.AxCircuit(top_name="jpeg_top")
circuit.set_testbench_script(testbench_run)
circuit.set_group("study_param_3")
circuit.set_synth_tool(None)
circuit.set_results_filename("results.csv")
#circuit.rtl2py(base="trunk", target="exact")
circuit.rtl2py_param_loop(base="rtl_exact")
