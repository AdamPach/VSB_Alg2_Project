//
// Created by adamp on 11/29/2023.
//

#ifndef ALG_2_PROJECT_PRIMENUMBERSCOUNTER_H
#define ALG_2_PROJECT_PRIMENUMBERSCOUNTER_H


#include <vector>

class PrimeNumbersCounter {
public:
    PrimeNumbersCounter(int maxNumber);
    std::vector<int> CountPrimeNumbers();
private:
    int maxNumber;
};


#endif //ALG_2_PROJECT_PRIMENUMBERSCOUNTER_H
