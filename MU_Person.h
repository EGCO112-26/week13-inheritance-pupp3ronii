#ifndef MU_PERSON_H
#define MU_PERSON_H

#include <iostream>
#include <string>
#include "Thai_person.h"
#include "LL/NODE.h"
using namespace std;

class MU_Person : public STD_NODE, public Thai_person {
protected:
    string name;

public:
    MU_Person(long = 112, string = "Prapaporn", long = 0);
    virtual ~MU_Person();
    virtual void display_person();
};

inline MU_Person::MU_Person(long x, string n, long nid) : STD_NODE(x), Thai_person(nid) {
    name = n;
    cout << "MU person constructor " << data << endl;
}

inline MU_Person::~MU_Person() {
}

inline void MU_Person::display_person() {
    cout << "ID:" << data << " Name:" << name << " ";
    display_thai();
}

#endif
