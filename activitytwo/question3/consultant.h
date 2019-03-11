//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_CONSULTANT_H
#define ACTIVITYONE_CONSULTANT_H


#include "employee.h"

class Consultant : public Employee
{
public:

    Consultant( double salary,
                const std::string &name,
                const std::string &registration );

    double getSalary( void ) const;

    double getSalary( float percentage ) const;

};


#endif //ACTIVITYONE_CONSULTANT_H
