// .  Write two classes to store distances in meter-centimeter and feet-inch systems respectively.
// Write conversions functions so that the program can convert objects of both types.

#include <iostream>
using namespace std;
class British; // Forward Declaration

class Metric
{
private:
    int meters;
    int centimeters;

public:
    Metric(int m = 0, int cm = 0) : meters(m), centimeters(cm){};
    Metric operator=(British); // Forward Declaration for operator overloading function
    int getMeter() const
    {
        return meters;
    }
    int getCentimeter() const
    {
        return centimeters;
    }
};

class British
{
private:
    int feets;
    int inches;

public:
    British(int ft = 0, int in = 0) : feets(ft), inches(in){};
    British operator=(Metric);
    int getFeet() const
    {
        return feets;
    }
    int getInch() const
    {
        return inches;
    }
};

Metric Metric::operator=(British d)
{
    float ft = d.getFeet() + d.getInch() / 12.0f;
    meters = ft * 0.3048;
    centimeters = (ft * 0.3048 - meters) * 100;
}

British British::operator=(Metric d)
{
    float m = d.getMeter() + d.getCentimeter() / 100.0f;
    feets = m * 3.28;
    inches = (m * 3.28 - feets) * 12;
}

int main()
{
    Metric d1(3, 92), d3;
    British d2(4, 8), d4;

    d3 = d2;
    d4 = d1;

    cout << "Converted Metric to British system measurements : "<< d1.getMeter() << " m " << d1.getCentimeter() << " cm = " << d4.getFeet() << " ft " << d4.getInch() << " in" << endl;
    cout << "Converted British to Metric system measurements : "<< d2.getFeet() << " ft " << d2.getInch() << " in = " << d3.getMeter() << " m " << d3.getCentimeter() << " cm" << endl;

    return 0;
}
