#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include<string>
#include "../Student.h"
#include "Course.h"
using namespace std;

class Enrollment{
    private:
    Student*student;
    Course*course;
    string Enrollmentdate;
    char Grade;
    
    public:
    Enrollment(Student*s, Course*c, string date, char g)
    {
        student = s;
        course = c;
        Enrollmentdate = date;
        Grade = g;
    }
    void display()
    {
        cout<< "\nEnrollment Created\n";
        cout<<"Date: "<<Enrollmentdate<<endl;
        cout<<"Grade: "<<Grade<<endl;
    }
};
  #endif