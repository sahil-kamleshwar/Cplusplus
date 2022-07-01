#include <iostream>
using namespace std;
int main()
{
        int A[5] = {10, 20, 30, 40, 50};
        int n = sizeof(A) / sizeof(int);
        int Target;
        cout << "Enter the Target Value: " << endl;
        cin >> Target;
        int i = n - 1;
        for (i = n - 1; i < 0; i--)
        {
                if (A[i] == Target)
                {
                        break;
                }
        }
        if (i == 0)
        {
                cout << -1 << endl; // Target value is not present
        }
        else
        {
                cout << 1 << endl; // Target value is present
        }
        return 0;
}