#include <iostream>
using namespace std;
int main()
{
        int marks;
        cout << "enter your marks" << endl;
        cin >> marks;

        if (marks >= 91 && marks <= 100)
        {
                cout << "Grade: A" << endl;
        }
        else if (marks >= 81 && marks <= 90)
        {
                cout << "Grade: B" << endl;
        }

        else if (marks >= 71 && marks <= 80)
        {
                cout << "Grade: C" << endl;
        }

        else if (marks >= 61 && marks <= 70)
        {
                cout << "Grade: D" << endl;
        }

        else if (marks >= 51 && marks <= 60)
        {
                cout << "Grade: E" << endl;
        }
        else
        {
                cout << "Fail" << endl;
        }
        return 0;
}