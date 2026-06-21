#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "Faculty.h"

using namespace std;
class Course{
    private:
    string coursecode;
    string coursename;
    int credithours;
    Faculty*instructor;
    int maxcapacity;
    int enrolledcount;

    public:
    Course(string code, string name, int credit, Faculty*inst, int maxcap )
    {
        coursecode = code;
        coursename = name;
        credithours = credit;
        instructor = inst;
        maxcapacity = maxcap;
        enrolledcount = 0;

    }
    string getcoursecode() const
    {
        return coursecode;
    }
    void setcoursename(string name)
    {
        coursename = name;
    }
    bool operator ==(const Course& other)
    {
        return coursecode == other.coursecode;
    }
    //friend for private access
    friend ostream& operator<<(ostream& out, const Course& c)
    {
        out << "\nCourse Code: " << c.coursecode << endl;
        out << "Course name: " << c.coursename << endl;
        out << "Credit hours: " << c.credithours << endl;
         out << "Capacity: " << c.enrolledcount << "/" << c.maxcapacity << endl;
         return out;
    }
    void enrollstudent()
    {
        if(enrolledcount >=maxcapacity)
        {
            throw 1;
        }
        enrolledcount++;
    }

};
   #endif