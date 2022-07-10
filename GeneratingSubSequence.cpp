#include <iostream>
#include <cmath>
using namespace std;
int main()
{
        int A[] = {1, 2, 3};
        int n = sizeof(A) / sizeof(int);
        for (int no = 0; no < (1 << n); no++)
        {
                for (int i = 0; i < n; i++)
                {
                        if ((no >> i) & 1)
                        {
                                cout << A[i] << " ";
                        }
                }
                cout << endl;
        }
        cout << endl;
        return 0;
}