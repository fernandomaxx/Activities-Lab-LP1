//
// Created by fernando on 11/03/19.
//

#include "salaried_worker.h"

SalariedWorker::SalariedWorker( double salary,
                                const std::string &name ) :
        Worker{ salary, name }
{}

double SalariedWorker::calculateWeeklySalary( void )
{
    return getSalary() / 4;
}
