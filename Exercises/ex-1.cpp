#include<iostream>
using namespace std;

class student{
    private:
    int roll;
    char name[20];
    float marks;
    char address[50];

    public:
    void getdata(){
        cout<<"Enter name, roll, marks and address:"<<endl;
        cin>>name>>roll>>marks>>address;
    }

    void showdata(){
        cout<<"Entered details are"<<endl;
        cout<<name<<endl<<roll<<endl<<marks<<endl<<address<<endl;
    }

};

int main(){

    student s;
    s.getdata();
    s.showdata();


return 0;
}