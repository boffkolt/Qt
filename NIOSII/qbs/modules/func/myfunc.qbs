
import qbs 1.0

Module {

    
    Group{
   name: "MYFUNC"
    files: [
        "src/*.c",
        "inc/*.h"
    ]
}
    Depends { name: 'cpp' }
    //Depends { name: "HAL_BSP" }
    
    
    cpp.includePaths: [path+"/inc"
    ]
    
    

 
    }
    
    




