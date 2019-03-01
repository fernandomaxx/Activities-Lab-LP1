//
// Created by fernando on 18/02/19.
//

#include "expense.h"

Expense::Expense( void )
{}

Expense::Expense( const double value,
                  const std::string type ) :
         value { value },
         type { type }
{}

double Expense::getValue( void )
{
    return this->value;
}

void Expense::setValue( double value )
{
    this->value = value;
}

std::string Expense::getType( void )
{
    return this->type;
}

void Expense::setType( std::string type )
{
    this->type = type;
}

