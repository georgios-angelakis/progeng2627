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

    double expected_sum = 2.5;
    

    std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;

    v = {2, -1.1, 7, -1.5};


    expected_sum = 6.4;

    std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;

}