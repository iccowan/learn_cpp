#include <iostream>

bool isPrime(int n) {
    if (n <= 2)
        return false;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main() {
    int numPrimes = 1;
    int i = 0;

    while (numPrimes < 1000) {
        if (isPrime(i)) {
            std::cout << i << std::endl;
            numPrimes++;
        }

        i++;
    }

    return 0;
}
