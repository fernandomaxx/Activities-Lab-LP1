#define MAIN 1

#include <iostream>
#include <string>

#include "order.h"
#include "restaurant.h"
#include "restaurant_table.h"

#if MAIN
int main()
{
    Restaurant restaurant;
    restaurant.addOrderToTAble( Order( 1, 2, 5, "chocolate" ), 0 );
    restaurant.addOrderToTAble( Order( 2, 2, 5, "chocolate" ), 0 );
    restaurant.addOrderToTAble( Order( 3, 2, 5, "chocolate" ), 1 );
    restaurant.addOrderToTAble( Order( 4, 2, 5, "chocolate" ), 1 );
    restaurant.addOrderToTAble( Order( 5, 2, 5, "chocolate" ), 2 );
    restaurant.addOrderToTAble( Order( 6, 2, 5, "chocolate" ), 2 );
    restaurant.addOrderToTAble( Order( 7, 2, 5, "chocolate" ), 3 );
    restaurant.addOrderToTAble( Order( 8, 2, 5, "chocolate" ), 3 );
    restaurant.addOrderToTAble( Order( 9, 2, 5, "chocolate" ), 3 );
    restaurant.addOrderToTAble( Order( 10, 2, 10, "coke" ), 4 );
    restaurant.addOrderToTAble( Order( 11, 2, 10, "coke" ), 5 );
    restaurant.addOrderToTAble( Order( 12, 2, 10, "whisky" ), 5 );
    restaurant.addOrderToTAble( Order( 13, 2, 10, "coke" ), 5 );
    restaurant.addOrderToTAble( Order( 14, 2, 10, "chocolate" ), 5 );
    restaurant.addOrderToTAble( Order( 15, 2, 10, "pizza" ), 5 );

    std::cout << "Total sales value: " << restaurant.calculateTotalSales() << std::endl;

}
#endif