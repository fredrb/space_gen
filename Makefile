CC      = g++
flags   = -g -o
include = -I ./include
lib     = ./lib/*.a
build   = ./build/

all: srclib gen.a run
	rm *.o

srclib : src/*.cpp
	$(CC) -c src/*.cpp $(include)

gen.a : srclib
	ld -r -o lib/gen.a *.o

run : main.cpp $(lib)	
	$(CC) main.cpp $(lib) $(flags) run $(include)


