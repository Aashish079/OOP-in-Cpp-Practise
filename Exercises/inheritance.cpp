#include <iostream>
using namespace std;

class Animal{
    public:

        void eat(){
            cout<< "I can eat"<<endl;
        }
};

class Dog : public Animal {
    public:

        void bark(){
            cout<<"I can bark"<<endl;
        }
};

int main(){
    Animal animal;
    Dog dog;

    dog.eat();
    dog.bark();


    return 0;
}