//
// Created by fernando on 11/03/19.
//

#include "person.h"

Person::Person( std::string name ) :
        name{ std::move( name ) }
{}

Person::Person( std::string name,
                std::string phone,
                Address address ) :
        name{ std::move( name ) },
        phone{ std::move( phone ) },
        address{ std::move( address ) }
{}

const std::string &Person::getName( void ) const
{
    return name;
}

void Person::setName( const std::string &name )
{
    Person::name = name;
}

const std::string &Person::getPhone( void ) const
{
    return phone;
}

void Person::setPhone( const std::string &phone )
{
    Person::phone = phone;
}

const Address &Person::getAddress( void ) const
{
    return address;
}

void Person::setAddress( const Address &address )
{
    Person::address = address;
}

void Person::toString( void )
{
    std::cout << name << std::endl << phone << std::endl;
    address.toString();
}
