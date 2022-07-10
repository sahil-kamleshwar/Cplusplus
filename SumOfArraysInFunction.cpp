#include <iostream>
using namespace std;
int sumOfArrays(int A[], int n)
{
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
                sum += A[i];
        }
        A[0] = 100;
        return sum;
}

int main()
{
        int A[] = {1, 2, 3, 4, 5};
        int n = sizeof(A) / sizeof(int);
        cout << "Before SumOfArrays: A[0]" << A[0] << endl;
        cout << sumOfArrays(A, n) << endl;
        cout << "After SumOfArrays: A[0]" << A[0] << endl;
}
