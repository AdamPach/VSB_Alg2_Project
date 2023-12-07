//
// Created by adamp on 11/29/2023.
//

#ifndef ALG_2_PROJECT_POWERDUPLICITYCOUNTER_H
#define ALG_2_PROJECT_POWERDUPLICITYCOUNTER_H

#include "IntegerFactorize.h"
#include "FactorizedIntegersMap.h"


/**
 * @brief Serves as a wrapper of counting logic
 * 
 */
class PowerDuplicityCounter {
public:
    PowerDuplicityCounter(IntegerFactorize* integerFactorize, FactorizedIntegersMap * map,int maxA, int maxB);
    ~PowerDuplicityCounter();

    int Count();
private:
    IntegerFactorize * integerFactorize;
    FactorizedIntegersMap * Map;

    int minA;
    int minB;
    int maxA;
    int maxB;
};


#endif //ALG_2_PROJECT_POWERDUPLICITYCOUNTER_H
