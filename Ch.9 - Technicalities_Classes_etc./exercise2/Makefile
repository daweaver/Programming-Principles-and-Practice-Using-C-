a.out : main.o Name_pairs.o
	g++ -o a.out main.o Name_pairs.o

main.o : main.cpp Name_pairs.h
	g++ -c main.cpp

Name_pairs.o : Name_pairs.cpp Name_pairs.h
	g++ -c Name_pairs.cpp
