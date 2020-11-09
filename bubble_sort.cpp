#include <iostream>
using namespace std;

void swap(int arr[], int i);
void bubble_sort(int arr[], int arr_length);

int main()
{
    int arr[] = {1706, 30, 45, 60, 90, 42, 1138, 47, 451, 6174, 73, 10, 13, 2, 1};

    int arr_length = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, arr_length);

    for (int i = 0; i < arr_length; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

void swap(int arr[], int i) 
{
    arr[i] = arr[i] + arr[i + 1];
    arr[i + 1] = arr[i] - arr[i + 1];
    arr[i] = arr[i] - arr[i + 1];
}

void bubble_sort(int arr[], int arr_length)
{
    bool isSorted = false;
    int last_unsorted = arr_length - 1;

    while (!isSorted)
    {
        isSorted = true;

        for (int i = 0; i < last_unsorted; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr, i);
                isSorted = false;
            }
        }

        last_unsorted--;
    }
}
