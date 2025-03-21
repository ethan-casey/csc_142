#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>

int i;
enum class CharacterClass{
    Warrior,
    Mage,
    Archer,
    Rouge
};

struct Character{
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};

std::string classToString(CharacterClass type) {
    switch(type) {
        case CharacterClass::Warrior: return "Warrior";
        case CharacterClass::Mage:    return "Mage";
        case CharacterClass::Archer:  return "Archer";
        case CharacterClass::Rouge:   return "Rogue";
        default:                      return "Unknown";
    }
}

int main(){
    Character characters[4]{
        {"Name: Ethan", CharacterClass::Warrior, 100, 20},
        {"Name: Dave", CharacterClass::Mage, 30, 30},
        {"Name: Johnny", CharacterClass::Archer, 45, 15},
        {"Name: Glimbo", CharacterClass::Rouge, 20, 50},
    };

    std::cout<<"Characters:\n";

    for (i=0; i<4; i++){
        std::cout<<characters[i].name<<"\t Class: "<<classToString(characters[i].type)<<"\t Health: "<<characters[i].health<<
        "\n";
    };

    int totalHealth = 0;
    for (i=0; i<4; i++){
        totalHealth += characters[i].health;
    };

    int avgHealth = (totalHealth/4);

    std::cout<<"Average Health: "<<avgHealth;



};