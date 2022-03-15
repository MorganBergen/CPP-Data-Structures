/**
 * @file        Circle.h
 * @author      Morgan Bergen
 * @date        October 08/2021
 * @brief       This is the header file for the Circle Class that derives from the Shape Class. It has methods that, can return area, can return the name of the object (always Circle in this case), can change the radius, does have a constructor, and has a destructor.  This class will used for inheriting from the Shape Interface.
 */

#ifndef Circle_h
#define Circle_h
#include <string>
#include <stdio.h>
#include "Shape.h"

class Circle : public Shape {
    
private:
    double m_radius;
    
public:
    
    /**
     * @pre     must have an object be declared from the stack to call this default constructor
     * @post    will only construct the object
     * @paramnone
     * @throwsnone
     * @returnsnone
     */
    Circle();
    
    /**
     * @pre     must have an object be declared from the heap to call this constructor
     * @post    will initialize m_radius to be of the same value to that of radius
     * @paramradius
     * @throwsnone
     * @returnsnone
     */
    Circle(double radius);
    
    /**
     * @pre     object must have been previously declared and constructed
     * @post    will initialize m_radius to be of the same value to that of radius
     * @paramradius
     * @throwsnone
     * @returnsnone
     */
    void setRadius(double radius);
    
    /**
     * @pre     object must have been previously declared and constructed and have values of radius initialized
     * @post    none
     * @paramnone
     * @throwsnone
     * @returnsarea of the circle, based on the size of m_radius
     */
    virtual double area() const;
    
    /**
     * @pre     object must have been previously declared and constructed and have values of radius initialized
     * @post    none
     * @paramnone
     * @throwsnone
     * @returnsname of the circle, which in this case is always "Circle"
     */
    virtual std::string shapeName() const;
    
    /**
     * @pre     Circle must no longer be needed by the program
     * @post    will be the destructor of the circle class object, inherited by the Shape Interface
     * @paramnone
     * @throwsnone
     * @returnsnone
     */
    virtual ~Circle();
    
};

#endif /* Circle_h */
