#include "order.h"

Order::Order( int number,
              int amount,
              double price,
              const std::string &description ) :
        number{ number },
        amount{ amount },
        price{ price },
        description{ description }
{}

int Order::getNumber( void ) const
{
    return number;
}

void Order::setNumber( int number )
{
    Order::number = number;
}

const std::string &Order::getDescription( void ) const
{
    return description;
}

void Order::setDescription( const std::string &description )
{
    Order::description = description;
}

int Order::getAmount( void ) const
{
    return amount;
}

void Order::setAmount( int amount )
{
    Order::amount = amount;
}

double Order::getPrice( void ) const
{
    return price;
}

void Order::setPrice( double price )
{
    Order::price = price;
}
