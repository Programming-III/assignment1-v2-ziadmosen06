#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================


 Person :: Person(string name , int id) {
    this -> name = name;
    this -> id = id;
}
void Person :: display() {
     cout << "Name: " << name <<"ID: " << id << endl;
 }


// ==================== Student Class Implementation ====================


Student :: Student(int yearLevel , string major) : Person( string name ,int id) {
     this-> yearLevel = yearLevel;
     this->major = major;
 }
void Student :: display() {
     cout <<"yearLevel" << yearLevel << "major" << major << endl;
 }



// ==================== Instructor Class Implementation ====================


Instructor :: Instructor(string department , int experienceYears) : Person( string name ,int id) {
    this->department = department;
    this->experienceYears = experienceYears;
}
void Instructor:: display() {
     cout <<"department" << department << "experienceYears" << experienceYears << endl;
 }


// ==================== Course Class Implementation ====================

Course :: Course(string courseCode , string courseName , int maxStudents , Student* students , int currentStudent) {
     this->courseCode = courseCode;
     this->courseName = courseName;
     this->maxStudents = maxStudents;
     this->students = students;
     this->currentStudent = currentStudent;

 }
void Course::displayCourseInfo() {
    cout <<"courseCode" << courseCode << endl;
     cout <<"courseName" << courseName << endl;
     cout <<"maxStudents" << maxStudents << endl;
     cout <<"students" << students << endl;
     cout <<"currentStudent" << currentStudent << endl;
     
}






// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
