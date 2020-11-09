#include <iostream>
using namespace std;

void multiplication_table(int, int = 1);

int main()
{
    int n;

    cout << "Enter a non-negative number: ";
    
    cin >> n;

    multiplication_table(n);

    return 0;
}

void multiplication_table(int n, int num)
{
    if (num > 10) return;

    cout<<n<<" * "<<num<<" = "<<n * num<<endl;

    return multiplication_table(n, num + 1);
}