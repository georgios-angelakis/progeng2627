
// still incomplete
#include <iostream>

int main(){
    int year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> year;

    if( (year % 4) == 0){ 
        // if multiple of 4

        if( (year % 100) == 0){ 
            // if (also) multiple of 100
            
            if( (year % 400) == 0){
                // if (also) multiple of 400

                std::cout << "is a leap year" << std::endl;

            }
            else{
                std::cout << "is not a leap year" << std::endl;

            }
            

        }
        else{ 
            // if not multiple of 100
            // (but still multiple of 4)
            std::cout << "is a leap year" << std::endl;
            // ...

        }
    }
    else{
        // if not multiple of 4
        std::cout << "not a leap year" << std::endl;
    }
}