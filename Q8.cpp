/*============================================================
|
| File Name: Largest&SmallestNum.cpp
| Purpose: To find largest and smallest integers in the group.
| (Week-2 Workshop-1 Q8).
| Documentation: This program reads in five integers and determines
| and prints the largest and the smallest integers in the group.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-25         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  int num1{0}, num2{0}, num3{0}, num4{0}, num5{0};

  std::cout << "Input five different integers: ";
  std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
 
  if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
    std::cout << "Largest is " << num1  << std::endl;
  else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
    std::cout << "Largest is " << num2  << std::endl;
  else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)    
    std::cout << "Largest is " << num3  << std::endl;
  else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)    
    std::cout << "Largest is " << num4  << std::endl;
  else if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)    
    std::cout << "Largest is " << num5  << std::endl;

  if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
    std::cout << "Smallest is " << num1  << std::endl;
  else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
    std::cout << "Smallest is " << num2  << std::endl;
  else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)    
    std::cout << "Smallest is " << num3  << std::endl;
  else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)    
    std::cout << "Smallest is " << num4  << std::endl;
  else if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)    
    std::cout << "Smallest is " << num5  << std::endl;

  return 0;
}
