#include <iostream>
#include "PrimeNumbersCounter.h"
#include "IntegerFactorize.h"
#include "PowerDuplicityCounter.h"


int main() {
    PrimeNumbersCounter primeNumbersCounter(1000);
    std::vector<int> primeNumbers = primeNumbersCounter.CountPrimeNumbers();
    IntegerFactorize factorizer(&primeNumbers);

    PowerDuplicityCounter powerDuplicityCounter(&factorizer, 100,100);

    std::vector<FactorizedInteger> result = powerDuplicityCounter.Count();

    std::cout << "Count of unique numbers: " << result.size() << std::endl;
    return 0;
}
