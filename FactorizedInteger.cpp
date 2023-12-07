//
// Created by adamp on 11/29/2023.
//

#include "FactorizedInteger.h"

/**
 * @brief Construct a new Factorized Integer:: Factorized Integer object
 * 
 * @param input Vector of numbers, represents a factorized integer
 */
FactorizedInteger::FactorizedInteger(std::vector<short> *input)
{
    factorizedInteger.reserve(input->size());

    for(auto num : *input)
    {
        factorizedInteger.push_back(num);
    }

    long long sum = 0;
    for(auto num : factorizedInteger)
        sum += num;
    tmpSum = sum;
}

/**
 * @brief Construct a new Factorized Integer:: Factorized Integer object
 * 
 * @param input Vector of numbers, represents a factorized integer
 * @param tmpSum Sum of numbers in input, it reduce a time for counting, but it assume that you provide correct number
 */
FactorizedInteger::FactorizedInteger(std::vector<short> *input, long long tmpSum)
{
    factorizedInteger.reserve(input->size());

    for(auto num : *input)
    {
        factorizedInteger.push_back(num);
    }

    this->tmpSum = tmpSum;
}

/**
 * @brief Create FactorizedInteger with same values
 * 
 * @return FactorizedInteger* 
 */
FactorizedInteger* FactorizedInteger::Duplicate()
{
    return new FactorizedInteger(&factorizedInteger, tmpSum);
}

/**
 * @brief Multiply this Integer by another
 * 
 * @param multiplyBy Multiply By
 */
void FactorizedInteger::Multiply(FactorizedInteger *multiplyBy)
{
    int lastNum = 0, lastIndex;

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
    tmpSum += multiplyBy->GetSum();
}

/**
 * @brief Get first index of searched number, 
 * 
 * @param number Searched number
 * @return int Index
 */
int FactorizedInteger::GetFirstIndexOf(int number)
{
    for(int i = 0; i < factorizedInteger.size(); i++)
    {
        if(number == factorizedInteger.at(i))
            return i;
    }
    return -1;
}

/**
 * @brief Return reference on the vector of numbers
 * 
 * @return std::vector<short>* Reference 
 */
std::vector<short> *FactorizedInteger::GetNumbers()
{
    return &factorizedInteger;
}

/**
 * @brief Compare two numbers and decides if they are same or not
 * 
 * @param compare Integer to compare
 * @return true They are equal
 * @return false They are not equal
 */
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

/**
 * @brief Get sum of the integers
 * 
 * @return long long Sum
 */
long long FactorizedInteger::GetSum()
{
    return tmpSum;
}