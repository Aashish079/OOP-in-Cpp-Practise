// Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student. Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.

#include <iostream>
using namespace std;

class Student
{
public:
    virtual void display()
    {
        cout << "I'm a student." << endl;
    }
};

class Engineering : public Student
{
public:
    void display()
    {
        cout << "I'm an Engineering Student." << endl;
    }
};

class Medicine : public Student
{
public:
    void display()
    {
        cout << "I'm a Medicine Student." << endl;
    }
};

class Science : public Student
{
public:
    void display()
    {
        cout << "I'm a Science Student." << endl;
    }
};

int main()
{
    Student *st[3];
    st[0] = new Engineering;
    st[1] = new Medicine;
    st[2] = new Science;

    for (int i = 0; i < 3; i++)
    {
        st[i]->display();
        delete st[i];
    }
    return 0;
}