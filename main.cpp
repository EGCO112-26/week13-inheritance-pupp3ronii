#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "student.h"
#include "MU_Person.h"
using namespace std;

int main(int argc, char* argv[]) {
    vector<student> students;
    students.reserve(3);

    if (argc >= 4) {
        int count = (argc - 1) / 3;
        if (count > 3) count = 3;

        for (int i = 0; i < count; ++i) {
            string id = argv[1 + i * 3];
            double gpa = stod(argv[1 + i * 3 + 1]);
            string name = argv[1 + i * 3 + 2];
            students.emplace_back(id, gpa, name);
        }
    } else {
        students.emplace_back("6613121", 2.0, "Vivi");
        students.emplace_back("112");
        students.emplace_back();
    }

    cout << fixed << setprecision(1);
    for (auto& s : students) {
        s.display();
    }

    return 0;
}
