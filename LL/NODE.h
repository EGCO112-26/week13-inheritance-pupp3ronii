#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>
using namespace std;

class STD_NODE {
    int id;
    string name;
    float gpa;
    STD_NODE* next;
public:
    STD_NODE(int, string, float);
    void show_node();
    void insert(STD_NODE* &);
    STD_NODE* move_next();
    ~STD_NODE();
    friend void highestGPA(STD_NODE*);
};

typedef STD_NODE* NodePtr;

void highestGPA(STD_NODE*);

#endif
