#include "comissionado.hpp"

Comissionado::Comissionado( std::string nome, 
                            int matricula,
                            double salario,
                            double vendas,
                            double comissao ):
        Funcionario{ nome, matricula, salario },
        vendasSemanais{ vendas },
        percentualComissao{ comissao }
{}

Comissionado::~Comissionado()
{}

double Comissionado::calculaSalario()
{
    return getSalario() + vendasSemanais * percentualComissao;
}

double Comissionado::getVendas()
{
    return this->vendasSemanais;
}

void Comissionado::setVendas( double vendas )
{
    this->vendasSemanais = vendas;
}

double Comissionado::getComissao()
{
    this->percentualComissao;
}

void Comissionado::setComissao( double comissao )
{
    this->percentualComissao = comissao;
}