// Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.

// An employee with ... ... ... has received Rs ... ... ...as a bonus

// and

// had worked ... ... ... hours as overtime in the year ... ... ...

#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeId, totalBonus, totalOvertime, year;

public:
    void setPara(int eId, int bonus, int overtime, int yr)
    {
        employeeId = eId;
        totalBonus = bonus;
        totalOvertime = overtime;
        year = yr;
    }

    bool displayReport(int eId)
    {
        if (employeeId == eId)
        {
            cout << "\nAn employee with employee id " << employeeId << " has received Rs." << totalBonus
                 << " as a bonus and had worked " << totalOvertime << " hours as overtime in the year " << year << endl;

            return true;
        }

        // Employee id not found
        return false;
    }
};

int main()
{
    Employee *e;
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    e = new Employee[n]; // Alocating memory dynamically

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the data for employee " << i + 1 << endl;

        int employeeId, bonus, overtime, year;

        cout << "Employee id: ";
        cin >> employeeId;

        cout << "Total bonus: ";
        cin >> bonus;

        cout << "Total overtime: ";
        cin >> overtime;

        cout << "Enter the year: ";
        cin >> year;

        e[i].setPara(employeeId, bonus, overtime, year);
    }

    int searchId;
    cout << "\nEnter the employee id: ";
    cin >> searchId;

    // for-of loop for looping through the employees
    bool employee_found = false;
    for (int i = 0; i < n; i++)
    {
        if (e[i].displayReport(searchId))
        {
            employee_found = true;
            break;
        }
    }

    if (!employee_found)
    {
        cout << "\nEmployee not found!";
    }


    delete e;
    
    return 0;
}