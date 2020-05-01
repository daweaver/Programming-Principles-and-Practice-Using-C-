foo: use.o my.o
	g++ -o foo use.o my.o

use.o: use.cpp my.h
	g++ -c use.cpp

my.o: my.cpp my.h
	g++ -c my.cpp
