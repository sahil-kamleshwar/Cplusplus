#include <iostream>
using namespace std;
int main()
{
        int A[5] = {10, 20, 30, 40, 50};
        int n = sizeof(A) / sizeof(int);
        int Target;
        cout << "Enter the Target value: " << endl;
        cin >> Target;
        int i;
        for (i = 0; i < n; i++)
        {
                if (A[i] == Target)
                {
                        break;
                }
        }
        if (i == n)
        {
                cout << -1 << endl; // Traget is not present in the array
        }
        else
        {
                cout << 1 << endl; // target is present in the array
        }

        return 0;
}