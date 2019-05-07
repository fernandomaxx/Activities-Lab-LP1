#pragma once

#include "conta.hpp"

class Poupanca : public Conta
{
public:

    Poupanca( std::string nome, 
              int numero, 
              double saldo,
              int variacao, 
              double taxa_redimento );

    ~Poupanca();

    int getVariacao();

    void setVariacao( int variacao );

    double getTaxaRendimento();

    void setTaxaRendimento( double taxa );

    double render();

private:

    int variacao;
    double taxaRendimento;    
};