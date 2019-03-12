//
// Created by fernando on 11/03/19.
//

#ifndef ACTIVITYONE_PERSON_REGISTRATION_H
#define ACTIVITYONE_PERSON_REGISTRATION_H

#include <vector>

#include "person.h"


class PersonRegistration
{
public:

    void registerPerson( Person person );

    const std::vector<Person> &getPerson_list( void ) const;

    void setPerson_list( const std::vector<Person> &person_list );

private:

    std::vector< Person > person_list;
};


#endif //ACTIVITYONE_PERSON_REGISTRATION_H
