
import qbs 1.0



Product {
    type: ["application"]
    name: "simulate_top"
    files: ["main.cpp",
        "../gen_files/*.cpp",
        "../gen_files/*.h",
        "../gen_files/*.hpp",
        "/home/engineer/programs/verilator/share/verilator/include/verilated.cpp",
        "/home/engineer/programs/verilator/share/verilator/include/verilated_vcd_c.cpp",]
    Depends { name: "Verilator" }
    Depends { name: "cpp" }
    Depends { name: "func" }



    cpp.includePaths: ["/home/engineer/programs/verilator/share/verilator/include",
     "../gen_files/"]


}


