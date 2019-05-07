#include "contacorrente.hpp"

ContaCorrente::ContaCorrente( std::string nome, 
                              int numero, 
                              double saldo, 
                              double salario, 
                              int limite ):
        Conta{ nome, numero, saldo },
        salario{ salario },
        limite{ limite }
{}

ContaCorrente::~ContaCorrente()
{}

double ContaCorrente::getSalario()
{
    return this->salario;
}

void ContaCorrente::setSalario( double salario )
{
    this->salario = salario;
}

int ContaCorrente::getLimite()
{
    return this->limite;
}

void ContaCorrente::setLimite( int limite )
{
    this->limite = limite;
}

double ContaCorrente::definirLimite()
{
    return ( getSalario() * 2);
}
