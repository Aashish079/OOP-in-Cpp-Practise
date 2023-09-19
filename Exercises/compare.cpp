#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T findmax(T a, T b)
{
    return a > b ? a : b;
}

char *findmax(char *a, char *b)
{
    return strcmp(a, b) > 0 ? a : b;
}

int main()
{
    int a = 10, b = 20;
    cout << "Maximum int is " << findmax(a, b) << endl;


    double x = 10.1, y = 20.2;
    cout << "Maximum double is " << findmax(x, y) << endl;
    
    char str1[] = "Aashish", str2[] = "Sudip";
    cout << "Alphabetically Greater: " << findmax(str1, str2) << endl;
    return 0;
}