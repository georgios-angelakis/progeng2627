#include <iostream>

int main(){
    int a, b;
    int q=0;

    std::cin >> a >> b;

    if (a < 0 || b <= 0) {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    int r = a;

    while (r >= b) {
        r = r - b;
        q = q + 1;
    }

    std::cout << "Quotient: " << q << std::endl;
    std::cout << "Remainder: " << r << std::endl;

    return 0;
}