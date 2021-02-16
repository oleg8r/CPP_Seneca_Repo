/*============================================================
|
| File Name: Q2.cpp
| Purpose: To receieve, store and display information about
|   employees using a data class. (OOP Assignment #1 Q-02).
| Documentation: This program uses an employee class. The member
|   data comprises an int for storing the employee number and
|   a float for storing the employee’s compensation. Member
|   functions allow the user to enter this data and display it.
|   The main() function allows a user to enter data for three
|   employees and displays it.
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-10-16         Oleg Savelev          created
|
|============================================================*/

// Pre-processor Directives:
#include <iostream>
#include <iomanip>

/* struct from the previous question is here just for the reference.
struct employee {
int number;
float compensation;
};
                       */

class ClEmployee    // Class
{
    private:    // Class member variables
        int emplNum; // 1st item of the member list: variable 1 declaration for an employee number
        float emplCompens; // 2nd item of the member list: variable 2 declaration for the employee’s compensation

    public:    // Class member functions
        void fEnterData();
        void fDisplayData();
};


void ClEmployee::fEnterData() // The function to set the employee number and compensation.
{
    std::cout << "Please enter the employee number: ";
    std::cin >> emplNum;

    std::cout << "Please enter the employee compensation: ";
    std::cin >> emplCompens;
}

void ClEmployee::fDisplayData() // The function to set the employee number and compensation.
{
    std::cout << "The employee number: " << emplNum << std::endl;
    std::cout << "The employee compensation: " << emplCompens << std::endl;
}


int main() {    // Don't return anything if void main() is specified.

    printf("\e[1;1H\e[2J");     // It clears the screen. No special library is required.
    // write(0,"\e[1;1H\e[2J",12); // It can also clear the creen. No special library is required.
    
    std::cout << "--------------Employees Compensation Calculation-----------------\n"<< std::endl; // The program starts below the dashed line

    ClEmployee emplInstance; // Using an instance (object) of the class for employee number and compensation.

    emplInstance.fEnterData();
    std::cout << std::endl; // Brake a line.
    emplInstance.fDisplayData(); 

    std::cout << std::endl; // Brake a line.

    std::cout << "----------------------End of Calculation-------------------------\n"<< std::endl; // The program ends above the dashed line.
    return 0;   // It terminates the program. Don't return anything if void main() is specified.

}
