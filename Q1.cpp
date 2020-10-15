/*============================================================
|
| File Name: ParkChargeCalc.cpp (CPP-17)
| Purpose: To calculate parking charges.
| Documentation: This program calculates and prints the parking
|   charges for customers who parked their cars in this garage
|   yesterday. The program asks for the hours parked for each
|   customer. The program prints the results in a neat tabular
|   format and calculates and prints the total of yesterday’s
|   receipts. The program uses the function calculateCharges
|   to determine the charge for each customer.
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-10-11         Oleg Savelev          created
|
|============================================================*/

#include <iostream>
#include <iomanip>

float calculateCharges(float); // function prototype

int main() {
    float hours1{0}, hours2{0}, hours3{0};
  
    std::cout << "Please enter hours for the 1st customer: \n";
    std::cin >> hours1;
    std::cout << "Please enter hours for the 2nd customer: \n";
    std::cin >> hours2;
    std::cout << "Please enter hours for the 3rd customer: \n";
    std::cin >> hours3;

    float charge1 = calculateCharges(hours1); // function call
    float charge2 = calculateCharges(hours2); // function call
    float charge3 = calculateCharges(hours3); // function call

    float totalHours = hours1 + hours2 + hours3;
    float totalCharge = charge1 + charge2 + charge3;

    std::cout << "Car\t" << "Hours\t" << "Charge" << std::endl;
    std::cout << "1\t" << hours1 << "\t" << std::right << charge1 << std::endl;
    std::cout << "2\t" << hours2 << "\t" << std::right << charge2 << std::endl;
    std::cout << "3\t" << hours3 << "\t" << std::right << charge3 << std::endl;
    std::cout << "TOTAL\t" << totalHours << "\t"  << std::right << totalCharge << std::endl;

/* //OR
    std::cout << "Car" << "Hours\t" << "Charge" << std::endl;
    std::cout << "1" << std::setw(8) << std::right << hours1 << std::right << charge1 << std::endl;
    std::cout << "2" << std::setw(8) << std::right << hours2 << std::right << charge2 << std::endl;
    std::cout << "3" << std::setw(8) << std::right << hours3 << std::right << charge3 << std::endl;
    std::cout << "TOTAL" << std::setw(8) << std::right << totalHours << std::right << totalCharge << std::endl;
*/
    return 0;
}

float calculateCharges(float hours) { // function definition
   
    float charge{0};

    if (hours < 3) {
        charge = 2;
    }
    else if (hours > 3 && hours < 14) {
        charge = 2 + (hours - 3) * 0.5;
    }
    else if (hours > 14 && hours <= 24) {
        charge = 10;
    }
    else {
        std::cout << "Invalid input\n";
    }
    return charge;
}
