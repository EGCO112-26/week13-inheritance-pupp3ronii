#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>
using namespace std;

class STD_NODE {
protected:
    long data;
    STD_NODE* next;
public:
    STD_NODE(long = 0);
    virtual void show_node();
    virtual float get_gpa() const;
    void insert(STD_NODE* &);
    STD_NODE* move_next();
    virtual ~STD_NODE();
};

typedef STD_NODE* NodePtr;

void highestGPA(STD_NODE*);

#endif
