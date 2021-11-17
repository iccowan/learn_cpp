#include <iostream>

int fib(int n) {
    if (n == 0 || n == 1)
        return 1;

    int mem [n + 1];
    mem[0] = 1;
    mem[1] = 1;

    for (int i = 2; i <= n; i++)
        mem[i] = mem[i - 1] + mem[i - 2];

    return mem[n];
}

int main() {
    for (int i = 0; i < 10; i++)
        std::cout << i << "th Fibonacci number: " << fib(i) << std::endl;

    return 0;
}
