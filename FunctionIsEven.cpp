#include <iostream>
using namespace std;
void isEven(int n)
{
        if (n % 2 == 0)
        {
                cout << n << "Is Even";
        }
        else
        {
                cout << n << "is Odd";
        }
}
int main()
{
        int x;
        cin >> x;
        isEven(x);
        return 0;
}
