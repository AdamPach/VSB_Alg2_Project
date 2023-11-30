//
// Created by adamp on 11/29/2023.
//

#include <iostream>
#include "PowerDuplicityCounter.h"

PowerDuplicityCounter::PowerDuplicityCounter(IntegerFactorize *integerFactorize, FactorizedIntegersMap * map, int maxA, int maxB)
{
    this->integerFactorize = integerFactorize;

    this->maxA = maxA;
    this->maxB = maxB;
    this->minA = 2;
    this->minB = 2;

    Map = map;
}

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
