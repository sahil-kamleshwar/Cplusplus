#include <iostream>
using namespace std;
int main()
{
        int n = 5;

        int i = 1;
        while (i <= n)
        {
                int j = 1;
                while (j <= n - 1)
                {
                        cout << " ";
                        j = j + 1;
                }

                int k = 1;
                while (k <= i)
                {
                        cout << "*";
                        k = k + 1;
                }
                cout << endl;
                i = i + 1;
        }

        return 0;
}
