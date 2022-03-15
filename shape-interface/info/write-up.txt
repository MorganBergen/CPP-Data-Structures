# EECS268-Lab2

Lab2 Shape Interface

EECS 268 Programming II at The University of Kansas

The purpose of this program is to demonstrate knowledge from the following concepts,

Overview of Concepts:
- pointers & dynamic arrays
- file i/o
- arrays and classes
- classes and dynamic arrays
- destructors
- classes to produce abstract data types
- exception-handling basis std::runtime_error
- inheritance
- late binding
- overriding pure virtual functions


Overview of Assignment Instructions:

You will use the following Shape interface to implement a Circle, Triangle, and Rectangle classes. Among the method(s) required by the interface...
- Circles have a radius
- Triangle have a base and height
- Rectangle have a length and a width

You will be passed a file name contain shape data from the command line. 
Some kind of Executive class should read the file and use a ShapeContainer to store pointers to various shapes, using the specifications for each shape given in the file.
The file also contains commands to print the area of a given shape and to exit the program.  
When a print command is issued, the information about the shape and it's area should be printed.
