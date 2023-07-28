// Write a program to create a class shape with functions to find the area of the shapes and other essential components of the class. Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display(). WAP to  illustrate virtual functions and virtual destructors
#include <iostream>

using namespace std;

class Shape
{
private:
    float length;

public:
    Shape(float l = 0) : length(l){};
    virtual float findArea()
    {
        return length * length;
    }
    void displayArea()
    {
        cout << "Area = " << this->findArea() << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r) : radius(r){};
    float findArea()
    {
        return 3.14 * radius * radius;
    }
    void displayArea()
    {
        cout << "Area = " << this->findArea() << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b) : length(l), breadth(b){};
    float findArea()
    {
        return length * breadth;
    }
    void displayArea()
    {
        cout << "Area = " << this->findArea() << endl;
    }
};

class Trapezoid : public Shape
{
private:
    float base;
    float height;

public:
    Trapezoid(float b, float h) : base(b), height(h){};
    float findArea()
    {
        return 0.5 * base * height;
    }
    void displayArea()
    {
        cout << "Area = " << this->findArea() << endl;
    }
};

int main()
{
    // Circle c1(3);
    // Rectangle r1(4, 5);
    // Trapezoid t1(5, 6);

    // c1.findArea();
    // c1.displayArea();

    // r1.findArea();
    // r1.displayArea();

    // t1.findArea();
    // t1.displayArea();
    
    Shape* shape[3];
    
    return 0;
}