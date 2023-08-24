// Write a program to create a user-defined manipulator that will format the output by setting the width, precision, and fill character at the same time by passing arguments.

#include <iostream>
#include <iomanip>
using namespace std;

class FormatOutput
{
private:
    int width;
    int precision;
    char fillChar;

public:
    FormatOutput(int w, int p, char fill) : width(w), precision(p), fillChar(fill) {}
    friend ostream &operator<<(ostream &os, FormatOutput &f);
};

ostream &operator<<(ostream &os, FormatOutput &f)
{
    os << setfill(f.fillChar) << setw(f.width) << setprecision(f.precision) << endl;
    os << flush;
    return os;
}

int main()
{
    double number = 123.456789;
    FormatOutput f(20, 6, '-');
    cout << f << number << endl;

    return 0;
}
