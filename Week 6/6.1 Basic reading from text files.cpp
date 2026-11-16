#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
int main(){
    std::ifstream infile;
    infile.open("input.txt");
    std::vector<std::string> v;
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();
    // Print words in reversed order
    for(int i = static_cast<int>(v.size()) - 1; i >= 0; i--){
        std::cout << v[i] << std::endl;
    }
    return 0;
}
