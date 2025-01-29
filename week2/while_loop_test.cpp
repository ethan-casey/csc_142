#include <iostream>

int main() {
    
    double score;

    do{
        std::cout<<"enter number between 1-100: ";
        std::cin>>score;
    } while (score < 1 || score > 100); //Repeats program if invalid

}