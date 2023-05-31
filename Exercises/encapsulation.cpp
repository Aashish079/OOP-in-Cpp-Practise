// Replace ___ with your code

#include <iostream>
using namespace std;

class Person {

    // create a private variable 
    private:
        int age;

    // declare public
    public:
    
        // public function to set age
        void set_age(int a) {
            age = a;
        }

        // public function to get age
        int get_age() {
            return age;
        }
};

int main() {
        
    // take user input for age
    int age;
    cin >> age;
        
    // create object of Person class
    Person person;
        
    // set age using setter function
    person.set_age(age);
        
    // print age using getter function
    cout << person.get_age() << endl;

    return 0;
}