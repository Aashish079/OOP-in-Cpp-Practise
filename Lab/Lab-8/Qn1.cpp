/*
    1.  Write a program to demonstrate the use of different ios flags and functions to
        format the output. Create a program to generate the bill invoice of a department store
        by using different formatting.
*/

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::left);

    cout.width(40);
    cout << "Item Description";

    cout.setf(ios::right);
    cout.width(30);
    cout << "Quantity";

    cout.width(20);
    cout << "Rate";

    cout.width(30);
    cout << "Amount" << endl; 

    string items[3] = {"Iphone", "Ipad", "MacBook Pro"};
    float rate[3] = {156000, 74000, 315000};
    int quantity[3] = {1, 1, 1};

    for (int i = 0; i < 3; i++)
    {
        // std::ios::right and std::ios::left are mutually exclusive flags of std::ios::adjustfield formatting group
        // setf() only turns on the flags specified and is not smart enough to turn off other flags,
        // so to turn on only std::ios::left, we have to specify the formatting group as well

        // Turn on only std::ios::left flag, and turn off all the flags belonging to the group std::ios::adjustfield
        cout.setf(ios::left, ios::adjustfield);
        cout.width(40);
        cout << items[i];

        cout.setf(ios::right);
        cout.width(30);
        cout << quantity[i];

        cout.setf(ios::fixed);
        cout.width(20);
        cout.precision(2);
        cout << rate[i];

        cout.width(30);
        cout << quantity[i] * rate[i] << endl;
    }

    return 0;
}