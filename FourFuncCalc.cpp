/*============================================================
|
| File Name: FourFuncCalc.cpp (CPP-1)
| Purpose: To calculate sum, product, difference, and quotient
|   of the two numbers.
| Documentation: This program asks the user to enter two numbers,
|   obtains the two numbers from the user and prints the sum,
|   product, difference, and quotient of the two numbers.
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-24         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  int num1{0}, num2{0}, sum{0}, product{0}, difference{0}, quotient{0};
  
  std::cout << "Please enter the 1st number: \n";
  std::cin >> num1;
  std::cout << "Please enter the 2nd number: \n";
  std::cin >> num2;

  sum=num1+num2;
  product=num1*num2;
  difference=num1-num2;
  quotient=num1/num2;

  std::cout << "The sum of the two numbers is: " << sum << std::endl;
  std::cout << "The product of the two numbers is: " << product << std::endl;
  std::cout << "The difference of the two numbers is: " << difference << std::endl;
  std::cout << "The quotient of the two numbers is: " << quotient << std::endl;

  return 0;
}

