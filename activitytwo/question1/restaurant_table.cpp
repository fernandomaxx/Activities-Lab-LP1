#include "restaurant_table.h"

RestaurantTable::RestaurantTable( void )
{}

void RestaurantTable::addOrder( Order order )
{
    for ( auto &it : order_list )
    {
        if ( order.getDescription() == it.getDescription() )
        {
            it.setAmount( it.getAmount() + order.getAmount() );
            return;
        }
    }

    order_list.push_back( order );
}

void RestaurantTable::clearOrders( void )
{
    order_list.clear();
}

double RestaurantTable::calculatesOrders( void )
{
    double total_price = 0;

    for ( auto &it : order_list )
    {
        total_price += it.getAmount() * it.getPrice();
    }

    return total_price;
}
