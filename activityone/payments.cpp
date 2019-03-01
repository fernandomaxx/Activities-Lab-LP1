//
// Created by fernando on 18/02/19.
//

#include "payments.h"

Payments::Payments( void )
{}

Payments::Payments( const std::string name,
                    const double value_payments) :
          name { name },
          value_payments { value_payments }
{}

std::string Payments::getName( void )
{
    return this->name;
}

void Payments::setName( std::string name )
{
    this->name = name;
}

double Payments::getValue( void )
{
    return this->value_payments;
}

void Payments::setValue( double value_payments )
{
    this->value_payments = value_payments;
}
