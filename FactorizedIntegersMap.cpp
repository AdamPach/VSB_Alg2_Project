//
// Created by adamp on 11/30/2023.
//

#include "FactorizedIntegersMap.h"

FactorizedIntegersMap::FactorizedIntegersMap(int DefaultSize)
{
    Map = new std::vector<std::vector<FactorizedInteger*>*>(DefaultSize);
    for(int i = 0; i < Map->size(); i++)
        Map->at(i) = new std::vector<FactorizedInteger*>;
    this->defaultSize = DefaultSize;
}

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

