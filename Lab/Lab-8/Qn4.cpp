// Write a program that stores the information about students (name, student id, department, and address) in a structure and then transfers the information to a file in your directory. Finally, retrieve the information from your file and print it in the proper format on your output screen.

#include <iostream>
#include <fstream>
using namespace std;

class Student
{
private:
    char name[40];
    int id;
    char department[40];
    char address[40];

public:
    void setdata()
    {
        cout << "Enter name of student: " << endl;
        cin >> name;
        fflush(stdin);
        cout << "Enter student's id: " << endl;
        cin >> id;
        fflush(stdin);
        cout << "Enter student's Department: " << endl;
        cin >> department;
        fflush(stdin);
        cout << "Enter student's Address: " << endl;
        cin >> address;
    }

    void showdata()
    {
        cout << "Name of Student: " << name << endl;
        cout << "Id of student: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Address: " << address << endl;
    }

    void input_to_file()
    {
        fstream file;
        Student s1;
        file.open("student.txt", ios::binary | ios::out | ios::binary);
        cout << "Enter student data: " << endl;
        s1.setdata();
        file.write((char *)&s1, sizeof(s1));
    }

    void output_from_file()
    {
        fstream fout;
        Student s1;
        fout.open("student.txt", ios::out | ios::in | ios::binary);
        fout.seekg(0);
        fout.read((char *)&s1, sizeof(s1));
        while (!fout.eof())
        {
            cout << "Student record: " << endl;
            s1.showdata();
            fout.read((char *)&s1, sizeof(s1));
        }
    }
};

int main()
{
    Student s;
    s.input_to_file();
    cout<<"---------------- Information From file ------------------ "<<endl;
    s.output_from_file();
    return 0;
}