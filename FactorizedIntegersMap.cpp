//
// Created by adamp on 11/30/2023.
//

#include "FactorizedIntegersMap.h"

/**
 * @brief Construct a new Factorized Integers Map:: Factorized Integers Map object
 * 
 * @param DefaultSize Set a maximal ammount in the Map
 */
FactorizedIntegersMap::FactorizedIntegersMap(int DefaultSize)
{
    Map = new std::vector<std::vector<FactorizedInteger*>*>(DefaultSize);
    for(int i = 0; i < Map->size(); i++)
        Map->at(i) = new std::vector<FactorizedInteger*>;
    this->defaultSize = DefaultSize;
}

/**
 * @brief Try insert a new integer to the map. The integer is inserted when it's not already in the map
 * 
 * @param toInsert Integer to insert
 * @return true When inserted integer is not in the map and new Integer is inserted
 * @return false When inserted integer is already in the map
 */
bool FactorizedIntegersMap::TryInsert(FactorizedInteger *toInsert)
{
    std::vector<FactorizedInteger*>* chain = Map->at(toInsert->GetSum() % defaultSize);

    for(FactorizedInteger* compared : *chain)
    {
        if(compared->Compare(toInsert))
            return false;
    }
    chain->push_back(toInsert->Duplicate());
    return true;
}

/**
 * @brief Destroy the Factorized Integers Map:: Factorized Integers Map object
 * 
 */
FactorizedIntegersMap::~FactorizedIntegersMap()
{
    for(auto chain : *Map)
    {
        for(auto integer : *chain)
        {
            delete integer;
        }
        delete chain;
    }
    delete Map;
}

/**
 * @brief Return a exact amount of the Integers in the map
 * 
 * @return int 
 */
int FactorizedIntegersMap::Count()
{
    int count = 0;

    for(auto chain : *Map)
    {
        for(auto integer : *chain)
        {
            count++;
        }
    }

    return count;
}

