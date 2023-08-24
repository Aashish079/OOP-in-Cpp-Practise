#include <iostream>
using namespace std;

class student
{
protected:
    int roll;
    char name[25];

public:
    void getdata()
    {
        cout << "Enter name and roll number" << endl;
        cin >> name >> roll;
    }
};

class employee
{
protected:
    int id;
    char org_name[25];

public:
    void getdata()
    {
        cout << "Enter id and organisation name" << endl;
        cin >> id >> org_name;
    }
};

class officer : public student, public employee
{
protected:
    int working_hr;

public:
    void getofficer()
    {
        cout << "Enter working hour" << endl;
        cin >> working_hr;
    }
    void showdata()
    {
        cout << "The information of officer is:" << endl
             << "Name:" << name << endl
             << "Roll:" << roll << endl
             << "ID:" << id << endl
             << "Organisation hour" 
             <<working_hr;
    }
};

int main()
{
officer o;
// o.getdata(); //ambiguous call to getdata() 
// o.getdata(); //ambiguous call to getdata()
o.student::getdata();
o.employee::getdata();
o.getofficer();

o.showdata();
return 0;
}