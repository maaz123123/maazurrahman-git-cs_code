#include <iostream>
using namespace std;
int main ()
{
    //variable
   //int = 1,2,3 (pure number)


    int num1 = 200;
    int num2 = 100;
    int num3 = 10;
    int result = num1 * num2 * num3;

    result = num1 - num2;//100
    num2 = num1; //200
    num2 = num3; //10
    num3++; //11
    result = num1 * num3; //2200
    int num4 = 2;


    cout << "sub of" << num4 << " and " << num3 << " is " << "\n" << result;

    system ("pause>0");
    return 0;
}
