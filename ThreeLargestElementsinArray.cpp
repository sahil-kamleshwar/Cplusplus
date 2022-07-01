#include <iostream>
#include <climits>
using namespace std;
int main()
{
        int A[100];
        int n;
        cout << "Enter the Value of n: " << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
                cin >> A[i];
        }
        int fL = INT_MIN;
        int sL = INT_MIN;
        int tL = INT_MIN;
        for (int i = 0; i < n; i++)
        {
                if (A[i] > fL)
                {
                        tL = sL;
                        sL = fL;
                        fL = A[i];
                }
                else if (A[i] > sL)
                {
                        sL = tL;
                        sL = A[i];
                }
                else if (A[i] > tL)
                {
                        tL = A[i];
                }
                cout << fL << " " << sL << " " << tL << " " << endl;
        }
        return 0;
}