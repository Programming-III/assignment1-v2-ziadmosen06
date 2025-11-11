#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class Student : public Person{
private:
    int yearLevel;
    string major;
private:
    Student(int yearLevel, string major);
    void display();
    void getMajor();
    void setMajor(string major);
    void setYearLevel(int yearLevel);
    void getYearLevel();
};











#endif
