#include <iostream>
using namespace std;
int main()
{
        int x;
        cout << "enter the first number: " << endl;
        cin >> x;

        int y;
        cout << "enter the value of second number: " << endl;
        cin >> y;

        int z;
        cout << "enter the value of third number: " << endl;
        cin >> z;

        if (x > y && x > z)
        {
                cout << "X is the largest number" << endl;
        }
        else if (y > z)
        {
                cout << "Y is the largest number" << endl;
        }
        else
        {
                cout << "z is the largest number" << endl;
        }
        return 0;
}