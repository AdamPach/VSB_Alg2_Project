//
// Created by adamp on 11/30/2023.
//

#ifndef ALG_2_PROJECT_FACTORIZEDINTEGERSMAP_H
#define ALG_2_PROJECT_FACTORIZEDINTEGERSMAP_H

#include "FactorizedInteger.h"

class FactorizedIntegersMap{
public:
    FactorizedIntegersMap(int DefaultSize);
    ~FactorizedIntegersMap();

    bool TryInsert(FactorizedInteger * toInsert);
    int Count();
private:
    std::vector<std::vector<FactorizedInteger*>*>* Map;
    int defaultSize;
};


#endif //ALG_2_PROJECT_FACTORIZEDINTEGERSMAP_H
