#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include<iostream>
using namespace std;
class CapacityExceededException{
    public:
    void showError() const
    {
        cout<<"Error: Course Capacity Exceeded!"<<endl;
    }
};
#endif