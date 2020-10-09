/*============================================================
|
| File Name: CharToNum.cpp (CPP-12)
| Purpose: To print the integer equivalent of a character.
| Documentation: This program prints the integer equivalent of
|   a character typed at the keyboard. It stores the input
|   in a variable of type char. It can use uppercase letters,
|   lowercase letters, digits and special characters (like $).
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-26         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  char myChar;

  std::cout << "Please input a character: ";
  std::cin >> myChar;

  //The first option:
  std::cout << "The integer equivalent of a character " << myChar << " is " << static_cast< int >( myChar ) << "." << std::endl; // print 'A' as an integer

  //The second option:
  std::cout << "The integer equivalent of a character " << myChar << " is " << (int)myChar << "." << std::endl;
  
  return 0;
}
