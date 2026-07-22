#include <iostream>
using namespace std;

int findMin(int *arr, int size)
{

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{

    int arr[] = {1, 3, 54, 9, 39, 334, 44, 5, 90, 34, 22, 90};

    int size = 12;

    int min = findMin(arr, size);

    cout << "min value in array is " << min << endl;

    return 0;
}