// Write a function that passes two temperatures by reference and sets the larger of the two numbers
//         to a value entered by user by using return by reference.
// refrenece garnu vaneko, address share garnu ho.
#include <iostream>
using namespace std;


float &get_larger(float &t1, float &t2){

    if(t1>t2)
        return t1;

    return t2;
}


int main(){

    float temp1, temp2, temp3;
    cout<<"Enter temperature-1: ";
    cin>> temp1;

    cout<<"Enter temperature-2: ";
    cin>> temp2;

    cout<<"Enter temperature-3: ";
    cin>> temp3;


    get_larger(temp1, temp2) = temp3;

    cout<<"Temperatures are: "<<endl<< temp1 <<endl<<temp2<<endl;

    return 0;
}