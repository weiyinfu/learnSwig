src="rtc_swig.i"
swig -outdir ./gen/csharp\
     -c++ -csharp ${src}

swig -outdir ./gen/java\
     -c++ -java ${src}


swig -outdir ./gen/python\
     -c++ -python ${src}