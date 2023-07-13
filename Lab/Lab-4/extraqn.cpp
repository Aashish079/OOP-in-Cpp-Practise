// WAP to create a class called Vector that reads values(x,y,z) create methods in the class that does addition, dot product and cross product and display the results.

#include <iostream>
using namespace std;

class Vector
{
private:
    float x, y, z;

public:
    Vector(int a = 0, int b = 0, int c = 0) : x(a), y(b), z(c) {}

    Vector add(Vector v)
    {
        Vector res;

        res.x = x + v.x;
        res.y = y + v.y;
        res.z = z + v.z;
        return res;
    }
    float dotProduct(Vector v)
    {
        return x * v.x + y * v.y + z * v.z;
    }

    Vector crossProduct(Vector v)
    {
        Vector res;

        res.x = y * v.z - v.y * z;
        res.y = -(x * v.z - v.y * z);
        res.z = x * v.y - v.x * y;

        return res;
    }
    void dipslayVector(){
        cout<<"x = "<<this->x<<endl
        <<"y = "<<this->y<<endl
        <<"z = "<<this->z<<endl;
    }
};

int main()
{
    Vector v1(10, 5, 6), v2(8, 9, 3);

    cout<<"Vector Addition:"<<endl;
    v1.add(v2).dipslayVector();

    cout<<"Vector CrossProduct:"<<endl;
    v1.crossProduct(v2).dipslayVector();

    cout<<"Vector DotProduct = "<<v1.dotProduct(v2)<<endl;    


    return 0;
}
