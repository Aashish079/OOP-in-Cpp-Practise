// Create a class Person and two derived classes Employee and Student, inherited from class Person. Now create a class Manager which is derived from two base classes Employee and Student. Show that use of the virtual base class. /PYQ/

#include <iostream>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "I'm a Person.";
    }
};

class Employee : virtual public Person
{
};

class Student : virtual public Person
{
};

class Manager : public Employee, public Student
{
};
int main()
{
    Manager m1;
    m1.display();
    return 0;
}