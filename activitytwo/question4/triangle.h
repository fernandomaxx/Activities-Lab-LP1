//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_TRIANGLE_H
#define ACTIVITYONE_TRIANGLE_H


#include "geometric_figure.h"

class Triangle : public GeometricFigure
{
public:

    Triangle( const std::string &name,
              double base,
              double height );

    double getBase( void ) const;

    void setBase( double base );

    double getHeight( void ) const;

    void setHeight( double height );

    double calculateArea( void );

private:

    double base;
    double height;
};


#endif //ACTIVITYONE_TRIANGLE_H
