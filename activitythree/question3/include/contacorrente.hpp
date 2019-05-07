#pragma once

#include "conta.hpp"

class ContaCorrente : public Conta
{
public:

    ContaCorrente( std::string nome, 
                   int numero, 
                   double saldo, 
                   double salario, 
                   int limite );

    ~ContaCorrente();                   

    double getSalario();                   

    void setSalario( double salario );

    int getLimite();

    void setLimite( int limite );
    
    double definirLimite();

protected:

    double salario;
    int limite;
};