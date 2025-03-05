/* Your task 2:
    Create the BookTester.cpp file to help you debug your Book class. (Future labs will
    use the Book class much more extensively. The BookTester program this week is a
    simple program which is only used for debugging your Book class.)

    Your BookTester program will do the following:
        - Create at least three Book objects. You may use the following data:

            -   "013478796X", "Tony Gaddis", 
                "Starting Out With Java: From Control Structures through Data Structures", 
                4, "PE", 118.30

            -   "0321409493", "John Lewis", 
                "Java Software Solutions: Foundations of Program Design", 
                5, "AW", 94.05

            -   "0134743350", "Harvey Deitel", "Java How to Program, Early Objects",
                12, "PE", 134.84

        - Use the changePrice() method to change the price of each of the three books
        that you created.

        - Use the accessor methods to print a table of all the fields for your three books.

        - Confirm for yourself that your Book class and all its methods have been
        implemented correctly.

        - The output from your testing program should be sensibly formatted so that it is
        readable and understandable. For full credit, columns must line up, and each
        book must be printed similarly. Text columns should be left aligned, and numeric
        columns must be right aligned. Dollar amounts should have two decimal digits,
        right aligned. For long strings you can use a format such as %-13.13s to truncate
        a string to no more than 13 characters, left aligned.

        You might choose an output format style that looks like this:

        -----------------------------------------------------------------------------------------
        ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE
        013478796X  Tony Gaddis     Starting Out with Java: From Control St      4   PE  $ 118.30
        0321409493  John Lewis      Java Software Solutions: Foundations of      5   AW  $  94.05
        0134743350  Harvey Dietel   Java: How to Program, Early Objects         12   PE  $ 134.84
        -----------------------------------------------------------------------------------------

        Changing book1 price from $ 118.30 to $ 145.68
        Changing book2 price from $ 94.05 to $ 117.79
        Changing book3 price from $ 134.84 to $ 59.99

        -----------------------------------------------------------------------------------------
        ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE
        013478796X  Tony Gaddis     Starting Out with Java: From Control St      4   PE  $ 145.68
        0321409493  John Lewis      Java Software Solutions: Foundations of      5   AW  $ 117.79
        0134743350  Harvey Dietel   Java: How to Program, Early Objects         12   PE  $  59.99
        -----------------------------------------------------------------------------------------

    Finishing Up
        When you have finished, there are up to three files to submit for this assignment:
            - if you chose to declare and define your class in one header file then you only
            need to submit two files with the following names...
                - Book.h
                - BookTester.cpp

            - if you chose to declare your class in a header file and define it within a .cpp
            file, then you need to submit three files in total with the following names...
                - Book.h
                - BookDef.cpp
                - BookTester.cpp

*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include "BookRedo.h"

int main(){

    double newPrice;

    BookRe Book1 = BookRe("013478796X", "Tony Gaddis", 
                "Starting Out With Java: From Control Structures through Data Structures", 
                4, "PE", 118.30);

    BookRe Book2 = BookRe("0321409493", "John Lewis", 
                "Java Software Solutions: Foundations of Program Design", 
                5, "AW", 94.05);
    
    BookRe Book3 = BookRe("0134743350", "Harvey Deitel", "Java How to Program, Early Objects",
                12, "PE", 134.84);

    
    std::cout<<"This is the information for your first book:\n";
    std::cout<<"ISBN: "<<Book1.getISBN();
    std::cout<<"\nAuthor: "<<Book1.getAuthor();
    std::cout<<"\nTitle: "<<Book1.getTitle();
    std::cout<<"\nEdition: "<<Book1.getEdition();
    std::cout<<"\nPubCode: "<<Book1.getPubCode();
    std::cout<<"\nPrice: "<<Book1.getPrice();

    std::cout<<"\n\nThis is the information for your second book:\n";
    std::cout<<"ISBN: "<<Book2.getISBN();
    std::cout<<"\nAuthor: "<<Book2.getAuthor();
    std::cout<<"\nTitle: "<<Book2.getTitle();
    std::cout<<"\nEdition: "<<Book2.getEdition();
    std::cout<<"\nPubCode: "<<Book2.getPubCode();
    std::cout<<"\nPrice: "<<Book2.getPrice();

    std::cout<<"\n\nThis is the information for your third book:\n";
    std::cout<<"ISBN: "<<Book3.getISBN();
    std::cout<<"\nAuthor: "<<Book3.getAuthor();
    std::cout<<"\nTitle: "<<Book3.getTitle();
    std::cout<<"\nEdition: "<<Book3.getEdition();
    std::cout<<"\nPubCode: "<<Book3.getPubCode();
    std::cout<<"\nPrice: "<<Book3.getPrice();

    std::cout<<"\n\nEnter new price for first book: ";
    std::cin>>newPrice;
    Book1.changePrice(newPrice);

    std::cout<<"\n\nEnter new price for second book: ";
    std::cin>>newPrice;
    Book2.changePrice(newPrice);

    std::cout<<"\n\nEnter new price for third book: ";
    std::cin>>newPrice;
    Book3.changePrice(newPrice);

    std::cout<<"\nPrice: "<<Book1.getPrice();
    std::cout<<"\nPrice: "<<Book2.getPrice();
    std::cout<<"\nPrice: "<<Book3.getPrice();

    return 0;
};