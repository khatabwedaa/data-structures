#include <iostream>
using namespace std;

int seqSearch(int list[], int start, int bounds, int key);

int main(void)
{
    int key, returnVal = 0;
    int iArray[] = {1706, 30, 45, 60, 90, 42, 1138, 47, 451, 6174, 73};

    cout << "Please enter a value to search for: ";
    cin >> key;

    if ((returnVal = seqSearch(iArray, 0, sizeof(iArray) / sizeof(int), key)) < 0)
    {
        cout << "Value not found." << endl;
    }
    else
    {
        cout << "Value found at index " << returnVal << endl;
    }

    return 0;
}

int seqSearch(int list[], int start, int bounds, int key)
{
    while (start < bounds)
    {
        if (list[start] == key)
        {
            return start;
        }
        else
        {
            start++;
        }
    }

    return -1;
}