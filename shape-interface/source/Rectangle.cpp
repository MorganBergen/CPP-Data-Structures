/**
 * @file        Rectangle.h
 * @author      Morgan Bergen
 * @date        October 08/2021
 * @brief       This file is the implementation file of the Rectangle class methods
 */

#include "Rectangle.h"
#include <iostream>
#include <string>

Rectangle::Rectangle(){}

Rectangle::Rectangle(double width, double length){
    m_width = width;
    m_length = length;
}

void Rectangle::setWidth(double width){
    m_width = width;
}

void Rectangle::setlength(double length){
    m_length = length;
}

double Rectangle::area() const {
    return(m_width*m_length);
}

std::string Rectangle::shapeName() const {
    return ("Rectangle");
}

Rectangle::~Rectangle(){}
