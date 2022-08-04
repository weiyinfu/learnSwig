这个demo是C++文件生成

# 一、编写src目录下的haha.h、haha.cpp、haha.i

# 二、生成绑定文件
生成haha_wrap.c和haha.py，haha_wrap.c是C代码封装，haha.py是python侧的代码封装。  

`swig -outdir gen -o gen/haha_wrap.c  -python src/haha.i`
# 三、执行编译命令编译haha_wrap.c

## 使用setup.py进行编译
两种编译方式：一种是使用setup.py，另一种是使用gcc命令。两种编译方式都会产生so文件。  
但是这种方式产生的so文件还是有点问题。 
```
python setup.py build_ext -inplace

```
## 使用gcc编译
```sh
g++ -Wall -Wdeprecated -shared -fPIC -flat_namespace \
    -I/Users/bytedance/anaconda3/include/python3.7m \
    -L/Users/bytedance/anaconda3/lib -lpython3.7m \
    -I./src \
     gen/haha_wrap.c src/haha.cpp\
     -o _haha.so
```
# 四、编写python代码test_haha.py使用生成的so库

查看符号表
nm -D _haha.cpython-37m-darwin.so