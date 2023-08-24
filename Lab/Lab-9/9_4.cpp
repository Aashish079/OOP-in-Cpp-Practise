/*Write any program that demonstrates the use of multiple catch handling,
re-throwing an exception, and catching all exceptions.*/
#include<iostream>

using namespace std;

class Zero{};
class Invalid{};
int getval()
{   
    int a;
    cout<<"Enter a value: ";
    cin>>a;
    if (cin.fail()) {
    cin.clear(); 
    throw Invalid();
    }
    return a;
}

float divide()
{
    int a,b;
    try
    {
        a = getval();
        b = getval();
    }
    catch(Invalid)
    {
        throw;
    }
    if(b==0)
    {
        throw Zero();
    }
    return float(a)/b;
    
}
int main()
{
    try{

    try
    {
        cout<<divide();
    }
    catch(Zero)
    {
        cout<<"Division by zero not possible"<<endl;
        throw;
    }
    catch(Invalid)
    {
        cout<<"Invalid Input"<<endl;
        throw;
    }
    }
    catch(...)
    {
        cout<<"Error occured";
    }
    return 0;
}