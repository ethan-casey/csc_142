#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cmath>

int main(){
    std::pair<std::string, std::string>alert("Joker", "Arkham Asylum");

    std::cout<<"Oh no! "<<alert.first<<" spotted at "<<alert.second<<"! Wheres Batman?";
}