/*============================================================
|
| File Name: BMIcalc.cpp (CPP-15)
| Purpose: To calculate and display the user’s body mass index.
| Documentation: This program is a BMI calculator application
|   that reads the user’s weight in kilograms and height in meters,
|   then it calculates and displays the user’s body mass index.
|     Also, the application displays the following information
|   from the Department of Health and Human Services/National
|   Institutes of Health so the user can evaluate his/her BMI:
|     BMI VALUES
|     * Underweight: less than 18.5
|     * Normal: between 18.5 and 24.9
|     * Overweight: between 25 and 29.9
|     * Obese: 30 or greater
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-27         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  float weight, height, bmi;

  std::cout << "Please input your weight in kilograms: ";
  std::cin >> weight;
  std::cout << "Please input your height in meters: ";
  std::cin >> height;

  bmi = weight/(height*height);
  std::cout << "Your body mass index (BMI) is " << bmi << std::endl;

  std::cout << "\nBMI VALUES" << std::endl;
  std::cout << "* Underweight: less than 18.5" << std::endl;
  std::cout << "* Normal: between 18.5 and 24.9" << std::endl;
  std::cout << "* Overweight: between 25 and 29.9" << std::endl;
  std::cout << "* Obese: 30 or greater" << std::endl;
  
  return 0;
}
