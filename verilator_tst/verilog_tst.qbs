import qbs

Project {
    minimumQbsVersion: "1.6"
    name: "pulsedemo_top"
    qbsSearchPaths: "qbs"
    references: [
    "app/app.qbs",
    "rtl/verilator.qbs"
    ]
}

