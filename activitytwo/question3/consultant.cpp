//
// Created by fernando on 11/03/19.
//

#include "consultant.h"

Consultant::Consultant( double salary,
                        const std::string &name,
                        const std::string &registration ) :
        Employee{ salary,
                  name,
                  registration }
{}

double Consultant::getSalary( void ) const
{
    return 0.1 * Employee::getSalary() + Employee::getSalary();
}

double Consultant::getSalary( float percentage ) const
{
    return percentage * Employee::getSalary() + Employee::getSalary();
}
