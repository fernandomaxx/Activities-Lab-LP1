#pragma once

#include "funcionario.hpp"

class Horista : public Funcionario
{
public:

    Horista( std::string nome, 
             int matricula,
             double salario,
             double salarioPorHora,
             double horasTrabalhadas );

    ~Horista();

    double calculaSalario();

    double getSalarioPorHora();

    void setSalarioPorHora( double salario_hora );

    double getHoras();

    void setHoras( double horas );

private:

    double salarioPorHora;
    double horasTrabalhadas;   
};