// 3.  Create a class called Musicians to contain three methods string(), wind(), and perc().
//     Each of these methods should initialize a string array to contain the following instruments
//     -  veena, guitar, sitar, sarod and mandolin under string()
//     -  flute, clarinet saxophone, nadhaswaram, and piccolo under wind()
//     -  tabla, mridangam, bangos, drums and tambour under perc()
//     It should also display the contents of the arrays that are initialized.

//     Create a derived class called TypeIns to contain a method called get() and show().
//     The get() method must display a menu as follows
//     Type of instruments to be displayed
//     a.  String instruments
//     b.  Wind instruments
//     c.  Percussion instruments
//     The show() method should display the relevant detail according to our choice.
//     The base class variables must be accessible only to their derived classes.

#include <iostream>
using namespace std;
#include<cctype>

class Musicians
{
public:
    void String()
    {
        string stringInstruments[5] = {"Veena", "Guitar", "Sitar", "Sarod", "Mandolin"};
        cout<<"------------------------"<<endl;
        cout << "String instruments: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << stringInstruments[i] << endl;
        }
    }
    void wind()
    {
        string windInstruments[5] = {"Flute", "Clarinet", "Nadhaswaram", "Piccolo", "Saxophone"};
        cout<<"------------------------"<<endl;
        cout << "Wind instruments:"<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout << windInstruments[i] << endl;
        }
    }

    void perc()
    {
        string percInstruments[5] = {"Tabla", "Mridangam", "Bangos", "Drums", "Tambour"};
         cout<<"------------------------"<<endl;
        cout << "Percussion instruments:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << percInstruments[i] << endl;
        }
    }
};

class TypeIns : public Musicians
{
public:
    char get()
    {
        char choice;
        cout << "Type of instruments to be displayed"<<endl;
        cout << "a. String instruments"<<endl;
        cout << "b. Wind instruments"<<endl;
        cout << "c. Percussion instruments"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        return choice;
    }

    void show()
    {
        char choice = get();
        choice = tolower(choice);
        switch (choice)
        {
        case 'a':
            String();
            break;
        case 'b':
            wind();
            break;
        case 'c':
            perc();
            break;
        default:
            cout << "Invalid choice"<<endl;
            break;
        }
    }
};

int main()
{
    Musicians m;
    m.String();
    m.wind();
    m.perc();

    TypeIns t;
    t.show();

    return 0;
}