#include <iostream>
using namespace std;

class Number
{
public:
    int notes[7] = {1000, 500, 100, 50, 20, 10, 5};
    int money;
    int numofNotes = 0;

    int getNumberofNotes()
    {
        cin >> money;

        for (int i = 0; i < 6; i++)
        {
            if (money / notes[i] >= 1)
            {
                numofNotes += money/notes[i];
                cout<<notes[i]<<"--->"<<money/notes[i]<<endl;
                money -= (money/notes[i])*notes[i];
            }
            if (money == 0)
            {
                return numofNotes;
            }
        }
    }
};

int main()
{

    Number n1;
    cout << n1.getNumberofNotes();
    return 0;
}
