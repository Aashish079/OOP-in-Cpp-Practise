#include <iostream>
using namespace std;

class A
{
public:
    virtual void funA() = 0;
    void funB(){
        cout<<"A ";
    }
};

class B: public A{
    void funB(){
        cout<<"B ";
    }
};

int main(){
    A a;
    B b;

    return 0;
}