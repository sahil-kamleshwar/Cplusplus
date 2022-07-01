#include <iostream>
using namespace std;
int main()
{
        int n = 5;
        int i = 1;
        while (i <= 1)
        {
                int j = 1;
                while (j <= n - 1)
                {
                        cout << " ";
                        j = j + 1;
                }
                int k = 1;
                int no = i;
                while (k <= i)
                {
                        cout << no;
                        k = k + 1;
                        no = no + 1;
                }
                i += 1;
                cout << endl;
        }

        return 0;
}