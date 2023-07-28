//     5.  Write a base class that asks the user to enter a complex number and make a derived class that
//         adds the complex number of its own with the base. Finally, make a third class that is a friend of
//         derived and calculate the difference of the base complex number and its own complex number.

#include <iostream>
using namespace std;
class Complex;
class addComplex;
class subComplex;

class Complex
{
protected:
    float real;
    float imag;

public:
    Complex(float x=0, float y=0) : real(x), imag(y) {}    
};

class addComplex : public Complex
{
protected:
    float real1;
    float imag1;
public:
    addComplex(float x, float y) : real1(x), imag1(y) {}

    Complex getSum(){
        return Complex(real1+ real, imag1+imag);
    }
    friend class subComplex;
};

class subComplex 
{
protected:
    float real2, imag2;

public:
    subComplex(float x, float y) : real2(x), imag2(y) {}
    Complex getDiff(Complex &c1){
        return Complex(c1.real - real2, c1.imag - imag2);
    }
};

int main()
{
    float real, imag;
    cout << "Enter complex number:" << endl;
    cin >> real >> imag;

    Complex c1(real, imag);

    cout << "Add with?" << endl;
    cin >> real >> imag;
    addComplex c2(real, imag);

     cout << "Subtract with?" << endl;
    cin >> real >> imag;
    addComplex c2(real, imag);

    return 0;
}