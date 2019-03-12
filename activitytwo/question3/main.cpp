//
// Created by fernando on 11/03/19.
//

#include <iostream>
#include <string>
#define MAIN 1

#include "consultant.h"
#include "employee.h"

#if MAIN
int main()
{
    Employee employee( 1000, "joao", "0001" );
    Consultant consultant( 1000, "helena", "0002" );

    std::cout << employee.getSalary() << std::endl;
    std::cout << consultant.getSalary() << std::endl;
    std::cout << consultant.getSalary(0.2) << std::endl;
}
#endif
