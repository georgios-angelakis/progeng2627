#include <iostream>

int main(){
    // we prefix the variables in the main with main_ :
    int main_n1, main_n2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> main_n1 >> main_n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << main_n1 << std::endl;
    std::cout << "n2: " << main_n2 << std::endl;

    // we prefix the variables in function myswap with myswap_

    int myswap_n1 = main_n1, myswap_n2 = main_n2;

    // we simulate passing by copy by assigning the values

    // remember that in C++ the = means:
    // "copy the value on the right hand side
    // into the variable on the left hand side"

    // it doesn't mean the two variables will
    // always contain the same value!

    // then we do some operations on the myswap_ variables
    // (this doesn't involve in any way the main_ variables):

    int myswap_tmp;

    myswap_tmp = myswap_n1;
    myswap_n1 = myswap_n2;
    myswap_n2 = myswap_tmp;

    // then we print the values for main_n1 and main_n2
    // (that never changed):

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << main_n1 << std::endl;
    std::cout << "n2: " << main_n2 << std::endl;

    // again, this is just an analogy,
    // in particular here we could access the myswap_ variables
    // but if they are in a different function we can't;

    // in fact when the function terminates 
    // they don't even exist anymore!
}