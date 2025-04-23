#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cmath>

double pi = 3.14;
double degrees_to_radians(double degrees){
    return degrees * (pi / 180);
}

int main(){
    double x,y,z;
    double thrust, angle, warp_factor;

    std::cout<<"Input ship initial coordinates (x y z): ";
    std::cin>>x>>y>>z;

    std::cout<<"\nInput ship thrust: ";
    std::cin>>thrust;

    std::cout<<"\nInput ship angle: ";
    std::cin>>angle;

    std::cout<<"\nInput ship warp factor: ";
    std::cin>>warp_factor;

    double angle_rad = degrees_to_radians(angle);

    double new_x = (x + thrust * cos(angle_rad)) * warp_factor;
    double new_y = (y + thrust * sin(angle_rad)) * warp_factor;
    double new_z = z + (thrust / warp_factor);

    std::cout<<"\n\nYour new coordinates:";
    std::cout<<"\nX: "<<new_x;
    std::cout<<"\nY: "<<new_y;
    std::cout<<"\nZ: "<<new_z;

}