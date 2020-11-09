#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *y = &x;

    cout << x << endl;
    *y = 20;
    cout << x << endl;

    return 0;
}
