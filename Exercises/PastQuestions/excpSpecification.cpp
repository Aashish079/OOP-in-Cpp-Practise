#include<iostream>
#include<cstdlib>
#include<exception>

using namespace std;
void progTerm()
{
cout<<"Unexpected exception!"<<endl;
cout<<"Terminating...";
exit(0);
}
int main() throw(int,float)
{
cout<<"Inside main function!"<<endl; try
{
set_unexpected(progTerm);
cout<<"Inside try block!"<<endl;
throw 'z';
}
catch(int n)
{
cout<<"int Exception caught!";
}
catch(float b)
{
cout<<"float Exception caught!"; }
return 0;
}