// Write a program that has a class with a dynamically allocated character array as its data member. One object should contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character array. Make your own function for the concatenation of two strings.

#include <iostream>
#include <cstring>

using namespace std;

class Udstring
{
private:
    char *str;

public:
    Udstring(const char *init_str)
    {
        int length = strlen(init_str) + 1;
        str = new char[length];
        strcpy(str, init_str);
    }
    ~Udstring(){
        delete[] str;
        cout<<"Memory for object with :"<<str<<" has been deallocated.";
    }

    void join(const Udstring& obj1, const Udstring& obj2){
        int length = strlen(obj1.str) + strlen(obj2.str);

        str = new char[length];
        strcpy(str, obj1.str);
        strcat(str, obj2.str);
    }

    void display() const{
        cout<<"Concatenated String: "<<str<<endl;
    }
};

int main()
{
    Udstring s1("Engineers are");
    Udstring s2(" Creatures of logic");

    Udstring result(" ");

    result.join(s1, s2);

    result.display();

    return 0;
}