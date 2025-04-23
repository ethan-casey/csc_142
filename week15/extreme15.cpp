#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <tuple>

std::tuple<int, std::string, bool> getRiddleInfo(){
    return std::make_tuple(7, "Riddle me this...", true);
}

int main(){
    int riddleNumber;
    std::string riddleText;
    bool solved;

    std::tie(riddleNumber, riddleText, solved) = getRiddleInfo();

    std::cout<<"Riddle #"<<riddleNumber<<" "<<riddleText<<"\nSolved?: "<<(solved ? "yes" : "no");
}