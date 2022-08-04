from distutils.core import setup, Extension

setup(name='_haha',
      version='0.1',
      author="SWIG Docs",
      description="""Simple swig example from docs""",
      ext_modules=[
          Extension('_haha',
                    sources=['gen/haha_wrap.c', 'src/haha.cpp'],
                    include_dirs=['src/'],
                    extra_link_args=["-flat_namespace"],
                    language="c++"
                    )],
      py_modules=["haha"],
      )
