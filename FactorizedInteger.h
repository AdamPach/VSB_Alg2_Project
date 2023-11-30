//
// Created by adamp on 11/29/2023.
//

#ifndef ALG_2_PROJECT_FACTORIZEDINTEGER_H
#define ALG_2_PROJECT_FACTORIZEDINTEGER_H


#include <vector>

class FactorizedInteger{
public:
    FactorizedInteger(std::vector<int>* input);
    FactorizedInteger(std::vector<int>* input, long long tmpSum);

    FactorizedInteger* Duplicate();
    void Multiply(FactorizedInteger * multiplyBy);
    bool Compare(FactorizedInteger * compare);

    long long GetSum();

    std::vector<int> * GetNumbers();
private:
    std::vector<int> factorizedInteger;
    long long tmpSum;
    int GetFirstIndexOf(int number);
};


#endif //ALG_2_PROJECT_FACTORIZEDINTEGER_H
