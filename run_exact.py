from MAxPy import maxpy

circuit = maxpy.AxCircuit(top_name="jpeg_top")
circuit.rtl2py(base="trunk", target="exact")
