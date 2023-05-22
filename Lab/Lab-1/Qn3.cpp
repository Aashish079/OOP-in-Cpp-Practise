// Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.

// #include <iostream>
// using namespace std;

// struct student
// {
//     string name;
//     float marks;
// };

// int main()
// {
//     int size;
//     student *arr;
//     cout<<"Enter the total number of students:"<<endl;
//     cin>>size;

//     arr = new student[size]; // new keyword assigns memory address of student variable(str) to arr

//     //Input
//     for(int i = 0; i < size; i++ ){
//         cout << "Enter name of Roll No."<< i+1<<":";
//         cin >> (arr+i)->name;
//         cout<< endl << "Enter marks of Roll No."<< i+1<<":";
//         cin >> (arr+i)->marks;
//     }
//     // Output
//         cout<< endl << "Student data:"<< endl;
//         for(int i = 0; i < size; i++){
//             cout <<"Name:" << (arr+i)->name<<"  Marks:" <<(arr+i)->marks<<endl;
//         }
//     delete[] arr;




//     return 0;
// }


// //Improved Code:
// #include <iostream>
// using namespace std;

// struct student
// {
//     string name;
//     float marks;
// };

// int main()
// {
//     int size;
//     student *arr;
//     cout << "Enter the total number of students:" << endl;
//     cin >> size;

//     while (size <= 0) {
//         cout << "Invalid input. Please enter a positive integer:" << endl;
//         cin >> size;
//     }

//     arr = new (nothrow) student[size]; // add error handling for allocation failure

//     if (arr == nullptr) {
//         cout << "Memory allocation failed. Exiting program." << endl;
//         return 1;
//     }

//     //Input
//     for (int i = 0; i < size; i++) {
//         cout << "Enter name of Roll No." << i + 1 << ":";
//         getline(cin, (arr + i)->name);
//         cout << endl << "Enter marks of Roll No." << i + 1 << ":";
//         cin >> (arr + i)->marks;
//     }

//     // Output
//     cout << endl << "Student data:" << endl;
//     for (int i = 0; i < size; i++) {
//         cout << "Name: " << (arr + i)->name << " Marks: " << (arr + i)->marks << endl;
//     }

//     delete[] arr; // free memory

//     return 0;
// }

//C-Programming Code:
#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    float marks;
};

int main()
{
    int size;
    printf("Enter the total number of students:\n");
    scanf("%d", &size);

    struct student *arr = (struct student*)malloc(size * sizeof(struct student));

    // Input
    for (int i = 0; i < size; i++) {
        printf("Enter name of Roll No. %d\n", i + 1 );
        // scanf("%s", (arr+i)->name);
        scanf("%s", (arr+i)->name);
        printf("Enter marks of Roll No. %d\n", i + 1 );
        scanf("%f",&(arr+i)->marks);
    }

    // Output
    printf("Student data:\n");
    for (int i = 0; i < size; i++) {
        printf("Name: %s Marks: %f \n",arr[i].name, arr[i].marks);
    }

    free(arr);

    return 0;
}