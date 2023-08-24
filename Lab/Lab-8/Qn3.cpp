
// Write a program to overload stream operators to read a complex number and display the complex number in a+ib format.
#include<iostream>
using namespace std;

class complex
{
    int real, imag;
    friend istream& operator>>(istream& is,complex& c);
    friend ostream& operator<<(ostream& os,complex& c);
};
istream& operator>>(istream& is,complex& c)
{
    is>>c.real>>c.imag;
    return is;
}
ostream& operator<<(ostream& os,complex& c)
{
    os<<c.real<<"+ i"<<c.imag;
    return os;
}

int main()
{
    complex c;
    cout<<"Enter real and imag: ";
    cin>>c;
    cout<<c<<endl;
    return 0;
}