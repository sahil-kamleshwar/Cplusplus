#include <iostream>
using namespace std;
int main()
{
        unsigned int n;
        cout << "Enter digits: ";
        cin >> n;
        int sum = 0;
        while (n > 0)
        {
                int digit = n % 10;
                sum = sum + digit;
                n = n / 10;
        }
        cout << "sum of the digits: " << sum;

        return 0;
}