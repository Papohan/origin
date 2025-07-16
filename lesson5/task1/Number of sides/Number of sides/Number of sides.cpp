#include <iostream>
#include <string>

class Figure {
private:
    int sides_count;
    std::string name;
public:
    Figure() {
        sides_count = 0;
        name = "Figure: ";
    }

    int get_sides_count() { return sides_count; }
    std::string get_name() { return name; }
};

class Triangle : public Figure {
private:
    int sides_count;
    std::string name;
public:
    Triangle() {
        sides_count = 3;
        name = "Triangle: ";
    }
    int get_sides_count() { return sides_count; }
    std::string get_name() { return name; }
};

class Quadrangle : public Figure {
private:
    int sides_count;
    std::string name;
public:
    Quadrangle() {
        sides_count = 4;
        name = "Quadrangle: ";
    }
    int get_sides_count() { return sides_count; }
    std::string get_name() { return name; }
};

int main()
{
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Numder of sides: " << std::endl;
    std::cout << figure.get_name() << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << quadrangle.get_sides_count() << std::endl;
    return 0;
}


