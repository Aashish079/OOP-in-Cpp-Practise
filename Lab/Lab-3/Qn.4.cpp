// Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.

#include <iostream>
using namespace std;

class Circle{
private:
    float rad;
public:
    Circle(float r):rad(r){}
    void showDim(){
    cout<<"Radius = "<<rad<<endl;
    }
    float getPerimeter(){
        return 2*3.14*rad;
    }
    float getArea(){
        return 3.14*rad*rad;
    }
};

class Rectangle{
private:
    float length, breadth;
public:
    Rectangle(float l, float b):length(l), breadth(b){}
    void showDim(){
        cout<<"Length = "<<length<<" Breadth = "<<breadth<<endl;
    }
    float getPerimeter(){
        return 2*(length + breadth);
    }
    float getArea(){
        return length*breadth;
    }
};

class Triangle{
private:
    float a, b, c;
public:
    Triangle(float x, float y, float z):a(x), b(y), c(z){}

    void showDim(){
        cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
    } 
    float getPerimeter(){
        return (a+b+c);    
    }
    float s = getPerimeter()/2;
    float getArea(){
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
};

int main(){
    Circle c1(5);
    Rectangle r1(5,6);
    Triangle t1(3,4,5);

    cout<<"---For Circle---"<<endl;
    c1.showDim();
    cout<<"Perimeter = "<<c1.getPerimeter()<<endl;
    cout<<"Area = "<<c1.getArea()<<endl;


    cout<<"---For Rectangle---"<<endl;
    r1.showDim();
    cout<<"Perimeter = "<<r1.getPerimeter()<<endl;
    cout<<"Area = "<<r1.getArea()<<endl;

    cout<<"---For Triangle---"<<endl;
    t1.showDim();
    cout<<"Perimeter = "<<t1.getPerimeter()<<endl;
    cout<<"Area = "<<t1.getArea()<<endl;

    return 0;
}