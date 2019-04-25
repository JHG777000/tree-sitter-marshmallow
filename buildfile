project := "tree-sitter-marshmallow-parser-project".

project_version := "0.0.9".

buildfile_version := "1.0".

url_to_src := "https://github.com/JHG777000/tree-sitter-marshmallow/archive/master.zip".

build tree_sitter_marshmallow_parser.

 options.

  on toolchain_select("-s", "--select_toolchain=tool", "Select toolchain.").

 end options.

 get toolchain_select.

 if ( toolchain_select == nil ).

  var toolchain_select := "clang".

 end if.

 make filepath tree_sitter_dep_utf8proc_buildfile_path from "resources" to "dep_buildfiles/tree-sitter-dep-utf8proc-buildfile".

 files tree_sitter_dep_utf8proc_buildfile(tree_sitter_dep_utf8proc_buildfile_path).

 subproject tree_sitter_dep_utf8proc_project("local",tree_sitter_dep_utf8proc_buildfile,"-d").

 return_output tree_sitter_dep_utf8proc_project.

 make filepath tree_sitter_buildfile_path from "resources" to "dep_buildfiles/tree-sitter-buildfile".

 files tree_sitter_buildfile(tree_sitter_buildfile_path).

 make filepath tree_sitter_dep_utf8proc_include from "resources" to "" from tree_sitter_dep_utf8proc_project.

 format(tree_sitter_dep_utf8proc_include).

 subproject tree_sitter_project("local",tree_sitter_buildfile,"-d -i __g_" + tree_sitter_dep_utf8proc_include).

 return_output tree_sitter_project.

 grab tree_sitter_lib from tree_sitter_project.

 grab tree_sitter_dep_utf8proc_lib from tree_sitter_dep_utf8proc_project.

 files Files("src/parser.c").

 sources Source(Files).

 make filepath tree_sitter_include from "resources" to "lib/include" from tree_sitter_project.

 compiler CompilerFlags("-Wall", "-I " + tree_sitter_include).

 toolchain ToolChain(toolchain_select,CompilerFlags).

 output tree_sitter_marshmallow_parser_lib("library",Source,ToolChain).

end build.

build clean_build.

 make filepath tree_sitter_dep_utf8proc_buildfile_path from "resources" to "dep_buildfiles/tree-sitter-dep-utf8proc-buildfile".

 files tree_sitter_dep_utf8proc_buildfile(tree_sitter_dep_utf8proc_buildfile_path).

 subproject tree_sitter_dep_utf8proc_project("local",tree_sitter_dep_utf8proc_buildfile,"-b clean_build").

 make filepath tree_sitter_buildfile_path from "resources" to "dep_buildfiles/tree-sitter-buildfile".

 files tree_sitter_buildfile(tree_sitter_buildfile_path).

 subproject tree_sitter_project("local",tree_sitter_buildfile,"-b clean_build").

 message("Cleaning tree-sitter-marshmallow-parser...").

 clean("build").

end build.

default tree_sitter_marshmallow_parser.
