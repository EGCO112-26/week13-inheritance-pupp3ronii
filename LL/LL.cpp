#include "LL.h"
#include <iostream>
using namespace std;

LL::LL() {
    hol = NULL;
    size = 0;
}

void LL::add_node(NodePtr t) {
    t->insert(hol);
    size++;
}

void LL::show_all() {
    NodePtr current = hol;
    while (current != NULL) {
        current->show_node();
        current = current->move_next();
    }
}

NodePtr LL::get_hol() {
    return hol;
}

LL::~LL() {
    NodePtr current = hol;
    while (current != NULL) {
        NodePtr next_node = current->move_next();
        delete current;
        current = next_node;
    }
}
