swig -c++ -java haha.i
JavaPath=`which java`
JavaHome=`dirname $JavaPath`
g++ -fPIC -shared -m64 \
    -I$JavaHome/../include/ \
    -I$JavaHome/../include/darwin/ \
    haha.cpp haha_wrap.cxx \
    -o libhaha.jnilib

javac testJava.java
java testJava