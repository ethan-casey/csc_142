#include <iostream>

int main(){
    std::string name;
    int age;

    std::cout<<"What is your name?: ";
    std::cin>>name;

    std::cout<<"What is your age in years?: ";
    std::cin>>age;

    double age_days = (age * 365);

    std::cout<<name<<", You are around "<<age_days<<" days old!";

    return 0;
}