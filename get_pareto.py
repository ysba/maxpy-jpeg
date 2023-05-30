from MAxPy import maxpy

circuit = maxpy.AxCircuit(top_name="jpeg_top")
circuit.set_group("study_param_3")
circuit.set_results_filename("results-edit.csv")
circuit.get_pareto_front("area", "ssim")
