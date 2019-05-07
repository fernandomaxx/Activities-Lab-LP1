#pragma once

#include "conta.hpp"

class ContaEspecial : public Conta
{
  public:

    ContaEspecial( std::string nome, 
                   std::string num_conta, 
                   double salario_mensal, 
                   double saldo );

    ~ContaEspecial();

    void definirLimite() override;
};
