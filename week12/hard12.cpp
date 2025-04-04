#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include <ctime>


int rollDice(int sides) {
    return (rand() % sides) + 1;
}


int main(){
    srand(static_cast<unsigned>(time(0)));

    int hero_hp = 20;
    int goblin_hp = 12;
    int hero_AC = 15;
    int goblin_AC = 10;
    int die_result;

    std::cout<<"The battle between the hero and the goblin begins now!\n";
    std::cout<<"Round 1 starts:\n";

    while (hero_hp > 0 && goblin_hp > 0) {
        std::cout << "\nThe hero attacks!";
        die_result = rollDice(20);
        std::cout << " The hero rolls a " << die_result;
        if (die_result >= goblin_AC) {
            int damage = rollDice(8);
            std::cout << "\nYou hit the goblin for " << damage << " damage!";
            goblin_hp -= damage;
            std::cout << "\nThe goblin has " << goblin_hp << " HP remaining.";
        } else {
            std::cout << "\nYour attack misses!";
        }
    
        if (goblin_hp > 0) {
            std::cout << "\nThe goblin attacks!";
            die_result = rollDice(20);
            std::cout << " The goblin rolls a " << die_result;
            if (die_result >= hero_AC) {
                int damage = rollDice(4);
                std::cout << "\nYou have been hit for " << damage << " damage!";
                hero_hp -= damage;
                std::cout << "\nYou have " << hero_hp << " HP remaining.";
            } else {
                std::cout << "\nYou evade the attack!";
            }
        } else {
            std::cout << "\nYou defeated the goblin!";
        }
    }

}