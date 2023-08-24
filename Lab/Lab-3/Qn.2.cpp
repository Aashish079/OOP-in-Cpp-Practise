// Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.

#include <iostream>

using namespace std;

class Number{
    long num;

public:
    void setValue(long n){
        num = n;
    }
    int getValue(){
        return num;
    }

    bool isPrime(){
        if(num<=1)
            return false;
        for (int i = 2; i < num; i++)
        {
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }

};

int main(){

    Number n;
    long num;


    while(true){
        cout<<"Enter a number: ";
        cin>>num;
        n.setValue(num);

        if(n.isPrime()){
            cout<<n.getValue()<<" is prime."<<endl;
        }
        else{
            cout<<n.getValue()<<" is composite."<<endl;
        }

        char dec;
        cout<<"Do you want to contiue(y/n):"<<endl;
        cin>> dec;

        if(dec=='n'){
            break;
        }

        
    }

    return 0;
}