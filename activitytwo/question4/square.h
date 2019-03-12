//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_SQUARE_H
#define ACTIVITYONE_SQUARE_H


#include "geometric_figure.h"

class Square : public GeometricFigure
{
public:

    Square( const std::string &name, double side );

    double getSide( void ) const;

    void setSide( double side );

    double calculateArea( void );
private:

    double side;
};


#endif //ACTIVITYONE_SQUARE_H
