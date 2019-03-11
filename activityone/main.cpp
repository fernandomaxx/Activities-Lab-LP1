#include <iostream>
#include "date.cpp"
#include "Invoice.cpp"
#include "employee.cpp"
#include "people.cpp"
#include "expense.cpp"
#include "expensecontrol.cpp"
#include "payments.cpp"
#include "paymentscontrol.cpp"

/*** Question 1

int main()
{
    Date date { 1, 1, 2000 };

    for (int i = 0; i < 365; ++i)
    {
        date.nextDate();
        date.showDate();
    }
    return 0;
}

***/

/*** Question 2

 int main()
{
    Invoice invoice { 1, "Pastel de frango", 65, 1};
    std::cout << "Valor da fatura: R$ " << invoice.getInvoiceAmount() << std::endl;
}

***/

/*** Question 3

int main()
{
    Employee employee { "fenando", "maximo", 1000.0};
    Employee employee1 { "ana", "beatriz", 2000.0};

    std::cout << "Annual salary fernando: R$ " << employee.getSalary() * 12 << std::endl;
    std::cout << "Annual salary ana: R$ " << employee1.getSalary() * 12 << std::endl;
    std::cout << std::endl;

    employee.setSalary( employee.getSalary() + (employee.getSalary() * 0.1) );
    employee1.setSalary( employee1.getSalary() + (employee1.getSalary() * 0.1) );

    std::cout << "After salary increase" << std::endl;
    std::cout << "Annual salary fernando: R$ " << employee.getSalary() * 12 << std::endl;
    std::cout << "Annual salary ana: R$ " << employee1.getSalary() * 12 << std::endl;
}

***/

/*** Question 4

int main()
{
    People people { "fernando" };
    People people1 { "ana", 15, 45678942 };

    std::cout << "People's names" << std::endl;
    people.showPeople();
    people1.showPeople();
    std::cout << std::endl;

    people.setName( "joao" );
    people.setName( "fatima" );

    std::cout << "After changes" << std::endl;
    people.showPeople();
    people1.showPeople();
}

*/

/*** Question 5


int main()
{
    Expensecontrol expensecontrol;
    expensecontrol.setExpense( new Expense { 500, "roupas"} );
    expensecontrol.setExpense( new Expense { 1000, "comida"} );
    expensecontrol.setExpense( new Expense { 500, "cinema"} );

    std::cout << "valor gasto: "<< expensecontrol.totalExpense() << std::endl;

    if ( expensecontrol.searchExpenseType( "comida" ))
        std::cout << "sim" << std::endl;
    else
        std::cout << "nao" << std::endl;

    if ( expensecontrol.searchExpenseType( "curso" ))
        std::cout << "sim" << std::endl;
    else
        std::cout << "nao" << std::endl;

}

*/

/*** Question 6
 *
 */

/***
int main()
{
    Paymentscontrol paymentscontrol;
    paymentscontrol.setPayments( new Payments { "joao", 500 } );
    paymentscontrol.setPayments( new Payments { "andre", 500 } );

    if ( paymentscontrol.searchPayment( "joao" ) )
        std::cout << "sim" << std::endl;
    else
        std::cout << "nao" << std::endl;

    if ( paymentscontrol.searchPayment( "bruna" ) )
        std::cout << "sim" << std::endl;
    else
        std::cout << "nao" << std::endl;


}
*/