#include <iostream>
using namespace std;

// Functions in C++
int sum (int n1, int n2){
    int sum = n1 + n2;
    return sum;
}
int sub (int n1, int n2){
    int sub = n1 - n2;
    return sub;
}

int mul (int n1, int n2){
    int mul = n1 * n2;
    return mul;
}

int rem (int n1, int n2){
    int rem = n1 % n2;
    return rem;
}

int main (){
    int num1, num2;
    int total;
    cout << "Please enters three numbers. \n";
    cin >> num1 >> num2 ;

    total = sum (num1 , num2);
    cout << "Addition of numbers. " << total << endl;

    total = sub (num1 , num2);
    cout << "Subtract of Numbers. " << total << endl;

    total = mul (num1 , num2);
    cout << "Multiplication of numbers. " << total << endl;

    total = rem (num1 , num2);
    cout << "Remainders of numbers. " << total << endl;

 return 0;
}
