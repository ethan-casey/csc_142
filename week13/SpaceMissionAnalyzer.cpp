#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cmath>

int main(){
    double distance, fuel, weight, life_support, crew_size;

    std::cout<<"Input distance(in million km): ";
    std::cin>>distance;

    std::cout<<"\nInput total fuel(in tons): ";
    std::cin>>fuel;

    std::cout<<"\nInput total crew size: ";
    std::cin>>crew_size;

    std::cout<<"\nInput total ship weight(in tons): ";
    std::cin>>weight;

    std::cout<<"\nInput total life support duration(in days): ";
    std::cin>>life_support;

    double efficiency = (fuel / weight) * 100;
    double speed = (fuel * 10000) / (crew_size * weight);
    double travel_time = (distance * 1000000) / speed;

    bool viability = (efficiency >= 20) && 
                    (life_support >= travel_time + 10) &&
                    (crew_size >= 2 && crew_size <= 8) &&
                    (weight < 500);
    std::cout << std::fixed << std::setprecision(2);
    std::cout<<"\nFuel efficiency: "<<efficiency<<"%\n";
    std::cout<<"Estimated speed: "<<speed<<" km/day\n";
    std::cout<<"Estimated days: "<<travel_time<<" days\n";
    if (viability){
        std::cout<<"Mission is viable!";
    }
    else{
        std::cout<<"Mission is not viable";
    }

}