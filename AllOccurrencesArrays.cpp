#include <iostream>
using namespace std;
int main()
{
        int A[5] = {10, 20, 30, 40, 50};
        int n = sizeof(A) / sizeof(int);
        int target;
        cout << "enter the Target value: " << endl;
        cin >> target;
        int i;
        bool flag = false;
        for (i = 0; i < n; i++)
        {
                if (A[i] == target)
                {
                        flag = true;
                        cout << i << " ";
                }
        }
        if (flag)
        {
                cout << -1 << endl;
        }
        return 0;
}