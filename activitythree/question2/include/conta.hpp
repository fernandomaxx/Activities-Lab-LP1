#pragma once

#include "iconta.hpp"
#include <iostream>

class Conta : public IConta
{
public:

    Conta();

    Conta( std::string nome, 
           std::string num_conta, 
           double salario_mensal, 
           double saldo );

    ~Conta();

    std::string getNomeCliente();

    void setNomeCliente( std::string nome );

    std::string getNumeroconta();

    void setNumeroConta( std::string num_conta );

    double getSalarioMensal();

    void setSalarioMensal( double salario_mensal );

    double getSaldo();

    void setSaldo( double saldo );

    double getLimite();

    void setLimite( double limite );

    virtual void definirLimite();

    void sacar( double valor ) override;

    void depositar( double valor ) override;

private:

    std::string nomeCliente, numeroConta;
    double salarioMensal, saldo, limite;
};