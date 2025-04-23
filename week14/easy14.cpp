#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cmath>

void countdown_to_lightspeed(int seconds){
    for (int i = seconds; i > 0; --i){
        std::cout<<"jumping in "<<i<<" seconds\n";
    }
    std::cout<<"Punch it!";
}

int main(){
    countdown_to_lightspeed(10);
}