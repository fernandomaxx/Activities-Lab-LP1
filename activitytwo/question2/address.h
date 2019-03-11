#ifndef ACTIVITYONE_ADDRESS_H
#define ACTIVITYONE_ADDRESS_H

#include <iostream>
#include <string>

class Address
{

public:

    Address( int number,
             std::string street,
             std::string district,
             std::string city,
             std::string cep );

    Address( void );

    void toString( void );

private:

    int number;
    std::string street;
    std::string district;
    std::string city;
    std::string cep;
};


#endif //ACTIVITYONE_ADDRESS_H
