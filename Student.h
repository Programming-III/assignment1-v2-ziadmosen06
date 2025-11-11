#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class Student : Person{
public:
    int yearLevel;
    string major;
private:
    Student(int yearLevel, string major);
    void display();
};













#endif
