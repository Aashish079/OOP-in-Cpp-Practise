#include<iostream>
#include<fstream>
using namespace std;
class students
{
    char name[20],roll[10];
    int grade;
    public:
    void get()
    {
        fflush(stdin);
        cout<<"Enter the name:";
        cin.getline(name,20);
        cout<<"Enter the roll number:";
        cin>>roll;
        cout<<"Enter the class(1-12):";
        cin>>grade;
    }
    void write()
    {
        fstream writer;
        writer.open("details.dat",ios::app|ios::binary);
        writer.write(reinterpret_cast<char*>(this),sizeof(*this));
        writer.close();
    }
    void read()
    {
        int i=0;
        ifstream reader;
        reader.open("details.dat",ios::in|ios::binary);
        {
            while(!reader.eof())
            {
                if(reader.read(reinterpret_cast<char*>(this),sizeof(*this)).good())
                {
                    i++;
                    cout<<endl<<"Student "<<i<<endl;
                    cout<<endl<<"Name:"<<name<<endl<<"Roll No.:"<<roll<<endl<<"Class:"<<grade;
                }
            }
        }
        reader.close();
    }
};
int main()
{
    int n;
    cout<<"Enter the number of students:";
    cin>>n;
    students s[n];
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Student "<<i+1<<endl;
        s[i].get();
        s[i].write();
    }
    cout<<endl<<"Now the details are:"<<endl;
    s[0].read();
    return 0;
}