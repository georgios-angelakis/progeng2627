#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile;
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();

    // Open output file
    std::ofstream outfile;
    outfile.open("output.txt");

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    // Print vector in reversed order to output.txt
    for(int i = static_cast<int>(v.size()) - 1; i >= 0; i--){
        outfile << v[i] << std::endl;
    }

    outfile.close();

    return 0;
}