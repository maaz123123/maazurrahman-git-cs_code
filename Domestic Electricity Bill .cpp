#include <iostream>
using namespace std;
int main()
{
    float units;
    float bill;
    //MAAZ UR RAHMAN
    cout << "Please enter Consumed Units. \n";
    cin >> units;
    // Domestic Electricity Per Unit price Today 18 Nov 2023
    if (units > 0 && units <= 50)
        bill = units * 5.95; // 297.5

    else if (units > 51 && units <= 100)
        bill = 50 * 5.95 + (units - 50) * 7.97; //398.5

    else if (units > 101 && units <= 200)
        bill = 50 * 5.95 + 50 * 7.97 + (units - 100) * 18.85; //1885

    else if (units > 201 && units <= 300)
        bill = 50 * 5.95 + 50 * 7.97 + 100 * 18.85 + (units - 200) * 24.78; //2478

    else if (units > 301 && units <= 700)
        bill = 50 * 5.95 + 50 * 7.97 + 100 * 18.85 + 100 * 24.78 + (units - 300) * 27.93; //11,172

    else // units above 700
        bill = 50 * 5.95 + 50 * 7.97 + 100 * 18.85 + 100 * 24.78 + 400 * 27.93 + (units - 700) * 35.26;

    cout << "Your bill without any tax is " << bill << endl;

    return 0;
}
