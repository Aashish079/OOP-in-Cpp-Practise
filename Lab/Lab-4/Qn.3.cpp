// Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.

#include <iostream>
#include<string>
using namespace std;

class Department {
private:
    int departmentId;
    string departmentName;

public:
    Department(int id, const string name): departmentId(id), departmentName(name){
        cout<<"Constructor has been invoked by: "<<departmentId<<endl;
    }

    ~Department(){
        cout<< "Object "<< departmentId << " goes out of the scope"<< endl;
    }
};

int main(){
    Department d1(001, "Civil");
    {
        Department d2(002, "Computer");
        {
            Department d3(003, "Electrical");
        }
    }
    return 0;
}