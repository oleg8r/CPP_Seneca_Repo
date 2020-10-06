/*============================================================
|
| File Name: PrintNumbers.cpp (CPP-2)
| Purpose: To print characters on the same line in different ways.
| Documentation: This program prints the numbers 1 to 4 on the same
| line with each pair of adjacent numbers separated by one space. 
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-24         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  std::cout << "1 2 3 4" << std::endl;
  std::cout << "1 " << "2 " << "3 " << "4" << std::endl;
  std::cout << "1 ";
  std::cout << "2 ";
  std::cout << "3 ";
  std::cout << "4" << std::endl;
  return 0;
}
