/*

Ethan Casey
CSC142
2/3/25


Your task:
    The program you create today will get information about a purchase from the user,
    calculate the tax and total purchase amount, and display the results. The user will then
    have an opportunity either to enter another purchase or to quit the program.

    For this task, you will create a program for calculating the sales tax on a retail purchase:
        0. Rename this file to Tax.cpp

        1. In this file, and every file created for this class, add comments at the top of
            the file that include:
                - The name of the file
                - A brief description of the program (or class) that is in the file
                - Your name
                - Today’s date

        2. In this file, create a single method called main() that performs the following steps:
                - Create a constant for the sales tax rate (which is currently 6% in
                Pennsylvania). Remember that 6% is actually entered as 0.06.

                - Create a Boolean variable keepGoing that is initially true. This will be the
                sentinel value to indicate when the user wishes to either keep entering
                purchases or quit the program.

                - In a loop (while the variable keepGoing is true):

                                        ** USE std::getline() FOR ALL INPUT PROMPTS **

                    1. Use std::getline(std::cin, variableName); to prompt the user to input a string describing the purchase. Save the response in a variable.

                    2. Prompt the user to input a string which is the cost of the purchase in dollars and cents. 
                    For example, a new notebook might cost $3.49. This will give a string as a number, so we need to parse and convert its value.
                    Parse the string by using std::stod(stringName) and assign its value to a variable of type double.
                    Use a do-while loop to ensure only non-negative numbers are accepted.

                    3. Calculate the sales tax on the purchase (cost * tax rate).
                    Example: 6% tax on a $3.49 notebook is $0.21.

                    4. Calculate the total amount of the purchase (cost + sales tax).
                    Example: Total purchase (notebook + tax) is $3.70.

                    5. Display the input data (the description and cost) and the calculated results
                    (sales tax, and total amount) by printing it to the console. For full credit, your program must
                    display all the input data as well as all results, in a clearly
                    understandable form, with appropriate descriptive labels and
                    formatting. All dollar amounts must have a dollar sign, and must have
                    exactly two digits to the right of the decimal point.

                    6. Ask the user if they wish to enter another purchase (Yes/No). 
                    If yes, the keepGoing loop should repeat. If no, set keepGoing 
                    to false to cause the main program loop to terminate.

                    7. Remember to end the program with return 0; as the last
                    executable statement.

Specifications:
    For full credit, your program must meet the following specifications:
        - Complete file prolog comments included.
        - Naming conventions for variable, method, and class names are followed.
        - Meaningful variable names, prompts, and output messages are used.
        - Runs without error; does not crash on proper input.
        - Uses a do-while loop to re-prompt if negative purchase price is entered.
        - Performs all actions described above, and calculates correct results.
        - Output includes the input information as well as the calculated results, with
        meaningful descriptive labels identifying what is printed.
        - Program repeats as long as the user wants to continue, and ends gracefully when
        the user indicates that they are done.
        - All dollar amounts are displayed as dollars and cents (i.e., with a dollar sign, two
        digits to the right of the decimal point).

*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

int main() {

    const double SALESTAX = .06;
    bool keepgoing = true;
    std::string desc, inPrice, rerun;
    double price = 0;

    do {
        std::cout<<"\n" << std::endl;
        std::cout<<"What are you looking to purchase?: ";
        std::getline(std::cin, desc);
        
        do{
            std::cout<<"How much is the cost of the item in dollars and cents?: ";
            std::getline(std::cin, inPrice);
            price = std::stod(inPrice);
        } while (price < 0);

        double itemTax = price * SALESTAX;
        double total = price + itemTax;

        std::cout << std::fixed << std::setprecision(2);
        std::cout<<"\n";
        std::cout<<"The price of " + desc + " was " + inPrice + ""<<std::endl;
        std::cout<<"The sales tax of that item is: $" <<itemTax<< ""<<std::endl;
        std::cout<<"The total price of your purchase is: $" <<total<< ""<<std::endl;

        std::cout<<"Woudl you like to go again(y/n)?: ";
        std::cin>>rerun;
        std::cin.ignore();
        
        if (rerun == "n") {
            keepgoing = false;
        }


    } while (keepgoing == true);



    return 0;
}