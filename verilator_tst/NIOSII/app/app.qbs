
import qbs 1.0

Application {
    
    cpp.architecture : "nios"
    cpp.positionIndependentCode: false;
    cpp.visibility: "";
    cpp.warningLevel: "all";
    consoleApplication: true 
    name : "Application"
    targetName : project.name + ".elf"
    destinationDirectory: project.buildDirectory
    files : [ "main.c",
    ]

    Depends { name: "cpp" }
    Depends { name: "HAL_BSP" }
    Depends { name: "func" }
    Depends { name: "func2" }
    
    cpp.linkerFlags: ["-g","-lm","-Map="+project.buildDirectory+"/"+project.name+".map"]
    cpp.libraryPaths: [project.buildDirectory]
    
    
 
        
    
    
    cpp.driverFlags: {
            var drv = [];
            drv = drv.concat( 
        [
        "-mno-hw-div",
        "-mno-hw-mul",
        "-mno-hw-mulx",
        "-mgpopt=global",
        "-msys-crt0="+project.buildDirectory+"/crt0.S.o",
        "-msys-lib=m",
        "-msys-lib=HAL"])
      
            if (project.smallc)
            {
            
             drv = drv.concat(
                 ["-msmallc"]);
            }
    return drv}
   
    
    
    Group {
            name: "LinkerScript"
            files:[
                "../lib/hal_bsp/linker.x",
            ]
            fileTags: "linkerscript"
        }


    
}


