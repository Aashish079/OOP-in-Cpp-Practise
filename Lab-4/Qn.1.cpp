// Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member function to add time objects and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format.

#include<iostream>
#include<iomanip>

using namespace std;

class Time{
private:
    int hour, minute, second;
    // time(int hr, int min, int sec): hour(hr), minute(min), second(sec){}                     Efficient way of writing constructor, called Initializer list

public:
    Time(int hr = 0, int min = 0, int sec = 0){
        hr = hour;
        min = minute;
        sec = second;
    }

    Time addTime(const Time t){

        Time temp;
        temp.hour = hour + t.hour;
        temp.minute = minute + t.minute;
        temp.second = second + t.second;
        
        temp.minute += temp.second/60;
        temp.second %= 60;

        temp.hour += temp.minute/60;
        temp.minute %= 60;

        return temp;
    }

    void displayIn12HrFormat(){
        cout<<"---Time in 12 hour format---";
        cout << setfill('0')<<setw(2)<< (hour >12?hour-12:hour);
        
    }
    void displayIn24HrFormat(){

    }
};


int main(){
    Time t1(12, 59, 58), t2(12, 5, 6);

    Time t3 = t1.addTime(t2);
 
    return 0;
}