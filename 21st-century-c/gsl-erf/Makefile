P=gsl-erf
OBJECTS=
CFLAGS=-g -Wall -O3
LDLIBS=`pkg-config --libs gsl`
CC=clang

$(P): $(OBJECTS)

clean:
	rm -f ${P}
	rm -f *~
	rm -rf ${P}.dSYM
