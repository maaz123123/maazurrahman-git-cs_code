#include <iostream>
using namespace std;

int main() {

 int num;
 int temp = 0;
 cout << "Please Enter a Number. \n";
 cin >> num;

 for (int i = 1; i <= num; i++){
    if (num % i == 0){
        temp ++;
    }
 }
 if (temp == 2){
    cout << num << " Is a Prime Number.";
 }else {
    cout << num << " Is not a Prime Number.";
 }
	return 0;
}
