#include <iostream>

using namespace std;

int main()
{
    int month;
    cout << "Please enter month \n";
    cin >> month;

    switch (month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    cout << "This month Contain 31 days";
    break;

    case 4:
    case 6:
    case 9:
    case 11:
    cout << "This month contain 30 days";
    break;

    case 2:
    cout << "This month contain 28 or 29 days";
    break;

    default:
    cout << "Invalid month";

    }

    return 0;
}
