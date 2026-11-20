#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin) {
    for(int i = 0; i < static_cast<int>(vin.size()); i++){
        if (vin[i] == s) {
            return i;
        }
    }
    return -1;
}

// Function declarations
void union_vector(const std::vector<std::string>& vin1,
                  const std::vector<std::string>& vin2,
                  std::vector<std::string>& vout) {
    for(auto elem : vin1){
        if (search_vector(elem,vin2) == -1){
            vout.push_back(elem);
        }
    }  
    for(auto elem : vin2){
        vout.push_back(elem);
    }  
}

void intersection_vector(const std::vector<std::string>& vin1,
                         const std::vector<std::string>& vin2,
                         std::vector<std::string>& vout){
    for(auto elem : vin1){
        if (search_vector(elem,vin2) != -1){
            vout.push_back(elem);
        }
    }
}

int main(){

    std::string inputfilename1;

    std::cout << "enter name of first input file" << std::endl;
    std::cin >> inputfilename1;

    std::ifstream infile;
    infile.open(inputfilename1);

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    std::vector<std::string> v1;

    while(infile >> tmp){
        v1.push_back(tmp);
    }

    infile.close();

    // Read second file
    std::string inputfilename2;

    std::cout << "enter name of second input file" << std::endl;
    std::cin >> inputfilename2;

    infile.open(inputfilename2);

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> v2;

    while(infile >> tmp){
        v2.push_back(tmp);
    }

    infile.close();

    // Compute union and intersection
    std::vector<std::string> v_union;
    std::vector<std::string> v_intersection;

    union_vector(v1, v2, v_union);
    intersection_vector(v1, v2, v_intersection);

    // Write union to file
    std::ofstream outfile;
    outfile.open("union.txt");

    if(!outfile.is_open()){
        std::cout << "error opening union.txt" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = 0; i < static_cast<int>(v_union.size()); i++){
        outfile << v_union[i] << std::endl;
    }

    outfile.close();

    // Write intersection to file
    outfile.open("intersection.txt");

    if(!outfile.is_open()){
        std::cout << "error opening intersection.txt" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = 0; i < static_cast<int>(v_intersection.size()); i++){
        outfile << v_intersection[i] << std::endl;
    }

    outfile.close();

    return 0;
}