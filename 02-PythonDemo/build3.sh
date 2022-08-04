Swig -python example.i
Gcc -fPIC -c example.c
gcc -fPIC -c example_wrap.c `python3 -m pybind11 --includes`
gcc -dynamiclib -o _example.so *.o -L/Users/bytedance/anaconda3/lib -lpython3.7m -flat_namespace