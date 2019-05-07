#include <iostream>

#include "iconta.hpp"
#include "conta.hpp"
#include "conta_especial.hpp"

int main() {
    
    Conta *conta = new Conta( "fernando", "7777", 500, 200 );
    Conta *conta_especial = new ContaEspecial( "john", "8888", 2000, 800);

    conta->depositar( 800 );
    std::cout << conta->getSaldo() << std::endl;
    conta->sacar( 500 );
    std::cout << conta->getSaldo() << std::endl;
    conta->definirLimite();
    std::cout << conta->getLimite() << std::endl;

    conta_especial->depositar( 200 );
    std::cout << conta_especial->getSaldo() << std::endl;
    conta_especial->sacar( 500 );
    std::cout << conta_especial->getSaldo() << std::endl;
    conta_especial->definirLimite();
    std::cout << conta_especial->getLimite() << std::endl;
}