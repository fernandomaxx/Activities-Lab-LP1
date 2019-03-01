//
// Created by fernando on 18/02/19.
//

#include "expensecontrol.h"

Expensecontrol::Expensecontrol( void )
{}

void Expensecontrol::setExpense( Expense *exp )
{
    this->expense_list.push_back( *exp );
}

double Expensecontrol::totalExpense( void )
{
    double aux = 0;

    for ( auto it = expense_list.begin(); it != expense_list.end(); ++it )
    {
        aux += it.base()->getValue();
    }

    return aux;
}

bool Expensecontrol::searchExpenseType( std::string type ) {

    for ( auto it = expense_list.begin(); it != expense_list.end(); ++it )
    {
        if ( type == it.base()->getType() )
            return true;
    }

    return false;
}
