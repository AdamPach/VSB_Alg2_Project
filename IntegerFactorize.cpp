//
// Created by adamp on 11/29/2023.
//

#include "IntegerFactorize.h"

IntegerFactorize::IntegerFactorize(std::vector<int> *primeNumbers)
{
    this->primeNumbers = primeNumbers;
}

FactorizedInteger IntegerFactorize::FactorizeNumber(int number)
{
    std::vector<int> factorizedNumber;
    factorizedNumber.reserve(number);

    int numberCopy = number;

    for (int primeNumber : *primeNumbers)
    {
        if(numberCopy == primeNumber)
        {
            factorizedNumber.push_back(primeNumber);
            break;
        }
        while (numberCopy % primeNumber == 0)
        {
            factorizedNumber.push_back(primeNumber);
            numberCopy = numberCopy / primeNumber;
        }
    }

    return FactorizedInteger(&factorizedNumber);
}
