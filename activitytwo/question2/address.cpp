//
// Created by fernando on 11/03/19.
//

#include "address.h"

Address::Address( void )
{
    number = -1;
    street = "undefined";
    district = "undefined";
    city = "undefined";
    cep = "undefined";

}

Address::Address( int number,
                  std::string street,
                  std::string district,
                  std::string city,
                  std::string cep ) :
        number{ number },
        street{ std::move( street ) },
        district{ std::move( district ) },
        city{ std::move( city ) },
        cep{ std::move( cep ) }
{}

void Address::toString( void ) const
{
    std::cout << street << ", " << number << ", "
            << district << ", " << city << ", "
            << cep << std::endl;
}
