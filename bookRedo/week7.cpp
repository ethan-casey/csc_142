/*

In last week’s lab you provided formatting instructions for printing books in the
Inventory class. The task of formatting the printed representation of a book, really
should be the responsibility of the Book class itself. You will use operator overloading
to accomplish this.

Your Tasks
    Task 0:
        Copy and paste all of your files from last weeks lab into a new folder for Lab12.
        This new folder should have all files related to the Book class, Inventory class,
        and the InventoryTester file.


    Task 1:
        Modify your Book class to include the following new overloads:
  
        operator<<( output : std::ostream&, book : Book ) : std::ostream&
        Input: This overload takes in an output stream and a Book object as arguments.
        Return: A single output stream, in which each of the six fields of the book object are
        appropriately formatted and concatenated together.

        operator==( mainBook : Book, otherBook : Book ) : boolean
        Input: This method takes two arguments: a Book object and another Book object to compare to.
        Return: A boolean that is true if both Book object’s have the exact same ISBN code number; 
                otherwise false.


    Task 2:
        Modify the printInventory() method in your Inventory class to remove all getters
        and string formatting. Instead, simply use std::cout on each book in the
        inventory array.

        In your Inventory class, ensure your addBook() method is as described here:
            - If there is no room in the inventory to add another book, return false.
            - If the book to be added "is equal to" any book already existing in the inventory,
                return false. (Use a loop, like you did in the changePrice() method.)
            - Otherwise, add the new book as before, and return true.


    Task 3:
        In main(), in your InventoryTester.cpp file, attempt to add these additional books to
        your inventory:

            "0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95

            "0133582736", "Tony Gaddis", "Starting Out With Python", 3, "PE", 19.95

            "013478796X", "Tony Gaddis", 
            "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 145.38

            "1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38

            "0134802217", "Tony Gaddis", 
            "Starting Out With Java: From Control Structures through Objects", 7, "PE", 188.95

            "0134462017", "Tony Gaddis", 
            "Starting Out With Java: Early Objects", 6, "PE", 58.50

        If an addBook() attempt fails, print a message identifying which book failed (by title or
        ISBN number).
        One or more of these new books will fail to add to the inventory, causing addBook() to
        return false. Your inventoryTester program must check the return status of each call to
        addBook().


Specifications:
    The output generated by the operator<< overload should contain only the information 
    for the book, without headers, on one line without any newline characters.
    Author names and book titles must be formatted to a consistent number of characters
    such that they align in even columns when multiple books are printed. This formatting
    must not be done by adding extraneous space characters to the field values.
    Dollar amounts must be formatted with two digits to the right of the decimal, right
    justified, such that the book prices align in an even column when multiple books are
    printed.

    Your program includes appropriate comments for documentation, uses meaningful
    names, prompts, and messages, and follows the naming conventions.
    Your program must include all features from the previous labs that used the Book class.
    The program must correctly add only a single copy of each book: if two entries have the
    same ISBN number, only one shall be added to the inventory.
    The program must not crash if more than ten books are added to the inventory.
    Example output is shown below. Your exact formatting may be different, but all
    information must be clear, present, and understandable, with aligned columns.

    Example Output for InventoryTester.cpp:

        ERROR adding this book: 013478796X
        ERROR adding this book: 0134462017
        Initial Inventory Report:
        -----------------------------------------------------------------------------------------
        ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE
        013478796X  Tony Gaddis     Starting Out With Java: From Control Str     4   PE  $ 121.75
        0321409493  John Lewis      Java Software Solutions: Foundations of      5   AW  $  94.00
        0134743350  Harvey Deitel   Java How to Program, Early Objects          12   PE  $ 134.84
        002360692X  Richard Johnso  Algorithms                                   1   PH  $ 109.00
        1593276036  Eric Matthes    Python Crash Course                          1   NS  $  39.95
        0143067889  Ray Kurzweil    The Singularity is Near                      1   PG  $  17.70
        0134444329  Tony Gaddis     Starting Out With Python                     4   PE  $  99.95
        0133582736  Tony Gaddis     Starting Out With Python                     3   PE  $  19.95
        1119056553  Cay Horstmann   Python for Everyone                          2   WI  $  98.38
        0134802217  Tony Gaddis     Starting Out With Java: From Control Str     7   PE  $ 188.95
        -----------------------------------------------------------------------------------------
        Changing price of 013478796X to $ 50.00
        Changing price of 0143067889 to $ 9.95
        Changing price of 0134743350 to $ 100.00

        Final Inventory Report:
        -----------------------------------------------------------------------------------------
        ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE
        013478796X  Tony Gaddis     Starting Out With Java: From Control Str     4   PE  $  50.00
        0321409493  John Lewis      Java Software Solutions: Foundations of      5   AW  $  94.00
        0134743350  Harvey Deitel   Java How to Program, Early Objects          12   PE  $ 100.00
        002360692X  Richard Johnso  Algorithms                                   1   PH  $ 109.00
        1593276036  Eric Matthes    Python Crash Course                          1   NS  $  39.95
        0143067889  Ray Kurzweil    The Singularity is Near                      1   PG  $   9.95
        0134444329  Tony Gaddis     Starting Out With Python                     4   PE  $  99.95
        0133582736  Tony Gaddis     Starting Out With Python                     3   PE  $  19.95
        1119056553  Cay Horstmann   Python for Everyone                          2   WI  $  98.38
        0134802217  Tony Gaddis     Starting Out With Java: From Control Str     7   PE  $ 188.95
        -----------------------------------------------------------------------------------------


Extra Credit Opportunity:
    The 10-digit version of the International Standard Book Number code is a redundant,
    error-detecting code consisting of a unique, 9-digit book code followed by a check digit—
    the last digit of the ten-digit code. The ISBN-10 specification has a very specific
    algorithm for the check digit. If an ISBN code is inadvertently mistyped or otherwise
    incorrect the algorithm’s check digit will not match the one provided. If the provided
    check digit is different from the calculated check digit, the ISBN code is not valid. This
    check digit technique will identify many (but not all) such errors.
    The algorithm is explained well in Wikipedia: https://en.wikipedia.org/wiki/ISBN#Check_digits


    For up to (+10) points extra credit, add a new method to your Book class:

        (*HINT: You'll want to use type casting so that you can convert a character like '5' to an
        actual int value of 5)
        (**HINT: When casting a character to an int, you will receive the ASCII value of that character
        and not the value you expect. Look below and find the ASCII values of each number key)
                                      https://www.ascii-code.com/
        (Can you come up with a clever way to translate a number key's ASCII value to its integer value?)

        + isValidISBN() : boolean
        Input: This method takes no arguments.
        Return: This method will return a Boolean indicating whether a Book object’s
        ISBN is valid. If there is an error in the ISBN String the check digit will not match
        and the method will return false. If the check digit is confirmed as correct the
        method will return true.

        Modify your operator<<() overload in your Book class to check the ISBN String. If the
        string is invalid, mark it in the output by adding an asterisk ('*') immediately after the
        ISBN in the string.
        There is at least one incorrect ISBN numbers in the data for this lab. Can you tell which?
        For the full extra credit, do this in a way that the output columns are still neatly aligned:
        (* You can use the .append() method for a std::string to place a character at the end of the string *)
        ------------------------------------------------------------------------------------------
        ISBN         AUTHOR          TITLE                                       ED  PUB     PRICE
        0134802217   Tony Gaddis     Starting Out With Java: From Control Str     7   PE  $ 188.95
        0321173486*  Shreiner        OpenGL Programming Guide                     5   AW  $  24.00
        ------------------------------------------------------------------------------------------


Finishing Up:
    When you have finished, there are up to five (5) files to submit for this assignment:
        - if you chose to declare and define your classes in one header file each, 
        then you only need to submit three (3) files with the following names...
            - Book.h
            - Inventory.h
            - InventoryTester.cpp

        - if you chose to declare your classes in a header file and define them within a .cpp
        file, then you need to submit five (5) files in total with the following names...
            - Book.h
            - BookDef.cpp
            - Inventory.h
            - InventoryDef.cpp
            - InventoryTester.cpp

*/