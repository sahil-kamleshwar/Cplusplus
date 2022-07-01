#include <iostream>
using namespace std;
int main()
{
        char ch;
        cout << "Enter your character: ";
        cin >> ch;
        if (ch >= 'A' && ch <= 'Z')
        {
                cout << "Character is UpperCase" << endl;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
                cout << "Character is LowerCase" << endl;
        }
        else if (ch >= '0' && ch <= '9')
        {
                cout << "Its a Digit" << endl;
        }
        else
        {
                cout << "Its a Special Character" << endl;
        }
        return 0;
}