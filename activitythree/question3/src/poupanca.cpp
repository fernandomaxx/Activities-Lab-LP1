#include "poupanca.hpp"

Poupanca::Poupanca( std::string nome, 
                    int numero, 
                    double saldo,
                    int variacao, 
                    double taxa_redimento ):
        Conta { nome, numero, saldo },
        variacao{ variacao },
        taxaRendimento{ taxa_redimento }
{}

Poupanca::~Poupanca()
{}

int Poupanca::getVariacao()
{
    return this->variacao;
}

void Poupanca::setVariacao( int variacao )
{
    this->variacao = variacao;
}

double Poupanca::getTaxaRendimento()
{
    return this->taxaRendimento;
}

void Poupanca::setTaxaRendimento( double taxa )
{
    this->taxaRendimento = taxa;
}

double Poupanca::render()
{
    double rendimento;
    if( variacao == 51 )
        rendimento = saldo * taxaRendimento;
    if( variacao == 1 )
        rendimento = saldo * ( taxaRendimento + 0.5f );

    return rendimento;
}