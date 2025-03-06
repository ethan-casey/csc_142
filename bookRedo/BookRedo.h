#pragma once
#include <string>
#include <iostream>

class BookRe {
    private:
        std::string codeNum, author, title, pubCode;
        int edition;
        double price;

    public:
        BookRe(){};
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
        
    friend std::ostream& operator<<(std::ostream& output, BookRe book){
        output  << "ISBN: " << book.getISBN() << "\n"
                << "Author: " << book.getAuthor() << "\n"
                << "Title: " << book.getTitle() << "\n"
                << "Edition: " << book.getEdition() << "\n"
                << "Publication Code: " << book.getPubCode() << "\n"
                << "Price: $" << book.getPrice();
        
        return output;
    };

    friend bool operator==(BookRe mainBook, BookRe otherBook){
        if (mainBook.getISBN() == otherBook.getISBN()) {
            return true;
        } else {
            std::cout << "These are not the same" << std::endl;
            return false;
        };
    }
        
};