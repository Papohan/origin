#include <iostream>

class Calculator
{
public:
    double num1;
    double num2;
    double add(double num1, double num2) {
        return num1 + num2;
    }
    double multiply(double num1, double num2) {
        return num1 * num2;
    }
    double subtract_1_2(double num1, double num2) {
        return num1 - num2;
    }
    double subtract_2_1(double num2, double num1) {
        return num2 - num1;
    }
    double divide_1_2(double num1, double num2) {
        return num1 / num2;
    }
    double divide_2_1(double num2, double num1) {
        return num2 / num1;
    }
    bool set_num1(double num1) {
        if (num1 == 0) {
            return false;
        }
        return true;
    }
    bool set_num2(double num2) {
        if (num2 == 0) {
            return false;
        }
        return true;
    }
};

int main() {

    Calculator Calc;
    Calc.num1 = 1;
    Calc.num2 = 1;

    std::cout << "Enter a first number: ";
    std::cin >> Calc.num1;
    std::cout << "\nEnter a second number: ";
    std::cin >> Calc.num2;

    while (true) {
        if (Calc.num1 == 0) {
            std::cout << "Error!";
            std::cout << "\nEnter a first number: ";
            std::cin >> Calc.num1;
   
        }
        else if (Calc.num2 == 0) {
            std::cout << "Error!";
            std::cout << "\nEnter a second number: ";
            std::cin >> Calc.num2;
        }
        else {
            std::cout << "\nAddition: " << Calc.add(Calc.num1, Calc.num2);
            std::cout << "\nMultiplication: " << Calc.multiply(Calc.num1, Calc.num2);
            std::cout << "\nSubtraction 1-2: " << Calc.subtract_1_2(Calc.num1, Calc.num2);
            std::cout << "\nSubtraction 2-1: " << Calc.subtract_2_1(Calc.num2, Calc.num1);
            std::cout << "\nDivision 1-2: " << Calc.divide_1_2(Calc.num1, Calc.num2);
            std::cout << "\nDivision 2-1: " << Calc.divide_2_1(Calc.num2, Calc.num1);
            std::cout << "\nEnter a first number: ";
            std::cin >> Calc.num1;
            std::cout << "\nEnter a second number: ";
            std::cin >> Calc.num2;
        }
    }
    return 0;
}
