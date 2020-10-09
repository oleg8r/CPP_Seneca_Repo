/*============================================================
|
| File Name: WhatCodePrint.cpp (CPP-7)
| Purpose: To check what the specified code print.
| Documentation: This program checks what the following code print:
|   cout << "*\n**\n***\n****\n*****" << endl;
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-25         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  std::cout << "*\n**\n***\n****\n*****" << std::endl;
  /* This code prints asterisks in the shape of a pyramid:
  The first line contains 1 asterisk.
  The second line contains 2 asterisks.
  The third line contains 3 asterisks.
  The fourth line contains 4 asterisks.
  The fifth line contains 5 asterisks.
  All these asterisks are aligned to the right, sitting one above another
  and forming the shape of a pyramid. */
  std::cout << "This code prints asterisks in the shape of a pyramid." << std::endl;
  return 0;
}
