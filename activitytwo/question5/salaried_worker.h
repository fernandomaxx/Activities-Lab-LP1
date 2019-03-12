//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_SALARIED_WORKER_H
#define ACTIVITYONE_SALARIED_WORKER_H

#include "worker.h"

class SalariedWorker : public Worker
{
public:

    SalariedWorker(double salary, const std::string &name);

    double calculateWeeklySalary( void );
};


#endif //ACTIVITYONE_SALARIED_WORKER_H
