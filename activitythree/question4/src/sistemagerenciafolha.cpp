#include "sistemagerenciafolha.hpp"

void SistemaGerenciaFolha::setFuncionarios( Funcionario *func )
{
    funcionarios.push_back(func);
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(Funcionario *func)
{
    double salario = -1;
    try
    {
        for(Funcionario *f : funcionarios){
            if(f->getMatricula() == func->getMatricula())
                salario = f->calculaSalario();
        }

        if ( salario < 0 )
            throw 1;
    }
    catch ( const int erro )
    {
        std::cout << "Funcionario não encontrado\n";
    }
    return salario;
}

double SistemaGerenciaFolha::calculaTotalFolha()
{
    double total;

    for( Funcionario* f : funcionarios ){
            total += f->calculaSalario();
    }

    try
    {
        if ( total > 10000 )
            throw 1;
    }
    catch( const int erro )
    {
        std::cerr << "Orcamento estourado" << '\n';
    }
    
    return total;
}