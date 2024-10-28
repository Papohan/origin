#include <iostream>

class Counter {
private:
    int num = 0;
public:

    void increment() {
        num++;
    }

    void decrement() {
        num--;
    }

    void print() {
        std::cout << num << std::endl;
    }

    void enter() {
        std::cout << "Enter the initial value of the counter:";
        std::cin >> num;
    }
    void enter2() {
        num = 1;
    }
};


int main() {

    Counter coun;
    std::string answ;
    std::string answ2;

    while (answ != "yes" && answ != "no") {
        std::cout << "Do you want to specify the initial value of the counter? ";
        std::cin >> answ;

        if (answ == "yes") {
            coun.enter();
            
        }
        else if (answ == "no") {
            coun.enter2();
           
        }
        else {
            std::cout << "Error\n";
        }
    }

     while (answ2 != "x") {
        std::cout << "Enter the command ('+', '-', '=' or 'x'):";
        std::cin >> answ2;
        if (answ2 == "+") {
            coun.increment();
        }
        else if (answ2 == "-") {
            coun.decrement();
        }
        else if (answ2 == "=") {
            coun.print();
        }
        else if (answ2 == "x") {
            std::cout << "Goodbay!";
           
        }
        else {
            std::cout << "Error\n";
        }
    }
    return 0;
}