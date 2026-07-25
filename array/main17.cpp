#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr)
{

    int temp = arr[arr.size() - 1];
    for (int i = arr.size() - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
}

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arr{1, 4, 5, 6, 3, 2, 8};

    printArray(arr);
    rotate(arr);
    printArray(arr);

    return 0;
}