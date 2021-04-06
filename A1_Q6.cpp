
/*============================================================
|
| File Name: Q6.cpp
| Purpose: To determine the appropriate serial number for the new
|   object. (OOP Assignment #1 Q-06).
| Documentation: This program uses a class that includes a data
|   member that holds a “serial number” for each object created
|   from the class. That is, the first object created is numbered 1,
|   the second 2, and so on. To do this, the program uses another
|   data member that records a count of how many objects have been
|   created so far.
|   (This member applies to the class as a whole; not to individual
|   objects). Then, as each object is created, its constructor can
|   examine this count member variable to determine the appropriate
|   serial number for the new object. A member function permits
|   an object to report its own serial number. A main() program
|   creates three objects and queries each one about its serial
|   number. They respond "I am object number 2", and so on.
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-10-26         Oleg Savelev          created
|
|============================================================*/

// Pre-processor Directives:
#include <iostream>
#include <iomanip>

class ClSerialNum    // Class
{
    public: 
        static int countVar;     // The first class member. Static type: retains a variable value in RAM till the end of the program.
        int numVar;     // The second class member 
    
    public:
        ClSerialNum()
        {
            numVar = ++countVar;
        };
    
        void fShowSerialNum()
        {
            std::cout << "I am object number " << numVar << std::endl;
        };
};


int ClSerialNum::countVar = 0;  // Using a counter
int main()    // Don't return anything if void main() is specified.
{
    printf("\e[1;1H\e[2J");     // It clears the screen. No special library is required.
    // write(0,"\e[1;1H\e[2J",12); // It can also clear the creen. No special library is required.
    
    std::cout << "-----------------Object Display--------------------\n"<< std::endl; // The program starts below the dashed line.

    ClSerialNum objNo1;   // Class Object No 1
    objNo1.fShowSerialNum();

    ClSerialNum objNo2;   // Class Object No 2
    objNo2.fShowSerialNum();

    ClSerialNum objNo3;   // Class Object No 3
    objNo3.fShowSerialNum();

    std::cout << std::endl; // Brake a line
    std::cout << "--------------End of Object Display-----------------\n"<< std::endl; // The program ends above the dashed line.
    
    return 0;   // It terminates the program. Don't return anything if void main() is specified.
}
