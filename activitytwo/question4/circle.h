//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_CIRCLE_H
#define ACTIVITYONE_CIRCLE_H


#include "geometric_figure.h"

class Circle : public GeometricFigure
{
public:

    Circle( const std::string &name,
            double radius );

    double getRadius( void ) const;

    void setRadius( double radius );

    double calculateArea( void );

private:

    double radius;
};


#endif //ACTIVITYONE_CIRCLE_H
