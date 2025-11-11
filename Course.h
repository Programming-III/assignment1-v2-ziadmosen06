#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course : Student{
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudent;
    private:
    void addStudents(const Student& s);
    void displayCourseInfo();
    void getCourseCode();
    void getCourseName();
    void getMaxStudents();
    void getStudents();
    void getCurrentStudent();
    void setCurrentStudent(int currentStudent);
    void setMaxStudents(int maxStudent);
    void setCourseName(string courseName);
    void setCourseCode(string courseCode);
};













#endif
