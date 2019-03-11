//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_EMPLOYEE_H
#define ACTIVITYONE_EMPLOYEE_H


#include <string>

class Employee
{
public:

    Employee( double salary,
              const std::string &name,
              const std::string &registration );

    double getSalary( void ) const;

    void setSalary( double salary );

    const std::string &getName( void ) const;

    void setName( const std::string &name );

    const std::string &getRegistration( void ) const;

    void setRegistration( const std::string &registration );

private:

    double salary;
    std::string name;
    std::string registration;
};


#endif //ACTIVITYONE_EMPLOYEE_H
