#include <iostream>
using namespace std;
int main()
{
        int num;
        cin >> num;
        int i;
        for (i = 2; i < num; i++)
        {
                if (num % i == 0)
                {
                        break;
                }
        }
        if (i == num)
        {
                cout << "its a Prime Number" << endl;
        }
        else
        {
                cout << "Its not a prime number" << endl;
        }

        return 0;
}