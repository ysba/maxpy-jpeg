from MAxPy import maxpy

circuit = maxpy.AxCircuit(top_name="jpeg_top")
circuit.set_synth_tool("yosys")
circuit.rtl2py(base="trunk", target="yosys")
