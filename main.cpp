#include <iostream>
#include "student.h"
#include "MU_Person.h"
using namespace std;

int main() {

    student m1(6613121, 2.0, "Vivi"), m2(112), m3, *p;
    
    m1.display();
    
    cout << "\n=======" << endl;
    
    m1.display_person();

    p = new student(6613265, 1.7, "Hok");

    delete p;
    
    return 0;
}
