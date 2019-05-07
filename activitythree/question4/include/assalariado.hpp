#pragma once

#include "funcionario.hpp"

class Assalariado : public Funcionario
{
public:

    Assalariado( std::string nome, 
                 int matricula,
                 double salario );

    ~Assalariado();

    double calculaSalario();

};