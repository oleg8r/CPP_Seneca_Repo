/*============================================================
|
| File Name: DataStructure.cpp
| Purpose: To receieve, store and display information about
|   employees using a data structure. (OOP Assignment #1 Q-01).
| Documentation: This program uses a structure called employee
|   that contains two members: an employee number (type int)
|   and the employee’s compensation (in dollars; type float).
|   It asks the user to fill in this data for three employees,
|   stores it in three variables of type struct employee, and
|   then displays the information for each employee.
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-10-15         Oleg Savelev          created
|
|============================================================*/

// Pre-processor Directives:
#include <iostream>
#include <iomanip>

struct strucEmployee   // Structure. "struct" is a compound data type
{
    int emplNum; // 1st item of the member list: variable 1 declaration for an employee number
    float emplCompens; // 2nd item of the member list: variable 2 declaration for the employee’s compensation
};  // note the closing semi-colon 


int main()    // Don't return anything if void main() is specified.
{

    printf("\e[1;1H\e[2J");     // It clears the screen. No special library is required.
    // write(0,"\e[1;1H\e[2J",12); // It can also clear the creen. No special library is required.
    
    std::cout << "--------------Employees Compensation Calculation-----------------\n"<< std::endl; // The program starts below the dashed line

    strucEmployee ourEmployees[3]; // Using a structure for employee number and compensation

    for (int index = 0; index < 3; index++) {   // C-like declaration and initialization of the local variable "i" within the expression of the "for"-loop.
        std::cout << "Please enter the employee " << index + 1 << " number: " << std::endl;
        std::cin >> ourEmployees[index].emplNum; 

        std::cout << "Please enter the employee " << index + 1 << " compensation: " << std::endl;
        std::cin >> ourEmployees[index].emplCompens;
    }

    std::cout << "\nEmployee Number \t Employee Compensation (in Dollars)\n";

    std::cout << std::endl; // Brake a line

    for (int j = 0; j<3; j++) {   // C-like declaratin and initialization of the local variable "i" within the expression of the "for"-loop.
        std::cout << std::setw(8) << ourEmployees[j].emplNum << std::setw(30) << ourEmployees[j].emplCompens << std::endl;
    }

    std::cout << std::endl; // Brake a line
    std::cout << "----------------------End of Calculation-------------------------\n"<< std::endl; // The program ends above the dashed line.
    
    return 0;   // It terminates the program. Don't return anything if void main() is specified.
}
