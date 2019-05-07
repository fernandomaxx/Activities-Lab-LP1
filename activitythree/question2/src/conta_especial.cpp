#include "conta_especial.hpp"

ContaEspecial::ContaEspecial( std::string nome,
                              std::string num_conta, 
                              double salario_mensal, 
                              double saldo ):
        Conta{ nome, num_conta, salario_mensal, saldo }
{}

ContaEspecial::~ContaEspecial()
{}

void ContaEspecial::definirLimite() 
{ 
    setLimite( getSalarioMensal() * 3 );
}