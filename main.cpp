#include <iostream>
#include <cstdlib>
#include "LL/LL.h"
#include "student.h"
using namespace std;

int main(int argc, char* argv[]) {
    LL A;
    int count = 0;
    if (argc >= 4) {
        count = (argc - 1) / 3;
        if (count > 3) count = 3;

        for (int i = 0; i < count; ++i) {
            long id = atol(argv[1 + i * 3]);
            double gpa = atof(argv[1 + i * 3 + 1]);
            string name = argv[1 + i * 3 + 2];
            A.add_node(new student(id, gpa, name));
        }
    }

    A.show_all();
    return 0;
}
