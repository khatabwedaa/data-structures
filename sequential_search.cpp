
#include <iostream>
using namespace std;

int main()
{
    int x, arr[] = {1, 2, 35, 45, 63, 10, 13, 85, 78};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout<<"What's your namber : ";
    cin>>x;

    for (int i = 0; i < arr_size; i++)
    {
        if (x == arr[i])
        {
            cout<<"The Index of "<<x<<" is "<<i;
        }
    }
    
    return 0;
}
