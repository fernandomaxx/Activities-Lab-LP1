//
// Created by fernando on 11/03/19.
//

#include "worker.h"

Worker::Worker( const std::string &name ) :
        name{ name }
{}

Worker::Worker( double salary,
                const std::string &name ) :
        salary{ salary },
        name{ name }
{}

double Worker::getSalary( void ) const
{
    return salary;
}

void Worker::setSalary( double salary )
{
    Worker::salary = salary;
}

const std::string &Worker::getName( void ) const
{
    return name;
}

void Worker::setName( const std::string &name )
{
    Worker::name = name;
}
