#include <iostream>
using namespace std;
int main()
{
        int n;
        cout << "Enter Number of Rows: " << endl;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
                char ch = 'A';
                for (int j = 1; j <= n - i + 1; j++, ch++)
                {
                        cout << ch << " ";
                }

                cout << endl;
        }

        return 0;
}
