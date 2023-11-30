//
// Created by adamp on 11/29/2023.
//

#include "FactorizedInteger.h"

FactorizedInteger::FactorizedInteger(std::vector<int> *input)
{
    factorizedInteger.reserve(input->size());

    for(auto num : *input)
    {
        factorizedInteger.push_back(num);
    }
}


FactorizedInteger FactorizedInteger::Duplicate()
{
    return FactorizedInteger(&factorizedInteger);
}

void FactorizedInteger::Multiply(FactorizedInteger *multiplyBy)
{
    int lastNum = 0, lastIndex ;

    for(auto number : *(multiplyBy->GetNumbers()))
    {
        if(lastNum != number)
        {
            lastNum = number;
            lastIndex = GetFirstIndexOf(number);
        }

        if(lastIndex == -1)
            factorizedInteger.push_back(number);
        else
            factorizedInteger.insert(factorizedInteger.begin() + lastIndex, number);
    }
}

int FactorizedInteger::GetFirstIndexOf(int number)
{
    for(int i = 0; i < factorizedInteger.size(); i++)
    {
        if(number == factorizedInteger.at(i))
            return i;
    }
    return -1;
}

std::vector<int> *FactorizedInteger::GetNumbers()
{
    return &factorizedInteger;
}

bool FactorizedInteger::Compare(FactorizedInteger *compare)
{
    if(compare->GetNumbers()->size() != this->factorizedInteger.size())
        return false;

    for(int i = 0; i < factorizedInteger.size(); i++)
    {
        if(compare->GetNumbers()->at(i) != factorizedInteger.at(i))
            return false;
    }
    return true;
}
