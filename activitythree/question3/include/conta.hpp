#pragma once

#include <string>

class Conta
{
public:

    Conta( std::string nome, 
           int numero, 
           double saldo );

    virtual ~Conta();

    std::string getNome();

    void setNome( std::string nome );

    int getNumero();

    void setNumero( int numero );

    double getSaldo();

    void setSaldo( double saldo );

    void sacar( double valor );

    void depositar( double valor );

protected:

    std::string nomeCliente;
    int numero;
    double saldo;
};