#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int num = 3;
    int *pon = arr;

    for (; pon < &arr[5] ; pon++)
    {
        *pon = num;
        num *= 2;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<< arr[i]<<endl;
    }
}
