//
// Created by fernando on 18/02/19.
//

#include "invoice.h"

Invoice::Invoice( void )
{}

Invoice::Invoice( const int number,
                  const std::string description,
                  const int quantity,
                  const float price ) :
         number { number },
         description { description },
         quantity { quantity },
         price { price }
{}

float Invoice::getInvoiceAmount( void )
{
    return getQuantity() * getPrice();
}

int Invoice::getNumber( void )
{
    return this->number;
}

void Invoice::setNumber(int number)
{
    this->number = number;
}

std::string Invoice::getDescription( void )
{
    return this->description;
}

void Invoice::setDescription(std::string description)
{
    this->description = description;
}

int Invoice::getQuantity( void )
{
    return this->quantity;
}

void Invoice::setQuantity(int quantity)
{
    this->quantity = quantity;
}

float Invoice::getPrice( void )
{
    return this->price;
}

void Invoice::setPrice(float price)
{
    this->price = price;
}
