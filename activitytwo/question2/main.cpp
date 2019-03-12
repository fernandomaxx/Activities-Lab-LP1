#include <iostream>
#include <string>
#define MAIN 0

#include "person.h"
#include "address.h"

#if MAIN
int main()
{
    Person person1( "rafael", "988888888", Address( 56, "rua lol", "manda", "joão pessoa", "55555555") );
    person1.toString();
    std::cout << std::endl;
    Person person2( "lilian", "988555555", Address( 78, "rua do facao", "mangabeira", "joão pessoa", "58004444" ) );
    person2.toString();

}
#endif