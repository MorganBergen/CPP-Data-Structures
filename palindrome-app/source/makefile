lab3: main.o Node.o StackOfChars.o StackTester.o StackParser.o
	g++ -std=c++11 -g -Wall main.o Node.o StackOfChars.o StackTester.o StackParser.o -o lab3

main.o: main.cpp Node.h StackOfChars.h StackTester.h StackParser.h
	g++ -std=c++11 -g -Wall -c main.cpp

Node.o: Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c Node.cpp

StackOfChars.o: StackOfChars.h StackOfChars.cpp
	g++ -std=c++11 -g -Wall -c StackOfChars.cpp

StackTester.o: StackTester.h StackTester.cpp
	g++ -std=c++11 -g -Wall -c StackTester.cpp

StackParser.o: StackParser.h StackParser.cpp
	g++ -std=c++11 -g -Wall -c StackParser.cpp

clean:
	rm *.o lab3
