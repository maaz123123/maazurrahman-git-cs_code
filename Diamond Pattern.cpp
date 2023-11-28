#include <iostream>

using namespace std;

int main() {

    // Upper part
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10 - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part
    for (int i = 10 ; i >= 1; i--) {
        for (int j = 1; j <= 10 - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
