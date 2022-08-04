脚本语言作为胶水层，把C++代码组合起来。这种编程范式极其优美，实现极其灵活。  


SWIG 是Simple Wrapper and Interface Generator的缩写，是一个帮助使用C或者C++编写的软件创建其他编语言的API的工具。


本仓库示例在Mac下执行。

# 安装方式
`brew install swig`

# 使用体验
生成的Java代码所使用的的JNI版本太低，无法编译。

# 竞品
* swig：支持多种语言。
* mono组织开发，cpp和csharp的跨语言调用工具：https://github.com/mono/CppSharp  
* 微软提供的csharp和cpp互调工具，很久没有更新了。 https://devblogs.microsoft.com/vbteam/pinvoke-interop-assistant-on-codeplex-jared-parsons/



swig -c++ -java -package com.bytedance.pico.platformsdk.jni -outdir "../java/com/bytedance/pico/platformsdk/jni" swig.i

# swig文件的写法
`%{` `%}`之间的代码会被原样copy到生成的wrap文件中。
使用extern 到处特定变量或者%include都可以，这表示需要导出到脚本语言的变量或者函数。  
```plain
%module example
%{
/* Put headers and other declarations here */
extern double My_variable;
extern int    fact(int);
extern int    my_mod(int n, int m);
%}

extern double My_variable;
extern int    fact(int);
extern int    my_mod(int n, int m);
```

# 输出相关

     -o <outfile>    - 设置生成的C/C++wrap 文件
     -oh <headfile>  - 设置生成的C/C++ wrap 头文件
     -outcurrentdir  - Set default output dir to current dir instead of input file's path
     -outdir <dir>   - 设置语言特定的输出文件

# swig可以输出xml
基于此xml格式可以做很多事情。  


# 参考资料
* tutorial：https://www.swig.org/tutorial.html
* documentation：https://www.swig.org/Doc4.0/index.html
* swig basics：https://www.swig.org/Doc4.0/SWIG.html#SWIG