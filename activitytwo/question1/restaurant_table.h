#ifndef RESTAURANT_TABLE_H
#define RESTAURANT_TABLE_H

#include <vector>

#include "order.h"

class RestaurantTable
{
public:

    RestaurantTable( void );

    void addOrder( Order order );

    void clearOrders( void );

    double calculatesOrders( void );

private:

    std::vector< Order > order_list;

};


#endif /* RESTAURANT_TABLE_H */
