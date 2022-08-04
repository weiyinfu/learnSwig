关键点：必须使用swig的c++模式才能跟JNI正确配合。  

swig生成的时候指定c++参数，这样生成的wrap文件就会以.cxx结尾。  

    swig -c++ -java haha.i

执行编译过程，java就不像Python那样需要指定flatnamespace。

    JavaPath=`which java`
    JavaHome=`dirname $JavaPath`
    g++ -fPIC -shared -m64 \
        -I$JavaHome/../include/ \
        -I$JavaHome/../include/darwin/ \
        haha.cpp haha_wrap.cxx \
        -o libhaha.jnilib

运行代码
    javac testJava.java
    java testJava