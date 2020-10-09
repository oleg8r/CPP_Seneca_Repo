/*============================================================
|
| File Name: MultipleNum.cpp (CPP-10)
| Purpose: To determine if the first integer is a multiple of
| the second integer number.
| Documentation: This program reads in two integers and using
| the modulus operator it determines and prints if the first
| is a multiple of the second.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-25         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  int num1{0}, num2{0};
  
  std::cout << "Please enter the 1st integer number: \n";
  std::cin >> num1;
  std::cout << "Please enter the 2nd integer number: \n";
  std::cin >> num2;

  if (num1%num2==0)
    std::cout << "The first number " << num1 << " is a multiple of the second number " << num2 << std::endl;
  else if (num2%num1==0)
    std::cout << "The second number " << num2 << " is a multiple of the first number " << num1 << std::endl;
  else
    std::cout << "Non of these numbers is a multiple of the other one." << std::endl;

  return 0;
}
