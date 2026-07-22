#include <iostream>
using namespace std;

void printArray(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int *arr, int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    printArray(arr, size);
    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}