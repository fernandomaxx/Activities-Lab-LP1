//
// Created by fernando on 12/03/19.
//
#define MAIN 1

#include <iostream>

#include "hourly_worker.h"
#include "salaried_worker.h"

#if MAIN
int main()
{
    SalariedWorker salariedWorker( 1000, "Pedro" );
    HourlyWorker hourlyWorker( "Gilberto", 10 );

    std::cout << salariedWorker.getName() << " R$: " << salariedWorker.calculateWeeklySalary() << std::endl;
    std::cout << hourlyWorker.getName() << " R$: " << hourlyWorker.calculateWeeklySalary( 40 ) << std::endl;
}
#endif