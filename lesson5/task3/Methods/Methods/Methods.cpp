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
    virtual bool check() {
        if (sides_count == 0) {
            std::cout << "Correct \n" << std::endl;
            }
        else {
            std::cout << "Incorrect \n" << std::endl;
            }
        return true;
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
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << std::endl;
    }

    bool check() override {
        if (angle_A + angle_B + angle_C == 180)
            std::cout << "Correct \n" << std::endl;
        else
            std::cout << "Incorrect \n" << std::endl;
        return true;
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
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << std::endl;
    }
    bool check() override {
        if (angle_A + angle_B + angle_C == 180)
            std::cout << "Correct \n" << std::endl;
        else
            std::cout << "Incorrect \n" << std::endl;
        return true;
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
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << std::endl;
    }
    bool check() override {
        if (angle_A + angle_B + angle_C == 180)
            std::cout << "Correct \n" << std::endl;
        else
            std::cout << "Incorrect \n" << std::endl;
        return true;
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
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << std::endl;
    }
    bool check() override {
        if (angle_A + angle_B + angle_C == 180)
            std::cout << "Correct \n" << std::endl;
        else
            std::cout << "Incorrect \n" << std::endl;
        return true;
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
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << " " << side_d << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << " " << angle_D << std::endl;
    }
    bool check() override {
        if (angle_A + angle_B + angle_C + angle_D == 360)
            std::cout << "Correct \n" << std::endl;
        else
            std::cout << "Incorrect \n" << std::endl;
        return true;
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
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << " " << side_d << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << " " << angle_D << std::endl;
    }
    bool check() override {
        if (angle_A + angle_B + angle_C + angle_D == 360)
            std::cout << "Correct \n" << std::endl;
        else
            std::cout << "Incorrect \n" << std::endl;
        return true;
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
        name = " Parallelogram: ";
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
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << " " << side_d << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << " " << angle_D << std::endl;
    }
    bool check() override {
        if (angle_A + angle_B + angle_C + angle_D == 360)
            std::cout << "Correct \n" << std::endl;
        else
            std::cout << "Incorrect \n" << std::endl;
        return true;
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
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << " " << side_d << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << " " << angle_D << std::endl;
    }
    bool check() override {
        if (angle_A + angle_B + angle_C + angle_D == 360)
            std::cout << "Correct \n" << std::endl;
        else
            std::cout << "Incorrect \n" << std::endl;
        return true;
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
        name = " Square: ";
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
        std::cout << name << "\n" << nameside << side_a << " " << side_b << " " << side_c << " " << side_d << "\n" << nameangle << angle_A << " " << angle_B << " " << angle_C << " " << angle_D << std::endl;
    }
    bool check() override {
        if (angle_A + angle_B + angle_C + angle_D == 360)
            std::cout << "Correct \n" << std::endl;
        else
            std::cout << "Incorrect \n" << std::endl;
        return true;
    }
};

int main() {

    Figure figure;
    Triangle triangle;
    RightTriangle righttriangle;
    IsoscelesTriangle isoscelestriangle;
    EquilateralTriangle equilateraltriangle;
    Quadrangle quadrangle;
    Rectangle rectangle;
    Parallelogram parallelogram;
    Rhombus rhombus;
    Square square;

    figure.print_info();
    figure.check();
    triangle.print_info();
    triangle.check();
    righttriangle.print_info();
    righttriangle.check();
    isoscelestriangle.print_info();
    isoscelestriangle.check();
    equilateraltriangle.print_info();
    equilateraltriangle.check();
    quadrangle.print_info();
    quadrangle.check();
    rectangle.print_info();
    rectangle.check();
    parallelogram.print_info();
    parallelogram.check();
    rhombus.print_info();
    rhombus.check();
    square.print_info();
    square.check();
    return 0;
}