#include <iostream>
using namespace std;

template <class T>
class Base
{
    private:
        T data;
    public:
        base():data(0){}
        base(T d):data(a){}

        void display()
        {
            cout<<"data: "<<data<<endl;
        }
};

template <class T1, class T2>
class derived:public Base<T1>
{
    private:
        T2 data;
    public:
        derived():data(0){}
        derived(T1 d, T2 b):data(d), Base<T2>(b){}

        void display()
        {
            cout<<"data: "<<data<<endl;
            Base<T2>::display();
        }
};