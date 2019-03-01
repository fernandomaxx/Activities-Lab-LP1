//
// Created by fernando on 18/02/19.
//

#ifndef ACTIVITYONE_DATE_H
#define ACTIVITYONE_DATE_H


class Date {
public:

    Date( void );

    Date( const int day,
          const int moth,
          const int year );

    void nextDate();

    bool isThirty( int moth );

    void showDate( void );

    bool isValid( const int day,
                  const int moth,
                  const int year);

    int day;
    int moth;
    int year;

};


#endif //ACTIVITYONE_DATE_H
