// Create a class Person and two derived classes Employee and Student, inherited from class Person. Now create a class Manager which is derived from two base classes Employee and Student. Show that use of the virtual base class. /PYQ/

#include <iostream>
using namespace std;

class Person
{
    public:
    Person(int foo){
        cout<<"Calling Person 1"<<foo<<endl;
    }
};

class Employee : virtual public Person
{
public:
    Employee(int bar):Person(bar){
        cout<<"Calling Employee[]"<<endl
    }

};

class Student : public Person
{
};

class Manager :

    int
    main()
{

    return 0;
}