#include<iostream>
using namespace std;

namespace BCT{
    string name;
    int roll;
}

int main(){
    using namespace BCT;
    cout<<"Enter name and roll no:"<<endl;
    cin>>name>>roll;

    cout<<name<<endl<<roll;

    return 0;
}