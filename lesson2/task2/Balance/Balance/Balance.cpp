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

	std::cout << "������� ����� �����: ";
	std::cin >> old.numB;
	std::cout << "\n������� ��� ���������: ";
	std::cin >> old.name;
	std::cout << "\n������� ����� �� �����: ";
	std::cin >> old.numM;
	std::cout << "\n������� ����� �����: ";
	newBalance(old);
	std::cout << "\n��� ����: " << old.name << " " << old.numB << " " << old.numM;
	return 0;
}