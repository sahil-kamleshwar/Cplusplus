#include <iostream>
using namespace std;
int main()
{
        int n;
        cin >> n;
        int i;
        while (i <= n)
        {
                int j = 1;
                int no;
                if (i % 2 == 0)
                {
                        no = 0;
                }
                else
                {
                        no = 1;
                }
                while (j <= i)
                {
                        cout << no << " ";
                        j = j + 1;
                        no = 1 - no;
                }
                i += 1;
                cout << endl;
        }

        return 0;
}