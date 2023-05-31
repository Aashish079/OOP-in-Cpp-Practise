// Write a program to read name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file sort the information alphabetically according to the name.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student
{
    char name[100];
    char rollNo[15];
    char address[50];
    long unsigned int number;
};

int main(){
    int no_of_stds;
    char filename[] = "students_db.txt";

    printf("Enter the number of students: ");
    scanf("%d", &no_of_stds);

    struct Student *students = (struct Student *)malloc(no_of_stds*sizeof(struct Student));

    //Reading Data

    for (int i = 0; i < no_of_stds; i++)
    {
        printf("\nEnter information of student %d :\n", i+1);

        printf("Name: ");
        fflush(stdin);
        gets((students + i )->name);

        printf("Roll No.: ");
        fflush(stdin);
        gets((students + i )->rollNo);
        printf("Address: ");
        fflush(stdin);
        gets((students + i )->address);
        printf("Phone Number: ");
        fflush(stdin);
        scanf("%lu", &(students + i)->number);
    }

    FILE *fp;

    if((fp = fopen(filename, "w+")) == NULL){
        printf("ERROR!");
        
        return 1;
    }
    
    for(int i = 0; i < no_of_stds; i++){
        fwrite((students + i), sizeof(struct Student),1, fp);
    }
    
    fclose(fp);

    if ((fp = fopen(filename, "r+")) == NULL)
    {
        // Error opening file
        printf("Error...");
        return 1;
    }

    struct Student *s = (struct Student *)malloc(no_of_stds*sizeof(struct Student));

    for (int i = 0; i < no_of_stds; i++)
    {
        fread(&s[i], sizeof(struct Student), 1, fp);
    }

    // Sorting Algo.
    for (int i = 0; i < no_of_stds; i++)
    {
        for (int j = i + 1; j < no_of_stds; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                struct Student temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }


    // Print the data
    printf("\nStudents information in alphabetical order:");

    for (int i = 0; i < no_of_stds; ++i)
    {
        printf("\nStudent %d:", i + 1);
        printf("\nName: %s", (s+i)->name);
        printf("\nRoll number: %s", (s+i)->rollNo);
        printf("\nAddress: %s\n", (s+i)->address);
        printf("\nPhone Number: %lu", (s+i)->number);
    }

    fclose(fp);

    return 0;
}
