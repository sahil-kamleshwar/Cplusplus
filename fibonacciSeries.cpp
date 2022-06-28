#include <iostream>
using namespace std;
int main()
{
        int n;
        cout << "Enter Your Number: ";
        cin >> n;
        if (n == 0 || n == 1)
        {
                cout << "yes" << endl;
        }
        int a = 0;
        int b = 1;
        while (true)
        {
                int c = a + b;
                if (c == n)
                {
                        cout << "yes" << endl;
                        return 0;
                }
                if (c > n)
                {
                        cout << "no" << endl;
                        return 0;
                }
                a = b;
                b = c;
        }

        return 0;
}