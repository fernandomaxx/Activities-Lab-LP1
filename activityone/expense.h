//
// Created by fernando on 18/02/19.
//

#ifndef ACTIVITYONE_EXPENSE_H
#define ACTIVITYONE_EXPENSE_H


class Expense {
public:

    Expense( void );

    Expense( const double value,
             const std::string type );

    double getValue( void );

    void setValue( double value );

    std::string getType( void );

    void setType( std::string type );

private:

    double value;
    std::string type;
};


#endif //ACTIVITYONE_EXPENSE_H
