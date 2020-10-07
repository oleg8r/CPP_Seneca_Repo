/*============================================================
|
| File Name: Smallest&LargestNum.cpp
| Purpose: To find smallest and largest integer numbers.
| (Week-2 Workshop-1 Q4).
| Documentation: This program inputs three integers from the
| keyboard and prints the sum, average, product, smallest and
| largest of these numbers.
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-09-24         Oleg Savelev          created
|
|============================================================*/

#include <iostream>

int main() {
  int num1{0}, num2{0}, num3{0};
  int sum{0}, average{0}, product{0};

  std::cout << "Input three different integers: ";
  std::cin >> num1 >> num2 >> num3;

  sum=num1+num2+num3;
  average=(num1+num2+num3)/3;
  product=num1*num2*num3;
 
  std::cout << "Sum is " << sum << std::endl;
  std::cout << "Average is " << average << std::endl;
  std::cout << "Product is " << product << std::endl;

  if (num1 < num2 && num1 < num3)
    std::cout << "Smallest is " << num1  << std::endl;
  else if (num2 < num1 && num2 < num3)
    std::cout << "Smallest is " << num2  << std::endl;
  else if (num3 < num1 && num3 < num2)
    std::cout << "Smallest is " << num3  << std::endl;

  if (num1 > num2 && num1 > num3)
    std::cout << "Largest is " << num1  << std::endl;
  else if (num2 > num1 && num2 > num3)
    std::cout << "Largest is " << num2  << std::endl;
  else if (num3 > num1 && num3 > num2)
    std::cout << "Largest is " << num3  << std::endl;
  
  return 0;
}

