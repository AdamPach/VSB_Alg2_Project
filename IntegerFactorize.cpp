//
// Created by adamp on 11/29/2023.
//

#include "IntegerFactorize.h"

/**
 * @brief Construct a new Integer Factorize:: Integer Factorize object
 * 
 * @param primeNumbers List of the prime numbers
 */
IntegerFactorize::IntegerFactorize(std::vector<int> *primeNumbers)
{
    this->primeNumbers = primeNumbers;
}

/**
 * @brief Factorize the number
 * 
 * @param number Number to factorize
 * @return FactorizedInteger Count
 */
FactorizedInteger IntegerFactorize::FactorizeNumber(int number)
{
    std::vector<short> factorizedNumber;
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
