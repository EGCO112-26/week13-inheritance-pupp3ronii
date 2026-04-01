#include <iostream>
#include <vector>
#include <string>
#include "student.h"
#include "MU_Person.h"
using namespace std;

int main(int argc, char* argv[]) {
    vector<student*> students;
    students.reserve(3);

    int count = 0;
    if (argc >= 4) {
        count = (argc - 1) / 3;
        if (count > 3) count = 3;

        for (int i = 0; i < count; ++i) {
            int id = stoi(argv[1 + i * 3]);
            double gpa = stod(argv[1 + i * 3 + 1]);
            string name = argv[1 + i * 3 + 2];
            cout << "adding " << id << endl;
            students.push_back(new student(id, gpa, name));
        }
    } else {
        cout << "adding 6613121" << endl;
        students.push_back(new student(6613121, 2.0, "Vivi"));
        cout << "adding 112" << endl;
        students.push_back(new student(112));
        cout << "adding 0" << endl;
        students.push_back(new student());
    }

    for (auto it = students.rbegin(); it != students.rend(); ++it) {
        (*it)->display_person();
    }

    for (auto it = students.rbegin(); it != students.rend(); ++it) {
        delete *it;
    }

    return 0;
}
