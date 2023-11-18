#include <iostream>

using namespace std;

int main()
{
    int num;
    int total;

    cout << "Please enter any number \n";
    cin >> num;

    total = num*(num+1)/2;

    cout << "Sum of number's from one to any number \n" << total;


    return 0;
}
