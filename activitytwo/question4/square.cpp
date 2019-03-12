//
// Created by fernando on 11/03/19.
//

#include "square.h"

Square::Square( const std::string &name, double side ) :
        GeometricFigure{ name },
        side{ side }
{}

double Square::getSide( void ) const
{
    return side;
}

void Square::setSide( double side )
{
    Square::side = side;
}

double Square::calculateArea( void )
{
    return side * side;
}


