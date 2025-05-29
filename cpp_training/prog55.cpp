
#include <iostream>
#include <cmath> 
using namespace std;
class Shape {
public:

    virtual void calculateArea() {

        cout << "Area not defined for generic shape." << endl;

    }

};

class Circle : public Shape {

private:
    double radius;

public:

    Circle(double r) : radius(r) {}

    void calculateArea() override {

        double area = M_PI * radius * radius;

        cout << "Area of Circle: " << area << endl;

    }

};
class Rectangle : public Shape {

    double length;
    double width;
public:

    Rectangle(double l, double w) : length(l), width(w) {}

    void calculateArea() override {

        double area = length * width;

        cout << "Area of Rectangle: " << area << endl;

    }

};

class Triangle : public Shape {
private:

    double base;

    double height;

public:

    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {

        double area = 0.5 * base * height;

        cout << "Area of Triangle: " << area << endl;
    }
};

