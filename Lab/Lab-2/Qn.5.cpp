//  5.  Assume that employee will have to pay 10 percent income tax to the government.
//         Ask user to enter the employee salary. Use inline function to display the net
//         payment to the employee by the company.

#include<iostream>
using namespace std;

inline float net_payment(float salary){
    return 0.9*salary;
}

int main(){

    float salary;
    cout<<"Enter your salary:";
    cin>> salary;

    cout<<"Net Payment by the company: "<<net_payment(salary)<<endl;


    return 0;
}