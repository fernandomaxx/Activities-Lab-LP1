//
// Created by fernando on 18/02/19.
//

#ifndef ACTIVITYONE_PAYMENTSCONTROL_H
#define ACTIVITYONE_PAYMENTSCONTROL_H

#include "payments.h"
#include <vector>

class Paymentscontrol {
public:

    Paymentscontrol( void );

    void setPayments( Payments *payments );

    bool searchPayment( std::string name );

private:

    std::vector <Payments> payments_list;
};


#endif //ACTIVITYONE_PAYMENTSCONTROL_H
