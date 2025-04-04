#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>

int main(){

    int wallet = 100;
    int potion_cost = 10;
    int potion;

    std::cout<<"Welcome to the potion shop. Potions are "<<potion_cost<<" gold each. ";
    std::cout<<"How many potions would you like to buy?: ";
    std::cin>>potion;

    int total_cost = potion * potion_cost;

    if(total_cost > wallet){
        std::cout<<"\nYou are too poor to buy that many potions! Leave my shop swindler!";
    }
    else{
        wallet = wallet - total_cost;
        std::cout<<"\nThanks for your business!";
        std::cout<<"\nYour remaining gold is: "<<wallet;
    }
}