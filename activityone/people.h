//
// Created by fernando on 18/02/19.
//

#ifndef ACTIVITYONE_PEOPLE_H
#define ACTIVITYONE_PEOPLE_H


class People {
public:

    People( void );

    People( const std::string name );

    People( const std::string name,
            const int age,
            const int phone );

    std::string getName( void );

    void setName( std::string name );

    int getAge( void );

    void setAge( int age );

    int getPhone( void );

    void setPhone( int phone );

    void showPeople( void );


private:

    std::string name;
    int age;
    int phone;
};


#endif //ACTIVITYONE_PEOPLE_H
