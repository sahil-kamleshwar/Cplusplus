#include <iostream>
using namespace std;
int main()
{
        int n;
        cout << "Enter Any number (>2)" << endl;
        cin >> n;
        for (int num = 2; num <= n; num++)
        {
                bool flag = true;
                for (int i = 2; i < num; i++)
                {
                        if (num % i == 0)
                        {
                                flag = false;
                                break;
                        }
                }
                if (flag)
                {
                        cout << num << " ";
                }
        }

        return 0;
}