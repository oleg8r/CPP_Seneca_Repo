/*============================================================
|
| File Name: AsteriskPattern.cpp
| Purpose: To determine if the first integer is a multiple of
|   the second integer number. (Week-2 Workshop-1 Q11).
| Documentation: This program displays the following checkerboard
|   pattern with eight output statements. It also displays 
|   the same pattern using as few statements as possible:
|
| * * * * * * * *
|  * * * * * * * *
| * * * * * * * *
|  * * * * * * * *
| * * * * * * * *
|  * * * * * * * *
| * * * * * * * *
|  * * * * * * * *
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-26         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() { 
  std::cout << "* * * * * * * *\n";
  std::cout << " * * * * * * * *\n";
  std::cout << "* * * * * * * *\n";
  std::cout << " * * * * * * * *\n";
  std::cout << "* * * * * * * *\n";
  std::cout << " * * * * * * * *\n";
  std::cout << "* * * * * * * *\n";
  std::cout << " * * * * * * * *\n";
  std::cout << "\n\n";

  for (int i=0; i<4; i++) {
    std::cout << "* * * * * * * *\n";
    std::cout << " * * * * * * * *\n";
  }
  return 0;
}

