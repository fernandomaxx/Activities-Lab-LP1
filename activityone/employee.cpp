//
// Created by fernando on 18/02/19.
//

#include "employee.h"

Employee::Employee( void )
{}

Employee::Employee( const std::string name,
                    const std::string surname,
                    const double salary ) :
          name { name },
          surname { surname },
          salary { salary }
{
    if ( getSalary() < 0 )
        setSalary( 0 );
}

std::string Employee::getName( void )
{
    return this->name;
}

void Employee::setName( std::string name )
{
    this->name = name;
}

std::string Employee::getSurName( void )
{
    return this->surname;
}

void Employee::setSurName( std::string surname )
{
    this->surname = surname;
}

double Employee::getSalary( void )
{
    return this->salary;
}

void Employee::setSalary(double salary )
{
    this->salary = salary;
}
