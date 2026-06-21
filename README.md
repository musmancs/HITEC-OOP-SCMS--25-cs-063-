Smart Campus Management System (SCMS)
---- Project Info ----
Student: Arsalan
Roll No: [25-CS-242]
Course: Object-Oriented Programming (OOP)
 HITEC University Taxila

---- Project Description ----
Smart Campus Management System (SCMS) is a C++ based Object-Oriented Programming project
developed to automate major campus operations. The system manages students, faculty members,
staff, courses, library resources, and financial records. It demonstrates the practical
implementation of core OOP concepts through real-world scenarios. The project provides
\course enrollment, library management, fee tracking, invoice generation, and record
management functionalities. File handling is used for data storage while exception 
handling ensures reliable operation. The project is designed to improve efficiency
and organization within a university environment.
---- OOP Concepts Demonstrated ----
Class – Used throughout the project to model entities.
Object – Instances of classes such as Student and Course.
Encapsulation – Data members kept private with controlled access.
Abstraction – Abstract base classes such as Person and LibraryItem.
Inheritance – Student, Faculty, and Staff inherit from Person.
Single Inheritance – Direct inheritance from base classes.
Multilevel Inheritance – Demonstrated through extended class hierarchies.
Polymorphism – Virtual functions used for runtime behavior.
Runtime Polymorphism – displayInfo() overridden in derived classes.
Compile-Time Polymorphism – Operator overloading implementation.
Virtual Functions – Used for dynamic dispatch.
Pure Virtual Functions – Used in abstract classes.
Function Overriding – Derived classes redefine base class methods.
Constructor – Initializes object data.
Destructor – Releases dynamically allocated memory.
Copy Constructor – Implemented in FeeRecord.
Copy Assignment Operator – Implemented in FeeRecord.
Static Data Members – invoiceCounter in Invoice class.
Operator Overloading – ==, <<, +, and -= operators.
Friend Functions – Used with operator<< in Course class.
Exception Handling – Custom exceptions for errors.
Dynamic Memory Allocation – new and delete used in Invoice.
Arrays – Used for course and library management.
File Handling – Reading and writing records using fstream.
Association – Invoice associated with FeeRecord.

---- How to Compile & Run ----
g++  src/main.cpp -o scms
or compile by presssing the run button on screen in vs
For Windows (MinGW):
g++ *.cpp -o scms
scms.exe
---- GitHub Repository ----
https://github.com/MArsalan-CS/HITEC-OOPS-SCMS--25-CS-242-

