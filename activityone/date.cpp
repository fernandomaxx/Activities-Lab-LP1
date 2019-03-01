//
// Created by fernando on 18/02/19.
//

#include "date.h"

Date::Date( void )
{}

Date::Date( const int day,
            const int moth,
            const int year) :
        day { day },
        moth { moth },
        year { year }
{
    if ( !isValid( day, moth, year) )
        std::cout << "Data Invalida" << std::endl;
}

void Date::nextDate( void )
{

    if ( day < 28 )
        day++;
    else
    {
        if ( day == 30 && isThirty(moth) )
        {
            day = 1;
            moth++;
        }
        else if (day == 28 && moth == 2 )
        {
            day = 1;
            moth++;
        }
        else if ( day == 31 && !isThirty(moth))
        {
            if ( moth == 12 )
            {
                day = 1;
                moth = 1;
                year++;
            }
            else
            {
                day = 1;
                moth++;
            }
        }
        else
            day++;
    }
}

bool Date::isThirty( int moth )
{
    return moth == 4 or moth == 6 or moth == 9 or moth == 11;
}

void Date::showDate( void )
{
    std::cout << day << "/" << moth << "/" << year << std::endl;
}

bool Date::isValid( const int day,
                    const int moth,
                    const int year)
{
    return day < 32 and day > 0 and moth < 13 and moth > 0 and year >= 0;
}