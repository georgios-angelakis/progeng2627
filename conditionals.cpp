#include <iostream>

int main(){
    int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;

    std::cout << "0 means even and 1 means odd:" << std::endl;
    std::cout << rem << std::endl;

    if(rem == 0){
        // if remainder is 0, if branch
        std::cout << "the number is even" << std::endl;
    }
    else{
        // otherwise print odd, else branch
        std::cout << "the number is odd" << std::endl;
    }
}