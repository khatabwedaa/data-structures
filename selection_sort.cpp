// C++ program for implementation of selection sort
#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i);
void selectionSort(int arr[], int arr_length);
void printArray(int arr[], int arr_length);

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int arr_length = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, arr_length);

    cout << "Sorted array: \n";

    printArray(arr, arr_length);

    return 0;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int arr_length)
{
    int i, j, min_index;

    for (i = 0; i < arr_length - 1; i++)
    {
        min_index = i;

        for (j = i + 1; j < arr_length; j++)
            if (arr[j] < arr[min_index])
                min_index = j;

        swap(&arr[min_index], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
