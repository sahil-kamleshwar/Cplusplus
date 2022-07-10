#include <iostream>
using namespace std;
int main()
{
        int x = 10;
        int *xptr;
        xptr = &x;
        cout << x << endl;
        cout << &x << endl;
        cout << xptr << endl;
        cout << sizeof(xptr) << endl;

        return 0;
}