import qbs 1.0

Project {
    property bool smallc: true
    property bool no_cpp: false
    property bool no_exit: false
    qbsSearchPaths: "qbs"
    minimumQbsVersion: "1.6"
    name:   "NIOSII"
   
    references: [
        "app/app.qbs",
        "lib/lib.qbs",
        "lib/gen_bsp.qbs",
       // "func/myfunc.qbs"
    ]
    
    
    
    
    
}

