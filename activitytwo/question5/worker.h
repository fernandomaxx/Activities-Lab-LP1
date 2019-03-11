//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_WORKER_H
#define ACTIVITYONE_WORKER_H


#include <string>

class Worker
{
public:

    Worker( double salary,
            const std::string &name );

    double getSalary( void ) const;

    void setSalary( double salary );

    const std::string &getName( void ) const;

    void setName( const std::string &name );

private:

    double salary;
    std::string name;
};


#endif //ACTIVITYONE_WORKER_H
