#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cmath>

int main(){
    std::string gadget_1 = "Batclaw";
    std::string gadget_2 = "Batarang";

    std::cout<<"Gadget 1 is the "<<gadget_1<<" and gadget 2 is the "<<gadget_2;

    std::swap(gadget_1, gadget_2);

    std::cout<<"\nGadget 1 is now the "<<gadget_1<<" and gadget 2 is the "<<gadget_2;

}