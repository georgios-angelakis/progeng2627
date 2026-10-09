#include <iostream>
#include <string>
// this includes the header for text variables

int main(){

    std::string user_name;

    std::string user_surname;

    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;

    std::cout << "what is your surname?" << std::endl;
    std::cin >> user_surname;

    std::cout << "hello, " <<user_name << " " << user_surname << std::endl;
}