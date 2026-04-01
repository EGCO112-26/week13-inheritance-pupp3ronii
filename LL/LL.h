#ifndef LL_H
#define LL_H

#include "NODE.h"

class LL {
    NodePtr hol;
    int size;
public:
    LL();
    void add_node(NodePtr);
    void show_all();
    NodePtr get_hol();
    ~LL();
};

#endif
