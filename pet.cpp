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
    double profit{0};
    std::string Pet;
    while(std::getline(std::cin, Pet) && Pet != "0"){
        profit -= findPet(Pet).value;
        }
    while(std::getline(std::cin, Pet) && Pet != "0"){
        profit += findPet(Pet).value;
        }
    std::cout << "Total Profit "<< profit << std::endl;
    
    std::cout << "Press Enter to close...";
    std::cin.get();
}