#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <ctime>

int roll_attack(){
    return rand() % 10 + 1;
}
int roll_defense(){
    return rand() % 10 + 1;
}

bool is_hit(int attack, int defense){
    return attack > defense;
}

void duel(){
    int obiwan_win = 0;
    int maul_win = 0;

    for (int i = 1; i <= 5; ++i){
        int attack = roll_attack();
        int defense = roll_defense();

        std::cout<<"Round "<<i<<"! Obiwan attacks with "<<attack<<", and Maul defends with a "<<defense;
        if(attack > defense){
            std::cout<<" -HIT\n";
            ++obiwan_win;
        }
        else{
            std::cout<<" -MISS\n";
            ++maul_win;
        }
    };
    std::cout<<"Duel ends!\nObiwan: "<<obiwan_win<<" wins\nDarth Maul: "<<maul_win<<" wins\n";
    if(obiwan_win > maul_win){
        std::cout<<"Obiwan wins!";
    }
    else if(maul_win > obiwan_win){
        std::cout<<"Darth Maul wins!";
    }
    else{
        std::cout<<"Tie!";
    }
}

int main(){
    srand(static_cast<unsigned>(time(0)));

    duel();

}