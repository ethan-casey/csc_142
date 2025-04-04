#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include <ctime>

class Goblin{
    public:
        Goblin(){
            std::cout<<"A Golbin has appeared";
        }

        ~Goblin(){
            std::cout<<"\nThe Goblin is gone";
        }
};

int main(){
    Goblin Goblin;
}