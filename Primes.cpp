//
// Created by Ian Cowan on 1/9/20.
//

#include <iostream>

class Primes
{
public:
    static void print(int maxInt)
    {
        std::cout << "Prime Numbers:" << std::endl;
        for(int i = 2; i < maxInt; i++)
        {
            bool isPrime = true;
            for(int j = i - 1; j > 1; j--) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime) std::cout << i << std::endl;
        }
    }
};

int main()
{
    // Specify the maximum number that could possibly be printed
    Primes::print(100000);
}