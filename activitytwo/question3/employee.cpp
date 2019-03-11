//
// Created by fernando on 11/03/19.
//

#include "employee.h"


Employee::Employee( double salary,
                    const std::string &name,
                    const std::string &registration) :
        salary{ salary },
        name{ name },
        registration{ registration }
{}

double Employee::getSalary( void ) const
{
    return salary;
}

void Employee::setSalary( double salary )
{
    Employee::salary = salary;
}

const std::string &Employee::getName( void ) const
{
    return name;
}

void Employee::setName( const std::string &name )
{
    Employee::name = name;
}

const std::string &Employee::getRegistration( void ) const
{
    return registration;
}

void Employee::setRegistration( const std::string &registration )
{
    Employee::registration = registration;
}

