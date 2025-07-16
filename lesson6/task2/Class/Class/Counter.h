#pragma once

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