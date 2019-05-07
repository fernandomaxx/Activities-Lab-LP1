#pragma once

#include <funcionario.hpp>

class Comissionado : public Funcionario
{
public:

    Comissionado( std::string nome, 
                  int matricula,
                  double salario,
                  double vendas,
                  double comissao );

    ~Comissionado();

    double calculaSalario();

    double getVendas();

    void setVendas( double vendas );

    double getComissao();

    void setComissao( double comissao );

private:

    double vendasSemanais;
    double percentualComissao;
};