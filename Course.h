#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course {
public:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudent;
    private:
    void addStudents(const Student& s);
    void displayCourseInfo();
};














#endif
