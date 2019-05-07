#include "assalariado.hpp"

Assalariado::Assalariado( std::string nome, 
                          int matricula,
                          double salario):
        Funcionario{ nome, matricula, salario }
{}

Assalariado::~Assalariado()
{}

double Assalariado::calculaSalario() 
{ 
    return this->salario; 
}