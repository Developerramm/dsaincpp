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

void inc(int *arr)
{
    arr[0] = arr[0] + 10;
}

int main()
{

    int arr[] = {5, 7};

    int size = 2;

    printArray(arr, size);

    inc(arr);
    printArray(arr, size);

    return 0;
}