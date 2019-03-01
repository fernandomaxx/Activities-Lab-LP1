//
// Created by fernando on 18/02/19.
//

#ifndef ACTIVITYONE_EXPENSECONTROL_H
#define ACTIVITYONE_EXPENSECONTROL_H

#include "expense.h"
#include <vector>

class Expensecontrol {
public:

    Expensecontrol( void );

    void setExpense( Expense *exp );

    double totalExpense( void );

    bool searchExpenseType( std::string type );

private:

    std::vector <Expense> expense_list;
    int count = 0;
};


#endif //ACTIVITYONE_EXPENSECONTROL_H
