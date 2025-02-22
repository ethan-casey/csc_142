#pragma once
#include <string>
#include <iostream>

class Rectangle {

    private:
        double length;
        double width;
    public:
        inline double area(){
            return length * width;
        }

        inline int getLength(){
            return length;
        }
        inline int getWidth(){
            return width;
        }

        inline void setLength(double len){
            length = len;
        }
        inline void setWidth(double wid){
            width = wid;
        }

};