#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
private:
    float r, t;

public:
    Polar(float a = 0, float b = 0) : r(a), t(b){};

    void showPolar()
    {
        cout << "Polar Coordinate system: " << endl
             << "r = " << r << endl
             << "theta = " << t << endl;
    }
};

class Cartesian
{
private:
    float x, y;

public:
    Cartesian(float a = 0, float b = 0) : x(a), y(b){};

    operator Polar()
    {
        float r, th;
        r = sqrt(x * x + y * y);
        th = atanf(x / y) * 180 / 3.14f;
        return (Polar(r, th));
    }
};


int main()
{
    float x,y;
    cout<<"Enter Cartesian Coordinates: "<<endl;
    cin>>x>>y;

    Cartesian c3;

    Cartesian c1(x, y);
    Polar p1;
    p1=c1; //User-defined to User-defined type conversion
    p1.showPolar();
    return 0;
}