//
// Created by fernando on 11/03/19.
//

#include "hourly_worker.h"

HourlyWorker::HourlyWorker( double salary,
                            const std::string &name,
                            double hourly_pay) :
        Worker( salary,
                name ),
        hourly_pay( hourly_pay )
{}
