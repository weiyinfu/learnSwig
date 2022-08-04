# 编写源文件
编写example.c和example.i

# 执行swig编译
swig -python example.i  
这一步生成example_wrap.c和example.py

# 执行编译生成so
这一步生成_example.so文件
```sh
gcc -shared -Wall -fPIC -flat_namespace \
    -I/Users/bytedance/anaconda3/include/python3.7m \
    -L/Users/bytedance/anaconda3/lib -lpython3.7m \
    example.c example_wrap.c  -o _example.so
```

命令中的关键点：
* 指定python头文件，用于寻找Python.h：-I/Users/bytedance/anaconda3/include/python3.7m
* 执行python的库地址，用于寻找libpython.so或者libpython.a：-L/Users/bytedance/anaconda3/lib -lpython3.7m
* 编译成动态链接库：-shared -fPIC 
* -flat_namespace：这个参数如果没有，报错找不到符号。
* 编译生成的动态链接库名字必须是_example.so
