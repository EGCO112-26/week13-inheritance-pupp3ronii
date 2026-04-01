#include "NODE.h"

STD_NODE::STD_NODE(long i) {
    data = i;
    next = NULL;
    cout << "adding " << data << endl;
}

void STD_NODE::show_node() {
    cout << "Node data:" << data << endl;
}

float STD_NODE::get_gpa() const {
    return 0.0f;
}

void STD_NODE::insert(STD_NODE* &head) {
    next = head;
    head = this;
}

STD_NODE* STD_NODE::move_next() {
    return next;
}

STD_NODE::~STD_NODE() {
    cout << "Node " << data << " is being deleted" << endl;
}

void highestGPA(STD_NODE* head) {
    if (!head) return;
    STD_NODE* max_node = head;
    STD_NODE* current = head->move_next();
    while (current != NULL) {
        if (current->get_gpa() > max_node->get_gpa()) {
            max_node = current;
        }
        current = current->move_next();
    }
    max_node->show_node();
}
