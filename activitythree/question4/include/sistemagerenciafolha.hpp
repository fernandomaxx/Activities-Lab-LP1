#pragma once

#include <iostream>
#include "funcionario.hpp"
#include <vector>

class SistemaGerenciaFolha
{
public:

    void setFuncionarios( Funcionario *func );

    double calculaTotalFolha();
    
    double consultaSalarioFuncionario( Funcionario *func );

private:
    std::vector< Funcionario* > funcionarios;
};