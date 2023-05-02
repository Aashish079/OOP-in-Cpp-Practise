// Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.

#include <iostream>
using namespace std;

int main()
{

    char sentence[] = "idea without execution is worthless";
    char *ptr = sentence;
    int position = 1;

    while (true)
    {
        if (*ptr == 'c')
        {
            cout << "Position of 'c' in the sentence is: " << position;
            break;
        }
        position++;
        ptr++;
    }

    return 0;
}