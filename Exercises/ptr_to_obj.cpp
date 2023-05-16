//Complex Numbers
#include<iostream>
using namespace std;

class ComplexNumber{
    private:
    // Data members
        int real;
        float imaginary;
    public:
        ComplexNumber(){

        }
        ComplexNumber(int r, float i){
            real = r;
            imaginary = i;
        }
        void displayData(){
            cout<<"Complex number is: "<<real<<" + "<<imaginary<<"i"<<endl;
        }
        int getRealPart(){
            return real;
        }
        int getImaginaryPart(){
            return imaginary;
        }

};

ComplexNumber add2number(ComplexNumber n1, ComplexNumber n2){
    int r;
    float i;

    r = n1.getRealPart() + n2.getRealPart();
    i = n1.getImaginaryPart() + n2.getImaginaryPart(); 
    ComplexNumber temp (r,i);

    return temp;
}

int main()
{
    ComplexNumber comp1(5,4), comp2(3,4), comp3;
    comp1.displayData();
    comp2.displayData();

    cout<<"Addition of comp1 and comp2"<<endl;
    comp3 = add2number(comp1, comp2);
    comp3.displayData();

    cout<<"Pointer to Object: "<<endl;
    ComplexNumber *ptr1;
    ptr1 = &comp3;
    
    ptr1->displayData();

    return 0;
}