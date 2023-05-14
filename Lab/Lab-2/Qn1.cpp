// Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function


#include<iostream>
#include<iomanip>
using namespace std;

struct date {
    int month;
    int day;
    int year;
};

void displayDate(date d){

    cout<<d.month<<'/'<<d.day<<'/'<<d.year<<endl;

}

int main(){

    struct date d1;
   
    cout << "Enter the year: "<<endl;
    cin >> d1.year;

    cout << "Enter the month: "<<endl;
    cin >> d1.month;

    cout << "Enter the day: "<<endl;
    cin >> d1.day;


    displayDate(d1);
return 0;
}