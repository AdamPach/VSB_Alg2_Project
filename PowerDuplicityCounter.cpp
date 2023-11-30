//
// Created by adamp on 11/29/2023.
//

#include "PowerDuplicityCounter.h"

PowerDuplicityCounter::PowerDuplicityCounter(IntegerFactorize *integerFactorize, int maxA, int maxB)
{
    this->integerFactorize = integerFactorize;

    this->result = nullptr;

    this->maxA = maxA;
    this->maxB = maxB;
    this->minA = 2;
    this->minB = 2;
}

std::vector<FactorizedInteger> PowerDuplicityCounter::Count()
{
    if(result != nullptr)
    {
        return std::vector<FactorizedInteger>(*result);
    }

    result = new std::vector<FactorizedInteger>;
    result->reserve(maxA * maxB);
    int count = 0;

    for(int i = minA; i <= maxA; i++)
    {
        FactorizedInteger baseNum = this->integerFactorize->FactorizeNumber(i);
        FactorizedInteger tmpValue = baseNum.Duplicate();
        for(int j = 2; j <= maxB; j++)
        {
            tmpValue.Multiply(&baseNum);
            if(j >= minB)
            {
                TryPushBack(&tmpValue);
            }
        }
    }

    return std::vector<FactorizedInteger>(*result);;
}

void PowerDuplicityCounter::TryPushBack(FactorizedInteger *newNumber)
{
    for(auto number : *result)
    {
        if(number.Compare(newNumber))
            return;
    }
    result->push_back(newNumber->Duplicate());
}
