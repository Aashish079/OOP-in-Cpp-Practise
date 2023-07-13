// Write a program that illustrates the following relationship and comment on them.

// i) const_object.non_const_mem_function

// ii) const_object.const_mem_function

// iii) non_const_object.non_const_mem_function

// iv) non_const_object.const_mem_function

#include <iostream>
using namespace std;

class Test
{
private:
 int num;

public:
    Test( int n = 0):num(n){}

    void showData() const{
        cout<<"The number is: "<<num<<endl;
    }
    void setData(int n){
        num = n;
    }
};

int main()
{
    Test t1;
    const Test t2;

    t2.showData();
    t1.setData(5);
    t2.showData();
    t2.setData(5);


    return 0;
}