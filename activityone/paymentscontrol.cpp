//
// Created by fernando on 18/02/19.
//

#include "paymentscontrol.h"

Paymentscontrol::Paymentscontrol( void )
{}

void Paymentscontrol::setPayments( Payments *payments )
{
    this->payments_list.push_back( *payments );
}

bool Paymentscontrol::searchPayment( std::string name )
{
    for ( auto it = payments_list.begin(); it != payments_list.end(); ++it )
    {
        if ( name == it.base()->getName() )
            return true;
    }

    return false;
}
