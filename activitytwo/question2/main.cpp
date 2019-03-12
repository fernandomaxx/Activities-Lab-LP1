#include <iostream>
#include <string>
#define MAIN 1

#include "person.h"
#include "address.h"
#include "person_registration.h"

#if MAIN
int main()
{
    PersonRegistration pr;
    Person person1( "rafael", "988888888", Address( 56, "rua lol", "manda", "joão pessoa", "55555555") );
    Person person2( "lilian", "988555555", Address( 78, "rua do facao", "mangabeira", "joão pessoa", "58004444" ) );
    Person person3( "matheus" );

    pr.registerPerson( person1 );
    pr.registerPerson( person2 );
    pr.registerPerson( person3 );
    pr.getPerson_list().at(0).toString();
    std::cout << std::endl;
    pr.getPerson_list().at(1).toString();
    std::cout << std::endl;
    pr.getPerson_list().at(2).toString();



}
#endif