#include <iostream>

using namespace std;

int main()
{ int index1, inex2, index3;
   for (int index1 = 1; index1 <= 10; index1 ++) {

   for (int index2 = 1; index2 <= 10 - index1; index2 ++) {

   cout << " ";
   }
   for (int index3 =  1; index3 <= index1; index3++){

        cout << "*";}
   cout << endl;
   }

    return 0;
}
