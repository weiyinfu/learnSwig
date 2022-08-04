C#是swig支持比较早的一门语言。swig生成的C++代码不依赖任何类似jni的头文件。

    swig -c++ -csharp haha.i
    g++ -fPIC -shared  haha.cpp haha_wrap.cxx -o libhaha.dylib

创建一个项目，把libhaha.dylib放到bin/Debug/net6.0目录下面。
直接运行代码即可跑通。  

    Console.WriteLine(haha.fact(5));