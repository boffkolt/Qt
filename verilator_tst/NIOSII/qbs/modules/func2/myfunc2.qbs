
import qbs 1.0

Module {


    
    Group{
    name: "MYFUNC2"
    files: [
        "src/*.c",
        "inc/*.h"
    ]
}
    Depends { name: 'cpp' }
   
    
    
    cpp.includePaths: [path+"/inc"
    ]
    
    

 
    }
    
    




