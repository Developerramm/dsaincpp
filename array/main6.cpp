#include <iostream>
using namespace std;

int findMax(int *arr, int size)
{

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{

    int arr[] = {3, 4, 8, 39, 239, 34, 20, 340, 3};

    int size = 9;

    int max = findMax(arr, size);

    cout << "Maximum number is " << max << endl;

    return 0;
}