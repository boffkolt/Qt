import qbs 1.0
import qbs.Environment
Project {
    property bool smallc: true
    property bool no_cpp: true
    property bool no_exit: false
    property string NIOS2_PATH: Environment.getEnv("SOPC_KIT_NIOS2");
    property string FPGA_PROJECT_ROOT: "/home/engineer";
  //property string FPGA_PROJECT_ROOT: "C:/work/fpga";
 //   property string NIOS2_PATH: Environment.getEnv("SOPC_KIT_NIOS2");
    qbsSearchPaths: "qbs"
    minimumQbsVersion: "1.6"
    name:   "nios_fast+led+cancycloneiv"
   
    references: [
        "app/app.qbs",
        "lib/lib.qbs",
       // "lib/gen_bsp.qbs",
        "lib/crt_bsp.qbs"
       // "func/myfunc.qbs"
    ]
    
    
    
    
    
}

