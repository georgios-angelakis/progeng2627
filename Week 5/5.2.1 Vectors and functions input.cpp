#include <iostream>
#include <vector>
#include <cmath>

double sum_vector(const std::vector<double>& vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v{3, 0.5, -1};
    // we can initialise vectors like this (no = needed)

    double expected_sum = 2.5;
    // we may think of writing:
    // std::cout << (sum_vector(v) == 2.5) << std::endl;
    // but we shouldn't compare non-integers using ==
    // as the representation can be approximated

    std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;
    // the test will be passed if we see 0 or a very small number

    v = {2, -1.1, 7, -1.5};
    // we can also assign values like this

    expected_sum = 6.4;

    std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;

}