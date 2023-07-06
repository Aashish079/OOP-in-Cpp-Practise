// Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.

#include<iostream>
using namespace std;

void feet_to_inch(){
    float feet, inches;

    cout<< "Enter the value of feet "<<endl;
    cin>>feet;

    inches = feet*12;

    cout<<feet <<"feets = "<<inches<<"inches"<<endl;
}

float feet_to_inch(float &fptr){
    float inch = (fptr)*12; 
    return inch;
}

float feet_to_inch(float &fptr, float &iptr){

    return fptr*12 + iptr;
}

int main(){

    float feet, inches;
    int mode;

    cout<<"Modes"<<endl;
    cout<<"1-> Trigger function with no Arg"<<endl;
    cout<<"2-> Trigger function with one Arg"<<endl;
    cout<<"3-> Trigger function with two Args"<<endl;
    cin>>mode;
    switch (mode)
    {
    case 1:
        feet_to_inch();
        break;
    case 2:
        cout<< "Enter the value of feet "<<endl;
        cin>>feet;

        cout<< feet<<" feets = "<<feet_to_inch(feet)<<" inches"<<endl;
        break;
    case 3:
        cout<< "Enter the value of feets "<<endl;
        cin>>feet;
        cout<< "Enter the value of inches "<<endl;
        cin>>inches;

        cout<< feet<<" feets"<<inches<<" inches ="<<feet_to_inch(feet, inches)<<" inches"<<endl;
        break;
    
    default:
        break;
    }
   
    return 0;
}