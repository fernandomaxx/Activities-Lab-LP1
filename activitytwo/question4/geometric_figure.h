//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_GEOMETRIC_FIGURE_H
#define ACTIVITYONE_GEOMETRIC_FIGURE_H


#include <string>

class GeometricFigure
{
public:

    GeometricFigure( std::string name );

    double calculateArea( void );

private:

    std::string name;
};


#endif //ACTIVITYONE_GEOMETRIC_FIGURE_H
