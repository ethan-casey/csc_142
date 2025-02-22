#pragma once
#include <string>
#include <iostream>

class Book {

    private:
        std::string author, title, pubCode, codeNum;
        int edition;
        double price;
    
    public:
        Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
            codeNum = cn;
            author = au;
            title = ti;
            edition = ed;
            pubCode = pc;
            price = pr;
        }

        inline double changePrice(){
            return price;
        }
        inline void getPrice(double pr){
            price = pr;
        }


};