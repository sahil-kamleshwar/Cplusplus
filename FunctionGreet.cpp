#include <iostream>
using namespace std;
void greet()
{
        cout << "Hello World" << endl;
        return;
}
int main()
{
        cout << "Inside Main: before Greet" << endl;
        greet();
        cout << "Outside Main: After greet" << endl;
        return 0;
}