//
// Created by fernando on 18/02/19.
//

#include "people.h"

People::People( void )
{}

People::People( const std::string name ) :
        name { name },
        age { 0 },
        phone { 0 }
{}

People::People( const std::string name,
                const int age,
                const int phone ) :
        name { name },
        age { age },
        phone { phone }
{}

std::string People::getName( void )
{
    return this->name;
}

void People::setName( std::string name )
{
    this->name = name;
}

int People::getAge( void )
{
    return this->age;
}

void People::setAge( int age )
{
    this->age = age;
}

int People::getPhone( void )
{
    return this->phone = phone;
}

void People::setPhone( int phone )
{
    this->phone = phone;
}

void People::showPeople(void)
{
    std::cout << this->name << " " << this->age
              << " " << this->phone << std::endl;
}
