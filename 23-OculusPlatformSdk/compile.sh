#!/bin/bash -e

src="oculus_platform_swig.i"
rm -r ./gen/csharp
rm -r ./gen/java
rm -r ./gen/python
mkdir ./gen/csharp
mkdir ./gen/java
mkdir ./gen/python

swig -outdir ./gen/csharp\
     -c++ -csharp ${src}

swig -outdir ./gen/java\
     -c++ -java ${src}


swig -outdir ./gen/python\
     -c++ -python ${src}