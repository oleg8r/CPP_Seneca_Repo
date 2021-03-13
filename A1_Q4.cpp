/*============================================================
|
| File Name: Q4.cpp
| Purpose: To receieve, store and display a date in the format
|   31/12/2001. (OOP Assignment #1 Q-04).
| Documentation: This program uses a date class. Its member data
|   consists of three ints: month, day, and year. It also has
|   two member functions: getdate(), which allows the user
|   to enter a date in 12/31/02 format, and showdate(), which
|   displays the date.
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-10-21         Oleg Savelev          created
|
|============================================================*/

// Pre-processor Directives:
#include <iostream>
#include <iomanip>

class ClDate    // Class
{
    private:
        int day;
        int month;
        int  year;
        
    public:
        void getdate(int dayVar, int monthVar, int yearVar)
        {
            day = dayVar;
            month = monthVar;
            year = yearVar; 
        }

        void showdate()
        {
            std::cout << "Your date is: " << day << "/" << month << "/" << year << std::endl;
        }
};


int main()    // Don't return anything if void main() is specified.
{
    printf("\e[1;1H\e[2J");     // It clears the screen. No special library is required.
    // write(0,"\e[1;1H\e[2J",12); // It can also clear the creen. No special library is required.
    
    std::cout << "-----------------Date Display--------------------\n"<< std::endl; // The program starts below the dashed line.

    int day, month, year;
    
    std::cout << "Specify the date in the format 31 12 2000: ";
    std::cin >> day >> month >> year;
    
    ClDate  myDate;
    myDate.getdate(day, month, year);
    myDate.showdate();

    std::cout << std::endl; // Brake a line.
    std::cout << "--------------End of Date Display-----------------\n"<< std::endl; // The program ends above the dashed line.
    
    return 0;   // It terminates the program. Don't return anything if void main() is specified.
}
