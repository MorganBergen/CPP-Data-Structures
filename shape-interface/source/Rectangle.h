/**
 * @file        Rectangle.h
 * @author      Morgan Bergen
 * @date        October 08/2021
 * @brief       This is the header file for the Rectangle Class that derives from the Shape Class. It has methods that, can return area, can return the name of the object (always Rectangle in this case), can change the length and width, does have a constructor, and has a destructor.  This class will used for inheriting from the Shape Interface.
 */

#ifndef Rectangle_h
#define Rectangle_h
#include <string>
#include <stdio.h>
#include "Shape.h"

class Rectangle : public Shape {
private:
    double m_width;
    double m_length;
    
public:
    
    /**
     * @pre     must have an object be declared from the stack to call this default constructor
     * @post    will only construct the object
     * @paramnone
     * @throwsnone
     * @returnsnone
     */
    Rectangle();
    
    /**
     * @pre     must have an object be declared from the heap to call this constructor
     * @post    will initialize m_length, and m_width to be of the same value to that of width and length
     * @paramwidth,length
     * @throwsnone
     * @returnsnone
     */
    Rectangle(double width, double length);
    
    /**
     * @pre     object must have been previously declared and constructed
     * @post    will initialize m_width to be of the same value to that of width
     * @paramwidth
     * @throwsnone
     * @returnsnone
     */
    void setWidth(double width);
    
    /**
     * @pre     object must have been previously declared and constructed
     * @post    will initialize m_length to be of the same value to that of length
     * @paramlength
     * @throwsnone
     * @returnsnone
     */
    void setlength(double length);
    
    /**
     * @pre     object must have been previously declared and constructed and have values of width and length initialized
     * @post    none
     * @paramnone
     * @throwsnone
     * @returnsarea of the rectangle, based on the size of m_width and m_length
     */
    virtual double area() const;
    
    /**
     * @pre     object must have been previously declared and constructed and have values of width and length initialized
     * @post    none
     * @paramnone
     * @throwsnone
     * @returnsname of the rectangle, which in this case is always "Rectangle"
     */
    virtual std::string shapeName() const;
    
    /**
     * @pre     Rectangle must no longer be needed by the program
     * @post    will be the destructor of the rectangle class object, inherited by the Shape Interface
     * @paramnone
     * @throwsnone
     * @returnsnone
     */
    virtual ~Rectangle();
};

#endif /* Rectangle_h */
