lab04: main.o Executive.o
	g++ -std=c++11 -g -Wall main.o Executive.o -o lab04

main.o: Executive.h main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Node.h Node.hpp Stack.h StackInterface.h Stack.hpp Queue.h QueueInterface.h Queue.hpp Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean:
	rm *.o lab04
