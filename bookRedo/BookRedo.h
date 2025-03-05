#pragma once
#include <string>
#include <iostream>

class BookRe {
    private:
        std::string codeNum, author, title, pubCode;
        int edition;
        double price;

    public:
        BookRe(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr){
            codeNum = cn;
            author = au;
            title = ti;
            edition = ed;
            pubCode = pc;
            price = pr;
        }

        inline std::string getISBN(){return codeNum;}
        inline std::string getAuthor(){return author;}
        inline std::string getTitle(){return title;}
        inline int getEdition(){return edition;}
        inline std::string getPubCode(){return pubCode;}
        inline double getPrice(){return price;}

        void changePrice(double newPrice){
            price = newPrice;
        }
};