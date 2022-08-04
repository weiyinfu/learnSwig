%module spam
%{
#include "spam.h"
%}
%include "spam.h"
%include "typemaps.i"
int system(const char* INPUT);
