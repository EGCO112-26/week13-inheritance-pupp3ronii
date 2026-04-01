#include <iostream>
#include <cstdlib>
#include "NODE.h"
#include "LL.h"
using namespace std;

int main(int argc, char *argv[])
{
   LL A;
   int i;
   NodePtr t;

   for(i = 1; i < argc - 2; i += 3) {
       t = new STD_NODE(atoi(argv[i]), argv[i+1], atof(argv[i+2]));
       A.add_node(t);
   }

   cout << "\nStudent List\n";
   A.show_all();
   
   cout << "\nThe highest GPA student is\n";
   highestGPA(A.get_hol());

   cout << endl;
   
   return 0;
}
