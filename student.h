#ifndef STUDENT_H
#define STUDENT_H
#include "MU_Person.h"
#include <iostream>
#include <string>
using namespace std;

class student : public MU_Person {
private:
    double gpa;

public:
    student(long id = 0, double gpa = 0.0, string name = "") : MU_Person(id, name) {
        this->gpa = gpa;
        this->name = name;
        cout << "MU student constructor  " << gpa << endl;
    }

    virtual float get_gpa() const override {
        return (float)gpa;
    }

    virtual void display_person() override {
        MU_Person::display_person();
        cout << "GPA:" << gpa << endl;
    }
};

#endif
