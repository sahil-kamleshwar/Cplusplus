#include <iostream>
using namespace std;
int main()
{
        int p, r, t, si;
        cout << "enter the Principle amount: " << endl;
        cin >> p;
        cout << "enter the Rate of Interest: " << endl;
        cin >> r;
        cout << "enter time: " << endl;
        cin >> t;
        cout << "si: " << (p * r * t) / 100 << endl;

        return 0;
}