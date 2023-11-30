//
// Created by adamp on 11/29/2023.
//

#ifndef ALG_2_PROJECT_FACTORIZEDINTEGER_H
#define ALG_2_PROJECT_FACTORIZEDINTEGER_H


#include <vector>

class FactorizedInteger{
public:
    FactorizedInteger(std::vector<int>* input);

    FactorizedInteger Duplicate();
    void Multiply(FactorizedInteger * multiplyBy);
    bool Compare(FactorizedInteger * compare);

    std::vector<int> * GetNumbers();
private:
    std::vector<int> factorizedInteger;
    int GetFirstIndexOf(int number);
};


#endif //ALG_2_PROJECT_FACTORIZEDINTEGER_H
