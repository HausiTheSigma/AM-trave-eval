#include <vector>
#include <string>
#include <iostream>
#include <algorithm>



struct Pet
{
    std::string name;
    double value;
};


std::vector<Pet> pets=
{
    {"Bat Dragon", 864},
    {"Shadow Dragon", 785},
    {"Crow", 108},
    {"Turtle", 14},
    {"Cow", 11}
};

Pet findPet(std::string pet){
    for(const Pet& current : pets){
        if(current.name == pet){
            return(current);
        }
    }
    throw std::runtime_error("pet not found: " + pet);
}

int main(){
    double profit{0};
    std::string pet;
    while(std::getline(std::cin, pet) && pet != "0"){
        profit -= findPet(pet).value;
        }
    while(std::getline(std::cin, pet) && pet != "0"){
        profit += findPet(pet).value;
        }
    std::cout << "Total Profit "<< profit << std::endl;
    
    std::cout << "Press Enter to close...";
    std::cin.get();
}