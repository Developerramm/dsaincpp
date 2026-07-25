#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void sortZoroandOne(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        if (arr[start] == 0)
        {
            start++;
        }

        else
        {
            swap(arr[start], arr[end]);
            end--;
        }
    }
}

int main()
{

    vector<int> arr{1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1};

    sortZoroandOne(arr);
    printArray(arr);

    return 0;
}