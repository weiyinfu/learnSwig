swig -c++ -python example.i
g++ -O2 -fPIC -c example.c
g++ -O2 -fPIC -c example_wrap.cxx `python3 -m pybind11 --includes`
g++ -L/Users/bytedance/anaconda3/lib -lpython3.7m \
    -dynamiclib -flat_namespace \
    example.o example_wrap.o -o _example.so