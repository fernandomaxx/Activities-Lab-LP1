//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_HOURLY_WORKER_H
#define ACTIVITYONE_HOURLY_WORKER_H

#include "worker.h"

class HourlyWorker : public Worker
{
public:

    HourlyWorker( double salary,
                  const std::string &name,
                  double hourly_pay );

private:

    double hourly_pay;
};


#endif //ACTIVITYONE_HOURLY_WORKER_H
