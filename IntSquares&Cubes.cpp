/*============================================================
|
| File Name: IntSquares&Cubes.cpp (CPP-14)
| Purpose: To calculate the squares and cubes of the integers
|   from 0 to 10.
| Documentation: This program calculates the squares and cubes
|   of the integers from 0 to 10. Tabs are used to print the
|   following neatly formatted table of values:
|   integer square    cube
|   0     0     0
|   1     1     1
|   2     4     8
|   3     9     27
|   4     16    64
|   5     25    125
|   6     36    216
|   7     49    343
|   8     64    512
|   9     81    729
|   10    100   1000
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-26         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  for (int i=0; i<11; i++) {
  	std::cout << i << "  ";
  	std::cout << i*i << "  ";
  	std::cout << i*i*i << "  " << std::endl;
  }
  
  return 0;
}

