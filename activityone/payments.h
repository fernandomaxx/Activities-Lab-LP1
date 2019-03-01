//
// Created by fernando on 18/02/19.
//

#ifndef ACTIVITYONE_PAYMENTS_H
#define ACTIVITYONE_PAYMENTS_H


class Payments {
public:

    Payments( void );

    Payments( const std::string name,
              const double value_payments );

    std::string getName( void );

    void setName( std::string name );

    double getValue( void );

    void setValue( double value_payments );

private:

    std::string name;
    double value_payments;

};


#endif //ACTIVITYONE_PAYMENTS_H
