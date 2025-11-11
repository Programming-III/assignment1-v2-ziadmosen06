#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
class Person {
    public:
    string name;
    int id;
    private:
    Person(string name, int id);
    void display();
};












#endif
