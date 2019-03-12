//
// Created by fernando on 11/03/19.
//

#include "person_registration.h"

void PersonRegistration::registerPerson( Person person )
{
    person_list.push_back( person );
}

const std::vector<Person> &PersonRegistration::getPerson_list( void ) const
{
    return person_list;
}

void PersonRegistration::setPerson_list( const std::vector<Person> &person_list )
{
    PersonRegistration::person_list = person_list;
}
