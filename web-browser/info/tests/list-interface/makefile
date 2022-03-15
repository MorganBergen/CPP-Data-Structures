lab05:  main.o
	g++ -g -std=c++11 -Wall main.o -o lab05
	
main.o:  main.cpp LinkedList.h  LinkedList.hpp Node.h Node.cpp
	g++ -g -std=c++11 -Wall -c main.cpp
	
clean:
	rm *.o lab05
