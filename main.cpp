#include "PrimeNumbersCounter.h"
#include "IntegerFactorize.h"


int main() {
    PrimeNumbersCounter primeNumbersCounter(1000);
    std::vector<int> primeNumbers = primeNumbersCounter.CountPrimeNumbers();
    IntegerFactorize factorizer(&primeNumbers);

    FactorizedInteger num = factorizer.FactorizeNumber(60);
    FactorizedInteger num2 = num.Duplicate();

    num.Multiply(&num2);

    return 0;
}
