#include <iostream>

int main(){
    int n;

    std::cin >> n; // initialisation

    for( ; n != 0; ){ // condition
        std::cout << n << std::endl;
        std::cin >> n; // update
    }
}