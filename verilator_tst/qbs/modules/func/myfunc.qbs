
import qbs 1.0

Module {

    
    Group{
   name: "MYFUNC"
    files: [
        "src/*.cpp",
        "src/*.c",
        "inc/*.h"
    ]
}
    Depends { name: 'cpp' }
    //Depends { name: "HAL_BSP" }
    
    
    cpp.includePaths: [path+"/inc",
        "/usr/local/share/verilator/include",
             project.path+"/gen_files/"
    ]
    
    

 
    }
    
    




