#pragma once

#include "contacorrente.hpp"

class ContaEspecial : public ContaCorrente
{
public:

    ContaEspecial( std::string nome, 
                   int numero, 
                   double saldo, 
                   double salario, 
                   int limite );

    ~ContaEspecial();                   

    double definirLimite();
};