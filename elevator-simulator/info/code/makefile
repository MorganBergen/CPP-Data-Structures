lab04: main.o Executive.o
	g++ -std=c++11 -Wall -g main.o Executive.o -o lab04

main.o: main.cpp Node.h Node.cpp Stack.h Stack.cpp Queue.h Queue.cpp Executive.h
	g++ -std=c++11 -Wall -g -c main.cpp

Executive.o:  Executive.cpp Executive.h
	g++ -std=c++11 -g -Wall -c Executive.h

clean:
	rm *.o lab04
