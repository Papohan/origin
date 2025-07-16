#include <iostream>
#include "math.h"

int main()
{
    int x = 0;
    int y = 0;
    int num1 = 0;


    std::cout << "Enter first number: ";
    std::cin >> x;
    std::cout << "Enter second number: ";
    std::cin >> y;

    while(x == 0 || y == 0) {
        std::cout << "Error! Enter another first number: ";
        std::cin >> x;
        std::cout << "Error! Enter another second number: ";
        std::cin >> y;
    }

    std::cout << "Select an operation (1 - summation, 2 - difference, 3 - multiplication, 4 - division, 5 - exponentiation): ";
    std::cin >> num1;

    while (true) {
    if (num1 == 1) {
        std::cout << x << "+" << y << " = " << sum(x, y) << std::endl;
        break;
    }
    else if (num1 == 2) {
        std::cout << x << "-" << y << " = " << diff(x, y) << std::endl;
        break;
    }
    else if (num1 == 3) {
        std::cout << x << "*" << y << " = " << mult(x, y) << std::endl;
        break;
    }
    else if (num1 == 4) {
        std::cout << x << "/" << y << " = " << divs(x, y) << std::endl;
        break;
    }
    else if (num1 == 5) {
        std::cout << x << "^" << y << " = " << exp(x, y) << std::endl;
        break;
    }
    else {
        std::cout << "Error! Select an operation (1 - summation, 2 - difference, 3 - multiplication, 4 - division, 5 - exponentiation): ";
        std::cin >> num1;
        }
    }
    
    return 0;
}