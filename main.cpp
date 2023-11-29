#include "PrimeNumbersCounter.h"


int main() {
    PrimeNumbersCounter primeNumbersCounter(1000);
    std::vector<int> primeNumbers = primeNumbersCounter.CountPrimeNumbers();
    return 0;
}
