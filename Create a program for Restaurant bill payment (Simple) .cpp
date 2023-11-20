#include <iostream>
using namespace std;
int main ()
{
    int chicken, rice, beaf, pepsi, water, salad, total, cash;
    int ch, ri, be, pe, wa, sa;

    cout << "Chicken Quantity\n";
    cin >> ch;

    cout << "Rice Quantity \n";
    cin >> ri;

    cout << "Beaf Quantity \n";
    cin >> be;

    cout << "Pepsi Quantity \n";
    cin >> pe;

    cout << "Water Quantity \n";
    cin >> wa;

    cout << "Salad Quantity \n";
    cin >> sa;

    chicken = 900;
    rice = 450;
    beaf = 1200;
    pepsi = 200;
    water = 70;
    salad = 50;

    ch = ch * chicken;
    ri = ri * rice;
    be = be * beaf;
    pe = pe * pepsi;
    wa = wa * water;
    sa = sa * salad;
    total = ch + ri + be + pe + wa + sa;
    cout << "Total bill is \n" << total << endl;

    cout << "Cash \n";
    cin >> cash;

    cout << "Change " << cash - total;

    return 0;
}
