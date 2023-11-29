//
// Created by adamp on 11/29/2023.
//

#include "PrimeNumbersCounter.h"

PrimeNumbersCounter::PrimeNumbersCounter(int maxNumber)
{
    this->maxNumber = maxNumber;
}

std::vector<int> PrimeNumbersCounter::CountPrimeNumbers()
{
    std::vector<int> primeNumbers;
    for (int i = 2; i <= this->maxNumber; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            primeNumbers.push_back(i);
        }
    }
    return primeNumbers;
}