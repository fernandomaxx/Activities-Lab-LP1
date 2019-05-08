#include <iostream>
#include <funcionario.hpp>
#include <assalariado.hpp>
#include <sistemagerenciafolha.hpp>
#include <comissionado.hpp>
#include <horista.hpp>

int main()
{
    SistemaGerenciaFolha sist;

    Assalariado *assalariado = new Assalariado( "Rafael", 54321, 10000 );
    Comissionado *comissionado = new Comissionado( "Bruno", 12123, 1500, 50, 0.5 );
    Horista *horista = new Horista( "Nat", 13462, 1000, 50, 30 );
    Horista *horista1 = new Horista( "Impostor", 1362, 1000, 50, 30 );

    sist.setFuncionarios(assalariado);
    sist.setFuncionarios(comissionado);
    sist.setFuncionarios(horista);

    std::cout << sist.consultaSalarioFuncionario(assalariado) << std::endl;
    std::cout << sist.consultaSalarioFuncionario(comissionado) << std::endl;
    std::cout << sist.consultaSalarioFuncionario(horista) << std::endl;
    std::cout << sist.consultaSalarioFuncionario(horista1) << std::endl; // consultar para teste do tratamento de exceção
    std::cout << sist.calculaTotalFolha() << std::endl;
    return 0;
}