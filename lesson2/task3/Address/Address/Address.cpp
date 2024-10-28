#include <iostream>

struct address
{
	std::string city;
	std::string street;
	double numH{};
	int numF{};
	int index{};
};

void EnterAddress(address& add)
{
	std::cout << "Город: ";
	std::cin >> add.city;
	std::cout << "Улица: ";
	std::cin >> add.street;
	std::cout << "Дом: ";
	std::cin >> add.numH;
	std::cout << "Квартира: ";
	std::cin >> add.numF;
	std::cout << "Индекс: ";
	std::cin >> add.index;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	address your;
	your.city;
	your.street;
	your.numH;
	your.numF;
	your.index;
	
	EnterAddress(your);

	return 0;

}
