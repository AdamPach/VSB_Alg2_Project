#include <iostream>
#include "PrimeNumbersCounter.h"
#include "IntegerFactorize.h"
#include "PowerDuplicityCounter.h"

int main() {

    int maxA = 0, maxB = 0;

    std::cout << "Enter maximum A value: ";
    std::cin >> maxA;

    std::cout << "Enter maximum B value: ";
    std::cin >> maxB;

    PrimeNumbersCounter primeNumbersCounter(1000);
    std::vector<int> primeNumbers = primeNumbersCounter.CountPrimeNumbers();
    IntegerFactorize factorizer(&primeNumbers);

    PowerDuplicityCounter powerDuplicityCounter(
            &factorizer,
            new FactorizedIntegersMap(30000),
            maxA,
            maxB);

    int count = powerDuplicityCounter.Count();

    std::cout << "Count of unique numbers: " << count << std::endl;
    return 0;
}
