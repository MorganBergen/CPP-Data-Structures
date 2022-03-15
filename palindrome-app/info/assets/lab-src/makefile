lab3: main.o Node.o StackOfChars.o StackTester.o Parser.o
	g++ -std=c++11 -g -Wall main.o Node.o StackOfChars.o StackTester.o Parser.o -o lab3

main.o: main.cpp Node.h StackOfChars.h StackTester.h Parser.h
	g++ -std=c++11 -g -Wall -c main.cpp

Node.o: Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c Node.cpp

StackOfChars.o: StackOfChars.h StackOfChars.cpp
	g++ -std=c++11 -g -Wall -c StackOfChars.cpp

StackTester.o: StackTester.h StackTester.cpp
	g++ -std=c++11 -g -Wall -c StackTester.cpp

Parser.o: Parser.h Parser.cpp
	g++ -std=c++11 -g -Wall -c Parser.cpp

clean:
	rm *.o lab3
