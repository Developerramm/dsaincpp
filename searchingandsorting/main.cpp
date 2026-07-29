#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    int mid = (start + end) / 2;

    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int main()
{

    cout << "searching and sorting in cpp " << endl;

    vector<int> arr{1, 2, 4, 8, 9, 30, 45, 49, 89, 90};
    int target = 100;

    int ans = binarySearch(arr, target);

    cout << ans << endl;

    return 0;
}