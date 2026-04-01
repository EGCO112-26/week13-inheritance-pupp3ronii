#ifndef THAI_PERSON_H
#define THAI_PERSON_H

#include <iostream>
using namespace std;

class Thai_person {
protected:
    long nat_id;
public:
    Thai_person(long = 0);
    virtual ~Thai_person();
    void display_thai();
};

inline Thai_person::Thai_person(long n) : nat_id(n) {}

inline Thai_person::~Thai_person() {
}

inline void Thai_person::display_thai() {
    cout << "Thai national id: " << nat_id << endl;
}

#endif

