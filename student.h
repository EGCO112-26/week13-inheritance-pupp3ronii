#ifndef STUDENT_H
#define STUDENT_H
#include "MU_Person.h"
#include <iostream>
#include <string>
using namespace std;

class student : public MU_Person {
private:
    double gpa;
    string name;

public:

    student(long id = 0, double gpa = 0.0, string name = "") : MU_Person(id) {
        this->gpa = gpa;
        this->name = name;
        cout << "MU student constructor  " << gpa << endl;
    }
    

    void display() {

        cout << "ID: " << id << " Name: " << name << " GPA: " << gpa << endl;
    }
};

#endif
