from MAxPy import maxpy

circuit = maxpy.AxCircuit(top_name="jpeg_top")
circuit.set_results_filename("results_savings.csv")
circuit.get_pareto_front("area", "ssim")
