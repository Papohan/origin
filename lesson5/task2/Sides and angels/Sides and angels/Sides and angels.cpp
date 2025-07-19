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
    virtual void print_info() {
        std::cout << name << sides_count << std::endl;
    }


};

class Triangle : public Figure {
private:

    std::string name;
    std::string nameside;
    std::string nameangle;
    int side_a;
    int side_b;
    int side_c;
    int angle_A;
    int angle_B;
    int angle_C;
public:
    Triangle() {
        name = "Triangle: ";
        nameside = "Sides: ";
        nameangle = "Angels: ";
        side_a = 10;
        side_b = 20;
        side_c = 30;
        angle_A = 50;
        angle_B = 60;
        angle_C = 70;
    }
    void print_info() override {
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << "\n" << std::endl;
    }
};


class RightTriangle : public Triangle {
private:
    std::string name;
    std::string nameside;
    std::string nameangle;
    int side_a;
    int side_b;
    int side_c;
    int angle_A;
    int angle_B;
    int angle_C;
public:
    RightTriangle() {
        name = "Right Triangle: ";
        nameside = "Sides: ";
        nameangle = "Angels: ";
        side_a = 10;
        side_b = 20;
        side_c = 30;
        angle_C = 90;
        angle_A = 30;
        angle_B = 60;
    }
    void print_info() override {
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << "\n" << std::endl;
    }
};

class IsoscelesTriangle : public RightTriangle {
private:
    std::string name;
    std::string nameside;
    std::string nameangle;
    int side_a;
    int side_b;
    int side_c;
    int angle_A;
    int angle_B;
    int angle_C;
public:
    IsoscelesTriangle() {
        name = "Isosceles Triangle: ";
        nameside = "Sides: ";
        nameangle = "Angels: ";
        side_a = 10;
        side_c = side_a;
        side_b = 30;
        angle_A = 70;
        angle_C = angle_A;
        angle_B = 40;

    }
    void print_info() override {
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << "\n" << std::endl;
    }
};

class EquilateralTriangle : public IsoscelesTriangle {
private:
    std::string name;
    std::string nameside;
    std::string nameangle;
    int side_a;
    int side_b;
    int side_c;
    int angle_A;
    int angle_B;
    int angle_C;
public:
    EquilateralTriangle() {
        name = "Equilateral Triangle: ";
        nameside = "Sides: ";
        nameangle = "Angels: ";
        side_a = 30;
        side_b = side_a;
        side_c = side_a;
        angle_A = 60;
        angle_B = angle_A;
        angle_C = angle_A;
    }
    void print_info() override {
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << "\n" << std::endl;
    }
};

class Quadrangle : public Figure {
private:
    std::string name;
    std::string nameside;
    std::string nameangle;
    int side_a;
    int side_b;
    int side_c;
    int side_d;
    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;
public:
    Quadrangle() {
        name = "Quadrangle: ";
        nameside = "Sides: ";
        nameangle = "Angels: ";
        side_a = 10;
        side_b = 20;
        side_c = 30;
        side_d = 40;
        angle_A = 50;
        angle_B = 60;
        angle_C = 70;
        angle_D = 80;
    }
    void print_info() override {
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << " " << side_d << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << " " << angle_D << "\n" << std::endl;
    }
};

class Rectangle : public Quadrangle {
private:
    std::string name;
    std::string nameside;
    std::string nameangle;
    int side_a;
    int side_b;
    int side_c;
    int side_d;
    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;
public:
    Rectangle() {
        name = "Rectangle: ";
        nameside = "Sides: ";
        nameangle = "Angels: ";
        side_a = 10;
        side_b = 20;
        side_c = side_a;
        side_d = side_b;
        angle_A = 90;
        angle_B = angle_A;
        angle_C = angle_A;
        angle_D = angle_A;
    }
    void print_info() override {
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << " " << side_d << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << " " << angle_D << "\n" << std::endl;
    }
};

class Parallelogram : public Rectangle {
private:
    std::string name;
    std::string nameside;
    std::string nameangle;
    int side_a;
    int side_b;
    int side_c;
    int side_d;
    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;
public:
    Parallelogram() {
        name = "Parallelogram: ";
        nameside = "Sides: ";
        nameangle = "Angels: ";
        side_a = 20;
        side_b = 30;
        side_c = side_a;
        side_d = side_b;
        angle_A = 70;
        angle_B = 110;
        angle_C = angle_A;
        angle_D = angle_B;
    }
    void print_info() override {
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << " " << side_d << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << " " << angle_D << "\n" << std::endl;
    }
};

class Rhombus : public Parallelogram {
private:
    std::string name;
    std::string nameside;
    std::string nameangle;
    int side_a;
    int side_b;
    int side_c;
    int side_d;
    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;
public:
    Rhombus() {
        name = "Rhombus: ";
        nameside = "Sides: ";
        nameangle = "Angels: ";
        side_a = 30;
        side_b = side_a;
        side_c = side_a;
        side_d = side_a;
        angle_A = 70;
        angle_B = 110;
        angle_C = angle_A;
        angle_D = angle_B;

    }
    void print_info() override {
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << " " << side_d << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << " " << angle_D << "\n" << std::endl;
    }
};

class Square : public Rhombus {
private:
    std::string name;
    std::string nameside;
    std::string nameangle;
    int side_a;
    int side_b;
    int side_c;
    int side_d;
    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;
public:
    Square() {
        name = "Square: ";
        nameside = "Sides: ";
        nameangle = "Angels: ";
        side_a = 20;
        side_b = side_a;
        side_c = side_a;
        side_d = side_a;
        angle_A = 90;
        angle_B = angle_A;
        angle_C = angle_A;
        angle_D = angle_A;
    }
    void print_info() override {
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << " " << side_d << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << " " << angle_D << "\n" << std::endl;
    }
};

int main() {

    Triangle triangle;
    RightTriangle righttriangle;
    IsoscelesTriangle isoscelestriangle;
    EquilateralTriangle equilateraltriangle;
    Quadrangle quadrangle;
    Rectangle rectangle;
    Parallelogram parallelogram;
    Rhombus rhombus;
    Square square;

    triangle.print_info();
    righttriangle.print_info();
    isoscelestriangle.print_info();
    equilateraltriangle.print_info();
    quadrangle.print_info();
    rectangle.print_info();
    parallelogram.print_info();
    rhombus.print_info();
    square.print_info();
    return 0;
}