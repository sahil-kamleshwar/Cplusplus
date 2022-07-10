#include <iostream>
using namespace std;
int main()
{
        int A[] = {10, 20, 30, 40, 50};
        int n = sizeof(A) / sizeof(int);
        // iterate over all the possible starting indices
        for (int i = 0; i < n; i++)
        {
                // for each starting index, iterate over all the possible ending indices
                for (int j = 1; j < n; j++)
                {
                        // to generate sub-arrays iterate over all the arrays from the ith idx till the jth index
                        for (int k = i; k <= n; k++)
                        {
                                cout << A[k] << " ";
                        }
                }
                cout << endl;
        }
        return 0;
}