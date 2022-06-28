#include <iostream>
using namespace std;
int main()
{
        int n;
        cout << "Enter your Number: " << endl;
        cin >> n;
        int i = 2;
        while (i <= n - 1)
        {
                if (n % i == 0)
                {
                        cout << "Its not a Prime Number";
                }
                else
                {
                        cout << "Its a Prime Number";
                }
                i += 1;
                cout << endl;
        }

        return 0;
}