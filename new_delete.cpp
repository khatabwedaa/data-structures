#include <iostream>
using namespace std;

int main()
{
    int size;
    int *arr = new int[size];

    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    delete []arr;
}
