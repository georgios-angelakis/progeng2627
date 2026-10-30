#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 

    v.push_back(10);
    v.push_back(20);

    std::cout << v.at(0) << std::endl;
    // this will print 10

    std::cout << v.at(1) << std::endl;
    // this will print 20

    v.at(1) = 15;

    std::cout << v.at(1) << std::endl;
    // this will print 15

    v.at(2) = 2;
    // this will throw an exception

    std::cout << v.at(2) << std::endl;
    // this will not be executed

}