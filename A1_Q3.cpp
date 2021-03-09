/*============================================================
|
| File Name: Q3.cpp
| Purpose: To receieve, store and display a date in the format
|   31/12/2001. (OOP Assignment #1 Q-03).
| Documentation: This program uses a structure of type date
|   that contains three members: the day, the month, and
|   the year in day-month-year order, all of type int. 
|   When the user enters a date in the format 31 12 2000,
|   the program stores it in a variable of type struct date,
|   then it retrieves the values from the variable and prints
|   them out in the same format.
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-10-20         Oleg Savelev          created
|
|============================================================*/

// Pre-processor Directives:
#include <iostream>
#include <iomanip>

struct strucDate   // Strcuture. "struct" is a compound data type
{
    int dayVar;
    int monthVar;
    int  yearVar;
};


int main()    // Don't return anything if void main() is specified.
{
    printf("\e[1;1H\e[2J");     // It clears the screen. No special library is required.
    // write(0,"\e[1;1H\e[2J",12); // It can also clear the creen. No special library is required.
    
    std::cout << "-----------------Date Display--------------------\n"<< std::endl; // The program starts below the dashed line.

    strucDate myDate;   // Creates my structure based on the strucutre template.
    
    std::cout << "Specify the date in the format 31 12 2000: ";
    std::cin >> myDate.dayVar >> myDate.monthVar >> myDate.yearVar;
    std::cout << "Your date is: " << myDate.dayVar << "/" << myDate.monthVar << "/" << myDate.yearVar << std::endl;

    std::cout << std::endl; // Brake a line
    std::cout << "--------------End of Date Display-----------------\n"<< std::endl; // The program ends above the dashed line.
    
    return 0;   // It terminates the program. Don't return anything if void main() is specified.
}
