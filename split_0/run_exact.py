from MAxPy import maxpy
from testbench import testbench_run

circuit = maxpy.AxCircuit(top_name="jpeg_top")
circuit.set_testbench_script(testbench_run)

# parameter substituition loop
circuit.set_group("results_0")
circuit.set_synth_tool(None)
circuit.set_results_filename("results.csv")
circuit.set_do_not_overwrite(True)
circuit.set_synth_skip(True)
circuit.rtl2py(base="rtl_exact")
