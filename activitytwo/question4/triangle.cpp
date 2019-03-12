//
// Created by fernando on 11/03/19.
//

#include "triangle.h"

Triangle::Triangle( const std::string &name,
                    double base,
                    double height) :
        GeometricFigure{ name },
        base{ base },
        height{ height }
{}

double Triangle::getBase( void ) const
{
    return base;
}

void Triangle::setBase( double base )
{
    Triangle::base = base;
}

double Triangle::getHeight( void ) const
{
    return height;
}

void Triangle::setHeight( double height )
{
    Triangle::height = height;
}

double Triangle::calculateArea( void )
{
    return ( base * height ) / 2;
}
