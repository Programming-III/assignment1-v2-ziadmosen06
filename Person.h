#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
class Person {
    private:
    string name;
    int id;
    private:

    Person(string name , int id);
    void display();
    void getName();
    void getId();
    void setName(string name);
    void setId(int id);

};











#endif
