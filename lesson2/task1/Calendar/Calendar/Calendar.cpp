#include <iostream>


enum class Month {
    January = 1, Februry, March, April, May, June, July, August, September, October, November, December
};


int main() {
    int num1;

    std::cout << "Enter a number: ";
    std::cin >> num1;

    while (num1 != 0) {

        if (num1 >= 1 && num1 <= 12) {

            Month moun = static_cast<Month>(num1);

            switch (moun) {
            case Month::January:
                std::cout << "January\n";
                break;

            case Month::Februry:
                std::cout << "Februry\n";
                break;

            case Month::March:
                std::cout << "March\n";
                break;

            case Month::April:
                std::cout << "April\n";
                break;

            case Month::May:
                std::cout << "May\n";
                break;
            case Month::June:
                std::cout << "June\n";
                break;

            case Month::July:
                std::cout << "July\n";
                break;

            case Month::August:
                std::cout << "August\n";
                break;

            case Month::September:
                std::cout << "September\n";
                break;

            case Month::October:
                std::cout << "October\n";
                break;

            case Month::November:
                std::cout << "November\n";
                break;

            case Month::December:
                std::cout << "December\n";
                break;
            }
        }
        else {
            std::cout << "Error\n";
        }
        std::cout << "Enter a number: ";
        std::cin >> num1;
    }
    if (num1 == 0) {
        std::cout << "Goodbye";
    }

    return 0;
}