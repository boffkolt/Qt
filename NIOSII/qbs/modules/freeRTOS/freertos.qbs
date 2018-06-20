
import qbs 1.0

Module {


    
    Group{
    name: "freertos"
    files: [

        "*.c",
        "*.h",
        "*/*.c",
        "*/*/*/*.c",
        "*/*/*/*.h",
        "*/*/*/*/*.c",
        "*/*/*/*/*.h",
        "*/*.h",
        "*/*/*.h",
        "*/*/*.h",
        "*/*/*/*/*.S",
        "*/*/*/*.S"
    ]
}
    Depends { name: 'cpp' }
   
    
    
    cpp.includePaths: [path+"/Common_Demo_Tasks/include",path+"/Source/include" ,path+"/Source/portable/GCC/NiosII",path+"/"]
    
    

 
    }
    
    




