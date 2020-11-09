#include <iostream>
using namespace std;

int binary_search(int arr[], int arr_size, int search);

int main()
{
    int search = 40, arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int result = binary_search(arr, sizeof(arr) / sizeof(arr[0]), search);

    (result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;

    return 0;
}

int binary_search(int arr[],int arr_size, int search)
{
    int left = 0, right = arr_size;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == search) return mid;

        if (arr[mid] < search) left = mid + 1;

        else right = mid - 1;
    }

    return -1;
}
