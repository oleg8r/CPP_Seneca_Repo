/*============================================================
|
| File Name: SeparateIntDigits.cpp (CPP-13)
| Purpose: To separate the integer’s digits.
| Documentation: This program reads in a five-digit integer,
|   separates the integer into its digits and prints them
|   separated by three spaces each. The integer division and
| modulus operators are used for this.
| For example, if the user types in 42339, the program
| should print:   4   2    3    3    9
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-26         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  int num{0};
  std::cout << "Please input a five-digit integer: ";
  std::cin >> num;
  std::cout << num/10000%10 << "   ";
  std::cout << num/1000%10 << "   ";
  std::cout << num/100%10 << "   ";
  std::cout << num/10%10 << "   ";
  std::cout << num%10 << "   " << std::endl;
  
  /* This method is not OK, because it requires spaces between adjacent integer digits when doing input:
  int num1{0}, num2{0}, num3{0}, num4{0}, num5{0};
  std::cout << "Please input a five-digit integer: ";
  std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
  std::cout << num1 << "   " << num2 << "   " << num3 << "   " << num4 << "   " << num5 << std::endl;
  */

  return 0;
}

