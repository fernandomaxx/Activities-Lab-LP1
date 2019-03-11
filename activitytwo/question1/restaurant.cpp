//
// Created by fernando on 11/03/19.
//

#include "restaurant.h"

Restaurant::Restaurant( void )
{
    for ( int i = 0; i < 50 ; ++i )
    {
        table_list.push_back( RestaurantTable() );
    }
}

void Restaurant::addOrderToTAble( Order order, int n_table )
{
    if ( n_table >= 50 )
    {
        std::cout << "invalid table\n";
    }
    else
    {
        table_list[n_table].addOrder( std::move( order ) );
    }
}

double Restaurant::calculateTotalSales( void )
{
    double total_sales = 0;

    for ( auto &it: table_list )
    {
        total_sales += it.calculatesOrders();
    }

    return total_sales;
}
