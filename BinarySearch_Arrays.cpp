#include <iostream>
using namespace std;
int main()
{
        int A[] = {10, 20, 30, 40, 50, 60};
        int n = sizeof(A) / sizeof(int);
        int target = 100;
        int s = 0;
        int e = n - 1;
        int m;
        while (s <= e)
        {
                m = (s + e) / 2;
                if (A[m] == target)
                {

                        break;
                }
                else if (A[m] < target)
                {
                        s = m + 1;
                }
                else
                {
                        e = m - 1;
                }
        }
        if (s > e)
        {
                cout << -1 << endl;
        }
        else
        {
                cout << m << endl;
        }

        return 0;
}