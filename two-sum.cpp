#include <iostream>

int main (){
    double n1, n2, sum;

    std::cout << "please enter the first number" << std::endl;
    std::cin >> n1;

    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;

    sum = n1 + n2;

    std::cout << n1 << " + " << n2 << " = " << sum << std::endl;
}