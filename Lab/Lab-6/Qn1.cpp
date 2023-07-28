// Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.

#include <iostream>
using namespace std;

class Distance
{
private:
    int meters;
    int centimeters;

public:
    Distance(int m = 0, int cm = 0) : meters(m), centimeters(cm) {} // Constructor overloading
    Distance(float m)
    {
        meters = m;
        centimeters = (m - meters)*100;
    }
    operator float()
    { // We know explicitly it will return float as it is a conversion operator
        return meters + centimeters/100.0f;
    }
    void showDistance()
    {
        cout << "Distance = " << meters << "m " << centimeters << "cm " << endl;
    }
};

int main()
{
    Distance d1(5, 67);
    float m = 92.6f;
    Distance d2(m);
    d1.showDistance();
    cout<<"Converted to Float: "<<float(d1)<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Distance in meters = "<<m<<endl;
    cout<<"Converted to (m,cm): ";
    d2.showDistance();
    return 0;
}