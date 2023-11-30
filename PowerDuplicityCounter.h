//
// Created by adamp on 11/29/2023.
//

#ifndef ALG_2_PROJECT_POWERDUPLICITYCOUNTER_H
#define ALG_2_PROJECT_POWERDUPLICITYCOUNTER_H

#include "IntegerFactorize.h"

class PowerDuplicityCounter {
public:
    PowerDuplicityCounter(IntegerFactorize* integerFactorize, int maxA, int maxB);

    std::vector<FactorizedInteger> Count();
private:
    std::vector<FactorizedInteger> * result;
    IntegerFactorize * integerFactorize;
    int minA;
    int minB;
    int maxA;
    int maxB;

    void TryPushBack(FactorizedInteger * newNumber);
};


#endif //ALG_2_PROJECT_POWERDUPLICITYCOUNTER_H
