//
// Created by adamp on 11/29/2023.
//

#include "PrimeNumbersCounter.h"

/**
 * @brief Construct a new Prime Numbers Counter:: Prime Numbers Counter object
 * 
 * @param maxNumber Maximum searched Prime Number
 */
PrimeNumbersCounter::PrimeNumbersCounter(int maxNumber)
{
    this->maxNumber = maxNumber;
}

/**
 * @brief Count all prime numbers
 * 
 * @return std::vector<int> List of prime numbers
 */
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