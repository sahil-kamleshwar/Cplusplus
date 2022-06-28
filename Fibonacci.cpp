#include <iostream>
using namespace std;
int main()
{
        int n;
        cout << "Enter the value of n: ";
        cin >> n;
        if (n == 0 || n == 1)
        {
                cout << "th fibonacci no." << n;
        }
        int a = 0;
        int b = 1;
        int i = 2;
        while (i <= n)
        {
                int c = a + b;
                a = b;
                b = c;
                i += 1;
        }
        cout << "th Fibonacci number is: " << b;
        return 0;
}