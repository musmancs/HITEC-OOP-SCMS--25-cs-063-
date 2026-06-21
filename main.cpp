#include<iostream>
#include<cstdlib>
#include "PERSON HIREARCHY/Student.h"
#include "PERSON HIREARCHY/Faculty.h"
#include "Course/Course.h"
#include "Library/Book.h"
#include "Finance/Feerecord.h"
#include "PERSON HIREARCHY/Hostel\hostelblock.h" 
#include "utilities/Reports.h"

using namespace std;
int main()
{
    system("color 0B");
    Student* students[100];
    Faculty* faculties[100];
    Book* books[100];
    Course* courses[100];
    FeeRecord* fees[100];

    int studentCount = 0;
    int facultyCount = 0;
    int bookCount = 0;
    int courseCount = 0;
    int feeCount = 0;
    int choice;
    do{
        cout<< "\n===== SMART CAMPUS MANAGEMENT =====\n";
        cout<< "1. Student Info\n";
        cout<< "2. Faculty Info\n";
        cout<< "3. Course Info\n";
        cout<< "4. Library Info\n";
        cout << "5. Fee Record\n";
        cout << "6. Hostel Report\n";
        cout << "7. Campus Report\n";
        cout << "8. Search Student\n";
        cout << "9. Delete Student\n";
        cout<< "10.Admin Panel\n ";
        cout<< "11. Exit\n";

        cout<< "\nEnter Choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice){
            case 1:
            {
                string name,cnic, contact, roll;
                int age, semester;
                float gpa;
                cout<< "Enter Name: ";
                getline(cin, name);
                cout<< "Enter CNIC: ";
                getline(cin,cnic);
                cout<< "Enter Contact: ";
                getline(cin, contact);
                cout<< "Enter Roll: ";
                getline(cin,roll);
                cout<< "Enter Age: ";
                cin>> age;
                cin.ignore();
                cout<< "Enter Semester: ";
                cin>> semester;
                cout<< "Enetr GPA: ";
                cin>> gpa;
                cin.ignore();
                students[studentCount]=new Student(name, cnic, age, contact, roll, semester, gpa);
                students[studentCount]->displayInfo();
                studentCount++;
                break;
            }
            case 2:
            {
                string name, cnic, contact, empID, dept, designation;
                int age;
                cout<< "Enter Name: ";
                getline(cin, name);
                cout<< "Enter CNIC: ";
                getline(cin,cnic);
                cout<< "Enter Age: ";
                cin>> age;
                cin.ignore();
                cout<< "Enter Contact: ";
                getline(cin, contact);
                cout<< "Enter Employee ID: ";
                getline(cin, empID);
                  cout << "Enter Designation: ";
            getline(cin, designation);
        faculties[facultyCount] = new Faculty(name,cnic,age,contact,
            empID,dept,designation);
            faculties[facultyCount]->displayInfo();
            facultyCount++;
            break;
        }
        case 3:
        {
             string code, cname;
            int credit, maxcap;
            cout << "Enter Course Code: ";
            getline(cin, code);
            cout << "Enter Course Name: ";
            getline(cin, cname);
            cout << "Enter Credit Hours: ";
            cin >> credit;
            cout << "Enter Max Capacity: ";
            cin >> maxcap;
            cin.ignore();
            Faculty* inst = nullptr;
            courses[courseCount] = new Course (code,cname,credit,inst,maxcap);
            cout << *courses[courseCount];
            courseCount++;
            break;
        }

        case 4:
        {
            string id, title, author;
            string isbn,genre;
            int year, copies;
            cout<< "Enter Book ID: ";
            getline(cin, id);
            cout<< "Enter Title: ";
            getline(cin,title);
            cout<< "Enter Author: ";
            getline(cin,author);
            cout<< "Enter Publication Year: ";
            cin>>year;
            cin.ignore();
            cout<< "Enter ISBN: ";
            getline(cin,isbn);
            cout<< "Enter Genre: ";
            getline(cin,genre);
            cout<< "Enter Copies: ";
            cin>> copies;
            cin.ignore();

            books[bookCount]= new Book (id,title,author,year,isbn,genre,copies);
            books[bookCount]->displayinfo();
            bookCount++;
            break;
        }
        case 5:
        {
            string ref;
            double semFee, hostFee, fine;
            cout<< "Enter Student Reference: ";
            getline(cin, ref);
            cout<< "Enter Semester Fee: ";
            cin>> semFee;
            cout<< "Enter Hostel Fee: ";
            cin>> hostFee;
            cout<< "Enter Library Fine: ";
            cin>> fine;
            cin.ignore();
            fees[feeCount] = new FeeRecord(ref,semFee,hostFee,fine);
            fees[feeCount]->display();
            feeCount++;
            break;
        }
        case 6:
        {
            string blockName;
            cout<< "Enter Block Name: ";
            getline(cin, blockName);
            HostelBlock block(blockName);
            for(int i=0;i<3;i++)
            {
                int roomNo,floor;
                string type;
                cout<< "\nRoom "<< i+1<<endl;
                cout<< "Room Number: ";
                cin>> roomNo;
                cin.ignore();
                cout<< "Type (Single/Double/Triple): ";
                getline(cin, type);
                cout<< "Floor: ";
                cin>> floor;
                cin.ignore();
                Room r(roomNo,type,floor);
                block.setRoom(i,r);
            }
            block.displayRooms();
            break;
        }
        case 7:
        {
            Reports::campusReport();
            Reports::generatePDFStyleReport();
            break;
        }
        case 8:
        {
            string searchRoll;
            cout<< "Enter Roll number: ";
            getline(cin,searchRoll);
            bool found =false;
            for(int i=0;i<studentCount;i++){
                if(students[i]->getRollNo() == searchRoll){
                    students[i]->displayInfo();
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<< "Student Not Found\n";
            }
            break;
        }
        case 9:
        {
            string roll;
            cout<< "Enter Roll Number To Delete: ";
            getline(cin,roll);
            bool found=false;
            for(int i=0;i<studentCount;i++){
                if(students[i]->getRollNo()==roll){
                    delete students[i];
                    for(int j=i;j<studentCount-1;j++){
                        students[j]= students[j+1];
                    }
                    studentCount--;
            cout << "Student Deleted Successfully\n";
            found = true;
            break;
    }
}
        if(!found){
                cout<< "Student Not Found\n";
            }
            break;
        }
    case 10:
    {
        string user, pass;
        cout<< "Username: ";
        getline(cin,user);
        cout<< "Password: ";
        getline(cin,pass);
        if(user == "admin" && pass == "4321"){
            cout<<"\n===== ALL STUDENTS =====\n";
             for(int i=0; i<studentCount; i++)
        {
            students[i]->displayInfo();
            cout << "------------------\n";
        }
        cout << "\n===== ALL FACULTY =====\n";
        for(int i=0; i<facultyCount; i++)
        {
            faculties[i]->displayInfo();
            cout << "------------------\n";
        }
        cout << "\n===== ALL COURSES =====\n";

        for(int i=0;i<courseCount;i++)
        {
            cout << *courses[i];
            cout << "------------------\n";
        }
        cout << "\n===== ALL FEE RECORDS =====\n";

        for(int i=0;i<feeCount;i++)
        {
            fees[i]->display();
            cout << "------------------\n";
        }
        cout << "\n===== ALL BOOKS =====\n";
        for(int i=0; i<bookCount; i++)
        {
            books[i]->displayinfo();
            cout << "------------------\n";
        }
    }
    else
    {
        cout<< "Access Denied!\n";
    }
    break;
        
    }
    case 11:
    {
        cout<< "\nProgram Closed\n";
        break;
    }
    default:
    {
        cout<< "\nInvalid Choice\n";
        break;
    }
}
    }
    while(choice!=11);
    return 0;
}