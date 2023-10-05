#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class students
{
    char name[30],roll[10],address[20];
    int marks;
    public:
    void get()
    {
        fflush(stdin);
        cout<<"Enter the name:";
        cin.getline(name,30);
        cout<<"Enter the roll number:";
        cin>>roll;
        fflush(stdin);
        cout<<"Enter the address:";
        cin.getline(address,20);
        cout<<"Enter the marks:";
        cin>>marks;
    }
    void write()
    {
        fstream writer;
        writer.open("lab2.dat",ios::app|ios::binary);
        writer.write(reinterpret_cast<char*>(this),sizeof(*this));
        writer.close();
    }
    void read()
    {
        ifstream reader;
        reader.open("lab2.dat",ios::in|ios::binary);
            while(!reader.eof())
            {
                if(reader.read(reinterpret_cast<char*>(this),sizeof(*this)).good())
                {
                    cout<<endl<<"Name:"<<name<<endl<<"Roll No.:"<<roll<<endl<<"Address:"<<address<<endl<<"Marks:"<<marks;
                }
            }
        reader.close();
    }
    void modify(char rolln[])
    {

        fstream modify;
        modify.open("lab2.dat",ios::in|ios::out|ios::binary);
        ofstream temp;
        temp.open("temp.dat",ios::out|ios::binary);
        while(!modify.eof())
        {
            if(modify.read(reinterpret_cast<char*>(this),sizeof(*this)).good())
            {
                if(strcmp(roll,rolln)==0)
                {
                    get();
                    temp.write(reinterpret_cast<char*>(this),sizeof(*this));
                    cout<<endl<<"Updated..."<<endl;
                }
                else
                    temp.write(reinterpret_cast<char*>(this),sizeof(*this));
            }
        }
        modify.close();
        temp.close();
        remove("lab2.dat");
        rename("temp.dat","lab2.dat");
    }
    void search(char rolln[])
    {
        ifstream search;
        search.open("lab2.dat",ios::in|ios::binary);
        while(!search.eof())
        {
            if(search.read(reinterpret_cast<char*>(this),sizeof(*this)).good())
            {
                if(strcmp(roll,rolln)==0)
                {
                    cout<<endl<<"Name:"<<name<<endl<<"Roll No.:"<<roll<<endl<<"Address:"<<address<<endl<<"Marks:"<<marks;
                }
            }
        }
        search.close();
    }
    void del(char rolln[])
    {
        fstream del;
        del.open("lab2.dat",ios::in|ios::out|ios::binary);
        ofstream temp;
        temp.open("temp.dat",ios::out|ios::binary);
        while(!del.eof())
        {
            if(del.read(reinterpret_cast<char*>(this),sizeof(*this)).good())
            {
                if(strcmp(roll,rolln)==0)
                {
                    cout<<endl<<"DELETED the record of "<<roll<<endl;
                }
                else
                    temp.write(reinterpret_cast<char*>(this),sizeof(*this));
            }
        }
        del.close();
        temp.close();
        remove("lab2.dat");
        rename("temp.dat","lab2.dat");
    }
    void num()
    {
        int c=0;
        ifstream num;
        num.open("lab2.dat",ios::in|ios::binary);
            while(!num.eof())
            {
                if(num.read(reinterpret_cast<char*>(this),sizeof(*this)).good())
                {
                    c++;
                }
            }
        num.close();
        cout<<endl<<"Total records are:"<<c;
    }
};
int main()
{
    students s1;
    int cho;
    char temproll[20];
    cout<<"1. Write n records to the file."<<endl;
    cout<<"2. Read current records stored on the file."<<endl;
    cout<<"3. Update/Modify a record on the file."<<endl;
    cout<<"4. Search a record on the file."<<endl;
    cout<<"5. Delete a record on the file."<<endl;
    cout<<"6. Compute the no. of records in the file."<<endl;
    cout<<"Enter your choice:";
    cin>>cho;
    if (cho==1)
    {
        int n;
        cout<<"Enter the number of students:";
        cin>>n;
        students s[n];
        for(int i=0;i<n;i++)
        {
            s[i].get();
            s[i].write();
        }
    }
    if(cho==2)
        s1.read();
    if(cho==3)
    {
        cout<<"Enter the roll no. of the student whose data is to modified:";
        cin>>temproll;
        s1.modify(temproll);
    }
    if(cho==4)
    {
        cout<<"Enter the roll of the student:";
        cin>>temproll;
        s1.search(temproll);
    }
    if(cho==5)
    {
        cout<<"Enter the roll no. of the student whose data is to be deleted:";
        cin>>temproll;
        s1.del(temproll);
    }
    if(cho==6)
    {
        s1.num();
    }
    
    return 0;
}