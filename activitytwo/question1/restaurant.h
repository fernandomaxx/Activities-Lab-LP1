#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "restaurant_table.h"
#include "order.h"

class Restaurant
{
public:

    Restaurant( void );

    void addOrderToTAble( Order order, int n_table );

    double calculateTotalSales( void );

private:

    std::vector< RestaurantTable > table_list;
};


#endif /* RESTAURANT_H */
