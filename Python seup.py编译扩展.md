# 最简单的代码
```python
from distutils.core import setup, Extension

setup(
    name="spam",
    ext_modules=[Extension("spam", sources=["spammodule.c"])],
    zip_safe=False
)
```
使用方式：`python setup.py build_ext --inplace`
使用Python setup.py的好处就是它能够帮我们处理一些默认参数。

编译输出
```plain
running build_ext
building '_haha' extension
gcc -Wno-unused-result -Wsign-compare -Wunreachable-code -DNDEBUG -g -fwrapv -O3 -Wall -Wstrict-prototypes -I/Users/bytedance/anaconda3/include -arch x86_64 -I/Users/bytedance/anaconda3/include -arch x86_64 -Isrc/ -I/Users/bytedance/anaconda3/include/python3.7m -c gen/haha_wrap.c -o build/temp.macosx-10.9-x86_64-cpython-37/gen/haha_wrap.o
gcc -Wno-unused-result -Wsign-compare -Wunreachable-code -DNDEBUG -g -fwrapv -O3 -Wall -Wstrict-prototypes -I/Users/bytedance/anaconda3/include -arch x86_64 -I/Users/bytedance/anaconda3/include -arch x86_64 -Isrc/ -I/Users/bytedance/anaconda3/include/python3.7m -c src/haha.cpp -o build/temp.macosx-10.9-x86_64-cpython-37/src/haha.o
g++ -bundle -undefined dynamic_lookup -L/Users/bytedance/anaconda3/lib -arch x86_64 -L/Users/bytedance/anaconda3/lib -arch x86_64 build/temp.macosx-10.9-x86_64-cpython-37/gen/haha_wrap.o build/temp.macosx-10.9-x86_64-cpython-37/src/haha.o -o build/lib.macosx-10.9-x86_64-cpython-37/_haha.cpython-37m-darwin.so
copying build/lib.macosx-10.9-x86_64-cpython-37/_haha.cpython-37m-darwin.so -> 
```

# 自定义编译器
```
CC=g++ python setup.py build_ext --inplace
```

# 自定义flag
在extra_link_args里面添加flag。  
在custom_build_ext里面可以获得更灵活的控制。
```python
from setuptools.command.build_ext import build_ext
from setuptools import Extension, setup


class custom_build_ext(build_ext):
    def build_extensions(self):
        # Override the compiler executables. Importantly, this
        # removes the "default" compiler flags that would
        # otherwise get passed on to to the compiler, i.e.,
        # distutils.sysconfig.get_var("CFLAGS").
        self.compiler.set_executable("compiler_so", "g++")
        self.compiler.set_executable("compiler_cxx", "g++")
        self.compiler.set_executable("linker_so", "g++")
        build_ext.build_extensions(self)

[
setup(
    name="spam",
    ext_modules=[
        Extension(
            "spam", 
            sources=["spammodule.c"],
            extra_compile_args=["-arch", "x86_64"],
            extra_link_args=["-undefined", "dynamic_lookup"]
        )
    ],
    zip_safe=False,
    cmdclass={"build_ext": custom_build_ext}
)
```

# 参考链接
https://shwina.github.io/custom-compiler-linker-extensions/