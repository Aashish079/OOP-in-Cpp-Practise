#include<iostream>
using namespace std;

/*Create a function called sum() that returns the sum of the elements of an array. 
Make this function into a template so it will work with any numerical type.
 Write a program that applies this function to data of various types.
*/
template <class T,int N>
T sum(T (&arr)[N])
{
    T total;
    for(int i = 0;i<N;i++)
    {
        total+=arr[i];
    }
    return total;
}

int main()
{
    int a[]= {5,4,3,2,1};
    float b[] = {5.4,7.6,3.4,5.6};
    cout<<"The sum of int array is "<<sum(a)<<endl;
    cout<<"The sum of float array is "<<sum(b)<<endl;
    return 0;
}