#include <iostream>
#include <vector>


void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    std::vector<int> v;

    from_1_to_n(5, v);

    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }

}