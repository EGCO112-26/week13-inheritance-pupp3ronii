#include <iostream>
#include <cstdlib>
#include "LL.h"
#include "../student.h"
using namespace std;

int main(int argc, char *argv[])
{
   LL A;
   int i;
   NodePtr t;

   for(i = 1; i < argc - 2; i += 3) {
       long id = atol(argv[i]);
       float gpa = atof(argv[i+1]);
       string name = argv[i+2];
       t = new student(id, gpa, name);
       A.add_node(t);
   }

   cout << "\nStudent List\n";
   A.show_all();
   
   cout << "\nThe highest GPA student is\n";
   highestGPA(A.get_hol());

   cout << endl;
   
   return 0;
}
