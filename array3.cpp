#include <iostream>

using namespace std;
void swap(int *a, int *b)
{
}
int main()
{

        int A[] = {10, 20, 30, 40, 50};
        int n = sizeof(A) / sizeof(int);

        int i = 0;
        int j = n - 1;

        while (i < j)
        {
                swap(A[i], A[j]);
                i++;
                j--;
        }

        /* for(int i=0, j=n-1; i<j; i++, j--) {
                swap(A[i], A[j]);
        }

        for(int i=0; i<n; i++) {
                cout << A[i] << " ";
        }*/

        cout << endl;

        return 0;
}