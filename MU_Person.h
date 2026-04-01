#ifndef MU_PERSON_H
#define MU_PERSON_H

#include <iostream>
#include <string>
#include "Thai_person.h"
using namespace std;

class MU_Person : public Thai_person {
protected:
    long id;
    string name;

public:
    MU_Person(long = 112, string = "Prapaporn", long = 0);

    void display_person();
    ~MU_Person();
};

MU_Person::~MU_Person() {
    cout << "Node " << id << " is being deleted" << endl;
}

MU_Person::MU_Person(long x, string n, long nid): Thai_person(nid) {
    id = x;
    name = n;
    cout << "MU person constructor " << id << endl;
}

void MU_Person::display_person() {
    cout << "Node data:" << id << endl;
}

#endif
