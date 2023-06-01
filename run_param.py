from MAxPy import maxpy
from testbench import testbench_run

circuit = maxpy.AxCircuit(top_name="jpeg_top")
circuit.set_testbench_script(testbench_run)

# parameter substituition loop
circuit.set_group("study_param_4")
circuit.set_synth_tool(None)
circuit.set_results_filename("results.csv")
circuit.set_do_not_overwrite(True)

circuit.set_source_files_to_edit([
    "rgb2ycbcr",
    "dct",
    "quantizer",
    ])

# first round: DRUM multiplier
circuit.parameters = {
    "[[AxA_TYPE]]": ["copyA","copyB","eta1","loa","trunc0","trunc1"],
    "[[AxA_K]]": ["6","7","8","9","10","11","12","13","14","15"],
    "[[AxM_TYPE]]": ["DRUM"],
    "[[AxM_K]]": ["8","7","6","5","4"],
}
circuit.rtl2py_param_loop(base="rtl_param")

# second round: LOBA multiplier
circuit.parameters = {
    "[[AxA_TYPE]]": ["copyA","copyB","eta1","loa","trunc0","trunc1"],
    "[[AxA_K]]": ["6","7","8","9","10","11","12","13","14","15"],
    "[[AxM_TYPE]]": ["LOBA0","LOBA1","LOBA2","LOBA3"],
    "[[AxM_K]]": ["4"],
}
circuit.rtl2py_param_loop(base="rtl_param")
