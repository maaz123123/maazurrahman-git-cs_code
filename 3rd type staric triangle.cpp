 #include <iostream>

using namespace std;

int main()
{
    for (int index1 = 10; index1 >= 0; index1 --){

    for (int index2 = 10; index2 >= index1; index2 --){

      cout << " ";
    }
    for (int index3 = 0; index3 <= index1; index3++) {
       cout << "*";
       }
       cout << endl;
}
    return 0;
}
