/*============================================================
|
| File Name: DrivingCostCalc.cpp (CPP-16)
| Purpose: To calculate the daily driving cost.
| Documentation: This program calculates the daily driving cost,
|   so that everyone can estimate how much money could be saved
|   by carpooling, which also has other advantages such as
|   reducing carbon emissions and reducing traffic congestion.
|   The application inputs the following information and displays
|   the user’s cost per day of driving to work:
|     a) Total miles driven per day.
|     b) Cost per gallon of gasoline.
|     c) Average miles per gallon.
|     d) Parking fees per day.
|     e) Tolls per day.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-27         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  float dayMiliage, gallonCost, gallonAvgMiles, dayParkFees, dayTolls, dayTotalCost;

  std::cout << "Please input total miles driven per day: ";
  std::cin >> dayMiliage;
  std::cout << "Please input cost per gallon of gasoline: ";
  std::cin >> gallonCost;
  std::cout << "Please input average miles per gallon: ";
  std::cin >> gallonAvgMiles;
  std::cout << "Please input parking fees per day: ";
  std::cin >> dayParkFees;
  std::cout << "Please input tolls per day: ";
  std::cin >> dayTolls;

  dayTotalCost = gallonCost * (dayMiliage/gallonAvgMiles) + dayParkFees + dayTolls;
  std::cout << "The daily driving cost is $" << dayTotalCost << std::endl;
  
  return 0;
}

