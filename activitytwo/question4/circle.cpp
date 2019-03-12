//
// Created by fernando on 11/03/19.
//

#include <math.h>
#include "circle.h"

Circle::Circle( const std::string &name,
                double radius ) :
        GeometricFigure{ name },
        radius{ radius }
{}

double Circle::getRadius( void ) const
{
    return radius;
}

void Circle::setRadius( double radius )
{
    Circle::radius = radius;
}

double Circle::calculateArea( void )
{
    return M_PI * ( radius * radius );
}
