swig -python example.i
gcc -shared -Wall -fPIC -flat_namespace \
    -I/Users/bytedance/anaconda3/include/python3.7m \
    -L/Users/bytedance/anaconda3/lib -lpython3.7m \
    example.c example_wrap.c  -o _example.so
