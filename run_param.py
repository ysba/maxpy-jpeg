from MAxPy import maxpy
from testbench import testbench_run

circuit = maxpy.AxCircuit(top_name="jpeg_top")
circuit.set_testbench_script(testbench_run)

# parameter substituition loop
circuit.set_synth_skip(True)
circuit.set_group("study_param")
circuit.set_synth_tool(None)
circuit.set_results_filename("results.csv")
circuit.parameters = {
    "[[ADDER_TYPE]]": ["copyA","copyB","eta1","loa","trunc0","trunc1"],

    "[[ADDER_K]]": [ "0","1","2","3","4","5","6","7",
               "8","9","10","11","12","13","14","15",
               "16","17","18","19","20","21"],
}

circuit.set_source_files_to_edit([
    "rgb2ycbcr",
    ])

circuit.rtl2py_param_loop(base="rtl_param")
