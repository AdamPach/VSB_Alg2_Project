cmake_minimum_required(VERSION 3.26)
project(ALG_2_Project)

set(CMAKE_CXX_STANDARD 17)

add_executable(ALG_2_Project main.cpp
    PrimeNumbersCounter.cpp
    PrimeNumbersCounter.h
        IntegerFactorize.cpp
        IntegerFactorize.h
        FactorizedInteger.cpp
        FactorizedInteger.h
        PowerDuplicityCounter.cpp
        PowerDuplicityCounter.h
        FactorizedIntegersMap.cpp
        FactorizedIntegersMap.h
)
