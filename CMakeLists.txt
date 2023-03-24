cmake_minimum_required(VERSION 3.24)
project(practice)

set(CMAKE_CXX_STANDARD 14)

add_executable(practice_2_1
        "practice 2/practice 2.1/practice 2.1.cpp" "practice 2/practice 2.1/Triangle.h" "practice 2/practice 2.1/Triangle.cpp")

add_executable(practice_2_2
        "practice 2/practice 2.2/practice 2.2.cpp" "practice 2/practice 2.2/Circle.cpp" "practice 2/practice 2.2/Circle.h")

add_executable(practice_2_3
        "practice 2/practice 2.3/practice 2.3.cpp" "practice 2/practice 2.3/figure.cpp" "practice 2/practice 2.3/figure.h")

add_executable(practice_3_1
        "practice 3/practice 3.1/practice 3.1.cpp" "practice 3/practice 3.1/eq2.cpp" "practice 3/practice 3.1/eq2.h")

add_executable(practice_3_2
        "practice 3/practice 3.2/practice 3.2.cpp" "practice 3/practice 3.2/rational.cpp" "practice 3/practice 3.2/rational.h")

add_executable(practice_3_3
        "practice 3/practice 3.3/practice 3.3.cpp" "practice 3/practice 3.3/rational.cpp" "practice 3/practice 3.3/rational.h")

add_executable(practice_6_1
        "practice 6/practice 6.1/practice 6.1.cpp" "practice 6/practice 6.1/Cone.cpp" "practice 6/practice 6.1/Cone.h")

add_executable(practice_6_2
        "practice 6/practice 6.2/practice 6.2.cpp" "practice 6/practice 6.2/Cone.cpp" "practice 6/practice 6.2/Cone.h")

add_executable(practice_6_3
        "practice 6/practice 6.3/practice 6.3.cpp")

set(CMAKE_EXE_LINKER_FLAGS "-static")


