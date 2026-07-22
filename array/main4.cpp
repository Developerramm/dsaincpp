#include <iostream>
using namespace std;

int linearSearch(int *arr, int size, int targetElement)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == targetElement)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {1, 3, 4, 59, 34, 23, 55, 20, 34};

    int size = 9;

    int flag = linearSearch(arr, size, 23);
    if (flag > 0)
    {
        cout << "Element found at index " << flag << endl;
    }
    else
    {
        cout << "Element is not found " << endl;
    }

    return 0;
}