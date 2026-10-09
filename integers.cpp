#include <iostream>
#include <limits>

int main(){ 
    long long int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;
    // the operator % is not a percentage (bad choice of symbol, I know)
    // it computes the remainder of the integer division
    // between n and 2, which will be 
    // 0 if the number is even and
    // 1 if the number is odd

    std::cout << "in the following line 0 means even and 1 means odd" << std::endl;
    std::cout << rem << std::endl;

    std::cout << n << std::endl;

    std::cout << std::numeric_limits<long long int>::max() << std::endl;

    // later we will upgrade this example to instead print a message saying
    // "the number is even" or "the number is odd" 
    // depending on the value of the remainder
}