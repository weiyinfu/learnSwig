首先声明模块名称，然后两个`%{ ....  %}`之间的内容会原样copy到C/C++侧的wrapper中。  

swig生成的代码包括两部分：
* C/C++侧的wrapper，只有一个文件，名字为`<模块名>_swig_wrap.cxx`或者`<模块名>_swig_wrap.c`，生成C++还是C可以通过`swig -c++`参数进行控制，默认是C。输出路径可以通过`-o`参数指定。  
* 各个语言的wrapper，会生成多个文件。生成路径可以通过`-outdir`指定。


```plain
%module example
%{
    /* Put header files here or function declarations like below */
    extern double My_variable;
    extern int fact(int n);
    extern int my_mod(int x, int y);
    extern char *get_time();
    #include "one.h"
%}

extern double My_variable;
extern int fact(int n);
extern int my_mod(int x, int y);
extern char *get_time();
%include "one.h"
```


# swig的内置文件：swig library
swig有许多内置文件，找到swig命令所在的地方，可以看到很多预置的swig文件。不同的语言会自动include这些文件。  
使用`swig -swiglib`命令可以找到这些库所在的路径。  
swig这种模式非常美妙，内置了一堆有用的工具，可以灵活使用。  
```plain
ls /usr/local/Cellar/swig/4.0.2
allkw.swg            director_common.swg  ocaml/               std/                 swigrun.swg        
attribute.i          exception.i          octave/              std_except.i         swigwarn.swg       
carrays.i            go/                  perl5/               stdint.i             swigwarnings.swg   
cdata.i              guile/               php/                 stl.i                tcl/               
cmalloc.i            intrusive_ptr.i      pointer.i            swig.swg             typemaps/          
constraints.i        inttypes.i           python/              swigarch.i           wchar.i            
cpointer.i           java/                r/                   swigerrors.swg       windows.i          
csharp/              javascript/          ruby/                swigfragments.swg    xml/               
cstring.i            lua/                 runtime.swg          swiginit.swg                            
cwstring.i           math.i               scilab/              swiglabels.swg                          
d/                   mzscheme/            shared_ptr.i         swigrun.i   
```