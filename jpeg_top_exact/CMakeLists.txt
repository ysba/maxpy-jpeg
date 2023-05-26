cmake_minimum_required(VERSION 3.4...3.18)
project(jpeg_top)
find_package(pybind11 REQUIRED)
file(GLOB SOURCES "source/*.cpp")

pybind11_add_module(jpeg_top
    /home/ysba/verilator/include/verilated.cpp
    # /home/ysba/verilator/include/verilated_vcd_c.cpp
    ${SOURCES}
)

target_include_directories(jpeg_top PUBLIC /home/ysba/verilator/include /home/ysba/verilator/include/vltstd)
