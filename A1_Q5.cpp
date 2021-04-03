/*============================================================
|
| File Name: Q5.cpp
| Purpose: To input any angle value, and then to display the value.
|   (OOP Assignment #1 Q-05).
| Documentation: This program uses a class angle that includes
|   three member variables: an int for degrees, a float for 
|   minutes, and a char for the direction letter (N, S, E, or W).
|   This class can hold either a latitude variable or a longitude
|   variable. A member function obtains an angle value (in degrees
|   and minutes) and a direction from the user, and a second
|   to display the angle value in 179°59.9’ E format.
|       There is also a three-argument constructor. A main() 
|   program displays an angle initialized with the constructor,
|   and then, within a loop, it allows the user to input any
|   angle value, and then it displays the value.
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-10-25         Oleg Savelev          created
|
|============================================================*/

// Pre-processor Directives:
#include <iostream>
#include <iomanip>

class ClAngle    // Class
{
   public :
       int degree;
       float minute;
       char direction;
      
       ClAngle(int degreeVar,float minuteVar,char directionVar)  // A three-argument constructor.
       {
           degree = degreeVar;
           if(minute > 60)
           {
               while(minute > 60)
               {
                   minute -= 60;
                   degree++;
               }
           }
           minute = minuteVar;
           direction = directionVar;
       }
      
       void fGetAngle()  // A function for angle input.
       {
           int degree;
           float minute;
           char direction;

           std::cout << "\n\nPlease enter a value for Degrees: ";
           std::cin >> degree;

           std::cout << "Please enter a value for Minutes: ";
           std::cin >> minute;

           std::cout << "Please enter a value for Direction: ";
           std::cin >> direction;

           degree = degree;

           if(minute > 60)
           {
               while(minute > 60)
               {
                   minute -= 60;
                   degree++;
               }
           }
           minute = minute;
           direction = direction;
       }
      
        void fShowAngle()  // A function for angle display.
        {
            printf("The Angle is equal to: %d\xF8%.1f' %c",degree, minute, direction);
        }
};


int main()    // Don't return anything if void main() is specified.
{
    printf("\e[1;1H\e[2J");     // It clears the screen. No special library is required.
    // write(0,"\e[1;1H\e[2J",12); // It can also clear the creen. No special library is required.
    
    std::cout << "-----------------Angle Display--------------------\n" << std::endl; // The program starts below the dashed line.

    ClAngle obj1(179,59.9,'E');  // A three-argument constructor call in 179°59.9’ E format.
    obj1.fShowAngle();

    char charVar = 'y';  

    while(charVar == 'y')  // A loop asking whether the user wants to continue.
    {
        obj1.fGetAngle();
        obj1.fShowAngle();

        std::cout << std::endl << std::endl << "Do you want to continue? Please enter 'y' or 'n'): ";
        std::cin >> charVar;
    }
    std::cout << std::endl; // Brake a lineю
    std::cout << "--------------End of Angle Display-----------------\n" << std::endl; // The program ends above the dashed line.
    
}
