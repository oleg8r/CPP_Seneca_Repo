/*============================================================
|
| File Name: CompareNumbers.cpp
| Purpose: To compare two integer numbers.
| (Week-2 Workshop-1 Q3).
| Documentation: This program asks the user to enter two integers,
| obtains the numbers from the user, then prints the larger number
| followed by the words "is larger." If the numbers are equal,
| it prints the message "These numbers are equal."
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-24         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  int num1{0}, num2{0};
  
  std::cout << "Please enter the 1st number: \n";
  std::cin >> num1;
  std::cout << "Please enter the 2nd number: \n";
  std::cin >> num2;

  if (num1 > num2)
    std::cout << num1 << " is larger." << std::endl;
  else if (num1 < num2)
    std::cout << num2 << " is larger." << std::endl;
  else
    std::cout << "These numbers are equal." << std::endl;

  return 0;
}


