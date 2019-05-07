#include "conta.hpp"

Conta::Conta() 
{}

Conta::Conta( std::string nome, 
              std::string num_conta, 
              double salario_mensal, 
              double saldo ):
        nomeCliente{ nome },
        numeroConta{ num_conta },
        salarioMensal{ salario_mensal },
        saldo{ saldo }
{}

Conta::~Conta()
{}

std::string Conta::getNomeCliente() 
{ 
    return this->nomeCliente; 
}

void Conta::setNomeCliente( std::string nome ) 
{ 
    this->nomeCliente = nome; 
}

std::string Conta::getNumeroconta() 
{ 
    return this->numeroConta; 
}

void Conta::setNumeroConta( std::string num_conta ) 
{ 
    this->numeroConta = num_conta; 
}

double Conta::getSalarioMensal() 
{ 
    return this->salarioMensal; 
}

void Conta::setSalarioMensal( double salario_mensal ) 
{ 
    this->salarioMensal = salario_mensal; 
}

double Conta::getSaldo() 
{ 
    return this->saldo; 
}

void Conta::setSaldo( double saldo ) 
{ 
    this->saldo = saldo; 
}

double Conta::getLimite() 
{ 
    return this->limite; 
}

void Conta::setLimite( double limite ) 
{ 
    limite = limite; 
}

void Conta::definirLimite() 
{ 
    this->setLimite( getSalarioMensal() * 2 ); 
}

void Conta::sacar( double valor )
{
    if ( valor < getSaldo() )
    {
        setSaldo( getSaldo() - valor );
        std::cout << "Saque Realizado com sucesso" << std::endl;
    }
    else
        std::cout << "Saldo Insuficiente\n" << std::endl;
}
void Conta::depositar( double valor ) 
{ 
    setSaldo( getSaldo() + valor ); 
}