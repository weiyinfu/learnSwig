swig -c++ -csharp haha.i

g++ -fPIC -shared  haha.cpp haha_wrap.cxx -o libhaha.dylib