// Write a program to create a class shape with functions to find the area of the shapes and other essential components of the class. Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display(). WAP to  illustrate virtual functions and virtual destructors
#include <iostream>

using namespace std;

class Shape
{
protected:
    float width, height;

public:
    virtual void setShape(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual float findArea()
    {
        return 0;
    }
    virtual void display()
    {
        cout<<"Shape:"<<endl;
    }

    virtual ~Shape(){
        cout<<"Shape destructor Called"<<endl;
    }
};

class Circle : public Shape
{
protected:
    float radius;

public:
    void setCircle(int r)
    {
        radius = r;
    }
    void display()
    {
        cout << "Circle: " << endl;
    }
    float findArea()
    {
        return 3.14 * radius * radius;
    }
    ~Circle(){
        cout<<"Circle destructor Called"<<endl;
    }
};

class Rectangle : public Shape
{
public:
    float setRectangle(int a, int b)
    {
        setShape(a, b);
    }
    float findArea()
    {
        return width * height;
    }
    void display()
    {
        cout << "Rectangle:" << endl;
    }
    ~Rectangle(){
        cout<<"Rectangle destructor Called"<<endl;
    }
};

class Trapezoid : public Shape
{
private:
    float a1, a2;

public:
    void setTrapezoid(int x, int y, int a, int b)
    {
        setShape(a, b);
        a1 = x;
        a2 = y;
    }
    float findArea()
    {
        return 0.5 * (a1 + a2) * height;
    }
    void display()
    {
        cout << "Trapezoid:" << endl;
    }
    ~Trapezoid(){
        cout<<"Trapezoid destructor Called"<<endl;
    }
};

int main()
{
    Circle* c1 = new Circle;
    Rectangle* r1 = new Rectangle;
    Trapezoid *t1 = new Trapezoid;

    Shape *shape[3] = {c1, r1, t1};

    c1->setCircle(5);
    r1->setRectangle(5, 8);
    t1->setTrapezoid(8, 6, 7, 10);

    for (int i = 0; i < 3; i++)
    {
        shape[i]->display();
        cout << shape[i]->findArea() << endl;
        delete shape[i];
    }
    return 0;
}