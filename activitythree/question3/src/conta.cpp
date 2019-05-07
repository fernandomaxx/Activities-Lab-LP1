#include "conta.hpp"

#include <iostream>
Conta::Conta( std::string nome, 
              int numero, 
              double saldo ):
        nomeCliente{ nome },
        numero{ numero },
        saldo{ saldo }
{}

Conta::~Conta()
{}

std::string Conta::getNome()
{
    return this->nomeCliente;
}

void Conta::setNome( std::string nome )
{
    this->nomeCliente = nome;
}

int Conta::getNumero()
{
    return this->numero;
}

void Conta::setNumero( int numero )
{
    this->numero = numero;
}

double Conta::getSaldo()
{
    return this->saldo;
}

void Conta::setSaldo( double saldo )
{
    this->saldo = saldo;
}

void Conta::sacar( double valor )
{
    if( getSaldo() < valor )
        std::cout << "Saldo Insuficiente!" << std::endl;
    else
        setSaldo( getSaldo() - valor );
}

void Conta::depositar( double valor )
{
    this->saldo += valor;
}

