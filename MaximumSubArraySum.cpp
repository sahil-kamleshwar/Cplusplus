#include <iostream>
#include <climits>
using namespace std;
int main()
{
        int A[] = {10, 20, 30, 40, 50};
        int n = sizeof(A) / sizeof(int);
        int mss = INT_MIN;
        for (int i = 0; i < n; i++)
        {
                for (int j = i; j < n; j++)
                {
                        int sum = 0;
                        for (int k = i; k <= j; k++)
                        {
                                sum += A[k];
                        }
                        if (sum > mss)
                        {
                                mss = sum;
                        }
                }
        }
        cout << "Maximum SubArray Sum: " << mss << endl;

        return 0;
}