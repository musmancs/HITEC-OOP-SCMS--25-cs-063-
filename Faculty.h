#ifndef FACULTY_H
#define FACULTY_H

#include "Person.h"
class Faculty : public Person
{
    private:
    string employeeID;
    string Department;
    string Designation;
    string Assignedcourses[5];
    public:
    Faculty(string n, string c, int a, string con, string emp, string dep, string des) : Person(n, c, a, con)
    {
        employeeID = emp;
        Department = dep;
        Designation = des;
    }
    void displayInfo() const override
    {
        cout << "\n===== Faculty =====\n";
        cout << "Name: " << name << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Age " << age << endl;
        cout << "Contact " << contact << endl;
           cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << Department << endl;
        cout << "Designation: " << Designation << endl;
    }
};
 #endif