
#include <iostream>
#include <string>

int main(){

    double length_in, length_out, temp_in, temp_out;
    std::string unit_in, unit_out;

    const double mile_to_km = 1.609;
    const double fahr_to_cels = 5.0 / 9.0;

    // LENGTH CONVERSION

    std::cin >> length_in >> unit_in;

    bool valid_unit = true;

    if(unit_in == "km"){
        unit_out = "miles";
        length_out = length_in / mile_to_km;
    }
    else if((unit_in == "mile") || (unit_in == "miles")){
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }
    else{
        valid_unit = false;
    }

    if(valid_unit){
        std::cout << length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }

    // TEMPERATURE CONVERSION
    std::cin.clear();
    unit_in = "";
    std::cin >> temp_in >> unit_in;
    valid_unit = true;

    std::cout << "DEBUG: temp=" << temp_in
          << " unit=[" << unit_in << "]"
          << " valid=" << valid_unit << std::endl;

    if((unit_in == "F") || (unit_in == "f")){
        unit_out = "C";
        temp_out = (temp_in - 32) * fahr_to_cels;
    }
    else if((unit_in == "C") || (unit_in == "c")){
        unit_out = "F";
        temp_out = (temp_in / fahr_to_cels) + 32;
    }
    else{
        valid_unit = false;
    }

    if(valid_unit){
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }

    return 0;
}
