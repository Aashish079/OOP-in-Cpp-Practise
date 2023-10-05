#include <iostream>
using namespace std;
class complex
{
    float real;
    float imag;

public:
    complex() // Default Constructor
    {
        cout << "Inside Default Constructor" << endl;
        real = 0;
        imag = 0;
    }
    complex(float r, float i)
    { // Parameterized Constructor {
        cout << "Inside Parameterized Constructor" << endl;
        real = r;
        imag = i;
    }
    // complex(complex &c)
    // { // Explicit Copy Constructor {
    //     cout
    //         << "Inside Copy Constructor" << endl;
    //     real = c.real;
    //     imag = c.imag;
    // }
    ~complex()
    {
        cout << "Inside Destructor! Destroying object!!" << endl;
    }
    void showdata()
    {
        cout << real << "+i" << imag << endl;
    }
};

int main()
{
    complex c1, c2(1.1, 2.4), c3(c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}