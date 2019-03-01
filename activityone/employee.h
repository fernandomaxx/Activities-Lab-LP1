//
// Created by fernando on 18/02/19.
//

#ifndef ACTIVITYONE_EMPLOYEE_H
#define ACTIVITYONE_EMPLOYEE_H


class Employee {
public:

    Employee( void );

    Employee( const std::string name,
              const std::string surname,
              const double salary );

    std::string getName( void );

    void setName( std::string name );

    std::string getSurName( void );

    void setSurName( std::string surname );

    double getSalary( void );

    void setSalary(double salary );

private:

    std::string name;
    std::string surname;
    double salary;
};


#endif //ACTIVITYONE_EMPLOYEE_H
