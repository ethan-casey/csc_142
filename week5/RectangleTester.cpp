/*

Your task is to create the complete Rectangle class and test it in a .cpp file  as specified here:
    0. Rename this file to RectangleTester.cpp

    - Remember that only ONE .cpp file can have a main() method!

    -The Rectangle Class
        This class will either be declared and defined within a single header file or
        declared within a header file and defined in a separate .cpp file
        Your class should have two private fields, length and width of type double
        You will then need to declare/define several public methods that will complete the following:
            - A method to get the width
            - A method to get the length
            - A method to set the width
            - A method to set the length
            - A method to get the area
                ** If you're not sure how to calculate the area of a rectangle, look it up **

    - The RectangleTester file
        Your main() program is in the RectangleTester.cpp file. 
        This program will test the Rectangle class, confirming that it works correctly, by
        creating several Rectangle objects that represent rooms of an apartment. The purpose
        of the tester program is to ensure that all the methods work correctly.
        The main() method will perform the following steps:
            1. Create three Rectangle objects, one for each of three rooms in an apartment
            (the kitchen, a bedroom, and the living room).
            2. Ask the user for the length and width of each of the three rooms. Use the "setter"
            methods to set those values in each of the three Rectangle objects.
            3. Report to the user the size (length x width) and area of each of the three rooms,
            using the "getter" methods.
            4. Also report the total area of the apartment by adding the areas of the rooms.
        
Specifications
    For full credit, your program must meet the following specifications:
        - Complete file prolog comments are included.
        - The filenames correctly match.
        - The Rectangle class has the proper header and is in a file with the correct name.
        - The program includes appropriate comments for documentation, uses meaningful
        names, prompts, and messages, and follows the naming conventions.
        - Numbers are printed with reasonable formatting. This means limiting the number
        of decimal digits when appropriate.
        - The program uses the methods and pseudocode defined above and produces
        correct results. In particular, private fields may only be accessed by using the
        setter and getter methods.
        - The program runs without error and does not crash.
        - The program’s input and output are formatted appropriately with sufficient and
        clear explanatory messages.

Finishing Up
    When you have finished, there are up to three files to submit for this assignment:
        - if you chose to declare and define your class in one header file then you only
        need to submit two files with the following names...
            - Rectangle.h
            - RectangleTester.cpp

        - if you chose to declare your class in a header file and define it within a .cpp
        file, then you need to submit three files in total with the following names...
            - Rectangle.h
            - RectangleDefinitions.cpp
            - RectangleTester.cpp
*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Rectangle.h"

int main(){
    Rectangle kitchenPlan;
    Rectangle bedroomPlan;
    Rectangle livingPlan;

    double value;

    std::cout<<"what is the length of your kitchen?: ";
    std::cin>>value;
    kitchenPlan.setLength(value);
    std::cout<<"\nWhat is the width of your kitchen?: ";
    std::cin>>value;
    kitchenPlan.setWidth(value);

    std::cout<<"\nWhat is the length of your bedroom?: ";
    std::cin>>value;
    bedroomPlan.setLength(value);
    std::cout<<"\nWhat is the width of your bedroom?: ";
    std::cin>>value;
    bedroomPlan.setWidth(value);

    std::cout<<"\nWhat is the length of your living room?: ";
    std::cin>>value;
    livingPlan.setLength(value);
    std::cout<<"\nWhat is the width of your living room?: ";
    std::cin>>value;
    livingPlan.setWidth(value);

    std::cout<<"\nFor your kitchen, the length was " <<kitchenPlan.getLength()<< " feet, the width was " <<kitchenPlan.getWidth()<< " feet, and the area is " <<kitchenPlan.area()<< " sq feet";
    std::cout<<"\nFor your bedroom, the length was " <<bedroomPlan.getLength()<< " feet, the width was " <<bedroomPlan.getWidth()<< " feet, and the area is " <<bedroomPlan.area()<< " sq feet";
    std::cout<<"\nFor your living room, the length was " <<livingPlan.getLength()<< " feet, the width was " <<livingPlan.getWidth()<< " feet, and the area is " <<livingPlan.area()<< " sq feet";
    std::cout<<"\nThe total area of your apartment is "<<kitchenPlan.area()+bedroomPlan.area()+livingPlan.area()<< " sq feet";

}