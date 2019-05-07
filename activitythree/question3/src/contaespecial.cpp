#include "contaespecial.hpp"

ContaEspecial::ContaEspecial( std::string nome, 
                              int numero, 
                              double saldo, 
                              double salario, 
                              int limite ):
        ContaCorrente{ nome, 
                       numero,
                       saldo,
                       salario,
                       limite }
{}

ContaEspecial::~ContaEspecial()
{}

double ContaEspecial::definirLimite()
{
    return ( getSalario() * 4);
}

