#include <iostream>
#include <vector>

void f(const std::vector<int>& v){
    v.push_back(2);
}

int main(){
    std::vector<int> v1;
    v1.push_back(1);
    f(v1);
    std::cout << v1[0] << std::endl;
}