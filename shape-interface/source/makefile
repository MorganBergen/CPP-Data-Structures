a: main.o Circle.o Rectangle.o Triangle.o Executive.o ShapeContainer.o
	g++ -std=c++11 -g -Wall main.o Circle.o Rectangle.o Triangle.o Executive.o ShapeContainer.o -o a

main.o: Executive.h main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Circle.o: Circle.h Shape.h Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp

Rectangle.o: Rectangle.h Shape.h Rectangle.cpp
	g++ -std=c++11 -g -Wall -c Rectangle.cpp
	
Triangle.o: Triangle.h Shape.h Triangle.cpp
	g++ -std=c++11 -g -Wall -c Triangle.cpp

ShapeContainer.o: ShapeContainer.h Shape.h ShapeContainer.cpp
	g++ -std=c++11 -g -Wall -c ShapeContainer.cpp
	
Executive.o: Executive.h Circle.h Rectangle.h Triangle.h ShapeContainer.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp
	
clean:
	rm *.o a

