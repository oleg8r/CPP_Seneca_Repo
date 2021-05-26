// Simple_Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float var1 = 0, var2 = 0;
    char mathOper = ' ';
    std::cout << "Hello. This is a simple math calculator.\n";
    std::cout << "Please enter value 1: \n";
    std::cin >> var1;

    std::cout << "Please enter value 2: \n";
    std::cin >> var2;

    std::cout << "Please enter a mathematical operator: \n";
    std::cin >> mathOper;

    switch (mathOper) {
    case '+':
        std::cout << var1 << mathOper << var2 << "=" << var1 + var2 << std::endl;
        break;
    case '-':
        std::cout << var1 << mathOper << var2 << "=" << var1 - var2 << std::endl;
        break;
    case '*':
        std::cout << var1 << mathOper << var2 << "=" << var1 * var2 << std::endl;
        break;
    case '/':
        std::cout << var1 << mathOper << var2 << "=" << var1 / var2 << std::endl;
        break;    
    default:
        std::cout << "The entered mathematical operator is not valid. Please run the program again and enter one of the following operators: '+', '-', '*', '/'. Thanks \n" << std::endl;
        break;
    }

    return 0;
}