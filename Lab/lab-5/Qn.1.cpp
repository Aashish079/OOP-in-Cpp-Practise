// Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

// A. Make a particular member function of one class as a friend function of another class for addition.

// B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

// C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

// Make least possible classes to demonstrate all the above in a single program without conflict.

#include <iostream>
using namespace std;

class Cartesian2;

class Cartesian
{
private:
    int x;
    int y;

public:
    Cartesian(int a = 0, int b = 0) : x(a), y(b) {}

    Cartesian operator+(const Cartesian2 &c);



    friend Cartesian operator-(const Cartesian &c1, const Cartesian2 &c2);
    friend Cartesian operator*(const Cartesian &c1, const Cartesian2 &c2);
    friend Cartesian operator/(const Cartesian &c1, const Cartesian2 &c2);

    void showResult()
    {
        cout << this->x << " ," << this->y << endl;
    }
};

class Cartesian2
{
private:
    int x;
    int y;

public:
    Cartesian2(int a = 0, int b = 0) : x(a), y(b) {}

    friend Cartesian  Cartesian::operator+(const Cartesian2 &c);
    friend Cartesian  operator-(const Cartesian &c1, const Cartesian2 &c2);
    friend Cartesian  operator*(const Cartesian &c1, const Cartesian2 &c2);
    friend Cartesian  operator/(const Cartesian &c1, const Cartesian2 &c2);

    void showResult()
    {
        cout << this->x << " ," << this->y << endl;
    }
};

Cartesian operator-(const Cartesian &c1, const Cartesian2 &c2)
{

    Cartesian result(c1.x - c2.x, c1.y - c2.y);

    return result;
}
Cartesian operator*(const Cartesian &c1, const Cartesian2 &c2)
{

    Cartesian result(c1.x * c2.x, c1.y * c2.y);

     return result;
}
Cartesian operator/(const Cartesian &c1, const Cartesian2 &c2)
{

    Cartesian result(c1.x / c2.x, c1.y / c2.y);

    return result;
}
    Cartesian Cartesian::operator+(const Cartesian2 &c)
    {
        Cartesian result(x + c.x, y + c.y);
        return result;
    }

int main()
{
    Cartesian rA, rS, rM, rD, c1(1, 2);
    Cartesian2 c2(2, 3);

    rA = c1 + c2;
    rA.showResult();

    rS = c1 - c2;
    rS.showResult();

    rM = c1 * c2;
    rM.showResult();

    rD = c1 / c2;
    rD.showResult();

    return 0;
}