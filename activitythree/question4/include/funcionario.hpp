#pragma once

#include <string>

class Funcionario
{
public:

    Funcionario( std::string nome, 
                 int matricula, 
                 double salario );

    virtual ~Funcionario();

    virtual double calculaSalario() = 0;

    std::string getNome();

    void setNome( std::string nome );

    int getMatricula();

    void setMatricula( int matricula );

    double getSalario();

    void setSalario( double salario );
    
protected:

    std::string nome;
    int matricula;
    double salario;
};