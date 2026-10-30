#include <iostream>
int main(){
    int i, n = 0;
    std::cin >> i;
    for(; i < 10; i++){
        if((i % 3) == 1){
            i++;
        }
        n++;
    }
    std::cout << n << std::endl;
}