/*============================================================
|
| File Name: OddOrEvenNum.cpp (CPP-9)
| Purpose: To determine whether the number is odd or even.
| Documentation: This program reads an integer and determines
| and prints whether it’s odd or even. It uses the modulus
| operator. An even number is a multiple of two. Any multiple
| of two leaves a remainder of zero when divided by 2.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-25         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  int num{0};

  std::cout << "Please input an integer number: ";
  std::cin >> num;
 
  if (num%2==0)
    std::cout << "This integer number is even." << std::endl;
  else
    std::cout << "This integer number is odd." << std::endl;
  
  return 0;
}
