#include <iostream>
#include <climits>
using namespace std;
int main()
{
        int A[100];
        int n;
        cout << "Enter the value of n: " << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
                cin >> A[i];
        }
        int fL = INT_MIN;
        int sL = INT_MIN;
        int tL = INT_MIN;

        int fS = INT_MAX;
        int sS = INT_MAX;
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
                        tL = sL;
                        sL = A[i];
                }
                else if (A[i] > tL)
                {
                        tL = A[i];
                }
                if (A[i] < fS)
                {
                        sS = fS;
                        fS = A[i];
                }
                else if (A[i] < sS)
                {
                        sS = A[i];
                }
                int p1 = fL * sL * tL;
                int p2 = fL * fS * sS;
                cout << "Maximum Product Of Triplet: " << max(p1, p2) << endl;
        }

        return 0;
}