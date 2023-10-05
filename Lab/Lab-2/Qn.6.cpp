//  6.  Write a program that displays the current monthly salary of chief executive officer, information officer,
//         and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010.
//         Let us assume that the salaries in year 2009 are
//         Chief executive officer Rs. 35000/m
//         Information officer Rs. 25000/m
//         System analyst Rs. 24000/m
//         Programmer Rs. 18000/m
//         Make a function that takes two arguments; one salary and the other increment.
//         Use proper default argument.


#include <iostream>
#include <iomanip>
using namespace std;

float display_salary(float salary = 5000, float increment = 0.1 ){

return salary*(1+increment);
}

int main(){
float CEO = 35000, inf_officer = 25000, sys_analyst=24000, prog= 18000;
cout.setf(ios::left, ios::adjustfield);
cout<<"----Salary in 2009---- "<< endl;
cout<<setw(25)<<"Chief executive officer "<<setw(5)<<"Rs."<<setw(5)<<CEO<<endl;
cout<<setw(25)<<"Information officer"<<setw(5)<<"Rs."<<setw(5)<< inf_officer<<endl;
cout<<setw(25)<<"System Analyst"<<setw(5)<<"Rs."<<setw(5)<< sys_analyst<<endl;
cout<<setw(25)<<"Programmer"<<setw(5)<<"Rs."<<setw(5)<< prog<<endl;

cout<<"----Salary in 2010---- "<< endl;
cout<<setw(25)<<"Chief executive officer "<<setw(5)<<"Rs."<<setw(5)<<display_salary(CEO,0.09)<<endl;
cout<<setw(25)<<"Information officer"<<setw(5)<<"Rs."<<setw(5)<< display_salary(inf_officer, 0.1)<<endl;
cout<<setw(25)<<"System Analyst"<<setw(5)<<"Rs."<<setw(5)<< display_salary(sys_analyst,0.12)<<endl;
cout<<setw(25)<<"Programmer"<<setw(5)<<"Rs."<<setw(5)<< display_salary(prog,0.12)<<endl;

//By default
cout<<setw(25)<<"Intern"<<setw(5)<<"Rs."<<setw(5)<< display_salary()<<endl;


    return 0;
}
