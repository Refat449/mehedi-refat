#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double x, y;
public:
    void get_data(double a, double b = 0) {
        x = a; y = b;
    }
    virtual void display_area() {   // make this non-virtual to compare results
        cout << "Area not defined for this shape.\n";
    }
};

// Derived class - Rectangle
class Rectangle : public Shape {
public:
    void display_area() override {
        cout << "Rectangle Area = " << (x * y) << endl;
    }
};

// Derived class - Circle
class Circle : public Shape {
public:
    void display_area() override {
        cout << "Circle Area = " << (3.14159 * x * x) << endl;
    }
};

// Derived class - Triangle (no override)
class Triangle : public Shape {
    // No display_area() defined
};

int main() {
    Shape* s;

    Rectangle r;
    r.get_data(10, 5);
    s = &r;
    cout << "For Rectangle:\n";
    s->display_area();

    Circle c;
    c.get_data(7);
    s = &c;
    cout << "\nFor Circle:\n";
    s->display_area();

    Triangle t;
    t.get_data(6, 4);
    s = &t;
    cout << "\nFor Triangle:\n";
    s->display_area();

    return 0;
}
