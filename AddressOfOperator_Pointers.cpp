#include <iostream>
using namespace std;
int main()
{
        int x = 10;
        cout << &x << endl;
        cout << sizeof(&x) << endl;

        double y = 8.0;
        cout << &y << endl;
        cout << sizeof(&x) << endl;

        char ch = 'A';
        cout << &ch << endl;
        cout << sizeof(&ch) << endl;
        return 0;
}