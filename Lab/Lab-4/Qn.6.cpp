// Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.

#include <iostream>
using namespace std;

class Object {
private:
    static int serialNumber;
    int objectNumber;

public:
    Object() {
        serialNumber++;         // Increment the serial number for each object created
        objectNumber = serialNumber;
    }

    static int getSerialNumber() {
        return serialNumber;
    }

    int getObjectNumber() {
        return objectNumber;
    }
};

// Initialize the static data member
int Object::serialNumber = 0;

int main() {
    Object obj1;
    Object obj2;
    Object obj3;

    cout << "Object 1 - Serial Number: " << obj1.getSerialNumber() << ", Object Number: " << obj1.getObjectNumber() <<endl;
    cout << "Object 2 - Serial Number: " << obj2.getSerialNumber() << ", Object Number: " << obj2.getObjectNumber() <<endl;
    cout << "Object 3 - Serial Number: " << obj3.getSerialNumber() << ", Object Number: " << obj3.getObjectNumber() <<endl;

    return 0;
}
