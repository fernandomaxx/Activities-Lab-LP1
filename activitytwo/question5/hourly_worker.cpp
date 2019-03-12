//
// Created by fernando on 11/03/19.
//

#include "hourly_worker.h"

HourlyWorker::HourlyWorker( const std::string &name,
                            double hourly_pay ) :
        Worker{ name },
        hourly_pay{ hourly_pay }
{}

double HourlyWorker::calculateWeeklySalary( int hours )
{
    if ( hours > 40)
    {
        hours -= 40;
        return 40 * hourly_pay + hours * 1.5 * hourly_pay;
    }

    return hours * hourly_pay;
}
