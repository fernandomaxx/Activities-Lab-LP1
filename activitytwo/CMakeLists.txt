cmake_minimum_required(VERSION 3.13)
project(activitytwo)

set(CMAKE_CXX_STANDARD 14)

add_executable(activitytwo question2/address.cpp
        question2/address.h
        question2/main.cpp
        question2/person.cpp
        question2/person.h
        question2/person_registration.cpp
        question2/person_registration.h
        question3/consultant.cpp
        question3/consultant.h
        question3/employee.cpp
        question3/employee.h
        question3/main.cpp
        question4/circle.cpp
        question4/circle.h
        question4/geometric_figure.cpp
        question4/geometric_figure.h
        question4/square.cpp
        question4/square.h
        question4/triangle.cpp
        question4/triangle.h
        question5/hourly_worker.cpp
        question5/hourly_worker.h
        question5/salaried_worker.cpp
        question5/salaried_worker.h
        question5/worker.cpp
        question5/worker.h
        question4/main.cpp
        question5/main.cpp
        question1/main.cpp
        question1/order.cpp
        question1/order.h
        question1/restaurant.cpp
        question1/restaurant.h
        question1/restaurant_table.cpp
        question1/restaurant_table.h)

