#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>

class MagicItem{
    private:
        std::string itemName, itemPower;
        int charges;
    
    public:
        MagicItem(){};
        MagicItem(std::string name, std::string power, int count ){
            itemName = name;
            itemPower = power;
            charges = count;
        }
        void UseItem(){
            if (charges > 0){
                charges --;
                std::cout<<itemName<<" has "<<charges<<" remaining\n";
            }
            else {
                std::cout<<"This item is out of uses\n";
            }

        };
};

int main(){
    MagicItem wand("StaffofStorms", "Python Power", 3);

    wand.UseItem();
    wand.UseItem();
    wand.UseItem();
    wand.UseItem();

    MagicItem gun("GunOfPower", "javian", 1);

    gun.UseItem();
    gun.UseItem();
    gun.UseItem();
}