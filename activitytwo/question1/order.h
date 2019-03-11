#ifndef ORDER_H
#define ORDER_H

#include <iostream>


class Order
{
public:

    Order( int number,
           int amount,
           double price,
           const std::string &description );

    int getNumber( void ) const;

    void setNumber( int number );

    const std::string &getDescription( void ) const;

    void setDescription( const std::string &description );

    int getAmount( void ) const;

    void setAmount( int amount );

    double getPrice( void ) const;

    void setPrice( double price );

private:

    int number;
    int amount;
    double price;
    std::string description;

};


#endif /* ORDER_H */
