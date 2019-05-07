#include "horista.hpp"

Horista::Horista( std::string nome, 
                  int matricula,
                  double salario,
                  double salarioPorHora,
                  double horasTrabalhadas ):
        Funcionario{ nome, matricula, salario },
        salarioPorHora{ salarioPorHora },
        horasTrabalhadas{ horasTrabalhadas }
{}

Horista::~Horista()
{}

double Horista::calculaSalario()
{
    return getSalario() + salarioPorHora * horasTrabalhadas;
}

double Horista::getSalarioPorHora()
{
    return this->salarioPorHora;
}

void Horista::setSalarioPorHora( double salario_hora ) 
{ 
	this->salarioPorHora = salario_hora; 
}

double Horista::getHoras()
{
    return this->horasTrabalhadas;
}

void Horista::setHoras( double horas ) 
{ 
	this->horasTrabalhadas = horas; 
}