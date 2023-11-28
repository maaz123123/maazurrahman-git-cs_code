#include <iostream>

using namespace std;

int main()
{
    int num;
    int factorial = 1;
    cout << "Please Enter a Number. \n";
    cin >> num;
/* method 1: 1*2*3*4*5....
    for (int i = 1; i <= num; i++){
        factorial = factorial * i;
    }
    cout << "Factorial of " << num << " is " << factorial << endl;*/

    // method 1: ...........5*4*3*2*1
    for (int i = num; i >= 1; i--){
        factorial = factorial * i;
    }
    cout << "Factorial of " << num << " is " << factorial;

    return 0;
}
