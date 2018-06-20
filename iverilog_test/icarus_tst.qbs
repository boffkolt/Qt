
import qbs
Project {
    name: "verilog_tst"
    Product {
        name: "verilog"
        type: "dump"
        Group {
            name: "sources"
            files: ["*.v"]
            fileTags: ['v']
        }
        Group {
            name: "headers"
            files: ["*.h"]
            fileTags: ['h']
        }
        Rule {
                                   multiplex: true
                                   inputs: ['v']
                                   Artifact{
                                       fileTags:['obj']
                                       filePath: project.name + '.dmp'
                                   }
                                   prepare:{
                                       var args = []

                                       for(i in inputs['v'])
                                           args.push(inputs['v'][i].filePath);
                                       args.push('-o');
                                       args.push(output.filePath);
                                       var compilerPath = "/home/engineer/programs/iverilog/bin/iverilog"
                                       var cmd = new Command(compilerPath,args);
                                       cmd.description = "compile "+project.name
                                       return cmd;
                                   }

                       }

        Rule {
                   inputs: ['obj']
                   Artifact {
                       fileTags: ['dump']

                   }
                   prepare: {



                       var args = [];
                       args.push(input.filePath);
                       var asPath = "/home/engineer/programs/iverilog/bin/vvp"
                       var cmd = new Command(asPath, args);
                       cmd.description = 'dumping ' + input.fileName;
                       cmd.highlight = 'dumping';
                       cmd.silent = false;
                       return cmd;
                   }
               }

        }

        }

