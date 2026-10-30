#include <iostream>

int main(){

    double x, acc = 1;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        acc = acc * x;
        counter = counter + 1;
    }

    std::cout << x << "^" << n <<  " = " << acc << std::endl;

}