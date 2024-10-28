#include <iostream>
#include <locale.h>

struct Balance
{
	int numB;
	std::string name;
	double numM;
};

void newBalance(Balance& bal)
{
	std::cin >> bal.numM;
}


int main() {
	setlocale(LC_ALL, "Russian");

	Balance old;
	old.numB = 0;
	old.name = " ";
	old.numM = 0;

	std::cout << "¬ведите номер счета: ";
	std::cin >> old.numB;
	std::cout << "\n¬ведите им€ владельца: ";
	std::cin >> old.name;
	std::cout << "\n¬ведите сумму на счету: ";
	std::cin >> old.numM;
	std::cout << "\n¬ведите новую сумму: ";
	newBalance(old);
	std::cout << "\n¬аш счет: " << old.name << " " << old.numB << " " << old.numM;
	return 0;
}