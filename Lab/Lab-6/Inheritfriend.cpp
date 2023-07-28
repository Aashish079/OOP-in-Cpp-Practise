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

    addComplex getSum(){ //Return addComplex
        return addComplex(real1+ real, imag1+imag);
    }
    void showSum(){
        cout<<"Sum = ("<<real1<<" ,"<<imag1<<")"<<endl;
    }
    friend class subComplex;
};

class subComplex
{
protected:
    float real2, imag2;

public:
    subComplex(float x, float y) : real2(x), imag2(y) {}
    Complex getDiff(addComplex &c1){
        return addComplex(c1.real - real2, c1.imag - imag2);
    }
    void showDiff(){
        cout<<"Difference = ("<<real2<<" ,"<<imag2<<")"<<endl;
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
    subComplex c3(real, imag);

    return 0;
}
