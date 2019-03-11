//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_PERSON_H
#define ACTIVITYONE_PERSON_H


#include <string>
#include "address.h"

class Person
{
public:

    Person( std::string name );

    Person( std::string name,
            std::string phone,
            Address address );

    const std::string &getName( void ) const;

    void setName( const std::string &name );

    const std::string &getPhone( void ) const;

    void setPhone( const std::string &phone );

    const Address &getAddress( void ) const;

    void setAddress( const Address &address );

    void toString( void );

private:

    std::string name;
    std::string phone;
    Address address;
};


#endif //ACTIVITYONE_PERSON_H
