#include <vector>
#include <string>
#include <iostream>
#include <algorithm>



struct pet
{
    std::string name;
    double value;
};


std::vector<pet> pets=
{
    {"Bat Dragon", 864},
    {"Shadow Dragon", 785},
    {"Crow", 108},
    {"Turtle", 14},
    {"Cow", 11}
};

pet findPet(std::string Pet){
    for(const pet& current : pets){
        if(current.name == Pet){
            return(current);
        }
    }
    throw std::runtime_error("pet not found: " + Pet);
}

int main(){

    std::string pet1;
    std::string pet2;
    std::getline(std::cin, pet1);
    std::getline(std::cin, pet2);
    pet peta = findPet(pet1);
    pet petb = findPet(pet2);

    std::cout << "Total Value: "<< peta.value + petb.value << std::endl;
    std::cin.get();
}