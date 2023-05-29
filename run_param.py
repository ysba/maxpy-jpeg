from MAxPy import maxpy
from testbench import testbench_run

circuit = maxpy.AxCircuit(top_name="jpeg_top")
circuit.set_testbench_script(testbench_run)

# parameter substituition loop
circuit.set_synth_skip(True)
circuit.set_group("study_param_3")
circuit.set_synth_tool(None)
circuit.set_results_filename("results.csv")
circuit.parameters = {
    # "[[AxA_TYPE]]": ["copyA","copyB","eta1","loa","trunc0","trunc1"],
    # "[[AxA_K]]": ["8","9","10","11","12","13","14","15"],
    # "[[AxM_TYPE]]": ["DRUM","LOBA0"],
    "[[AxA_TYPE]]": ["copyA"],
    "[[AxA_K]]": ["0"],
    "[[AxM_TYPE]]": ["LOBA3"],#,"LOBA1","LOBA2","LOBA3"],
    "[[AxM_K]]": ["4"]
}

circuit.set_source_files_to_edit([
    "rgb2ycbcr",
    "y_dct",
    "cb_dct",
    "cr_dct",
    ])

circuit.rtl2py_param_loop(base="rtl_param")
