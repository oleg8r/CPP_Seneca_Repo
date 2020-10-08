/*============================================================
|
| File Name: CircleDims.cpp (CPP-5)
| Purpose: To print the circle’s diameter, circumference and area.
| Documentation: This program reads in the radius of a circle
|   as an integer and prints the circle’s diameter, circumference
| and area. The constant value 3.14159 is used for π. All
| calculations are done in output statements.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-24         Oleg Savelev          created
|
|============================================================*/

#include <iostream>
#define Pi 3.14159

int main() {
  int rad{0}, dia{0}, circum{0}, area{0};

  std::cout << "Please specify the radius of a circle: ";
  std::cin >> rad;

  dia=rad*2;
  circum=rad*2*Pi;
  area=rad*rad*Pi;
 
  std::cout << "The circle’s diameter is " << dia << std::endl;
  std::cout << "The circle’s circumference is " << circum << std::endl;
  std::cout << "The circle’s area is " << area << std::endl;
 
  return 0;
}
