//
// Created by adamp on 11/29/2023.
//

#include <iostream>
#include "PowerDuplicityCounter.h"

/**
 * @brief Construct a new Power Duplicity Counter:: Power Duplicity Counter object
 * 
 * @param integerFactorize Dependency for Factorizing integer
 * @param map Storage for the Integers
 * @param maxA Max A
 * @param maxB Max B
 */
PowerDuplicityCounter::PowerDuplicityCounter(IntegerFactorize *integerFactorize, FactorizedIntegersMap * map, int maxA, int maxB)
{
    this->integerFactorize = integerFactorize;

    this->maxA = maxA;
    this->maxB = maxB;
    this->minA = 2;
    this->minB = 2;

    Map = map;
}


/**
 * @brief Count all values
 * 
 * @return int Amount of unique integers
 */
int PowerDuplicityCounter::Count()
{
    for(int i = minA; i <= maxA; i++)
    {
        FactorizedInteger baseNum = this->integerFactorize->FactorizeNumber(i);
        FactorizedInteger * tmpValue = baseNum.Duplicate();
        for(int j = 2; j <= maxB; j++)
        {
            tmpValue->Multiply(&baseNum);
            if(j >= minB)
            {
                Map->TryInsert(tmpValue);
            }
        }
    }
    return Map->Count();
}

PowerDuplicityCounter::~PowerDuplicityCounter()
{
    delete Map;
}
