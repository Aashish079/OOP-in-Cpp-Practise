// Write a program to compare two objects of a class that contains an integer value as its data member. Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.
#include <iostream>
using namespace std;

class Integer
{
private:
    int data;

public:
    Integer(int n) : data(n) {}

    bool operator==(const Integer &n)
    {
        return data == n.data;
    }

    bool operator<(const Integer &n)
    {
        return data < n.data;
    }

    bool operator>(const Integer &n)
    {
        return data > n.data;
    }

    bool operator!=(const Integer &n)
    {
        return data != n.data;
    }

    bool operator<=(const Integer &n)
    {
        return data <= n.data;
    }

    bool operator>=(const Integer &n)
    {
        return data >= n.data;
    }
};

int main()
{
    Integer n1(5), n2(7);

    cout << "n1 == n2 : " << ((n1 == n2) ? "True" : "False") << endl;
    cout << "n1 < n2  :" << ((n1 < n2) ? "True" : "False") << endl;
    cout << "n1 > n2  :" << ((n1 > n2) ? "True" : "False") << endl;
    cout << "n1 != n2 : " << ((n1 != n2) ? "True" : "False") <<endl;
    cout << "n1 <= n2 : " << ((n1 <= n2) ? "True" : "False") <<endl;
    cout << "n1 >= n2 : " << ((n1 >= n2) ? "True" : "False") <<endl;

    return 0;
}