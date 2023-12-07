//
// Created by adamp on 11/29/2023.
//

#ifndef ALG_2_PROJECT_INTEGERFACTORIZE_H
#define ALG_2_PROJECT_INTEGERFACTORIZE_H


#include <vector>
#include "FactorizedInteger.h"

/**
 * @brief 
 * 
 */
class IntegerFactorize {
public:
    IntegerFactorize(std::vector<int> * primeNumbers);
    FactorizedInteger FactorizeNumber(int number);
private:
    std::vector<int> * primeNumbers;
};


#endif //ALG_2_PROJECT_INTEGERFACTORIZE_H
