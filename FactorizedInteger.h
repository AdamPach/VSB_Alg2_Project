//
// Created by adamp on 11/29/2023.
//

#ifndef ALG_2_PROJECT_FACTORIZEDINTEGER_H
#define ALG_2_PROJECT_FACTORIZEDINTEGER_H


#include <vector>

/**
 * @brief Represent a factorized integer
 * 
 */
class FactorizedInteger{
public:
    FactorizedInteger(std::vector<short>* input);
    FactorizedInteger(std::vector<short>* input, long long tmpSum);

    FactorizedInteger* Duplicate();
    void Multiply(FactorizedInteger * multiplyBy);
    bool Compare(FactorizedInteger * compare);

    long long GetSum();

    std::vector<short> * GetNumbers();
private:
    std::vector<short> factorizedInteger;
    long long tmpSum;
    int GetFirstIndexOf(int number);
};


#endif //ALG_2_PROJECT_FACTORIZEDINTEGER_H
