//
// Created by fernando on 11/03/19.
//

#include "geometric_figure.h"

GeometricFigure::GeometricFigure( std::string name ) :
        name{ std::move( name ) }
{}

double GeometricFigure::calculateArea( void )
{
    return 0;
}
