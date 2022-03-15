/**
 * @file        ShapeContainer.h
 * @author      Morgan Bergen
 * @date        October 08/2021
 * @brief       This file has all the method signatures for the conatiner class, it has methdos to add and remove objects from the class, and it also can return the area and shapename of an object at a specific index.
 */

#ifndef ShapeContainer_h
#define ShapeContainer_h

#include "Shape.h"
#include <stdio.h>
#include <stdexcept>

class ShapeContainer {
    
public:
    /**
     *@pre      An object of type ShapeConatiner must be declared
     *@post     Initializes pointers in m_array_of_shapes to nullptr
     *@param size
     *@throws none
     *@returns none
     */
    ShapeContainer(int size);
    
    /**
     *@pre      The object of type ShapeContainer must no longer be needed anymore, destructor will be automatically called
     *@post     The array of shape pointers called m_array_of_shapes will have it's shape's be deleted for all index values, then the entire array of what m_arrayOfShapes is pointing to wil be deleted.
     *@paramnone
     *@thrownone
     *@returnsnone
     */
    ~ShapeContainer();
    
    /**
     *@pre      ShapeConatiner object must be declared and m_array_of_shapes must have shape pointers contained within it's array, or the index must have been initialized.
     *@post     if the index is set to nullprt or is out of range there will be a throw with the message shown
     *@paramindex
     *@throwstd::runtime_error if index is invalid, meaning out of range or index has nullptr.
     *@returnsarea at the given paramaterized index
     */
    double area(int index) const;
    
    /**
     *@pre      ShapeContainer object must be declared and m_array_of_shapes must have shape pointers contained within it's array, or the index must have been initialized.
     *@post     if the index is set to nullptr or is out of range there will be a throw with the message shown
     *@paramindex
     *@throwsstd::runtiem_error if index is invalid, meaning out of range or index has nullptr.
     *@returnsshapeName at the given paramterized index
     */
    std::string shapeName(int index) const;
    
    /**
     *@pre      ShapeContainer object must be declared and m_array_of_shapes must have an index that can accept a new pointer within it's array
     *@post     adds a pointer that points to a shape object to specific index of m_array_of_shapes
     *@paramshape_ptr,index
     *@throwsa std::runtime_error if index is invalid OR if shapePtr is nullptr
     *@returnsnothing
     */
    void add(Shape* shape_ptr, int index);
    
    /**
     *@pre      ShapeContainer object must be declared and m_array_of_shapes must have an index that can accept a new pointer within it's array
     *@post     removes a pointer that points to a shape object to specific index of m_array_of_shapes
     *@paramindex
     *@throwsa std::runtime_error if index is invalid OR if shapePtr is nullptr
     *@returnsnone
     */
    void remove(int index);
    
private:
    Shape** m_array_of_shapes;
    int m_size;
    
};

#endif /* ShapeContainer_h */

