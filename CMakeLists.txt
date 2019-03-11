cmake_minimum_required(VERSION 3.13)
project(activityone)

set(CMAKE_CXX_STANDARD 14)

add_executable( activityone activityone/main.cpp
                activitytwo/question2/person.cpp activitytwo/question2/person.h activitytwo/question2/address.cpp activitytwo/question2/address.h activitytwo/question2/person_registration.cpp activitytwo/question2/person_registration.h activitytwo/question2/main.cpp activitytwo/question3/employee.cpp activitytwo/question3/employee.h activitytwo/question3/consultant.cpp activitytwo/question3/consultant.h activitytwo/question3/main.cpp activitytwo/question4/geometric_figure.cpp activitytwo/question4/geometric_figure.h activitytwo/question4/circle.cpp activitytwo/question4/circle.h activitytwo/question4/square.cpp activitytwo/question4/square.h activitytwo/question4/triangle.cpp activitytwo/question4/triangle.h activitytwo/question5/worker.cpp activitytwo/question5/worker.h activitytwo/question5/salaried_worker.cpp activitytwo/question5/salaried_worker.h activitytwo/question5/hourly_worker.cpp activitytwo/question5/hourly_worker.h)